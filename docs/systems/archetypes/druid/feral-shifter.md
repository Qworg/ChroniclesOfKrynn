# Druid - Feral Shifter

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Feral Shifter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Feral%20Shifter
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Animal Focus (Su); Second Animal Focus (Su)
- **Replaced / altered class features:** nature bond; venom immunity, a thousand faces, and timeless body

## Implementation details

### Replaces: nature bond

- **Archetype feature:** Animal Focus (Su)
- **Description:** At 1st level, as a swift action, a feral shifter can take on the aspect of an animal, gaining a bonus or special ability based on the type of animal emulated.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, as a swift action, a feral shifter can take on the aspect of an animal, gaining a bonus or special ability based on the type of animal emulated. This functions as the hunter’s animal focus class feature (see page 27). The feral shifter can use this ability for a number of minutes per day equal to her druid level. This duration does not need to be consecutive, but it must be spent in 1-minute increments. She can emulate only one animal at a time.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: venom immunity, a thousand faces, and timeless body

- **Archetype feature:** Second Animal Focus (Su)
- **Description:** At 9th level, when a feral shifter uses her animal focus ability, she selects two different animal aspects for herself instead of one.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, when a feral shifter uses her animal focus ability, she selects two different animal aspects for herself instead of one.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Animal Focus (Su)
- Second Animal Focus (Su)
