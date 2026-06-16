# Warrior - Drill Sergeant

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Drill Sergeant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Drill%20Sergeant
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Tactician (Ex); Weapon Training (Ex); Greater Tactician (Ex); Weapon Trainer (Ex); Master Tactician (Ex)
- **Replaced / altered class features:** bravery; weapon training 2; weapon training 3; weapon training 4

## Replacement details

### Replaces: bravery

- **Archetype feature:** Tactician (Ex)
- **Description:** At 2nd level, a drill sergeant gains the cavalier’s tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a drill sergeant gains the cavalier’s tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Alters: weapon training 1

- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 5th level, a drill sergeant gains weapon training with one group of weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a drill sergeant gains weapon training with one group of weapons. He doesn’t gain weapon training with other groups at later levels, though his weapon training bonus improves by 1 for every 4 levels after 5th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Greater Tactician (Ex)
- **Description:** At 9th level, the drill sergeant gains the cavalier’s greater tactician class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, the drill sergeant gains the cavalier’s greater tactician class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: weapon training 3

- **Archetype feature:** Weapon Trainer (Ex)
- **Description:** At 13th level, when a drill sergeant wields a weapon he has weapon training in, all allies within 30 feet who can see and hear the drill sergeant gain half his weapon training bonus when they wield any weapon from the same weapon group.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, when a drill sergeant wields a weapon he has weapon training in, all allies within 30 feet who can see and hear the drill sergeant gain half his weapon training bonus when they wield any weapon from the same weapon group. This bonus doesn’t stack with any weapon training bonus an ally already possesses.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 4

- **Archetype feature:** Master Tactician (Ex)
- **Description:** At 17th level, the drill sergeant gains the cavalier’s master tactician class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, the drill sergeant gains the cavalier’s master tactician class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Tactician (Ex)
- Weapon Training (Ex)
- Greater Tactician (Ex)
- Weapon Trainer (Ex)
- Master Tactician (Ex)

