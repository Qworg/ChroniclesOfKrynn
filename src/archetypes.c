/**
 * @file archetypes.c
 * Core archetype subsystem (MVP) -- inert, future-stacking-safe.
 *
 * See archetypes.h for the design overview.  This module ships no enabled
 * archetypes beyond the ARCHETYPE_NONE sentinel, performs versioned validation
 * of its static registry at boot, and exposes safe accessors used by the
 * persistence layer.  It deliberately has no gameplay side effects.
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
    {ARCHETYPE_NONE, "None", "No archetype selected.", CLASS_UNDEFINED, ARCHETYPE_VERSION, TRUE,
     CLASS_FEATURE_NONE, CLASS_FEATURE_NONE},
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

int validate_archetypes(void)
{
  int i, j;
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

  return problems;
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
  int class_id, slot;

  if (ch == NULL || ch->player_specials == NULL)
    return;

  for (class_id = 0; class_id < NUM_CLASSES; class_id++)
    for (slot = 0; slot < MAX_ARCHETYPES_PER_CLASS; slot++)
      GET_ARCHETYPE(ch, class_id, slot) = ARCHETYPE_NONE;

  GET_ARCHETYPE_VERSION(ch) = version;
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
