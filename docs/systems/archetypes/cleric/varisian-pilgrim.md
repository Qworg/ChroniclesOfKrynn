# Cleric - Varisian Pilgrim

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Varisian Pilgrim
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Varisian%20Pilgrim
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fortunate Road; Caravan Bond (Su); Blessing of the Harrow (Su)
- **Replaced / altered class features:** the cleric’s proficiency with medium armor and shields— she retains proficiency with light armor only

## Replacement details

### Replaces: the cleric’s proficiency with medium armor and shields— she retains proficiency with light armor only

- **Archetype feature:** Caravan Bond (Su)
- **Description:** At 1st level, by leading a group prayer for 1 minute, a Varisian pilgrim can select a number of traveling companions equal to her cleric level + her Wisdom bonus.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, by leading a group prayer for 1 minute, a Varisian pilgrim can select a number of traveling companions equal to her cleric level + her Wisdom bonus. She may use her domain-granted powers on any of these traveling companions as if they were her. She can use these abilities on her traveling companions at a range of up to 30 feet, even if the ability normally requires her touch.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, cleric domain hook.

### Replaces: an 8th-level domain power of the Varisian pilgrim’s choice

- **Archetype feature:** Blessing of the Harrow (Su)
- **Description:** At 8th level, once per day the pilgrim may perform a harrowing for herself or another creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, once per day the pilgrim may perform a harrowing for herself or another creature. This is otherwise identical to the blessing of the harrow from the harrower prestige class ( Inner Sea World Guide 276).
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.
  - Needs implementation review: harrow deck/cards.

## Parsed source feature headings

- Fortunate Road
- Caravan Bond (Su)
- Blessing of the Harrow (Su)

