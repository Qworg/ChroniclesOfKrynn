# Rogue - Makeshift Scrapper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Makeshift Scrapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Makeshift%20Scrapper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon Proficiency; Improvised Weapons (Ex); Supernatural Improvisation (Su); Improvised Weapon Mastery (Ex); Rogue Talents/Ninja Tricks; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense; the rogue talent gained at 12th level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Proficiency
- **Description:** The makeshift scrapper is proficient with only simple weapons.
- **Detailed mechanics:**
  - **Rules text to implement:** The makeshift scrapper is proficient with only simple weapons.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trapfinding

- **Archetype feature:** Improvised Weapons (Ex)
- **Description:** At 1st level, a makeshift scrapper gains Catch Off-Guard and Throw Anything as bonus feats.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a makeshift scrapper gains Catch Off-Guard and Throw Anything as bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Supernatural Improvisation (Su)
- **Description:** At 3rd level, a makeshift scrapper gains the ability to enhance an item, making it a more effective weapon or changing the way it can be used.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 19.
  - **Rules text to implement:** At 3rd level, a makeshift scrapper gains the ability to enhance an item, making it a more effective weapon or changing the way it can be used. As a swift action, she can alter a single improvised weapon to either grant it a +1 enhancement bonus on attack rolls and damage rolls or use it to gain a +1 shield bonus to her AC. The makeshift scrapper can use this ability for a number of rounds per day equal to her rogue level. These rounds need not be consecutive, and the makeshift scrapper can change the enhancement each time she activates the ability. The bonus increases by 1 every 4 levels thereafter, up to a maximum bonus of +5 at 19th level.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Improvised Weapon Mastery (Ex)
- **Description:** At 12th level, the makeshift scrapper gains Improvised Weapon Mastery as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, the makeshift scrapper gains Improvised Weapon Mastery as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents/Ninja Tricks
- **Description:** The following rogue talents and ninja tricks complement the makeshift scrapper archetype: acrobatic master UC, expert leaper APG, fast getaway APG, ki pool UC, offensive defense APG, peerless maneuver APG, and surprise attack.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents and ninja tricks complement the makeshift scrapper archetype: acrobatic master UC, expert leaper APG, fast getaway APG, ki pool UC, offensive defense APG, peerless maneuver APG, and surprise attack.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the makeshift scrapper archetype: another day APG, defensive roll, fast getaway APG, and opportunist.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the makeshift scrapper archetype: another day APG, defensive roll, fast getaway APG, and opportunist.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon Proficiency
- Improvised Weapons (Ex)
- Supernatural Improvisation (Su)
- Improvised Weapon Mastery (Ex)
- Rogue Talents/Ninja Tricks
- Advanced Talents
