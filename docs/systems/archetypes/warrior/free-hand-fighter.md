# Warrior - Free Hand Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Free Hand Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Free%20Hand%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Deceptive Strike (Ex); Elusive (Ex); Singleton (Ex); Timely Tip (Ex); Interference (Ex); Reversal (Ex)
- **Replaced / altered class features:** bravery; armor training 1, 2, 3, and 4; weapon training 1 and 4; weapon training 2; weapon training 3; armor mastery

## Replacement details

### Replaces: bravery

- **Archetype feature:** Deceptive Strike (Ex)
- **Description:** At 2nd level, a free hand fighter gains a +1 bonus to CMB and CMD on disarm checks and on Bluff checks to feint or create a diversion to hide.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a free hand fighter gains a +1 bonus to CMB and CMD on disarm checks and on Bluff checks to feint or create a diversion to hide. This bonus increases by +1 for every four levels after 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 1, 2, 3
- **Archetype feature:** Elusive (Ex)
- **Description:** At 3rd level, a free hand fighter gains a +1 dodge bonus to AC.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a free hand fighter gains a +1 dodge bonus to AC. This bonus increases by +1 for every four levels after 2nd. This bonus does not apply when wearing medium or heavy armor or carrying a medium or heavier load.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Elusive (Ex)
- **Description:** At 3rd level, a free hand fighter gains a +1 dodge bonus to AC.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a free hand fighter gains a +1 dodge bonus to AC. This bonus increases by +1 for every four levels after 2nd. This bonus does not apply when wearing medium or heavy armor or carrying a medium or heavier load.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Singleton (Ex)
- **Description:** At 5th level, a free hand fighter gains a +1 bonus on attack and damage rolls when wielding a melee weapon in one hand and leaving his other hand free.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a free hand fighter gains a +1 bonus on attack and damage rolls when wielding a melee weapon in one hand and leaving his other hand free. This bonus increases by +1 per six levels after 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Singleton (Ex)
- **Description:** At 5th level, a free hand fighter gains a +1 bonus on attack and damage rolls when wielding a melee weapon in one hand and leaving his other hand free.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a free hand fighter gains a +1 bonus on attack and damage rolls when wielding a melee weapon in one hand and leaving his other hand free. This bonus increases by +1 per six levels after 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Timely Tip (Ex)
- **Description:** At 9th level, a free hand fighter can make a disarm combat maneuver against a target he threatens as a move action to push aside the target’s shield.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a free hand fighter can make a disarm combat maneuver against a target he threatens as a move action to push aside the target’s shield. If successful, the target loses its shield bonus to AC against the free hand fighter’s next attack.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 3

- **Archetype feature:** Interference (Ex)
- **Description:** At 13th level, a free hand fighter can make a disarm or trip combat maneuver against a target he threatens as a move action to push his opponent off balance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a free hand fighter can make a disarm or trip combat maneuver against a target he threatens as a move action to push his opponent off balance. If successful, the target becomes flat-footed. This condition lasts until the target takes damage from a melee or ranged attack or until the beginning of the free hand fighter’s next turn, whichever comes first.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor mastery

- **Archetype feature:** Reversal (Ex)
- **Description:** At 19th level, a free hand fighter can make a disarm combat maneuver against a creature he threatens as an immediate action when he is the target of a melee attack from another creature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a free hand fighter can make a disarm combat maneuver against a creature he threatens as an immediate action when he is the target of a melee attack from another creature. If successful, the attack changes to target the target of the free hand fighter’s maneuver instead of the free hand fighter himself.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Deceptive Strike (Ex)
- Elusive (Ex)
- Singleton (Ex)
- Timely Tip (Ex)
- Interference (Ex)
- Reversal (Ex)

