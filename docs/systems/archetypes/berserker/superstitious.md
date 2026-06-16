# Berserker - Superstitious

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Superstitious
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Superstitious
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Sixth Sense (Ex); Keen Senses (Ex); Rage Powers
- **Replaced / altered class features:** trap sense; damage reduction

## Replacement details

### Replaces: trap sense

- **Archetype feature:** Sixth Sense (Ex)
- **Description:** At 3rd level, the superstitious barbarian gains a +1 bonus on initiative and a +1 insight bonus to AC during surprise rounds.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the superstitious barbarian gains a +1 bonus on initiative and a +1 insight bonus to AC during surprise rounds. This bonus increases by +1 for every three levels after 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: damage reduction

- **Archetype feature:** Keen Senses (Ex)
- **Description:** At 7th level, the superstitious barbarian gains low-light vision (triple normal vision range in dim light if she already has low-light vision).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 10, 13, 16, 19.
  - Mechanics summary: At 7th level, the superstitious barbarian gains low-light vision (triple normal vision range in dim light if she already has low-light vision). At 10th level, she gains darkvision 60 feet (or adds 60 feet to the range of any darkvision already possessed). At 13th level, she gains scent. At 16th level, she gains blindsense 30 feet. At 19th level, she gains blindsight 30 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Sixth Sense (Ex)
- Keen Senses (Ex)
- Rage Powers

