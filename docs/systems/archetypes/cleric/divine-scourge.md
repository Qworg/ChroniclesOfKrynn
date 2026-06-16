# Cleric - Divine Scourge

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Divine Scourge
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Divine%20Scourge
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Curser (Ex); Divine Hexes
- **Replaced / altered class features:** channel energy

## Replacement details

### Alters: domains

- **Archetype feature:** Curser (Ex)
- **Description:** A divine scourge must take the curse subdomain ( Pathfinder RPG Advanced Player’s Guide 88 ) as a domain, regardless of the actual domains offered by her deity.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A divine scourge must take the curse subdomain ( Pathfinder RPG Advanced Player’s Guide 88 ) as a domain, regardless of the actual domains offered by her deity. The divine scourge does not receive a second domain.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: channel energy

- **Archetype feature:** Divine Hexes
- **Description:** At 3rd level and every 4 cleric levels thereafter, a divine scourge can select the following hexes from the witch APG class hex list, up to a maximum of five hexes at 19th level: blight, cursed wound ( Pathfinder Player Companion: Blood of the Moon 15 ), evil eye, misfortune, scar UM , slumber, and unnerve beasts UM.
- **Mechanics:**
  - Level hooks: 3, 19, 11.
  - Mechanics summary: At 3rd level and every 4 cleric levels thereafter, a divine scourge can select the following hexes from the witch APG class hex list, up to a maximum of five hexes at 19th level: blight, cursed wound ( Pathfinder Player Companion: Blood of the Moon 15 ), evil eye, misfortune, scar UM , slumber, and unnerve beasts UM . At 11th level, a divine scourge can instead select from the following list of major hexes: agony, hoarfrost UM , infected wounds UM , nightmares, and retributions. The divine scourge uses her Wisdom modifier instead of her Intelligence modifier to determine the save DCs of her hexes. Any hex that refers to using her Intelligence modifier to determine its duration or effect instead uses her Charisma modifier for that purpose.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.
  - Needs implementation review: witch/shaman hex mechanics.

## Parsed source feature headings

- Curser (Ex)
- Divine Hexes

