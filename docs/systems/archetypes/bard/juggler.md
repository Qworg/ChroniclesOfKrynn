# Bard - Juggler

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Juggler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Juggler
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiencies; Fast Reactions (Ex); Combat Juggling (Ex); Evasion (Ex)
- **Replaced / altered class features:** bardic knowledge and lore master; versatile performance; well-versed and soothing performance

## Replacement details

### Replaces: his normal weapon proficiencies

- **Archetype feature:** Weapon and Armor Proficiencies
- **Description:** A juggler is proficient with all simple weapons, plus martial thrown weapons.
- **Mechanics:**
  - Mechanics summary: A juggler is proficient with all simple weapons, plus martial thrown weapons. A juggler is not proficient with shields.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: bardic knowledge and lore master

- **Archetype feature:** Fast Reactions (Ex)
- **Description:** At 1st level, a juggler gains Deflect Arrows as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5, 11, 17.
  - Mechanics summary: At 1st level, a juggler gains Deflect Arrows as a bonus feat. At 5th level, he gains Snatch Arrows as a bonus feat. The juggler doesn’t need to meet the prerequisites for these feats. The juggler can use the ability granted by these feats an additional time each round at 11th level (with a –5 penalty on his second attack roll) and at 17th level (with a –10 penalty on his third attack roll).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty.

### Replaces: versatile performance

- **Archetype feature:** Combat Juggling (Ex)
- **Description:** At 2nd level, a juggler can hold and wield (in other words, “juggle”) up to three items or weapons in his hands.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6, 18.
  - Mechanics summary: At 2nd level, a juggler can hold and wield (in other words, “juggle”) up to three items or weapons in his hands. The juggler must be able to hold and wield an object in one hand in order to juggle it. This ability doesn’t grant the juggler additional attacks, though it does allow him to use different weapons as part of a full attack. As long as he is juggling fewer than three objects, the juggler is considered to have a free hand (for the purposes of drawing a weapon, using somatic components, using Deflect Arrows , and so on). At 6th level and every 4 levels thereafter, the maximum number of objects the juggler can juggle increases by one, to a maximum of seven objects at 18th level. If the juggler is affected by any action or condition that would require a concentration check while he is juggling, he must attempt a Sleight of Hand check to continue juggling and avoid losing concentration.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.

### Replaces: well-versed and soothing performance

- **Archetype feature:** Evasion (Ex)
- **Description:** At 2nd level, a juggler gains evasion, as the rogue class feature of the same name.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 12.
  - Mechanics summary: At 2nd level, a juggler gains evasion, as the rogue class feature of the same name . At 12th level, he gains improved evasion, as the rogue advanced talent .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Weapon and Armor Proficiencies
- Fast Reactions (Ex)
- Combat Juggling (Ex)
- Evasion (Ex)

