# Berserker - Invulnerable Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Invulnerable Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Invulnerable%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Invulnerability (Ex); Extreme Endurance (Ex); Rage Powers
- **Replaced / altered class features:** uncanny dodge, improved uncanny dodge, and damage reduction; trap sense

## Replacement details

### Replaces: uncanny dodge, improved uncanny dodge, and damage reduction

- **Archetype feature:** Invulnerability (Ex)
- **Description:** At 2nd level, the invulnerable rager gains DR/— equal to half her barbarian level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the invulnerable rager gains DR/— equal to half her barbarian level. This damage reduction is doubled against nonlethal damage.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: trap sense

- **Archetype feature:** Extreme Endurance (Ex)
- **Description:** At 3rd level, the invulnerable rager is inured to either hot or cold climate effects (choose one) as if using endure elements.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the invulnerable rager is inured to either hot or cold climate effects (choose one) as if using endure elements . In addition, the barbarian gains 1 point of fire or cold resistance for every three levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Invulnerability (Ex)
- Extreme Endurance (Ex)
- Rage Powers

