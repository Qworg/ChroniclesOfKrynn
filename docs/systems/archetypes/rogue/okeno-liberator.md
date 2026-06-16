# Rogue - Okeno Liberator

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Okeno Liberator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Okeno%20Liberator
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bond Breaker (Ex); Covert Commander (Ex); Catch Off-Guard (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense; uncanny dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Bond Breaker (Ex)
- **Description:** An Okeno liberator adds 1/2 her class level to Escape Artist checks, and never takes a penalty on Disable Device checks when using improvised tools to open locks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An Okeno liberator adds 1/2 her class level to Escape Artist checks, and never takes a penalty on Disable Device checks when using improvised tools to open locks.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: trap sense

- **Archetype feature:** Covert Commander (Ex)
- **Description:** An Okeno liberator grants all allies within 30 feet who are in her line of sight (but not herself ) a +1 competence bonus on Disguise and Stealth checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An Okeno liberator grants all allies within 30 feet who are in her line of sight (but not herself ) a +1 competence bonus on Disguise and Stealth checks. This bonus increases by 1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: uncanny dodge

- **Archetype feature:** Catch Off-Guard (Ex)
- **Description:** At 4th level, the Okeno liberator is adept at improvising weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the Okeno liberator is adept at improvising weapons. She gains Catch Off-Guard as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Bond Breaker (Ex)
- Covert Commander (Ex)
- Catch Off-Guard (Ex)
- Rogue Talents
- Advanced Talents

