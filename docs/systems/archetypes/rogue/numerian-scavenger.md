# Rogue - Numerian Scavenger

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Numerian Scavenger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Numerian%20Scavenger
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Technic Training (Ex); Lucky Glitch (Ex); Robot Slayer (Ex)
- **Replaced / altered class features:** trapfinding; uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Technic Training (Ex)
- **Description:** A Numerian scavenger adds 1/2 her rogue level to Perception skill checks to locate mechanical or high-tech traps and to Disable Device skill checks against these traps (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A Numerian scavenger adds 1/2 her rogue level to Perception skill checks to locate mechanical or high-tech traps and to Disable Device skill checks against these traps (minimum +1). She gains Technologist as a bonus feat. She cannot use Disable Device to disarm magical traps.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: uncanny dodge

- **Archetype feature:** Lucky Glitch (Ex)
- **Description:** Starting at 4th level, whenever a Numerian scavenger triggers a glitch when using a timeworn technological item, she rolls twice and can choose which of the two glitch effects actually occurs.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** Starting at 4th level, whenever a Numerian scavenger triggers a glitch when using a timeworn technological item, she rolls twice and can choose which of the two glitch effects actually occurs. A Numerian scavenger always adds her level to rolls to determine what kind of glitch occurs, and treats rolls of over 100 as 100.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Robot Slayer (Ex)
- **Description:** At 8th level, a Numerian scavenger knows just where to strike robots to incapacitate and disable them.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a Numerian scavenger knows just where to strike robots to incapacitate and disable them. When she deals sneak attack damage to a robot, she ignores all hardness that robot possesses.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Technic Training (Ex)
- Lucky Glitch (Ex)
- Robot Slayer (Ex)
