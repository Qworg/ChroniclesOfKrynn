# Rogue - Bekyar Kidnapper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Bekyar Kidnapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Bekyar%20Kidnapper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Clean Capture (Ex); Abductor (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Clean Capture (Ex)
- **Description:** At 1st level, a Bekyar kidnapper reduces the penalty to her combat maneuver check to tie up a pinned or otherwise restrained target by an amount equal to 1/2 her rogue level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a Bekyar kidnapper reduces the penalty to her combat maneuver check to tie up a pinned or otherwise restrained target by an amount equal to 1/2 her rogue level. In addition, she can take the feats Improved Grapple and Greater Grapple as rogue talents. She can ignore the Improved Unarmed Strike requirement when selecting these feats as rogue talents, but must meet all other prerequisites.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Abductor (Ex)
- **Description:** At 3rd level, a Bekyar kidnapper gains a +1 bonus on combat maneuver checks to grapple a foe.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a Bekyar kidnapper gains a +1 bonus on combat maneuver checks to grapple a foe. In addition, the Bekyar kidnapper treats her combat maneuver bonus as 1 higher when a foe tries to grapple her or when a grappled target attempts to break free of her grapple. These bonuses increase by 1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the Bekyar kidnapper archetype: black market connections UC, camouflage APG, combat trick, rope master UC, survivalist APG, and terrain mastery UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the Bekyar kidnapper archetype: black market connections UC, camouflage APG, combat trick, rope master UC, survivalist APG, and terrain mastery UC.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the Bekyar kidnapper archetype: crippling strike, hide in plain sight UC, knock-out blow APG, rumormonger UC, and weapon snatcher UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the Bekyar kidnapper archetype: crippling strike, hide in plain sight UC, knock-out blow APG, rumormonger UC, and weapon snatcher UC.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Clean Capture (Ex)
- Abductor (Ex)
- Rogue Talents
- Advanced Talents
