# Berserker - Elemental Kin

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Elemental Kin
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Elemental%20Kin
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Elemental Fury (Ex); Rage Powers
- **Replaced / altered class features:** trap sense

## Implementation details

### Replaces: trap sense

- **Archetype feature:** Elemental Fury (Ex)
- **Description:** At 3rd level, whenever the elemental kin takes an amount of energy damage equal to or greater than her barbarian level while raging, she adds 1 to the total number of rounds that she can rage that day.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6, 18.
  - **Rules text to implement:** At 3rd level, whenever the elemental kin takes an amount of energy damage equal to or greater than her barbarian level while raging, she adds 1 to the total number of rounds that she can rage that day. At 6th level, and every three levels thereafter, the number of extra rounds per energy attack increases by +1, to a maximum of +6 rounds per energy attack at at 18th level.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the elemental kin archetype: elemental rage, energy absorption, energy eruption, energy resistance, greater elemental rage, greater energy resistance, and lesser elemental rage.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the elemental kin archetype: elemental rage, energy absorption, energy eruption, energy resistance, greater elemental rage, greater energy resistance, and lesser elemental rage.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Elemental Fury (Ex)
- Rage Powers
