# Berserker - Invulnerable Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Invulnerable Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Invulnerable%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Invulnerability (Ex); Extreme Endurance (Ex); Rage Powers
- **Replaced / altered class features:** uncanny dodge, improved uncanny dodge, and damage reduction; trap sense

## Implementation details

### Replaces: uncanny dodge, improved uncanny dodge, and damage reduction

- **Archetype feature:** Invulnerability (Ex)
- **Description:** At 2nd level, the invulnerable rager gains DR/— equal to half her barbarian level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the invulnerable rager gains DR/— equal to half her barbarian level. This damage reduction is doubled against nonlethal damage.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: trap sense

- **Archetype feature:** Extreme Endurance (Ex)
- **Description:** At 3rd level, the invulnerable rager is inured to either hot or cold climate effects (choose one) as if using endure elements.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the invulnerable rager is inured to either hot or cold climate effects (choose one) as if using endure elements. In addition, the barbarian gains 1 point of fire or cold resistance for every three levels beyond 3rd.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the invulnerable rager archetype: come and get me, guarded life, inspire ferocity, reckless abandon, and renewed vigor*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the invulnerable rager archetype: come and get me, guarded life, inspire ferocity, reckless abandon, and renewed vigor*.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Invulnerability (Ex)
- Extreme Endurance (Ex)
- Rage Powers
