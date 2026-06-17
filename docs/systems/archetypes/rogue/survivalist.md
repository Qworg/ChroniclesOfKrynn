# Rogue - Survivalist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Survivalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Survivalist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hardy (Ex); Endure Elements (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Hardy (Ex)
- **Description:** At 1st level, a survivalist is already prepared to endure extreme hardships and environmental conditions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a survivalist is already prepared to endure extreme hardships and environmental conditions. She can go twice the normal number of days without water and triple the normal number of days without food before feeling the effects of either thirst or starvation.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Endure Elements (Sp)
- **Description:** At 3rd level, a survivalist rogue can use endure elements once per day as a spell-like ability.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a survivalist rogue can use endure elements once per day as a spell-like ability. The survivalist’s caster level is the same as her rogue level.
- **Implementation flags:**
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the survivalist archetype: hold breath*, iron guts*, resiliency, strong stroke*, survivalist, terrain mastery*, and wall scramble*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the survivalist archetype: hold breath*, iron guts*, resiliency, strong stroke*, survivalist, terrain mastery*, and wall scramble*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the survivalist archetype: another day, defensive roll, feat, and skill mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the survivalist archetype: another day, defensive roll, feat, and skill mastery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Hardy (Ex)
- Endure Elements (Sp)
- Rogue Talents
- Advanced Talents
