# Cleric - Varisian Pilgrim

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Varisian Pilgrim
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Varisian%20Pilgrim
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Fortunate Road; Caravan Bond (Su); Blessing of the Harrow (Su)
- **Replaced / altered class features:** the cleric’s proficiency with medium armor and shields— she retains proficiency with light armor only

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Fortunate Road
- **Description:** At 1st level, a Varisian pilgrim must select the Chaos, Community, Liberation, Luck, Travel, or Weather domain (or the Exploration, Fate, Freedom, Trade, or Seasons subdomains from the Advanced Player’s Guide, if available in the campaign) as one of her domains.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a Varisian pilgrim must select the Chaos, Community, Liberation, Luck, Travel, or Weather domain (or the Exploration, Fate, Freedom, Trade, or Seasons subdomains from the Advanced Player’s Guide, if available in the campaign) as one of her domains. If the cleric worships a deity that doesn’t normally grant one of these domains, she gains access to this domain but can only pick this one domain—she effectively loses the option to pick a second domain. As a result, very few clerics who worship deities who don’t grant access to one of the domains or subdomains listed above opt to become Varisian pilgrims. In all other respects, this works like and replaces the standard cleric’s domain ability.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: the cleric’s proficiency with medium armor and shields— she retains proficiency with light armor only

- **Archetype feature:** Caravan Bond (Su)
- **Description:** At 1st level, by leading a group prayer for 1 minute, a Varisian pilgrim can select a number of traveling companions equal to her cleric level + her Wisdom bonus.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, by leading a group prayer for 1 minute, a Varisian pilgrim can select a number of traveling companions equal to her cleric level + her Wisdom bonus. She may use her domain-granted powers on any of these traveling companions as if they were her. She can use these abilities on her traveling companions at a range of up to 30 feet, even if the ability normally requires her touch.
- **Implementation flags:**
  - domain system.

### Replaces: an 8th-level domain power of the Varisian pilgrim’s choice

- **Archetype feature:** Blessing of the Harrow (Su)
- **Description:** At 8th level, once per day the pilgrim may perform a harrowing for herself or another creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, once per day the pilgrim may perform a harrowing for herself or another creature. This is otherwise identical to the blessing of the harrow from the harrower prestige class ( Inner Sea World Guide 276).
- **Implementation flags:**
  - domain system.

## Parsed source feature headings

- Fortunate Road
- Caravan Bond (Su)
- Blessing of the Harrow (Su)
