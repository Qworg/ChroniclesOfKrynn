/**
 * @file archetypes.h
 * Core archetype subsystem (MVP).
 *
 * This is the inert, future-stacking-safe core of the archetype system.
 * It provides append-only archetype IDs, class-feature replacement metadata,
 * boot initialization/validation, and safe accessors.  No archetypes are
 * shipped enabled (other than ARCHETYPE_NONE), so the framework is behaviorally
 * inert until real archetype definitions are added.
 *
 * Conventions:
 *   - Archetype identifiers use the ARCHETYPE_* prefix.
 *   - Class-feature identifiers (swapped in/out by future archetypes) use the
 *     CLASS_FEATURE_* prefix.
 *   - Per-character storage is row/list based.  Future stacking is limited by
 *     feature-replacement conflicts, not by a fixed per-class archetype count.
 */

#ifndef ARCHETYPES_H
#define ARCHETYPES_H

/* On-disk/runtime version for the archetype subsystem.  Bump when the
 * persisted archetype data format or semantics change.  Loaders treat any
 * stored version greater than this as unsupported and fall back to none. */
#define ARCHETYPE_VERSION 1

/* Append-only archetype identifiers.  ARCHETYPE_NONE must remain 0.  New
 * archetypes are appended; existing values must never be reused or reordered
 * because they are persisted in player files. */
#define ARCHETYPE_NONE 0

/* Total number of defined archetype IDs (registry size).  Currently only the
 * sentinel ARCHETYPE_NONE exists. */
#define NUM_ARCHETYPES 1

/* Append-only class-feature identifiers.  These name the class features an
 * archetype can replace or grant.  CLASS_FEATURE_NONE must remain 0.  The
 * generic feat-derived namespace lets existing feat-granted class features be
 * replaced without mutating feat IDs or depending on item/virtual HAS_FEAT()
 * grants. */
#define CLASS_FEATURE_NONE 0
#define CLASS_FEATURE_FEAT_BASE 1000
#define CLASS_FEATURE_FROM_FEAT(feat_num) (CLASS_FEATURE_FEAT_BASE + (feat_num))

/* Registry entry describing a single archetype. */
struct archetype_info
{
  int id;                /* ARCHETYPE_* identifier (append-only). */
  const char *name;      /* Display name; never NULL. */
  const char *desc;      /* Short description; never NULL. */
  int class_id;          /* Owning CLASS_* (or CLASS_UNDEFINED for NONE). */
  int min_version;       /* ARCHETYPE_VERSION when this archetype was added. */
  bool enabled;          /* TRUE if available for selection in gameplay. */
};

/* One archetype may replace/grant multiple class features, represented by one
 * row per replacement.  The selection limit is enforced by replaced_feature:
 * a character may stack any number of archetypes unless two selected rows for
 * the same class replace/alter the same class feature. */
struct archetype_feature_change
{
  int archetype_id;       /* ARCHETYPE_* owner. */
  int class_id;           /* CLASS_* owner; must match the archetype. */
  int replaced_feature;   /* CLASS_FEATURE_* suppressed on level-up. */
  int granted_feature;    /* CLASS_FEATURE_* replacement, if feat-backed. */
  int granted_feat;       /* FEAT_* granted by the replacement, or 0. */
  const char *name;       /* Display name for the replacement; never NULL. */
  const char *desc;       /* Description for STUDY; never NULL. */
};

extern const struct archetype_info archetype_list[NUM_ARCHETYPES];
extern const struct archetype_feature_change archetype_feature_changes[];

/* Boot-time initialization.  Runs validate_archetypes() and logs results. */
void init_archetypes(void);

/* Initializes all per-character archetype slots to ARCHETYPE_NONE and stores
 * the supplied on-disk format version.  Use version 0 while loading old pfiles
 * so an Arch block without a preceding ArcV tag can be rejected safely. */
void init_char_archetypes(struct char_data *ch, int version);

/* Frees all selected archetype rows and resets the character's archetype list. */
void free_char_archetypes(struct char_data *ch);

/* Adds a validated archetype selection row.  Returns TRUE on success.
 * ARCHETYPE_NONE is accepted as a no-op success. */
bool add_char_archetype(struct char_data *ch, int class_id, int archetype_id);

/* TRUE if this exact class/archetype row is already selected. */
bool has_char_archetype(struct char_data *ch, int class_id, int archetype_id);

/* TRUE if archetype_id can be added without replacing a class feature already
 * replaced by another selected archetype for the same class. */
bool can_add_char_archetype(struct char_data *ch, int class_id, int archetype_id);

/* Returns the first selected archetype for class_id, or ARCHETYPE_NONE.  This is
 * a convenience helper for MVP callers; list storage supports more rows. */
int get_primary_archetype(struct char_data *ch, int class_id);

/* TRUE if any selected archetype for class_id replaces class_feature. */
bool archetype_suppresses_class_feature(struct char_data *ch, int class_id, int class_feature);

/* Returns the FEAT_* id granted by the selected archetype replacing
 * class_feature, or 0 if that replacement has no feat-backed grant. */
int get_archetype_replacement_feat(struct char_data *ch, int class_id, int class_feature);

/* For feat-backed class features, returns the feat that should be granted after
 * archetype replacement is applied.  Returns feat_num when not replaced, a
 * replacement FEAT_* when replaced by a feat-backed feature, or 0 when the
 * original is suppressed without a feat-backed replacement. */
int get_archetype_effective_feat(struct char_data *ch, int class_id, int feat_num);

/* Validates the static registry for internal consistency.  Returns the number
 * of problems found (0 == healthy); each problem is logged as SYSERR. */
int validate_archetypes(void);

/* Number of feature-change rows for the static archetype metadata. */
int num_archetype_feature_changes(void);

/* TRUE if archetype_id is a known, enabled archetype owned by class_id.
 * ARCHETYPE_NONE is always valid for any class.  Out-of-range or unknown IDs
 * return FALSE without crashing. */
bool is_valid_archetype_for_class(int archetype_id, int class_id);

/* TRUE if archetype_id refers to a defined registry entry (including NONE). */
bool is_known_archetype(int archetype_id);

/* TRUE if archetype_id is defined and flagged enabled. */
bool is_archetype_enabled(int archetype_id);

/* Returns the owning class for archetype_id, or CLASS_UNDEFINED if unknown. */
int get_archetype_class(int archetype_id);

/* Returns a display name for archetype_id; never NULL (falls back to a safe
 * "Unknown" string for out-of-range IDs). */
const char *get_archetype_name(int archetype_id);

/* Parses a name (case-insensitive) into an archetype ID, or ARCHETYPE_NONE if
 * no enabled archetype matches.  arg may be NULL. */
int parse_archetype(const char *arg);

#endif /* ARCHETYPES_H */
