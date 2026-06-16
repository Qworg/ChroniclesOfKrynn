# Cleric - Forgemaster

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Forgemaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Forgemaster
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Artificer; Steel Spells; Divine Smith (Su); Runeforger (Su); Craft Magic Arms and Armor; Master Smith (Ex)
- **Replaced / altered class features:** channel energy

## Replacement details

### Replaces: channel energy

- **Archetype feature:** Runeforger (Su)
- **Description:** A forgemaster may inscribe mystical runes upon a suit of armor, shield, or weapon as full-round action, using this ability a number of times per day equal to 3 + her Intelligence modifier.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 2, 4, 8, 6.
  - Mechanics summary: A forgemaster may inscribe mystical runes upon a suit of armor, shield, or weapon as full-round action, using this ability a number of times per day equal to 3 + her Intelligence modifier. These runes last 1 round per cleric level, but inscribing the same rune twice on an item increases this duration to 1 minute per level, three times to 10 minutes per level, and four times to 1 hour per level. A forgemaster learns forgemaster’s blessing at 1st level and may learn one additional rune at 2nd level and every 2 levels thereafter. Only one type of rune marked with an asterisk (*) may be placed on an item at any given time. Ancient Splendor : The inscribed weapon, armor, or shield grants a +2 circumstance bonus on Diplomacy and Intimidate checks (+4 when interacting with dwarves). The forgemaster must be at least 4th level before learning this rune.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook.

## Parsed source feature headings

- Artificer
- Steel Spells
- Divine Smith (Su)
- Runeforger (Su)
- Craft Magic Arms and Armor
- Master Smith (Ex)

