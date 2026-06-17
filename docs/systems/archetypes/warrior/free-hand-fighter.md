# Warrior - Free Hand Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Free Hand Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Free%20Hand%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Deceptive Strike (Ex); Elusive (Ex); Singleton (Ex); Timely Tip (Ex); Interference (Ex); Reversal (Ex)
- **Replaced / altered class features:** bravery; armor training 1, 2, 3, and 4; weapon training 1 and 4; weapon training 2; weapon training 3; armor mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Deceptive Strike (Ex)
- **Description:** At 2nd level, a free hand fighter gains a +1 bonus to CMB and CMD on disarm checks and on Bluff checks to feint or create a diversion to hide.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a free hand fighter gains a +1 bonus to CMB and CMD on disarm checks and on Bluff checks to feint or create a diversion to hide. This bonus increases by +1 for every four levels after 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1, 2, 3, and 4

- **Archetype feature:** Elusive (Ex)
- **Description:** At 3rd level, a free hand fighter gains a +1 dodge bonus to AC.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a free hand fighter gains a +1 dodge bonus to AC. This bonus increases by +1 for every four levels after 2nd. This bonus does not apply when wearing medium or heavy armor or carrying a medium or heavier load.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1 and 4

- **Archetype feature:** Singleton (Ex)
- **Description:** At 5th level, a free hand fighter gains a +1 bonus on attack and damage rolls when wielding a melee weapon in one hand and leaving his other hand free.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a free hand fighter gains a +1 bonus on attack and damage rolls when wielding a melee weapon in one hand and leaving his other hand free. This bonus increases by +1 per six levels after 5th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Timely Tip (Ex)
- **Description:** At 9th level, a free hand fighter can make a disarm combat maneuver against a target he threatens as a move action to push aside the target’s shield.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a free hand fighter can make a disarm combat maneuver against a target he threatens as a move action to push aside the target’s shield. If successful, the target loses its shield bonus to AC against the free hand fighter’s next attack.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Interference (Ex)
- **Description:** At 13th level, a free hand fighter can make a disarm or trip combat maneuver against a target he threatens as a move action to push his opponent off balance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a free hand fighter can make a disarm or trip combat maneuver against a target he threatens as a move action to push his opponent off balance. If successful, the target becomes flat-footed. This condition lasts until the target takes damage from a melee or ranged attack or until the beginning of the free hand fighter’s next turn, whichever comes first.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor mastery

- **Archetype feature:** Reversal (Ex)
- **Description:** At 19th level, a free hand fighter can make a disarm combat maneuver against a creature he threatens as an immediate action when he is the target of a melee attack from another creature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a free hand fighter can make a disarm combat maneuver against a creature he threatens as an immediate action when he is the target of a melee attack from another creature. If successful, the attack changes to target the target of the free hand fighter’s maneuver instead of the free hand fighter himself.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Deceptive Strike (Ex)
- Elusive (Ex)
- Singleton (Ex)
- Timely Tip (Ex)
- Interference (Ex)
- Reversal (Ex)
