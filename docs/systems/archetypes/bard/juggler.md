# Bard - Juggler

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Juggler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Juggler
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiencies; Fast Reactions (Ex); Combat Juggling (Ex); Evasion (Ex)
- **Replaced / altered class features:** bardic knowledge and lore master; versatile performance; well-versed and soothing performance

## Implementation details

### Replaces: his normal weapon proficiencies

- **Archetype feature:** Weapon and Armor Proficiencies
- **Description:** A juggler is proficient with all simple weapons, plus martial thrown weapons.
- **Detailed mechanics:**
  - **Rules text to implement:** A juggler is proficient with all simple weapons, plus martial thrown weapons. A juggler is not proficient with shields.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: bardic knowledge and lore master

- **Archetype feature:** Fast Reactions (Ex)
- **Description:** At 1st level, a juggler gains Deflect Arrows as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 5, 11, 17.
  - **Rules text to implement:** At 1st level, a juggler gains Deflect Arrows as a bonus feat. At 5th level, he gains Snatch Arrows as a bonus feat. The juggler doesn’t need to meet the prerequisites for these feats. The juggler can use the ability granted by these feats an additional time each round at 11th level (with a –5 penalty on his second attack roll) and at 17th level (with a –10 penalty on his third attack roll).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: versatile performance

- **Archetype feature:** Combat Juggling (Ex)
- **Description:** At 2nd level, a juggler can hold and wield (in other words, “juggle”) up to three items or weapons in his hands.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 18.
  - **Rules text to implement:** At 2nd level, a juggler can hold and wield (in other words, “juggle”) up to three items or weapons in his hands. The juggler must be able to hold and wield an object in one hand in order to juggle it. This ability doesn’t grant the juggler additional attacks, though it does allow him to use different weapons as part of a full attack. As long as he is juggling fewer than three objects, the juggler is considered to have a free hand (for the purposes of drawing a weapon, using somatic components, using Deflect Arrows, and so on). At 6th level and every 4 levels thereafter, the maximum number of objects the juggler can juggle increases by one, to a maximum of seven objects at 18th level. If the juggler is affected by any action or condition that would require a concentration check while he is juggling, he must attempt a Sleight of Hand check to continue juggling and avoid losing concentration. The check’s DC is the same as a concentration check, treating the spell level as twice the number of objects being juggled. If the juggler fails his Sleight of Hand check, he drops all juggled objects but one, determined randomly.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: well-versed and soothing performance

- **Archetype feature:** Evasion (Ex)
- **Description:** At 2nd level, a juggler gains evasion, as the rogue class feature of the same name.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 12.
  - **Rules text to implement:** At 2nd level, a juggler gains evasion, as the rogue class feature of the same name. At 12th level, he gains improved evasion, as the rogue advanced talent.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiencies
- Fast Reactions (Ex)
- Combat Juggling (Ex)
- Evasion (Ex)
