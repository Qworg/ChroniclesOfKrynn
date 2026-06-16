# Rogue - Makeshift Scrapper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Makeshift Scrapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Makeshift%20Scrapper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon Proficiency; Improvised Weapons (Ex); Supernatural Improvisation (Su); Improvised Weapon Mastery (Ex); Rogue Talents/Ninja Tricks; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense; the rogue talent gained at 12th level

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Improvised Weapons (Ex)
- **Description:** At 1st level, a makeshift scrapper gains Catch Off-Guard and Throw Anything as bonus feats.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a makeshift scrapper gains Catch Off-Guard and Throw Anything as bonus feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: trap sense

- **Archetype feature:** Supernatural Improvisation (Su)
- **Description:** At 3rd level, a makeshift scrapper gains the ability to enhance an item, making it a more effective weapon or changing the way it can be used.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a makeshift scrapper gains the ability to enhance an item, making it a more effective weapon or changing the way it can be used. As a swift action, she can alter a single improvised weapon to either grant it a +1 enhancement bonus on attack rolls and damage rolls or use it to gain a +1 shield bonus to her AC. The makeshift scrapper can use this ability for a number of rounds per day equal to her rogue level. These rounds need not be consecutive, and the makeshift scrapper can change the enhancement each time she activates the ability. The bonus increases by 1 every 4 levels thereafter, up to a maximum bonus of +5 at 19th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Improvised Weapon Mastery (Ex)
- **Description:** At 12th level, the makeshift scrapper gains Improvised Weapon Mastery as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, the makeshift scrapper gains Improvised Weapon Mastery as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Weapon Proficiency
- Improvised Weapons (Ex)
- Supernatural Improvisation (Su)
- Improvised Weapon Mastery (Ex)
- Rogue Talents/Ninja Tricks
- Advanced Talents

