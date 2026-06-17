# Rogue - Okeno Liberator

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Okeno Liberator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Okeno%20Liberator
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bond Breaker (Ex); Covert Commander (Ex); Catch Off-Guard (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense; uncanny dodge

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Bond Breaker (Ex)
- **Description:** An Okeno liberator adds 1/2 her class level to Escape Artist checks, and never takes a penalty on Disable Device checks when using improvised tools to open locks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An Okeno liberator adds 1/2 her class level to Escape Artist checks, and never takes a penalty on Disable Device checks when using improvised tools to open locks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Covert Commander (Ex)
- **Description:** An Okeno liberator grants all allies within 30 feet who are in her line of sight (but not herself ) a +1 competence bonus on Disguise and Stealth checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An Okeno liberator grants all allies within 30 feet who are in her line of sight (but not herself ) a +1 competence bonus on Disguise and Stealth checks. This bonus increases by 1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** Catch Off-Guard (Ex)
- **Description:** At 4th level, the Okeno liberator is adept at improvising weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, the Okeno liberator is adept at improvising weapons. She gains Catch Off-Guard as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the Okeno liberator archetype: deft palm UC, fast picks APG, fast stealth, quick disguise APG, slow reactions, underhanded UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the Okeno liberator archetype: deft palm UC, fast picks APG, fast stealth, quick disguise APG, slow reactions, underhanded UC.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the Okeno liberator archetype: defensive roll, fast tumble, knock-out blow APG, skill mastery, weapon snatcher UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the Okeno liberator archetype: defensive roll, fast tumble, knock-out blow APG, skill mastery, weapon snatcher UC.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Bond Breaker (Ex)
- Covert Commander (Ex)
- Catch Off-Guard (Ex)
- Rogue Talents
- Advanced Talents
