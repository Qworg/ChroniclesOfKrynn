# Warrior - Corsair

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Corsair
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Corsair
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Pirate Weapons (Ex); Deck Fighting (Ex); Armored Pirate (Ex); Improved Deck Fighting (Ex)
- **Replaced / altered class features:** the fighter’s 2nd-level bonus feat; armor training; the fighter’s 6th-level bonus feat

## Replacement details

### Replaces: the fighter’s 2nd-level bonus feat

- **Archetype feature:** Deck Fighting (Ex)
- **Description:** A corsair is used to fighting on crowded decks, and isn’t fazed by fighting multiple opponents at once.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A corsair is used to fighting on crowded decks, and isn’t fazed by fighting multiple opponents at once. At 2nd level, he gains Cleave as a bonus feat. He may use this feat even if he does not meet the prerequisites. A corsair does not take the normal –2 penalty to his AC when using the Cleave feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty.

### Replaces: armor training

- **Archetype feature:** Armored Pirate (Ex)
- **Description:** A corsair wears heavier armor than is common aboard a ship.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 7, 11.
  - Mechanics summary: A corsair wears heavier armor than is common aboard a ship. At 3rd level, the corsair reduces the armor check penalty of any light armor he wears to 0 for purposes of Acrobatics and Swim checks. At 7th level, this becomes true of medium armor as well. At 11th level, it includes heavy armor.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: the fighter’s 6th-level bonus feat

- **Archetype feature:** Improved Deck Fighting (Ex)
- **Description:** At 6th level, the corsair gains Great Cleave as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, the corsair gains Great Cleave as a bonus feat. He may use this feat even if he does not meet the prerequisites. A corsair does not take the normal –2 penalty to his AC when using the Great Cleave feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty.

## Parsed source feature headings

- Pirate Weapons (Ex)
- Deck Fighting (Ex)
- Armored Pirate (Ex)
- Improved Deck Fighting (Ex)

