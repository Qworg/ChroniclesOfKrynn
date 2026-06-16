/**
 * @file archetypes.c
 * Core archetype subsystem (MVP) -- inert, future-stacking-safe.
 *
 * See archetypes.h for the design overview.  This module ships no enabled
 * archetypes beyond the ARCHETYPE_NONE sentinel, performs versioned validation
 * of its static registry and feature-replacement rows at boot, and exposes safe
 * accessors used by persistence and level-up filtering.
 */

#include "conf.h"
#include "sysdep.h"
#include "structs.h"
#include "utils.h"
#include "comm.h"
#include "archetypes.h"

/* Static archetype registry.  Append-only: never reorder or reuse IDs because
 * they are persisted in player files.  Only ARCHETYPE_NONE is defined/enabled
 * in the MVP core. */
const struct archetype_info archetype_list[NUM_ARCHETYPES] = {
    {ARCHETYPE_NONE, "None", "No archetype selected.", CLASS_UNDEFINED, ARCHETYPE_VERSION, TRUE},
};

const struct archetype_feature_change archetype_feature_changes[] = {
    {ARCHETYPE_NONE, CLASS_UNDEFINED, CLASS_FEATURE_NONE, CLASS_FEATURE_NONE, 0, "None",
     "No class feature is replaced."},
};

/* Returns the registry slot for archetype_id, or NULL if undefined. */
static const struct archetype_info *find_archetype(int archetype_id)
{
  int i;

  for (i = 0; i < NUM_ARCHETYPES; i++)
  {
    if (archetype_list[i].id == archetype_id)
      return &archetype_list[i];
  }

  return NULL;
}

int num_archetype_feature_changes(void)
{
  return sizeof(archetype_feature_changes) / sizeof(archetype_feature_changes[0]);
}

int validate_archetypes(void)
{
  int i, j, k;
  int problems = 0;

  /* ARCHETYPE_NONE must exist, be id 0, and remain enabled. */
  if (NUM_ARCHETYPES < 1 || archetype_list[0].id != ARCHETYPE_NONE)
  {
    log("SYSERR: archetype registry missing ARCHETYPE_NONE sentinel at index 0");
    problems++;
  }

  for (i = 0; i < NUM_ARCHETYPES; i++)
  {
    const struct archetype_info *a = &archetype_list[i];

    if (a->name == NULL || a->desc == NULL)
    {
      log("SYSERR: archetype id %d (index %d) has NULL name/desc", a->id, i);
      problems++;
    }

    if (a->id < 0)
    {
      log("SYSERR: archetype index %d has negative id %d", i, a->id);
      problems++;
    }

    if (a->min_version < 1 || a->min_version > ARCHETYPE_VERSION)
    {
      log("SYSERR: archetype id %d has unsupported min_version %d (max %d)", a->id, a->min_version,
          ARCHETYPE_VERSION);
      problems++;
    }

    /* A non-NONE enabled archetype must belong to a valid class. */
    if (a->id != ARCHETYPE_NONE && a->enabled &&
        (a->class_id < 0 || a->class_id >= NUM_CLASSES))
    {
      log("SYSERR: enabled archetype id %d has invalid class_id %d", a->id, a->class_id);
      problems++;
    }

    /* Duplicate IDs would break persistence/lookup. */
    for (j = i + 1; j < NUM_ARCHETYPES; j++)
    {
      if (archetype_list[j].id == a->id)
      {
        log("SYSERR: duplicate archetype id %d at indices %d and %d", a->id, i, j);
        problems++;
      }
    }
  }

  for (k = 0; k < num_archetype_feature_changes(); k++)
  {
    const struct archetype_feature_change *change = &archetype_feature_changes[k];
    const struct archetype_info *a = find_archetype(change->archetype_id);

    if (change->name == NULL || change->desc == NULL)
    {
      log("SYSERR: archetype feature-change index %d has NULL name/desc", k);
      problems++;
    }

    if (a == NULL)
    {
      log("SYSERR: archetype feature-change index %d references unknown archetype id %d", k,
          change->archetype_id);
      problems++;
      continue;
    }

    if (change->archetype_id == ARCHETYPE_NONE)
    {
      if (change->replaced_feature != CLASS_FEATURE_NONE || change->granted_feature != CLASS_FEATURE_NONE ||
          change->granted_feat != 0)
      {
        log("SYSERR: ARCHETYPE_NONE feature-change index %d must not replace/grant features", k);
        problems++;
      }
      continue;
    }

    if (change->class_id != a->class_id)
    {
      log("SYSERR: archetype id %d feature-change index %d has class %d but archetype class is %d",
          change->archetype_id, k, change->class_id, a->class_id);
      problems++;
    }

    if (change->replaced_feature == CLASS_FEATURE_NONE)
    {
      log("SYSERR: archetype id %d feature-change index %d has no replaced feature",
          change->archetype_id, k);
      problems++;
    }
  }

  return problems;
}

static bool archetype_replaces_feature(int archetype_id, int class_id, int class_feature)
{
  int i;

  if (archetype_id == ARCHETYPE_NONE || class_feature == CLASS_FEATURE_NONE)
    return FALSE;

  for (i = 0; i < num_archetype_feature_changes(); i++)
    if (archetype_feature_changes[i].archetype_id == archetype_id &&
        archetype_feature_changes[i].class_id == class_id &&
        archetype_feature_changes[i].replaced_feature == class_feature)
      return TRUE;

  return FALSE;
}

void init_archetypes(void)
{
  int problems;

  problems = validate_archetypes();
  if (problems > 0)
    log("SYSERR: init_archetypes: %d problem(s) detected in archetype registry", problems);
  else
    log("   Archetypes initialized (%d defined, version %d).", NUM_ARCHETYPES, ARCHETYPE_VERSION);
}

void init_char_archetypes(struct char_data *ch, int version)
{
  if (ch == NULL || ch->player_specials == NULL)
    return;

  free_char_archetypes(ch);
  GET_ARCHETYPE_VERSION(ch) = version;
}

void free_char_archetypes(struct char_data *ch)
{
  struct char_archetype_data *entry, *next_entry;

  if (ch == NULL || ch->player_specials == NULL)
    return;

  for (entry = GET_ARCHETYPES(ch); entry; entry = next_entry)
  {
    next_entry = entry->next;
    free(entry);
  }

  GET_ARCHETYPES(ch) = NULL;
}

bool has_char_archetype(struct char_data *ch, int class_id, int archetype_id)
{
  struct char_archetype_data *entry;

  if (ch == NULL || ch->player_specials == NULL)
    return FALSE;

  for (entry = GET_ARCHETYPES(ch); entry; entry = entry->next)
    if (entry->archetype_class == class_id && entry->archetype_id == archetype_id)
      return TRUE;

  return FALSE;
}

bool add_char_archetype(struct char_data *ch, int class_id, int archetype_id)
{
  struct char_archetype_data *entry;

  if (ch == NULL || ch->player_specials == NULL)
    return FALSE;

  if (archetype_id == ARCHETYPE_NONE)
    return TRUE;

  if (!is_valid_archetype_for_class(archetype_id, class_id))
    return FALSE;

  if (has_char_archetype(ch, class_id, archetype_id))
    return FALSE;

  if (!can_add_char_archetype(ch, class_id, archetype_id))
    return FALSE;

  CREATE(entry, struct char_archetype_data, 1);
  entry->archetype_id = archetype_id;
  entry->archetype_class = class_id;
  entry->next = GET_ARCHETYPES(ch);
  GET_ARCHETYPES(ch) = entry;

  return TRUE;
}

bool can_add_char_archetype(struct char_data *ch, int class_id, int archetype_id)
{
  struct char_archetype_data *entry;
  int i;

  if (ch == NULL || ch->player_specials == NULL)
    return FALSE;

  if (archetype_id == ARCHETYPE_NONE)
    return TRUE;

  if (!is_valid_archetype_for_class(archetype_id, class_id))
    return FALSE;

  for (i = 0; i < num_archetype_feature_changes(); i++)
  {
    if (archetype_feature_changes[i].archetype_id != archetype_id ||
        archetype_feature_changes[i].class_id != class_id ||
        archetype_feature_changes[i].replaced_feature == CLASS_FEATURE_NONE)
      continue;

    for (entry = GET_ARCHETYPES(ch); entry; entry = entry->next)
    {
      if (entry->archetype_class != class_id)
        continue;
      if (archetype_replaces_feature(entry->archetype_id, class_id,
                                     archetype_feature_changes[i].replaced_feature))
        return FALSE;
    }
  }

  return TRUE;
}

int get_primary_archetype(struct char_data *ch, int class_id)
{
  struct char_archetype_data *entry;

  if (ch == NULL || ch->player_specials == NULL)
    return ARCHETYPE_NONE;

  for (entry = GET_ARCHETYPES(ch); entry; entry = entry->next)
    if (entry->archetype_class == class_id)
      return entry->archetype_id;

  return ARCHETYPE_NONE;
}

bool archetype_suppresses_class_feature(struct char_data *ch, int class_id, int class_feature)
{
  struct char_archetype_data *entry;

  if (ch == NULL || ch->player_specials == NULL || class_feature == CLASS_FEATURE_NONE)
    return FALSE;

  for (entry = GET_ARCHETYPES(ch); entry; entry = entry->next)
    if (entry->archetype_class == class_id &&
        archetype_replaces_feature(entry->archetype_id, class_id, class_feature))
      return TRUE;

  return FALSE;
}

int get_archetype_replacement_feat(struct char_data *ch, int class_id, int class_feature)
{
  struct char_archetype_data *entry;
  int i;

  if (ch == NULL || ch->player_specials == NULL || class_feature == CLASS_FEATURE_NONE)
    return 0;

  for (entry = GET_ARCHETYPES(ch); entry; entry = entry->next)
  {
    if (entry->archetype_class != class_id)
      continue;

    for (i = 0; i < num_archetype_feature_changes(); i++)
    {
      if (archetype_feature_changes[i].archetype_id == entry->archetype_id &&
          archetype_feature_changes[i].class_id == class_id &&
          archetype_feature_changes[i].replaced_feature == class_feature)
        return archetype_feature_changes[i].granted_feat;
    }
  }

  return 0;
}

int get_archetype_effective_feat(struct char_data *ch, int class_id, int feat_num)
{
  int class_feature, replacement_feat;

  if (feat_num <= 0)
    return 0;

  class_feature = CLASS_FEATURE_FROM_FEAT(feat_num);
  if (!archetype_suppresses_class_feature(ch, class_id, class_feature))
    return feat_num;

  replacement_feat = get_archetype_replacement_feat(ch, class_id, class_feature);
  return (replacement_feat > 0) ? replacement_feat : 0;
}

bool is_known_archetype(int archetype_id)
{
  return find_archetype(archetype_id) != NULL;
}

bool is_archetype_enabled(int archetype_id)
{
  const struct archetype_info *a = find_archetype(archetype_id);

  return (a != NULL && a->enabled);
}

int get_archetype_class(int archetype_id)
{
  const struct archetype_info *a = find_archetype(archetype_id);

  if (a == NULL)
    return CLASS_UNDEFINED;

  return a->class_id;
}

const char *get_archetype_name(int archetype_id)
{
  const struct archetype_info *a = find_archetype(archetype_id);

  if (a == NULL || a->name == NULL)
    return "Unknown";

  return a->name;
}

bool is_valid_archetype_for_class(int archetype_id, int class_id)
{
  const struct archetype_info *a;

  /* The "no archetype" sentinel is valid for every class. */
  if (archetype_id == ARCHETYPE_NONE)
    return TRUE;

  if (class_id < 0 || class_id >= NUM_CLASSES)
    return FALSE;

  a = find_archetype(archetype_id);
  if (a == NULL || !a->enabled)
    return FALSE;

  return (a->class_id == class_id);
}

int parse_archetype(const char *arg)
{
  int i;

  if (arg == NULL || !*arg)
    return ARCHETYPE_NONE;

  for (i = 0; i < NUM_ARCHETYPES; i++)
  {
    if (!archetype_list[i].enabled)
      continue;
    if (archetype_list[i].name != NULL && !str_cmp(arg, archetype_list[i].name))
      return archetype_list[i].id;
  }

  return ARCHETYPE_NONE;
}
