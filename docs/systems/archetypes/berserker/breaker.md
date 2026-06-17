# Berserker - Breaker

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Breaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Breaker
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Destructive (Ex); Battle Scavenger (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; trap sense

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Destructive (Ex)
- **Description:** Whenever the breaker barbarian makes a melee attack that targets an unattended object or makes a sunder combat maneuver, she adds half her barbarian level (minimum +1) on the damage roll.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Whenever the breaker barbarian makes a melee attack that targets an unattended object or makes a sunder combat maneuver, she adds half her barbarian level (minimum +1) on the damage roll.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Battle Scavenger (Ex)
- **Description:** At 3rd level, the breaker barbarian suffers no penalty on attack rolls when using an improvised weapon or a weapon with the broken condition.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the breaker barbarian suffers no penalty on attack rolls when using an improvised weapon or a weapon with the broken condition. In addition, she gains a +1 bonus on damage rolls with improvised or broken weapons for every three levels beyond 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the breaker archetype: ground breaker, smasher, and strength surge*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the breaker archetype: ground breaker, smasher, and strength surge*.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Destructive (Ex)
- Battle Scavenger (Ex)
- Rage Powers
