# Warrior - Dirty Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Dirty Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Dirty%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Sidestep (Ex); Maneuver Training (Ex); Speedy Tricks (Ex); Double Tricks (Ex)
- **Replaced / altered class features:** bravery; weapon training 1; weapon training 2; weapon training 3 and 4

## Replacement details

### Replaces: bravery

- **Archetype feature:** Sidestep (Ex)
- **Description:** At 2nd level, a dirty fighter learns how to evade his enemies when they react to his combat maneuvers.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a dirty fighter learns how to evade his enemies when they react to his combat maneuvers. He gains a +1 dodge bonus to his AC against attacks of opportunity provoked by him while attempting a combat maneuver. This bonus increases by +1 for every four levels beyond 2nd level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Maneuver Training (Ex)
- **Description:** At 5th level, a dirty fighter becomes a master of dirty tricks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a dirty fighter becomes a master of dirty tricks. He gains a +2 bonus on dirty trick combat maneuver checks and +2 to his CMD when he is the target of a dirty trick combat maneuver.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Speedy Tricks (Ex)
- **Description:** At 9th level, a dirty fighter has perfected how to quickly perform dirty tricks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a dirty fighter has perfected how to quickly perform dirty tricks. He can make a dirty trick combat maneuver as an attack instead of a standard action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon training 3

- **Archetype feature:** Double Tricks (Ex)
- **Description:** At 13th level, when a dirty fighter performs a combat maneuver, he may apply two different conditions to his target instead of one.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 17.
  - Mechanics summary: At 13th level, when a dirty fighter performs a combat maneuver, he may apply two different conditions to his target instead of one. Each penalty condition requires a separate action to remove. At 17th level, he may apply three different conditions.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: 4

- **Archetype feature:** Double Tricks (Ex)
- **Description:** At 13th level, when a dirty fighter performs a combat maneuver, he may apply two different conditions to his target instead of one.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 17.
  - Mechanics summary: At 13th level, when a dirty fighter performs a combat maneuver, he may apply two different conditions to his target instead of one. Each penalty condition requires a separate action to remove. At 17th level, he may apply three different conditions.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

## Parsed source feature headings

- Sidestep (Ex)
- Maneuver Training (Ex)
- Speedy Tricks (Ex)
- Double Tricks (Ex)

