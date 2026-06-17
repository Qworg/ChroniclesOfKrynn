# Summoner - Pyroclast

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Pyroclast
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Pyroclast
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Diminished Spellcasting; Bound to Fire (Ex); Detonate (Su); Heart of Earth and Fire (Ex)
- **Replaced / altered class features:** maker’s call; transposition

## Implementation details

### Alters: the summoner’s spells

- **Archetype feature:** Diminished Spellcasting
- **Description:** A pyroclast receives one fewer spell per day of each level than normal.
- **Detailed mechanics:**
  - **Rules text to implement:** A pyroclast receives one fewer spell per day of each level than normal. If this reduces the number of spells for a level to 0, he can cast spells of that level only if his Charisma score grants him bonus spells of that level.
- **Implementation flags:**
  - summoning subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bound to Fire (Ex)
- **Description:** A pyroclast’s eidolon begins with resist fire 10 and vulnerability to cold.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 10.
  - **Rules text to implement:** A pyroclast’s eidolon begins with resist fire 10 and vulnerability to cold. This improves to resist fire 20 when the pyroclast reaches 5th level. A pyroclast’s eidolon gains the fire subtype and immunity to fire when he reaches 10th level. This ability permanently reduces the eidolon’s evolution pool by 1 point.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Replaces: maker’s call

- **Archetype feature:** Detonate (Su)
- **Description:** At 6th level, a pyroclast can banish his eidolon in an explosion of fiery shards.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 12.
  - **Rules text to implement:** At 6th level, a pyroclast can banish his eidolon in an explosion of fiery shards. This slays the eidolon and deals 1d6 points of damage per Hit Die of the eidolon to every creature in a 20-foot-radius burst (Reflex half, DC = 10 + 1/2 his summoner level + his Charisma modifier). Half of this damage is fire, and the other half is piercing. At 12th level, the pyroclast can reduce the damage by 4d6 to increase the burst radius to 40 feet. The pyroclast can use this ability once per day.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

### Replaces: transposition

- **Archetype feature:** Heart of Earth and Fire (Ex)
- **Description:** At 8th level, a pyroclast grants any of his summoned creatures with the earth or fire subtypes a +1 morale bonus on attack rolls, saving throws, and weapon damage rolls when he is within 30 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8, 10.
  - **Rules text to implement:** At 8th level, a pyroclast grants any of his summoned creatures with the earth or fire subtypes a +1 morale bonus on attack rolls, saving throws, and weapon damage rolls when he is within 30 feet. At 10th level, the pyroclast also grants these bonuses to his eidolon.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

## Parsed source feature headings

- Diminished Spellcasting
- Bound to Fire (Ex)
- Detonate (Su)
- Heart of Earth and Fire (Ex)
