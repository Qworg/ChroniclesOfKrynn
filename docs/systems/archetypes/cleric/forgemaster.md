# Cleric - Forgemaster

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Forgemaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Forgemaster
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Artificer; Steel Spells; Divine Smith (Su); Runeforger (Su); Craft Magic Arms and Armor; Master Smith (Ex)
- **Replaced / altered class features:** channel energy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Artificer
- **Description:** A forgemaster gains only one domain, which must be the Artifice domain (not including subdomains).
- **Detailed mechanics:**
  - **Rules text to implement:** A forgemaster gains only one domain, which must be the Artifice domain (not including subdomains). If she worships a deity, it must grant the Artifice domain.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Steel Spells
- **Description:** A forgemaster adds the following spells to her spell list: 1st— crafter’s curse, crafter’s fortune, lead blades ; 2nd— chill metal, heat metal, shatter ; 3rd— keen edge, versatile weapon ; 8th— iron body, repel metal or stone.
- **Detailed mechanics:**
  - **Rules text to implement:** A forgemaster adds the following spells to her spell list: 1st— crafter’s curse, crafter’s fortune, lead blades ; 2nd— chill metal, heat metal, shatter ; 3rd— keen edge, versatile weapon ; 8th— iron body, repel metal or stone.
- **Implementation flags:**
  - curse subsystem.
  - archetype spell-list override.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Smith (Su)
- **Description:** Whenever a forgemaster casts a spell that targets a weapon, shield, or armor, the spell takes effect at +1 caster level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** Whenever a forgemaster casts a spell that targets a weapon, shield, or armor, the spell takes effect at +1 caster level. If the spell has one or more metamagic feats applied, she reduces the total level adjustment to the spell by 1 (minimum 0).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: channel energy

- **Archetype feature:** Runeforger (Su)
- **Description:** A forgemaster may inscribe mystical runes upon a suit of armor, shield, or weapon as full-round action, using this ability a number of times per day equal to 3 + her Intelligence modifier.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 2, 4, 8, 6.
  - **Rules text to implement:** A forgemaster may inscribe mystical runes upon a suit of armor, shield, or weapon as full-round action, using this ability a number of times per day equal to 3 + her Intelligence modifier. These runes last 1 round per cleric level, but inscribing the same rune twice on an item increases this duration to 1 minute per level, three times to 10 minutes per level, and four times to 1 hour per level. Erase affects runes as magical writing. A forgemaster learns forgemaster’s blessing at 1st level and may learn one additional rune at 2nd level and every 2 levels thereafter. Only one type of rune marked with an asterisk (*) may be placed on an item at any given time. Ancient Splendor : The inscribed weapon, armor, or shield grants a +2 circumstance bonus on Diplomacy and Intimidate checks (+4 when interacting with dwarves). Bloodthirst *: The inscribed piercing or slashing weapon functions as if it had the wounding special ability, even if nonmagical. The forgemaster must be at least 4th level before learning this rune. Deathstrike : The inscribed weapon stores a death knell spell that triggers immediately if a blow from the weapon reduces a target to negative hit points. This expends all deathstrike runes on the weapon. The forgemaster must be at least 4th level before learning this rune. Durability : The inscribed item’s hardness increases by an amount equal to the forgemaster’s Wisdom modifier, and its hit points increase by an amount equal to twice her level. Featherlight : The inscribed item’s weight is halved; a metal item’s weight is reduced to 1/4 normal. If inscribed on a suit of armor, its armor check penalty for Acrobatics, Climb, and Jump checks is halved. Forgemaster’s Blessing : The inscribed nonmagical item functions as a masterwork item. Ghostglyph *: The inscribed weapon, shield, or armor gains the ghost touch special ability. The forgemaster must be at least 4th level before learning this rune. Glowglyph : The inscribed item sheds light as a torch. As a standard action, the bearer can command the rune to erupt in a burst of light as a shield with the blinding special ability with a burst radius of 5 feet per glowglyph rune inscribed on the item. This expends all glowglyph runes on the item. Invulnerability *: The inscribed armor grants its wearer DR/magic equal to 1/2 her cleric level. The forgemaster must be at least 8th level before learning this rune. Powerstrike *: The inscribed weapon’s critical threat range doubles. This does not stack with keen edge, Improved Critical, or similar effects. The forgemaster must be at least 6th level before learning this rune. Return *: The inscribed weapon gains the returning weapon special ability. The forgemaster must be at least 4th level before learning this rune. Spellguard : The inscribed item gains spell resistance equal to 11 + her cleric level. This applies only to effects targeting the item itself. Spellglyph *: The inscribed weapon gains the spell storing special ability. The forgemaster must be at least 4th level before learning this rune. Thief-Curse : The forgemaster designates one creature as the rightful owner of an item. Any other creature that intentionally grasps the item is cursed (as bestow curse ) for the duration of the rune. The forgemaster must be at least 6th level before learning this rune. Tracer : For as long as the rune lasts, the cleric may sense its location at will as a standard action, as if using locate object.
- **Implementation flags:**
  - curse subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Craft Magic Arms and Armor
- **Description:** The forgemaster gains this as a bonus feat at 3rd level.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** The forgemaster gains this as a bonus feat at 3rd level.
- **Implementation flags:**
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Master Smith (Ex)
- **Description:** At 5th level, a forgemaster can craft mundane metal items quickly, using half their gp value to determine progress, and can craft magical metal items in half the normal amount of time.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a forgemaster can craft mundane metal items quickly, using half their gp value to determine progress, and can craft magical metal items in half the normal amount of time.
- **Implementation flags:**
  - crafting subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Artificer
- Steel Spells
- Divine Smith (Su)
- Runeforger (Su)
- Craft Magic Arms and Armor
- Master Smith (Ex)
