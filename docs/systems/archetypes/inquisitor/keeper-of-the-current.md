# Inquisitor - Keeper of the Current

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Keeper of the Current
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Keeper%20of%20the%20Current
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Underwater Hunter (Ex); Marine Magic; Rudderless Attack (Ex)
- **Replaced / altered class features:** track; discern lies

## Replacement details

### Replaces: track

- **Archetype feature:** Underwater Hunter (Ex)
- **Description:** Tracking creatures underwater is particularly challenging, but a keeper of the current can read traces of eddies in the water to follow her prey.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Tracking creatures underwater is particularly challenging, but a keeper of the current can read traces of eddies in the water to follow her prey. A keeper of the current adds her level as a bonus on Survival checks to follow creatures underwater. She gains no bonus when finding or following tracks out of the water. Rules for using the Survival skill underwater are on page 47 of Pathfinder Campaign Setting: Aquatic Adventures .
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Alters: the inquisitor’s spellcasting

- **Archetype feature:** Marine Magic
- **Description:** At 5th level and at every 3 levels thereafter, a keeper of the current can learn a spell with the water descriptor from the cleric, druid, inquisitor, or wizard spell list in place of a spell she already knows.
- **Mechanics:**
  - Level hooks: 5, 1.
  - Mechanics summary: At 5th level and at every 3 levels thereafter, a keeper of the current can learn a spell with the water descriptor from the cleric, druid, inquisitor, or wizard spell list in place of a spell she already knows. In effect, she loses an old spell in exchange for a new one. The new spell’s level must be the same as that of the spell being exchanged, and it must be at least 1 level lower than the highest-level inquisitor spell she can cast. The keeper of the current can swap out only a single spell at any given level and must choose whether to swap the spell at the same time she gains new spells known for the level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: discern lies

- **Archetype feature:** Rudderless Attack (Ex)
- **Description:** At 5th level, an opponent that takes extra damage from the keeper of the current’s bane or greater bane ability has its swim speed halved for 1d4 rounds.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an opponent that takes extra damage from the keeper of the current’s bane or greater bane ability has its swim speed halved for 1d4 rounds. A successful Fortitude saving throw (DC = 10 + half the inquisitor’s level + her Wisdom modifier) negates this effect. If the keeper of the current targets a creature already affected by this ability, its swim speed is not further reduced but the duration of the effect is extended by 1d4 rounds.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

## Parsed source feature headings

- Underwater Hunter (Ex)
- Marine Magic
- Rudderless Attack (Ex)

