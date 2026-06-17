# Druid - Jungle Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Jungle Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Jungle%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Jungle Guardian (Ex); Woodland Stride (Ex); Torrid Endurance (Ex); Wild Shape (Su); Verdant Sentinel (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; a thousand faces

## Implementation details

### Replaces: woodland stride

- **Archetype feature:** Jungle Guardian (Ex)
- **Description:** At 2nd level, a jungle druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in jungle terrain, and she cannot be tracked in such environments.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a jungle druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in jungle terrain, and she cannot be tracked in such environments.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Woodland Stride (Ex)
- **Description:** A jungle druid gains this ability at 3rd level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** A jungle druid gains this ability at 3rd level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Torrid Endurance (Ex)
- **Description:** At 4th level, a jungle druid ignores the effects of a hot climate as if under the effects of endure elements.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a jungle druid ignores the effects of a hot climate as if under the effects of endure elements. She also gains a +4 bonus on saves against disease and the exceptional abilities of animals and magical beasts.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** A jungle druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** A jungle druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: a thousand faces

- **Archetype feature:** Verdant Sentinel (Ex)
- **Description:** At 13th level, a jungle druid can cast tree shape at will.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a jungle druid can cast tree shape at will.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Jungle Guardian (Ex)
- Woodland Stride (Ex)
- Torrid Endurance (Ex)
- Wild Shape (Su)
- Verdant Sentinel (Ex)
