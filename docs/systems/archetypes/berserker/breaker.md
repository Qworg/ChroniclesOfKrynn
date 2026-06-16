# Berserker - Breaker

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Breaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Breaker
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Destructive (Ex); Battle Scavenger (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; trap sense

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Destructive (Ex)
- **Description:** Whenever the breaker barbarian makes a melee attack that targets an unattended object or makes a sunder combat maneuver, she adds half her barbarian level (minimum +1) on the damage roll.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Whenever the breaker barbarian makes a melee attack that targets an unattended object or makes a sunder combat maneuver, she adds half her barbarian level (minimum +1) on the damage roll.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Battle Scavenger (Ex)
- **Description:** At 3rd level, the breaker barbarian suffers no penalty on attack rolls when using an improvised weapon or a weapon with the broken condition.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the breaker barbarian suffers no penalty on attack rolls when using an improvised weapon or a weapon with the broken condition. In addition, she gains a +1 bonus on damage rolls with improvised or broken weapons for every three levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

## Parsed source feature headings

- Destructive (Ex)
- Battle Scavenger (Ex)
- Rage Powers

