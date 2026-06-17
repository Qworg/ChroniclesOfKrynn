# Druid - Arctic Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Arctic Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Arctic%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arctic Native (Ex); Icewalking (Ex); Arctic Endurance (Ex); Wild Shape (Su); Snowcaster (Su); Flurry Form (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Implementation details

### Replaces: woodland stride

- **Archetype feature:** Arctic Native (Ex)
- **Description:** At 2nd level, an arctic druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in cold or icy terrain, and she cannot be tracked in cold or icy terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an arctic druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in cold or icy terrain, and she cannot be tracked in cold or icy terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Icewalking (Ex)
- **Description:** At 3rd level, an arctic druid suffers no penalty to speed or on Acrobatics, Climb, or Stealth checks in snowy or icy terrain or weather conditions and can walk across snow crusts or thin ice without breaking through.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an arctic druid suffers no penalty to speed or on Acrobatics, Climb, or Stealth checks in snowy or icy terrain or weather conditions and can walk across snow crusts or thin ice without breaking through.
- **Implementation flags:**
  - ki subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Arctic Endurance (Ex)
- **Description:** At 4th level, an arctic druid ignores the effects of a cold climate as if using endure elements.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an arctic druid ignores the effects of a cold climate as if using endure elements. She is also immune to being dazzled.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** An arctic druid gains this ability at 6th level, except that her effective druid level for this ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** An arctic druid gains this ability at 6th level, except that her effective druid level for this ability is equal to her druid level – 2.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity

- **Archetype feature:** Snowcaster (Su)
- **Description:** At 9th level, an arctic druid can see normally in ice storm, sleet storm, or similar natural snowstorms.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, an arctic druid can see normally in ice storm, sleet storm, or similar natural snowstorms. In addition, she can prepare any druid spell with the fire subtype as a cold spell, with an identical effect but inflicting cold damage instead of fire damage.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Flurry Form (Ex)
- **Description:** At 13th level, an arctic druid can assume the form of a swirling column of snow equivalent to gaseous form at will.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, an arctic druid can assume the form of a swirling column of snow equivalent to gaseous form at will. While in this form, she gains a circumstance bonus on Stealth checks made in cold terrain equal to her druid level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Arctic Native (Ex)
- Icewalking (Ex)
- Arctic Endurance (Ex)
- Wild Shape (Su)
- Snowcaster (Su)
- Flurry Form (Ex)
