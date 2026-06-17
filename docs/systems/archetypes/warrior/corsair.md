# Warrior - Corsair

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Corsair
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Corsair
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Pirate Weapons (Ex); Deck Fighting (Ex); Armored Pirate (Ex); Improved Deck Fighting (Ex)
- **Replaced / altered class features:** the fighter’s 2nd-level bonus feat; armor training; the fighter’s 6th-level bonus feat

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Pirate Weapons (Ex)
- **Description:** A corsair is well versed in the types of weapons favored by pirates.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A corsair is well versed in the types of weapons favored by pirates. When selecting a group of weapons for his Weapon Training ability, he can select Pirate Weapons as a group. The Pirate Weapons group consists of the crossbow, cutlass, dagger, hook hand, rapier, and short sword.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the fighter’s 2nd-level bonus feat

- **Archetype feature:** Deck Fighting (Ex)
- **Description:** A corsair is used to fighting on crowded decks, and isn’t fazed by fighting multiple opponents at once.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A corsair is used to fighting on crowded decks, and isn’t fazed by fighting multiple opponents at once. At 2nd level, he gains Cleave as a bonus feat. He may use this feat even if he does not meet the prerequisites. A corsair does not take the normal –2 penalty to his AC when using the Cleave feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training

- **Archetype feature:** Armored Pirate (Ex)
- **Description:** A corsair wears heavier armor than is common aboard a ship.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 7, 11.
  - **Rules text to implement:** A corsair wears heavier armor than is common aboard a ship. At 3rd level, the corsair reduces the armor check penalty of any light armor he wears to 0 for purposes of Acrobatics and Swim checks. At 7th level, this becomes true of medium armor as well. At 11th level, it includes heavy armor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the fighter’s 6th-level bonus feat

- **Archetype feature:** Improved Deck Fighting (Ex)
- **Description:** At 6th level, the corsair gains Great Cleave as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, the corsair gains Great Cleave as a bonus feat. He may use this feat even if he does not meet the prerequisites. A corsair does not take the normal –2 penalty to his AC when using the Great Cleave feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Pirate Weapons (Ex)
- Deck Fighting (Ex)
- Armored Pirate (Ex)
- Improved Deck Fighting (Ex)
