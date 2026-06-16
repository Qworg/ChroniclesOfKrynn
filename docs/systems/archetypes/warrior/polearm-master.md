# Warrior - Polearm Master

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Polearm Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Polearm%20Master
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Pole Fighting (Ex); Steadfast Pike (Ex); Polearm Training (Ex); Flexible Flanker (Ex); Sweeping Fend (Ex); Step Aside (Ex); Polearm Parry (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** bravery; armor training 1, 2, 3, and 4; weapon training 1; weapon training 2; weapon training 3; weapon training 4; armor mastery

## Replacement details

### Replaces: bravery

- **Archetype feature:** Pole Fighting (Ex)
- **Description:** At 2nd level, as an immediate action, a polearm master can shorten the grip on his spear or polearm with reach and use it against adjacent targets.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, as an immediate action, a polearm master can shorten the grip on his spear or polearm with reach and use it against adjacent targets. This action results in a –4 penalty on attack rolls with that weapon until he spends another immediate action to return to the normal grip. The penalty is reduced by –1 for every four levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: armor training 1, 2, 3
- **Archetype feature:** Steadfast Pike (Ex)
- **Description:** At 3rd level, a polearm master gains a +1 bonus on attack rolls with readied attacks and attacks of opportunity made with a spear or polearm.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a polearm master gains a +1 bonus on attack rolls with readied attacks and attacks of opportunity made with a spear or polearm. The bonus increases by +1 for every four levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Steadfast Pike (Ex)
- **Description:** At 3rd level, a polearm master gains a +1 bonus on attack rolls with readied attacks and attacks of opportunity made with a spear or polearm.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a polearm master gains a +1 bonus on attack rolls with readied attacks and attacks of opportunity made with a spear or polearm. The bonus increases by +1 for every four levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Polearm Training (Ex)
- **Description:** At 5th level, a polearm master gains a +1 bonus on attack and damage rolls with spears and polearms.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a polearm master gains a +1 bonus on attack and damage rolls with spears and polearms. The bonus increases by +1 for every four levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Flexible Flanker (Ex)
- **Description:** At 9th level, a polearm master may choose any square adjacent to him and treat that square as his location for determining who he is flanking, even if that square is occupied by a creature, object, or solid barrier.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a polearm master may choose any square adjacent to him and treat that square as his location for determining who he is flanking, even if that square is occupied by a creature, object, or solid barrier.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: weapon training 3

- **Archetype feature:** Sweeping Fend (Ex)
- **Description:** At 13th level, a polearm master can use any spear or polearm to make bull rush maneuvers, though he takes a –4 penalty on combat maneuver checks when making such attempts.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a polearm master can use any spear or polearm to make bull rush maneuvers, though he takes a –4 penalty on combat maneuver checks when making such attempts. When using a spear or polearm to make a trip maneuver, he treats these weapons as if they had the trip weapon feature. Weapons with the trip property do not incur this penalty on trip maneuvers.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty, ki/monk hook.

### Replaces: weapon training 4

- **Archetype feature:** Step Aside (Ex)
- **Description:** At 17th level, when a creature threatened by a polearm master takes a 5-foot step into a square adjacent to him, he can take a 5-foot step as an immediate action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, when a creature threatened by a polearm master takes a 5-foot step into a square adjacent to him, he can take a 5-foot step as an immediate action. This 5-foot step must be subtracted from his movement on the next turn. He also gains a +2 dodge bonus to his AC against that opponent until the end of his next turn.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor mastery

- **Archetype feature:** Polearm Parry (Ex)
- **Description:** At 19th level, when an opponent threatened by a polearm master makes a melee attack against an ally, he may take an immediate action to grant his ally a +2 shield bonus to AC and DR 5/— against that attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, when an opponent threatened by a polearm master makes a melee attack against an ally, he may take an immediate action to grant his ally a +2 shield bonus to AC and DR 5/— against that attack. He may use this ability to protect himself, but only if the attacking creature is not adjacent to him.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Pole Fighting (Ex)
- Steadfast Pike (Ex)
- Polearm Training (Ex)
- Flexible Flanker (Ex)
- Sweeping Fend (Ex)
- Step Aside (Ex)
- Polearm Parry (Ex)
- Weapon Mastery (Ex)

