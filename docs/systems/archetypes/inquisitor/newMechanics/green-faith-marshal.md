# Inquisitor - Green Faith Marshal

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Green Faith Marshal
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Green%20Faith%20Marshal
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Power of Nature; Wild Lore (Ex); Nature’s Ally (Sp); Wild Step (Ex)
- **Replaced / altered class features:** Domain; Stern Gaze; Monster Lore; Discern Lies; Stalwart

## Implementation details

### Alters: the inquisitor’s domain ability and replaces stern gaze

- **Archetype feature:** Power of Nature
- **Description:** A Green Faith marshal gains one domain selected from the animal and terrain domains ( Pathfinder RPG Ultimate Magic 33).
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** A Green Faith marshal gains one domain selected from the animal and terrain domains ( Pathfinder RPG Ultimate Magic 33). The 1st- though 6th-level bonus spells from this domain are added to the Green Faith marshal’s spell list.
- **Implementation flags:**
  - domain system.
  - archetype spell-list override.

### Replaces: monster lore

- **Archetype feature:** Wild Lore (Ex)
- **Description:** A Green Faith marshal adds her Wisdom modifier to her Knowledge (nature) skill checks, in addition to her Intelligence modifier.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A Green Faith marshal adds her Wisdom modifier to her Knowledge (nature) skill checks, in addition to her Intelligence modifier.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: discern lies

- **Archetype feature:** Nature’s Ally (Sp)
- **Description:** At 5th level, a Green Faith marshal gains the ability to cast commune with nature once per week.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a Green Faith marshal gains the ability to cast commune with nature once per week.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: stalwart

- **Archetype feature:** Wild Step (Ex)
- **Description:** At 11th level, a Green Faith marshal can move through any sort of naturally occurring difficult terrain (such as natural thorns, briars, overgrown areas, and similar terrain) at her normal speed without taking damage or suffering any other impairment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a Green Faith marshal can move through any sort of naturally occurring difficult terrain (such as natural thorns, briars, overgrown areas, and similar terrain) at her normal speed without taking damage or suffering any other impairment. Terrain that is enchanted or magically manipulated to impede motion still affects her.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Power of Nature
- Wild Lore (Ex)
- Nature’s Ally (Sp)
- Wild Step (Ex)
