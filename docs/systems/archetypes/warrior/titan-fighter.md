# Warrior - Titan Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Titan Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Titan%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Giant Weapon Wielder (Ex); Incredible Heft (Ex); Unstoppable Momentum (Ex)
- **Replaced / altered class features:** the fighter’s 1st level bonus feat; armor training; weapon training

## Implementation details

### Replaces: the fighter’s 1st level bonus feat

- **Archetype feature:** Giant Weapon Wielder (Ex)
- **Description:** At 1st level, a titan fighter can wield two-handed melee weapons intended for creatures one size category larger than himself, treating them as two-handed weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a titan fighter can wield two-handed melee weapons intended for creatures one size category larger than himself, treating them as two-handed weapons. He takes an additional –2 penalty on attack rolls when using an oversized two-handed weapon.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training

- **Archetype feature:** Incredible Heft (Ex)
- **Description:** At 3rd level, a titan fighter becomes more skilled at wielding weapons intended for creatures one size category larger than himself.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 7.
  - **Rules text to implement:** At 3rd level, a titan fighter becomes more skilled at wielding weapons intended for creatures one size category larger than himself. The penalty on attack rolls for using such weapons is reduced by 1, including when using oversized two-handed weapons. At 7th level and every 4 levels thereafter, this penalty is reduced by another 1 (minimum 0).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: weapon training

- **Archetype feature:** Unstoppable Momentum (Ex)
- **Description:** At 5th level, a titan fighter gains a +1 bonus on combat maneuver checks and to CMD while wielding a weapon sized for a creature of a larger size category.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 9.
  - **Rules text to implement:** At 5th level, a titan fighter gains a +1 bonus on combat maneuver checks and to CMD while wielding a weapon sized for a creature of a larger size category. At 9th level and every 4 levels thereafter, this bonus increases by 1. When wielding oversized weapons, the titan fighter can attempt to bull rush, drag, overrun, reposition, and trip creatures up to two sizes categories larger than himself.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Giant Weapon Wielder (Ex)
- Incredible Heft (Ex)
- Unstoppable Momentum (Ex)
