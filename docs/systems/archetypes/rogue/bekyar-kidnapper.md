# Rogue - Bekyar Kidnapper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Bekyar Kidnapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Bekyar%20Kidnapper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Clean Capture (Ex); Abductor (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Clean Capture (Ex)
- **Description:** At 1st level, a Bekyar kidnapper reduces the penalty to her combat maneuver check to tie up a pinned or otherwise restrained target by an amount equal to 1/2 her rogue level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a Bekyar kidnapper reduces the penalty to her combat maneuver check to tie up a pinned or otherwise restrained target by an amount equal to 1/2 her rogue level. In addition, she can take the feats Improved Grapple and Greater Grapple as rogue talents. She can ignore the Improved Unarmed Strike requirement when selecting these feats as rogue talents, but must meet all other prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Abductor (Ex)
- **Description:** At 3rd level, a Bekyar kidnapper gains a +1 bonus on combat maneuver checks to grapple a foe.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a Bekyar kidnapper gains a +1 bonus on combat maneuver checks to grapple a foe. In addition, the Bekyar kidnapper treats her combat maneuver bonus as 1 higher when a foe tries to grapple her or when a grappled target attempts to break free of her grapple. These bonuses increase by 1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Clean Capture (Ex)
- Abductor (Ex)
- Rogue Talents
- Advanced Talents

