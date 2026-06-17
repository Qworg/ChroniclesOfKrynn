# Rogue - Acrobat

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Acrobat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Acrobat
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Expert Acrobat (Ex); Second Chance (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Expert Acrobat (Ex)
- **Description:** At 1st level, an acrobat does not suffer any armor check penalties on Acrobatics, Climb, Fly, Sleight of Hand, or Stealth skill checks while wearing light armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an acrobat does not suffer any armor check penalties on Acrobatics, Climb, Fly, Sleight of Hand, or Stealth skill checks while wearing light armor. When she is not wearing armor, she gains a +2 competency bonus on Acrobatics and Fly skill checks.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.
  - flight/movement mode support.

### Replaces: trap sense

- **Archetype feature:** Second Chance (Ex)
- **Description:** At 3rd level, an acrobat can reroll any Acrobatics, Climb, or Fly skill check she has just made.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an acrobat can reroll any Acrobatics, Climb, or Fly skill check she has just made. This reroll is made at a –5 penalty. She must take the second result, even if it is worse. An acrobat can use this ability only once on any given skill check. She can use this ability once per day at 3rd level, plus one additional time per day for every 3 levels beyond 3rd.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the acrobat archetype: expert leaper, ledge walker*, nimble climber, peerless maneuver, rogue crawl*, and stand up*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the acrobat archetype: expert leaper, ledge walker*, nimble climber, peerless maneuver, rogue crawl*, and stand up*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the acrobat archetype: defensive roll*, fast getaway, fast tumble, and improved evasion*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the acrobat archetype: defensive roll*, fast getaway, fast tumble, and improved evasion*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Expert Acrobat (Ex)
- Second Chance (Ex)
- Rogue Talents
- Advanced Talents
