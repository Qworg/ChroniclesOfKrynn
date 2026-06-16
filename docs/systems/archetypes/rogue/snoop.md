# Rogue - Snoop

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Snoop
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Snoop
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Inspiration (Ex); Investigator Talents (Ex); Uncanny Snoop (Ex); Master of Whispers (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding and evasion; uncanny dodge and improved uncanny dodge; the rogue talent gained at 8th level

## Replacement details

### Replaces: trapfinding and evasion

- **Archetype feature:** Inspiration (Ex)
- **Description:** At 1st level, a snoop gains an ability similar to the investigator’s inspiration class ability ( Pathfinder RPG Advanced Class Guide 31 ).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a snoop gains an ability similar to the investigator’s inspiration class ability ( Pathfinder RPG Advanced Class Guide 31 ). The snoop begins with an inspiration pool equal to half her rogue level plus her Intelligence modifier (minimum of 1). Unlike an investigator, a snoop can only use inspiration on skill checks, not on attack rolls or saving throws.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.
  - Needs implementation review: investigator inspiration mechanics.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Uncanny Snoop (Ex)
- **Description:** At 4th level, a snoop gains a +2 bonus on Intimidate checks when trying to force an opponent to give her information (or Bluff and Diplomacy checks for the same purpose if she has the coax information APG rogue talent).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, a snoop gains a +2 bonus on Intimidate checks when trying to force an opponent to give her information (or Bluff and Diplomacy checks for the same purpose if she has the coax information APG rogue talent). She also gains a +2 bonus on Sense Motive checks to tell if someone’s information is false. At 8th level, these bonuses increase to +4.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Master of Whispers (Ex)
- **Description:** At 8th level, a snoop receives the rumormonger UC advanced rogue talent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a snoop receives the rumormonger UC advanced rogue talent.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Inspiration (Ex)
- Investigator Talents (Ex)
- Uncanny Snoop (Ex)
- Master of Whispers (Ex)
- Rogue Talents
- Advanced Talents

