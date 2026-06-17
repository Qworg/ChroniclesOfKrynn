# Druid - Nature Priest

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Nature Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Nature%20Priest
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Faithful; Class Skills; Weapon Proficiencies; Studious Piety (Ex); Chosen Druid (Ex); Shepherd of the Faithful (Su); Divine Servants (Su)
- **Replaced / altered class features:** nature sense; resist nature’s lure; the venom immunity ability

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Faithful
- **Description:** Like a cleric, a nature priest must worship a deity and her alignment must be within one step of her deity’s ( Pathfinder RPG Core Rulebook 166 ).
- **Detailed mechanics:**
  - **Rules text to implement:** Like a cleric, a nature priest must worship a deity and her alignment must be within one step of her deity’s ( Pathfinder RPG Core Rulebook 166 ).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the druid’s class skills

- **Archetype feature:** Class Skills
- **Description:** A nature priest adds Knowledge (religion) to her list of class skills instead of Knowledge (geography).
- **Detailed mechanics:**
  - **Rules text to implement:** A nature priest adds Knowledge (religion) to her list of class skills instead of Knowledge (geography).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: the druid’s weapon proficiencies

- **Archetype feature:** Weapon Proficiencies
- **Description:** A nature priest is proficient with her deity’s favored weapon in addition to a druid’s typical weapon proficiencies.
- **Detailed mechanics:**
  - **Rules text to implement:** A nature priest is proficient with her deity’s favored weapon in addition to a druid’s typical weapon proficiencies.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: nature sense

- **Archetype feature:** Studious Piety (Ex)
- **Description:** A nature priest gains a +1 bonus on Knowledge (religion) checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A nature priest gains a +1 bonus on Knowledge (religion) checks. This bonus increases to +2 when attempting checks that involve knowledge of her deity or her faith.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: nature bond

- **Archetype feature:** Chosen Druid (Ex)
- **Description:** If a nature priest chooses a domain for her nature bond, she must choose one of her deity’s domains (or subdomains) in place of those typically available to a druid.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** If a nature priest chooses a domain for her nature bond, she must choose one of her deity’s domains (or subdomains) in place of those typically available to a druid.
- **Implementation flags:**
  - domain system.

### Replaces: resist nature’s lure

- **Archetype feature:** Shepherd of the Faithful (Su)
- **Description:** At 4th level, a nature priest and all allies within 60 feet that can see or hear her gain a +2 insight bonus on skill checks to notice or avoid natural hazards, difficult terrain, and rough winds or water, as well as on saving throws against natural hazards.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a nature priest and all allies within 60 feet that can see or hear her gain a +2 insight bonus on skill checks to notice or avoid natural hazards, difficult terrain, and rough winds or water, as well as on saving throws against natural hazards. This ability offers no protection against the abilities of creatures or the effects of spells or items.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the venom immunity ability

- **Archetype feature:** Divine Servants (Su)
- **Description:** At 9th level, a nature priest adds the spells lesser planar ally, planar ally, and greater planar ally to her druid spell list at their cleric spell levels.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a nature priest adds the spells lesser planar ally, planar ally, and greater planar ally to her druid spell list at their cleric spell levels. When she casts these spells, the planar allies summoned require half the payment described in those spells.
- **Implementation flags:**
  - summoning subsystem.
  - archetype spell-list override.

## Parsed source feature headings

- Faithful
- Class Skills
- Weapon Proficiencies
- Studious Piety (Ex)
- Chosen Druid (Ex)
- Shepherd of the Faithful (Su)
- Divine Servants (Su)
