# Rogue - Eldritch Raider

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Eldritch Raider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Eldritch%20Raider
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Skill Ranks per Level; Detect Magic (Sp); Eldritch Intuition (Ex); New Talents; Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the rogue talent rogues gained at 2nd level; the trap sense class feature

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** An eldritch raider adds Knowledge (arcana), Knowledge (history), and Spellcraft to her list of class skills and removes Disguise, Perform, and Sleight of Hand from her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An eldritch raider adds Knowledge (arcana), Knowledge (history), and Spellcraft to her list of class skills and removes Disguise, Perform, and Sleight of Hand from her list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skill Ranks per Level
- **Description:** 6 + Int modifier.
- **Detailed mechanics:**
  - **Rules text to implement:** 6 + Int modifier.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the rogue talent rogues gained at 2nd level

- **Archetype feature:** Detect Magic (Sp)
- **Description:** At 2nd level, an eldritch raider gains the ability to use detect magic at will.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an eldritch raider gains the ability to use detect magic at will. The eldritch raider treats her rogue level as her caster level for this ability. This ability counts as the minor magic rogue talent for purposes of qualifying for other rogue talents.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the trap sense class feature

- **Archetype feature:** Eldritch Intuition (Ex)
- **Description:** At 3rd level, an eldritch raider gains an intuitive sense that allows her to more easily activate sorcerer and wizard spell completion and spell trigger items.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6, 9, 12, 15, 18.
  - **Rules text to implement:** At 3rd level, an eldritch raider gains an intuitive sense that allows her to more easily activate sorcerer and wizard spell completion and spell trigger items. She gains a +1 bonus on Use Magic Device checks for this purpose. This bonus increases to +2 at 6th level, +3 at 9th level, +4 at 12th level, +5 at 15th level, and +6 at 18th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** New Talents
- **Description:** An eldritch raider has access to the following new advanced talents when selecting rogue advanced talents.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 3, 2.
  - **Rules text to implement:** An eldritch raider has access to the following new advanced talents when selecting rogue advanced talents. Major Eldritch Magic (Sp) : The eldritch raider gains the ability to cast a 3rd-level spell from the sorcerer/wizard spell list two times per day as a spell-like ability. The caster level for this ability is equal to her rogue level. The save DC for this spell is 13 + her Intelligence modifier. The eldritch raider must have an Intelligence of at least 13 to select this talent. The eldritch raider must have the major magic, minor eldritch magic, and minor magic rogue talents before choosing this talent. Minor Eldritch Magic (Sp) : The eldritch raider gains the ability to cast a 2nd-level spell from the sorcerer/wizard spell list two times per day as a spell-like ability. The caster level for this ability is equal to her rogue level. The save DC for this spell is 12 + her Intelligence modifier. The eldritch raider must have an Intelligence of at least 12 to select this talent. The eldritch raider must have the major magic and minor magic rogue talents before choosing this talent.
- **Implementation flags:**
  - spell-like ability support.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the eldritch raider archetype: major magic, minor magic, quick disable, trap spotter (Core Rulebook); fast picks ; black market connections, esoteric scholar, ninja trick (slow metabolism, wall climber).
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the eldritch raider archetype: major magic, minor magic, quick disable, trap spotter (Core Rulebook); fast picks ; black market connections, esoteric scholar, ninja trick (slow metabolism, wall climber).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the eldritch raider archetype: dispelling attack, improved evasion, slippery mind (Core Rulebook); major eldritch magic, minor eldritch magic; thoughtful reexamination ; familiar, hard to fool.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the eldritch raider archetype: dispelling attack, improved evasion, slippery mind (Core Rulebook); major eldritch magic, minor eldritch magic; thoughtful reexamination ; familiar, hard to fool.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Skill Ranks per Level
- Detect Magic (Sp)
- Eldritch Intuition (Ex)
- New Talents
- Rogue Talents
- Advanced Talents
