# Warrior - Drill Sergeant

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Drill Sergeant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Drill%20Sergeant
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Tactician (Ex); Weapon Training (Ex); Greater Tactician (Ex); Weapon Trainer (Ex); Master Tactician (Ex)
- **Replaced / altered class features:** bravery; weapon training 2; weapon training 3; weapon training 4

## Implementation details

### Replaces: bravery

- **Archetype feature:** Tactician (Ex)
- **Description:** At 2nd level, a drill sergeant gains the cavalier’s tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a drill sergeant gains the cavalier’s tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: weapon training 1

- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 5th level, a drill sergeant gains weapon training with one group of weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a drill sergeant gains weapon training with one group of weapons. He doesn’t gain weapon training with other groups at later levels, though his weapon training bonus improves by 1 for every 4 levels after 5th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Greater Tactician (Ex)
- **Description:** At 9th level, the drill sergeant gains the cavalier’s greater tactician class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, the drill sergeant gains the cavalier’s greater tactician class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 3

- **Archetype feature:** Weapon Trainer (Ex)
- **Description:** At 13th level, when a drill sergeant wields a weapon he has weapon training in, all allies within 30 feet who can see and hear the drill sergeant gain half his weapon training bonus when they wield any weapon from the same weapon group.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, when a drill sergeant wields a weapon he has weapon training in, all allies within 30 feet who can see and hear the drill sergeant gain half his weapon training bonus when they wield any weapon from the same weapon group. This bonus doesn’t stack with any weapon training bonus an ally already possesses.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 4

- **Archetype feature:** Master Tactician (Ex)
- **Description:** At 17th level, the drill sergeant gains the cavalier’s master tactician class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, the drill sergeant gains the cavalier’s master tactician class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Tactician (Ex)
- Weapon Training (Ex)
- Greater Tactician (Ex)
- Weapon Trainer (Ex)
- Master Tactician (Ex)
