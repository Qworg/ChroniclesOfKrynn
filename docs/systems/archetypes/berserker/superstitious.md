# Berserker - Superstitious

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Superstitious
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Superstitious
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Sixth Sense (Ex); Keen Senses (Ex); Rage Powers
- **Replaced / altered class features:** trap sense; damage reduction

## Implementation details

### Replaces: trap sense

- **Archetype feature:** Sixth Sense (Ex)
- **Description:** At 3rd level, the superstitious barbarian gains a +1 bonus on initiative and a +1 insight bonus to AC during surprise rounds.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the superstitious barbarian gains a +1 bonus on initiative and a +1 insight bonus to AC during surprise rounds. This bonus increases by +1 for every three levels after 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: damage reduction

- **Archetype feature:** Keen Senses (Ex)
- **Description:** At 7th level, the superstitious barbarian gains low-light vision (triple normal vision range in dim light if she already has low-light vision).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7, 10, 13, 16, 19.
  - **Rules text to implement:** At 7th level, the superstitious barbarian gains low-light vision (triple normal vision range in dim light if she already has low-light vision). At 10th level, she gains darkvision 60 feet (or adds 60 feet to the range of any darkvision already possessed). At 13th level, she gains scent. At 16th level, she gains blindsense 30 feet. At 19th level, she gains blindsight 30 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the superstitious archetype: clear mind, disruptive, roused anger, spellbreaker, superstition, and witch hunter.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the superstitious archetype: clear mind, disruptive, roused anger, spellbreaker, superstition, and witch hunter.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Sixth Sense (Ex)
- Keen Senses (Ex)
- Rage Powers
