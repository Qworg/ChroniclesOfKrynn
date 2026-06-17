# Druid - Mooncaller

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Mooncaller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Mooncaller
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Night Sight (Ex); Resist Call of the Wild (Ex); Purity of Body (Ex); Wolfsbane (Su)
- **Replaced / altered class features:** woodland stride; resist nature’s lure; venom immunity; a thousand faces

## Implementation details

### Replaces: woodland stride

- **Archetype feature:** Night Sight (Ex)
- **Description:** At 2nd level, a mooncaller gains low-light vision.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a mooncaller gains low-light vision. If she already has low-light vision, she gains darkvision with a range of 30 feet. If she already has darkvision, the range of her darkvision is increased by 30 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Call of the Wild (Ex)
- **Description:** At 4th level, a mooncaller gains a +4 bonus on saving throws to avoid confusion, daze, feeblemind, and insanity effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a mooncaller gains a +4 bonus on saving throws to avoid confusion, daze, feeblemind, and insanity effects. She also gains a +4 bonus against the exceptional, spell-like, and supernatural abilities of creatures with the shapechanger subtype.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: venom immunity

- **Archetype feature:** Purity of Body (Ex)
- **Description:** At 9th level, a mooncaller gains immunity to all diseases, including supernatural and magical diseases.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a mooncaller gains immunity to all diseases, including supernatural and magical diseases.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Wolfsbane (Su)
- **Description:** At 13th level, a mooncaller gains DR 3/silver, increasing to DR 4/silver at 16th level and DR 5/silver at 19th level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13, 16, 19.
  - **Rules text to implement:** At 13th level, a mooncaller gains DR 3/silver, increasing to DR 4/silver at 16th level and DR 5/silver at 19th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Night Sight (Ex)
- Resist Call of the Wild (Ex)
- Purity of Body (Ex)
- Wolfsbane (Su)
