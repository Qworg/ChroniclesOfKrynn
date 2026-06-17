# Rogue - Underground Chemist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Underground Chemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Underground%20Chemist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Chemical Weapons (Ex); Precise Splash Weapons (Ex); Discovery (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** evasion; the rogue talent gained at 4th level

## Implementation details

### Replaces: evasion

- **Archetype feature:** Chemical Weapons (Ex)
- **Description:** At 2nd level, an underground chemist is able to retrieve an alchemical item as if drawing a weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an underground chemist is able to retrieve an alchemical item as if drawing a weapon. She adds her Intelligence modifier to damage dealt with splash weapons, including any splash damage. She adds 1/2 her level to Craft (alchemy) checks.
- **Implementation flags:**
  - crafting subsystem.

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Precise Splash Weapons (Ex)
- **Description:** At 4th level, an underground chemist can deal sneak attack damage with splash weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an underground chemist can deal sneak attack damage with splash weapons. The attack must be her first attack that round, qualify for dealing sneak attack damage (such as against a flat-footed target), and be directed at a creature rather than a square.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: advanced talents

- **Archetype feature:** Discovery (Su)
- **Description:** At 10th level, an underground chemist can select one of the following alchemist discoveries ( Advanced Player’s Guide 28) in place of a rogue talent: concentrate poison, dilution, enhance potion, extend potion, mummification UM, nauseating flesh UC, poison conversion UC, preserve organs UM, spontaneous healing UM, or sticky poison.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, an underground chemist can select one of the following alchemist discoveries ( Advanced Player’s Guide 28) in place of a rogue talent: concentrate poison, dilution, enhance potion, extend potion, mummification UM, nauseating flesh UC, poison conversion UC, preserve organs UM, spontaneous healing UM, or sticky poison. She uses her rogue level as her alchemist level for determining the effects of her discoveries and whether she is able to select one.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the underground chemist archetype: black market connections UC, fast fingers APG, lasting poison APG, sniper’s eye APG, and swift poison APG.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the underground chemist archetype: black market connections UC, fast fingers APG, lasting poison APG, sniper’s eye APG, and swift poison APG.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the underground chemist archetype: deadly cocktail APG and thoughtful reexamining APG.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the underground chemist archetype: deadly cocktail APG and thoughtful reexamining APG.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Chemical Weapons (Ex)
- Precise Splash Weapons (Ex)
- Discovery (Su)
- Rogue Talents
- Advanced Talents
