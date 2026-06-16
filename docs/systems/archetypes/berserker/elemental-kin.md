# Berserker - Elemental Kin

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Elemental Kin
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Elemental%20Kin
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Elemental Fury (Ex); Rage Powers
- **Replaced / altered class features:** trap sense

## Replacement details

### Replaces: trap sense

- **Archetype feature:** Elemental Fury (Ex)
- **Description:** At 3rd level, whenever the elemental kin takes an amount of energy damage equal to or greater than her barbarian level while raging, she adds 1 to the total number of rounds that she can rage that day.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6, 18.
  - Mechanics summary: At 3rd level, whenever the elemental kin takes an amount of energy damage equal to or greater than her barbarian level while raging, she adds 1 to the total number of rounds that she can rage that day. At 6th level, and every three levels thereafter, the number of extra rounds per energy attack increases by +1, to a maximum of +6 rounds per energy attack at at 18th level.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, ki/monk hook.

## Parsed source feature headings

- Elemental Fury (Ex)
- Rage Powers

