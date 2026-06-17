# Berserker - Deepwater Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Deepwater Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Deepwater%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Strong Lungs (Ex); Spiraling Charge (Ex); Disorienting Grapple (Ex); Crushing Grapple (Ex); Full Lungs (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; improved uncanny dodge; indomitable will; tireless rage

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Strong Lungs (Ex)
- **Description:** A deepwater rager can hold her breath for a number of rounds equal to four times her Constitution score, and she does not reduce the duration of her held breath by taking a standard action or a full-round action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A deepwater rager can hold her breath for a number of rounds equal to four times her Constitution score, and she does not reduce the duration of her held breath by taking a standard action or a full-round action. Additionally, as long as she is able to speak, the deepwater rager adds her Constitution modifier to Intimidate skill checks in addition to her Charisma modifier.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: uncanny dodge

- **Archetype feature:** Spiraling Charge (Ex)
- **Description:** At 2nd level, a deepwater rager is not required to move in a straight line when she charges, provided that no space she moves into while charging is farther away from her target than the space that she is leaving.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a deepwater rager is not required to move in a straight line when she charges, provided that no space she moves into while charging is farther away from her target than the space that she is leaving. The deepwater rager must be able to see her target at the beginning of her charge and cannot use this ability while mounted.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Disorienting Grapple (Ex)
- **Description:** At 5th level, a deepwater rager becomes an expert in flipping and spinning opponents as they are grappled.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a deepwater rager becomes an expert in flipping and spinning opponents as they are grappled. An opponent grappled by the deepwater rager gains the sickened condition for as long as it has the grappled condition. When the creature’s grappled condition ends, for any reason, it must succeed at an Acrobatics check (with a DC equal to the deepwater rager’s CMD) or fall prone.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: indomitable will

- **Archetype feature:** Crushing Grapple (Ex)
- **Description:** At 14th level, a deepwater rager gains the constrict special attack ( Pathfinder RPG Bestiary 298 ), which deals an amount of damage equal to the damage her unarmed strike deals.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a deepwater rager gains the constrict special attack ( Pathfinder RPG Bestiary 298 ), which deals an amount of damage equal to the damage her unarmed strike deals.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: tireless rage

- **Archetype feature:** Full Lungs (Ex)
- **Description:** At 17th level, a deepwater rager does not need to breathe while she is raging.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a deepwater rager does not need to breathe while she is raging.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the deepwater rager archetype: battle roar ACG, bestial swimmer UC, brawler APG, intimidating glare, raging swimmer, rolling dodge, and terrifying howl.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the deepwater rager archetype: battle roar ACG, bestial swimmer UC, brawler APG, intimidating glare, raging swimmer, rolling dodge, and terrifying howl.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Strong Lungs (Ex)
- Spiraling Charge (Ex)
- Disorienting Grapple (Ex)
- Crushing Grapple (Ex)
- Full Lungs (Ex)
- Rage Powers
