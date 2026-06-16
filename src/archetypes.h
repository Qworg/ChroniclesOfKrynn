/**
 * @file archetypes.h
 * Core archetype subsystem (MVP).
 *
 * This is the inert, future-stacking-safe core of the archetype system.
 * It provides append-only archetype IDs, a small static registry, boot
 * initialization/validation, and safe accessors.  No archetypes are shipped
 * enabled (other than ARCHETYPE_NONE), and selecting an archetype has no
 * gameplay effect yet -- grant/feature-swap filtering is intentionally not
 * implemented here.
 *
 * Conventions:
 *   - Archetype identifiers use the ARCHETYPE_* prefix.
 *   - Class-feature identifiers (swapped in/out by future archetypes) use the
 *     CLASS_FEATURE_* prefix.
 *   - Per-character storage is row/slot based: archetypes[NUM_CLASSES]
 *     [MAX_ARCHETYPES_PER_CLASS].  The storage is sized to allow future
 *     stacking, while ARCHETYPE_EFFECTIVE_PER_CLASS records the count the
 *     game currently enforces.
 */

#ifndef ARCHETYPES_H
#define ARCHETYPES_H

/* On-disk/runtime version for the archetype subsystem.  Bump when the
 * persisted archetype data format or semantics change.  Loaders treat any
 * stored version greater than this as unsupported and fall back to none. */
#define ARCHETYPE_VERSION 1

/* Storage capacity per class (row/slot-ready).  The array dimension is sized
 * above the current effective limit so future stacking does not require a
 * struct/pfile layout change.  Defined here only if structs.h has not already
 * provided it (structs.h owns the per-character array dimension). */
#ifndef MAX_ARCHETYPES_PER_CLASS
#define MAX_ARCHETYPES_PER_CLASS 4
#endif

/* The number of archetype slots per class the game currently honors.  Kept
 * separate from the storage capacity so gameplay can stay limited while the
 * persistence layout is already stacking-ready. */
#define ARCHETYPE_EFFECTIVE_PER_CLASS 1

/* Append-only archetype identifiers.  ARCHETYPE_NONE must remain 0.  New
 * archetypes are appended; existing values must never be reused or reordered
 * because they are persisted in player files. */
#define ARCHETYPE_NONE 0

/* Total number of defined archetype IDs (registry size).  Currently only the
 * sentinel ARCHETYPE_NONE exists. */
#define NUM_ARCHETYPES 1

/* Append-only class-feature identifiers.  These name the class features a
 * future archetype could replace or grant.  CLASS_FEATURE_NONE must remain 0.
 * They are inert in the MVP core. */
#define CLASS_FEATURE_NONE 0

/* Registry entry describing a single archetype.  Inert in the MVP core:
 * replaces_feature/grants_feature are reserved for future feature swapping. */
struct archetype_info
{
  int id;                /* ARCHETYPE_* identifier (append-only). */
  const char *name;      /* Display name; never NULL. */
  const char *desc;      /* Short description; never NULL. */
  int class_id;          /* Owning CLASS_* (or CLASS_UNDEFINED for NONE). */
  int min_version;       /* ARCHETYPE_VERSION when this archetype was added. */
  bool enabled;          /* TRUE if available for selection in gameplay. */
  int replaces_feature;  /* CLASS_FEATURE_* swapped out (future use). */
  int grants_feature;    /* CLASS_FEATURE_* swapped in (future use). */
};

extern const struct archetype_info archetype_list[NUM_ARCHETYPES];

/* Boot-time initialization.  Runs validate_archetypes() and logs results. */
void init_archetypes(void);

/* Initializes all per-character archetype slots to ARCHETYPE_NONE and stores
 * the supplied on-disk format version.  Use version 0 while loading old pfiles
 * so an Arch block without a preceding ArcV tag can be rejected safely. */
void init_char_archetypes(struct char_data *ch, int version);

/* Validates the static registry for internal consistency.  Returns the number
 * of problems found (0 == healthy); each problem is logged as SYSERR. */
int validate_archetypes(void);

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
