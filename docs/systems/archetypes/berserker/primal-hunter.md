# Berserker - Primal Hunter

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Primal Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Primal%20Hunter
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Exceptional Pull; Focused Rage (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Exceptional Pull
- **Description:** At 1st level, a primal hunter gains Exceptional Pull as a bonus feat, even if she doesn’t meet the requirements.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a primal hunter gains Exceptional Pull as a bonus feat, even if she doesn’t meet the requirements. At 11th and 20th levels, the strength rating of weapons she wields increases by 1 (weapons without a strength rating are not affected).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: rage

- **Archetype feature:** Focused Rage (Ex)
- **Description:** While raging, a primal hunter gains a +2 bonus on attack rolls with ranged weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11, 20.
  - **Rules text to implement:** While raging, a primal hunter gains a +2 bonus on attack rolls with ranged weapons. This bonus increases to +3 at 11th level and to +4 at 20th level. While raging, a primal hunter can attempt Stealth checks but doesn’t gain a morale bonus on Will saves.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the primal hunter archetype: deadly accuracy UC, lethal accuracy UC, reflexive dodge UC, rolling dodge, sharpened accuracy UC, surprise accuracy.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the primal hunter archetype: deadly accuracy UC, lethal accuracy UC, reflexive dodge UC, rolling dodge, sharpened accuracy UC, surprise accuracy.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Exceptional Pull
- Focused Rage (Ex)
- Rage Powers
