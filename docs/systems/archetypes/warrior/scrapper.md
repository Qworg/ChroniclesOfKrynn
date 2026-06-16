# Warrior - Scrapper

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Scrapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Scrapper
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Scrap Armor (Ex); Scrapper Training (Ex)
- **Replaced / altered class features:** Armor Training; Weapon Training 1

## Replacement details

### Replaces: armor training

- **Archetype feature:** Scrap Armor (Ex)
- **Description:** At 3rd level, a scrapper learns to salvage scrap from constructs or other pieces of armor and attach them to his own armor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 11.
  - Mechanics summary: At 3rd level, a scrapper learns to salvage scrap from constructs or other pieces of armor and attach them to his own armor. Salvaging scrap from a destroyed construct or from another creature’s armor takes 1 minute. Scrap from a construct grants the scrapper a natural armor bonus to AC equal to one-quarter the construct’s Hit Dice (minimum +1). If the scrap is salvaged from a piece of armor, it instead grants a natural armor bonus to AC equal to 1 + the armor’s enhancement bonus (if any). Scrap is immediately destroyed by any sunder combat maneuver that targets the armor to which the scrap is attached. Otherwise, scrap crumbles and falls away after a number of days equal to the natural armor bonus that it grants.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook, AC/natural armor bonus.

### Replaces: weapon training 1

- **Archetype feature:** Scrapper Training (Ex)
- **Description:** At 5th level, a scrapper selects one fighter weapon group.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 9.
  - Mechanics summary: At 5th level, a scrapper selects one fighter weapon group . He gains a +1 bonus on attack and damage rolls when performing a sunder combat maneuver with a weapon from the chosen group. He does not provoke attacks of opportunity when performing a sunder combat maneuver with a weapon from the chosen group. If the scrapper has the Improved Sunder feat, the bonuses on attack and damage rolls from this ability double. At 9th level and every 4 levels thereafter, a scrapper can either take the fighter’s weapon training class feature or improve his bonuses from the scrapper training class feature by 1.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Scrap Armor (Ex)
- Scrapper Training (Ex)

