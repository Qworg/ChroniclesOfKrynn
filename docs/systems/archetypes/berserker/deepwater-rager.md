# Berserker - Deepwater Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Deepwater Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Deepwater%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Strong Lungs (Ex); Spiraling Charge (Ex); Disorienting Grapple (Ex); Crushing Grapple (Ex); Full Lungs (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; improved uncanny dodge; indomitable will; tireless rage

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Strong Lungs (Ex)
- **Description:** A deepwater rager can hold her breath for a number of rounds equal to four times her Constitution score, and she does not reduce the duration of her held breath by taking a standard action or a full-round action.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A deepwater rager can hold her breath for a number of rounds equal to four times her Constitution score, and she does not reduce the duration of her held breath by taking a standard action or a full-round action. Additionally, as long as she is able to speak, the deepwater rager adds her Constitution modifier to Intimidate skill checks in addition to her Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, rage/rage-power hook, ki/monk hook.

### Replaces: uncanny dodge

- **Archetype feature:** Spiraling Charge (Ex)
- **Description:** At 2nd level, a deepwater rager is not required to move in a straight line when she charges, provided that no space she moves into while charging is farther away from her target than the space that she is leaving.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a deepwater rager is not required to move in a straight line when she charges, provided that no space she moves into while charging is farther away from her target than the space that she is leaving. The deepwater rager must be able to see her target at the beginning of her charge and cannot use this ability while mounted.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Disorienting Grapple (Ex)
- **Description:** At 5th level, a deepwater rager becomes an expert in flipping and spinning opponents as they are grappled.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a deepwater rager becomes an expert in flipping and spinning opponents as they are grappled. An opponent grappled by the deepwater rager gains the sickened condition for as long as it has the grappled condition. When the creature’s grappled condition ends, for any reason, it must succeed at an Acrobatics check (with a DC equal to the deepwater rager’s CMD) or fall prone.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, rage/rage-power hook.

### Replaces: indomitable will

- **Archetype feature:** Crushing Grapple (Ex)
- **Description:** At 14th level, a deepwater rager gains the constrict special attack ( Pathfinder RPG Bestiary 298 ), which deals an amount of damage equal to the damage her unarmed strike deals.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a deepwater rager gains the constrict special attack ( Pathfinder RPG Bestiary 298 ), which deals an amount of damage equal to the damage her unarmed strike deals.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: tireless rage

- **Archetype feature:** Full Lungs (Ex)
- **Description:** At 17th level, a deepwater rager does not need to breathe while she is raging.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a deepwater rager does not need to breathe while she is raging.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Strong Lungs (Ex)
- Spiraling Charge (Ex)
- Disorienting Grapple (Ex)
- Crushing Grapple (Ex)
- Full Lungs (Ex)
- Rage Powers

