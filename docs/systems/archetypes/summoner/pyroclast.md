# Summoner - Pyroclast

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Pyroclast
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Pyroclast
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Diminished Spellcasting; Bound to Fire (Ex); Detonate (Su); Heart of Earth and Fire (Ex)
- **Replaced / altered class features:** maker’s call; transposition

## Replacement details

### Alters: the summoner’s spells

- **Archetype feature:** Diminished Spellcasting
- **Description:** A pyroclast receives one fewer spell per day of each level than normal.
- **Mechanics:**
  - Mechanics summary: A pyroclast receives one fewer spell per day of each level than normal. If this reduces the number of spells for a level to 0, he can cast spells of that level only if his Charisma score grants him bonus spells of that level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: maker’s call

- **Archetype feature:** Detonate (Su)
- **Description:** At 6th level, a pyroclast can banish his eidolon in an explosion of fiery shards.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 12.
  - Mechanics summary: At 6th level, a pyroclast can banish his eidolon in an explosion of fiery shards. This slays the eidolon and deals 1d6 points of damage per Hit Die of the eidolon to every creature in a 20-foot-radius burst (Reflex half, DC = 10 + 1/2 his summoner level + his Charisma modifier). Half of this damage is fire, and the other half is piercing. At 12th level, the pyroclast can reduce the damage by 4d6 to increase the burst radius to 40 feet. The pyroclast can use this ability once per day.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, summoner eidolon hook.

### Replaces: transposition

- **Archetype feature:** Heart of Earth and Fire (Ex)
- **Description:** At 8th level, a pyroclast grants any of his summoned creatures with the earth or fire subtypes a +1 morale bonus on attack rolls, saving throws, and weapon damage rolls when he is within 30 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8, 10.
  - Mechanics summary: At 8th level, a pyroclast grants any of his summoned creatures with the earth or fire subtypes a +1 morale bonus on attack rolls, saving throws, and weapon damage rolls when he is within 30 feet. At 10th level, the pyroclast also grants these bonuses to his eidolon.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, summoner eidolon hook.

## Parsed source feature headings

- Diminished Spellcasting
- Bound to Fire (Ex)
- Detonate (Su)
- Heart of Earth and Fire (Ex)

