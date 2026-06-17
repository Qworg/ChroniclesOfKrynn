# Bard - Arcane Healer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Arcane Healer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Arcane%20Healer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Channel Energy (Su); Inspiring Healing (Sp)
- **Replaced / altered class features:** versatile performance; loremaster

## Implementation details

### Replaces: versatile performance

- **Archetype feature:** Channel Energy (Su)
- **Description:** At 2nd level, an arcane healer gains the ability to channel positive energy as a cleric of one level lower than his level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 18.
  - **Rules text to implement:** At 2nd level, an arcane healer gains the ability to channel positive energy as a cleric of one level lower than his level. If a creature within the channeled energy’s area of effect would be allowed a save against its effects, the DC is equal to 10 + 1/2 the arcane healer’s level + the arcane healer’s Charisma modifier. An arcane healer can use this ability once per day at 2nd level, gaining an additional use per day every four levels thereafter (6th, 10th, 14th, and 18th), to a maximum of 5 times per day at 18th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: loremaster

- **Archetype feature:** Inspiring Healing (Sp)
- **Description:** At 5th level, an arcane healer gains the ability to expend rounds of his bardic performance to provide extra healing to his allies.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 5, 11, 17.
  - **Rules text to implement:** At 5th level, an arcane healer gains the ability to expend rounds of his bardic performance to provide extra healing to his allies. By expending 2 rounds of bardic performance, an arcane healer can cast cure light wounds as a spell-like ability. At 11th level, the arcane healer can expend 2 rounds of bardic performance to cast cure moderate wounds as a spell-like ability. At 17th level, he may instead expend 2 rounds of bardic performance to cast cure serious wounds as a spell-like ability. No single target may be affected by an arcane healer’s inspiring healing ability more than once in a 24-hour period.
- **Implementation flags:**
  - bardic performance subsystem.
  - spell-like ability support.

## Parsed source feature headings

- Channel Energy (Su)
- Inspiring Healing (Sp)
