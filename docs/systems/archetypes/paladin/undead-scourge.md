# Paladin - Undead Scourge

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Undead Scourge
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Undead%20Scourge
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Smite Evil (Su); Aura of Life (Su); Undead Annihilation (Su)
- **Replaced / altered class features:** aura of resolve; aura of justice

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Smite Evil (Su)
- **Description:** This functions as the paladin ability of the same name, but the undead scourge does not deal 2 points of damage per level on the first successful attack against evil dragons and evil outsiders.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** This functions as the paladin ability of the same name, but the undead scourge does not deal 2 points of damage per level on the first successful attack against evil dragons and evil outsiders. She does deal 2 points of damage per level on all smite attacks made against evil undead creatures.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of resolve

- **Archetype feature:** Aura of Life (Su)
- **Description:** At 8th level, an undead scourge emits a 10-foot aura of life around her that weakens undead creatures.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, an undead scourge emits a 10-foot aura of life around her that weakens undead creatures. Undead in this aura take a –4 penalty on Will saves made to resist positive energy. In addition, undead in this aura do not regain hit points from channeled negative energy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Undead Annihilation (Su)
- **Description:** At 11th level, an undead scourge can expend one use of her smite evil ability as a standard action and make a single melee attack against an undead creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, an undead scourge can expend one use of her smite evil ability as a standard action and make a single melee attack against an undead creature. If this attack hits, the undead creature must make a Will save or be destroyed. The save DC is equal to 10 + 1/2 the undead scourge’s level + the undead scourge’s Charisma modifier. Undead with twice as many Hit Dice as the undead scourge are unaffected by this ability. If the attack misses, the smite evil is wasted without effect.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Smite Evil (Su)
- Aura of Life (Su)
- Undead Annihilation (Su)
