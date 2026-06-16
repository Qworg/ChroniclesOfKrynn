# Rogue - Numerian Scavenger

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Numerian Scavenger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Numerian%20Scavenger
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Technic Training (Ex); Lucky Glitch (Ex); Robot Slayer (Ex)
- **Replaced / altered class features:** trapfinding; uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Technic Training (Ex)
- **Description:** A Numerian scavenger adds 1/2 her rogue level to Perception skill checks to locate mechanical or high-tech traps and to Disable Device skill checks against these traps (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A Numerian scavenger adds 1/2 her rogue level to Perception skill checks to locate mechanical or high-tech traps and to Disable Device skill checks against these traps (minimum +1). She gains Technologist as a bonus feat. She cannot use Disable Device to disarm magical traps.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: uncanny dodge

- **Archetype feature:** Lucky Glitch (Ex)
- **Description:** Starting at 4th level, whenever a Numerian scavenger triggers a glitch when using a timeworn technological item, she rolls twice and can choose which of the two glitch effects actually occurs.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: Starting at 4th level, whenever a Numerian scavenger triggers a glitch when using a timeworn technological item, she rolls twice and can choose which of the two glitch effects actually occurs. A Numerian scavenger always adds her level to rolls to determine what kind of glitch occurs, and treats rolls of over 100 as 100.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.
  - Needs implementation review: technology rules.

### Replaces: improved uncanny dodge

- **Archetype feature:** Robot Slayer (Ex)
- **Description:** At 8th level, a Numerian scavenger knows just where to strike robots to incapacitate and disable them.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a Numerian scavenger knows just where to strike robots to incapacitate and disable them. When she deals sneak attack damage to a robot, she ignores all hardness that robot possesses.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

## Parsed source feature headings

- Technic Training (Ex)
- Lucky Glitch (Ex)
- Robot Slayer (Ex)

