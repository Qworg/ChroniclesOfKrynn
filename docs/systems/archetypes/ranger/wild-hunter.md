# Ranger - Wild Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wild Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wild%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Animal Focus (Su); Shared Focus (Su)
- **Replaced / altered class features:** all instances of the favored enemy class ability; woodland stride and swift tracker

## Implementation details

### Replaces: all instances of the favored enemy class ability

- **Archetype feature:** Animal Focus (Su)
- **Description:** At 1st level, as a swift action a wild hunter can take on the aspect of an animal, gaining a bonus or special ability based on the type of animal emulated.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, as a swift action a wild hunter can take on the aspect of an animal, gaining a bonus or special ability based on the type of animal emulated. This functions as the hunter’s animal focus class feature (see page 27), though this only applies to the wild hunter and not an animal companion (see shared focus, below). The wild hunter can use this ability for 1 minute per day per ranger level. This duration does not need to be consecutive, but it must be spent in 1-minute increments. He can only emulate one animal at a time.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Replaces: woodland stride and swift tracker

- **Archetype feature:** Shared Focus (Su)
- **Description:** At 7th level, a wild hunter can share his current animal focus with one creature appropriate to his hunter’s bond.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a wild hunter can share his current animal focus with one creature appropriate to his hunter’s bond. If the wild hunter’s bond is with an animal companion, the companion automatically gains the benefits of the wild hunter’s current animal focus. If the wild hunter’s bond is with his companions, as a swift action he can select one bonded ally to gain the benefits of the hunter’s current animal focus; this lasts until the hunter’s bond ends, the animal focus ends for the wild hunter, or the wild hunter selects a different companion.
- **Implementation flags:**
  - animal companion progression.

## Parsed source feature headings

- Animal Focus (Su)
- Shared Focus (Su)
