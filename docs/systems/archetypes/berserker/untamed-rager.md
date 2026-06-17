# Berserker - Untamed Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Untamed Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Untamed%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Despicable Tactics; Feral Appearance (Ex); Deplorable Tactics; Dishonorable (Ex)
- **Replaced / altered class features:** uncanny dodge; trap sense; improved uncanny dodge; damage reduction

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Despicable Tactics
- **Description:** At 2nd level, the untamed rager gains Improved Dirty Trick as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the untamed rager gains Improved Dirty Trick as a bonus feat.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Feral Appearance (Ex)
- **Description:** At 3rd level, the untamed rager gains a +1 bonus on Intimidate checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the untamed rager gains a +1 bonus on Intimidate checks. This bonus increases by 1 every 3 barbarian levels thereafter.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Deplorable Tactics
- **Description:** At 5th level, the untamed rager gains Greater Dirty Trick as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, the untamed rager gains Greater Dirty Trick as a bonus feat.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: damage reduction

- **Archetype feature:** Dishonorable (Ex)
- **Description:** At 7th level and every 3 barbarian levels thereafter, the untamed rager gains a +1 bonus on combat maneuver checks when performing dirty tricks and to her CMD to resist others’ dirty tricks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level and every 3 barbarian levels thereafter, the untamed rager gains a +1 bonus on combat maneuver checks when performing dirty tricks and to her CMD to resist others’ dirty tricks.
- **Implementation flags:**
  - rage/rage power subsystem.

## Parsed source feature headings

- Despicable Tactics
- Feral Appearance (Ex)
- Deplorable Tactics
- Dishonorable (Ex)
