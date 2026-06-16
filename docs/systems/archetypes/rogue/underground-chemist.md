# Rogue - Underground Chemist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Underground Chemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Underground%20Chemist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Chemical Weapons (Ex); Precise Splash Weapons (Ex); Discovery (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** evasion; the rogue talent gained at 4th level

## Replacement details

### Replaces: evasion

- **Archetype feature:** Chemical Weapons (Ex)
- **Description:** At 2nd level, an underground chemist is able to retrieve an alchemical item as if drawing a weapon.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an underground chemist is able to retrieve an alchemical item as if drawing a weapon. She adds her Intelligence modifier to damage dealt with splash weapons, including any splash damage. She adds 1/2 her level to Craft (alchemy) checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Precise Splash Weapons (Ex)
- **Description:** At 4th level, an underground chemist can deal sneak attack damage with splash weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an underground chemist can deal sneak attack damage with splash weapons. The attack must be her first attack that round, qualify for dealing sneak attack damage (such as against a flat-footed target), and be directed at a creature rather than a square.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

### Alters: advanced talents

- **Archetype feature:** Discovery (Su)
- **Description:** At 10th level, an underground chemist can select one of the following alchemist discoveries ( Advanced Player’s Guide 28) in place of a rogue talent: concentrate poison, dilution, enhance potion, extend potion, mummification UM , nauseating flesh UC , poison conversion UC , preserve organs UM , spontaneous healing UM , or sticky poison.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, an underground chemist can select one of the following alchemist discoveries ( Advanced Player’s Guide 28) in place of a rogue talent: concentrate poison, dilution, enhance potion, extend potion, mummification UM , nauseating flesh UC , poison conversion UC , preserve organs UM , spontaneous healing UM , or sticky poison. She uses her rogue level as her alchemist level for determining the effects of her discoveries and whether she is able to select one.
- **Implementation flags:**
  - Likely existing hooks: alchemist discovery hook.

## Parsed source feature headings

- Chemical Weapons (Ex)
- Precise Splash Weapons (Ex)
- Discovery (Su)
- Rogue Talents
- Advanced Talents

