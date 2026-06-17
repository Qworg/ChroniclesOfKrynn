# Ranger - Dungeon Rover

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Dungeon Rover
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Dungeon%20Rover
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Stone Scouting (Ex); Vermin Affinity (Ex); Dungeon Ally (Ex); Subterranean Stride (Ex); Improved Stone Scouting (Ex)
- **Replaced / altered class features:** track; wild empathy; woodland stride; swift tracker

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A dungeon rover gains Disable Device and Knowledge (engineering) as class skills and loses Ride as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A dungeon rover gains Disable Device and Knowledge (engineering) as class skills and loses Ride as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: track

- **Archetype feature:** Stone Scouting (Ex)
- **Description:** A dungeon rover gains a +2 bonus on Perception checks to notice underground environmental hazards, including traps, potential cave-ins, and dangerous flora.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dungeon rover gains a +2 bonus on Perception checks to notice underground environmental hazards, including traps, potential cave-ins, and dangerous flora. A dungeon rover receives a check to notice these hazards whenever he passes within 10 feet of them, whether or not he is actively looking.
- **Implementation flags:**
  - ki subsystem.

### Replaces: wild empathy

- **Archetype feature:** Vermin Affinity (Ex)
- **Description:** A dungeon rover gains the ability to improve the attitude of mindless subterranean creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dungeon rover gains the ability to improve the attitude of mindless subterranean creatures. This ability functions as the wild empathy class feature, except a dungeon rover can influence any vermin (even those without Intelligence scores) instead of animals. Additionally, a dungeon rover can influence oozes with a –4 penalty on his vermin affinity check.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: hunter’s bond

- **Archetype feature:** Dungeon Ally (Ex)
- **Description:** At 4th level, a dungeon rover may select a giant slug, a giant centipede, a goblin dog, a giant scorpion, or any poisonous snake as his animal companion, in addition to the usual animal companion options available to rangers with the hunter’s bond class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a dungeon rover may select a giant slug, a giant centipede, a goblin dog, a giant scorpion, or any poisonous snake as his animal companion, in addition to the usual animal companion options available to rangers with the hunter’s bond class feature.
- **Implementation flags:**
  - animal companion progression.
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Subterranean Stride (Ex)
- **Description:** At 7th level, a dungeon rover is never slowed by difficult terrain while underground.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a dungeon rover is never slowed by difficult terrain while underground. However, areas that are enchanted or magically manipulated to impede motion still affect him.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: swift tracker

- **Archetype feature:** Improved Stone Scouting (Ex)
- **Description:** At 8th level, a dungeon rover’s bonus on Perception checks to notice underground environmental hazards increases to +4.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a dungeon rover’s bonus on Perception checks to notice underground environmental hazards increases to +4. Additionally, the rover receives a check to notice these irregularities whenever he passes within 15 feet of them.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Stone Scouting (Ex)
- Vermin Affinity (Ex)
- Dungeon Ally (Ex)
- Subterranean Stride (Ex)
- Improved Stone Scouting (Ex)
