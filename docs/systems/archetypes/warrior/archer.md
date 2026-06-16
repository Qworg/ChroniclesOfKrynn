# Warrior - Archer

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Archer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Archer
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hawkeye (Ex); Trick Shot (Ex); Expert Archer (Ex); Safe Shot (Ex); Evasive Archer (Ex); Volley (Ex); Ranged Defense (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** bravery; armor training 1, 2, 3, and 4; weapon training 1; weapon training 2; weapon training 3; weapon training 4; armor mastery

## Replacement details

### Replaces: bravery

- **Archetype feature:** Hawkeye (Ex)
- **Description:** At 2nd level, an archer gains a +1 bonus on Perception checks, and the range increment for any bow he uses increases by 5 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an archer gains a +1 bonus on Perception checks, and the range increment for any bow he uses increases by 5 feet. These bonuses increase by +1 and 5 additional feet for every 4 levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 1, 2, 3
- **Archetype feature:** Trick Shot (Ex)
- **Description:** At 3rd level, an archer can choose one of the following combat maneuvers or actions: disarm, feint, or sunder.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 11.
  - Mechanics summary: At 3rd level, an archer can choose one of the following combat maneuvers or actions: disarm, feint, or sunder. He can perform this action with a bow against any target within 30 feet, with a –4 penalty to his CMB. Every four levels beyond 3rd, he may choose an additional trick shot to learn. At 11th level, he may also choose from the following combat maneuvers: bull rush, grapple, trip. A target grappled by an arrow can break free by destroying the archer’s arrow (hardness 5, hit points 1, break DC 13) or with an Escape Artist or CMB check (against the archer’s CMD –4).
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, save DC calculation.

### Replaces: 4

- **Archetype feature:** Trick Shot (Ex)
- **Description:** At 3rd level, an archer can choose one of the following combat maneuvers or actions: disarm, feint, or sunder.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 11.
  - Mechanics summary: At 3rd level, an archer can choose one of the following combat maneuvers or actions: disarm, feint, or sunder. He can perform this action with a bow against any target within 30 feet, with a –4 penalty to his CMB. Every four levels beyond 3rd, he may choose an additional trick shot to learn. At 11th level, he may also choose from the following combat maneuvers: bull rush, grapple, trip. A target grappled by an arrow can break free by destroying the archer’s arrow (hardness 5, hit points 1, break DC 13) or with an Escape Artist or CMB check (against the archer’s CMD –4).
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, save DC calculation.

### Replaces: weapon training 1

- **Archetype feature:** Expert Archer (Ex)
- **Description:** At 5th level, an archer gains a +1 bonus on attack and damage rolls with bows.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an archer gains a +1 bonus on attack and damage rolls with bows. This bonus increases by +1 for every four levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Safe Shot (Ex)
- **Description:** At 9th level, an archer does not provoke attacks of opportunity when making ranged attacks with a bow.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, an archer does not provoke attacks of opportunity when making ranged attacks with a bow.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: weapon training 3

- **Archetype feature:** Evasive Archer (Ex)
- **Description:** At 13th level, an archer gains a +2 dodge bonus to AC against ranged attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 17.
  - Mechanics summary: At 13th level, an archer gains a +2 dodge bonus to AC against ranged attacks. This bonus increases to +4 at 17th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 4

- **Archetype feature:** Volley (Ex)
- **Description:** At 17th level, as a full-round action, an archer can make a single bow attack at his highest base attack bonus against any number of creatures in a 15-foot- radius burst, making separate attack and damage rolls for each creature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, as a full-round action, an archer can make a single bow attack at his highest base attack bonus against any number of creatures in a 15-foot- radius burst, making separate attack and damage rolls for each creature.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: armor mastery

- **Archetype feature:** Ranged Defense (Ex)
- **Description:** At 19th level, an archer gains DR 5/— against ranged attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, an archer gains DR 5/— against ranged attacks. In addition, as an immediate action, he can catch an arrow fired at him and shoot it any target he chooses, as if he had the Snatch Arrows feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Hawkeye (Ex)
- Trick Shot (Ex)
- Expert Archer (Ex)
- Safe Shot (Ex)
- Evasive Archer (Ex)
- Volley (Ex)
- Ranged Defense (Ex)
- Weapon Mastery (Ex)

