# Warrior - Mobile Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Mobile Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Mobile%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Agility (Ex); Leaping Attack (Ex); Rapid Attack (Ex); Fleet Footed (Ex); Whirlwind Blitz (Ex)
- **Replaced / altered class features:** bravery; weapon training 1, 2, 3, and 4; armor training 3; armor training 4; weapon mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Agility (Ex)
- **Description:** At 2nd level, a mobile fighter gains a +1 bonus on saving throws made against effects that cause him to become paralyzed, slowed, or entangled.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a mobile fighter gains a +1 bonus on saving throws made against effects that cause him to become paralyzed, slowed, or entangled. This bonus increases by +1 for every four levels beyond 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1, 2, 3, and 4

- **Archetype feature:** Leaping Attack (Ex)
- **Description:** At 5th level, when a mobile fighter moves at least 5 feet prior to attacking, he gains a +1 bonus on attack and damage rolls.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, when a mobile fighter moves at least 5 feet prior to attacking, he gains a +1 bonus on attack and damage rolls. This bonus increases by +1 for every four levels beyond 5th.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor training 3

- **Archetype feature:** Rapid Attack (Ex)
- **Description:** At 11th level, a mobile fighter can combine a full attack action with a single move.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a mobile fighter can combine a full attack action with a single move. He must forgo the attack at his highest bonus but may take the remaining attacks at any point during his movement. This movement provokes attacks of opportunity as normal.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 4

- **Archetype feature:** Fleet Footed (Ex)
- **Description:** At 15th level, the mobile fighter’s speed increases by 10 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, the mobile fighter’s speed increases by 10 feet. He can take 10 on Acrobatics checks even while distracted or threatened, and can take 20 on an Acrobatics check once per day for every five fighter levels he possesses.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon mastery

- **Archetype feature:** Whirlwind Blitz (Ex)
- **Description:** At 20th level, a mobile fighter can make a full-attack action as a standard action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a mobile fighter can make a full-attack action as a standard action. He may also use the Whirlwind Attack feat as a standard action.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Agility (Ex)
- Leaping Attack (Ex)
- Rapid Attack (Ex)
- Fleet Footed (Ex)
- Whirlwind Blitz (Ex)
