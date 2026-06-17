# Warrior - Two-Handed Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Two-Handed Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Two-Handed%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Shattering Strike (Ex); Overhand Chop (Ex); Weapon Training (Ex); Backswing (Ex); Piledriver (Ex); Greater Power Attack (Ex); Devastating Blow (Ex)
- **Replaced / altered class features:** bravery; armor training 1; armor training 2; armor training 3; armor training 4; armor mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Shattering Strike (Ex)
- **Description:** At 2nd level, a two-handed fighter gains a +1 bonus to CMB and CMD on sunder attempts and on damage rolls made against objects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a two-handed fighter gains a +1 bonus to CMB and CMD on sunder attempts and on damage rolls made against objects. These bonuses increase by +1 for every four levels beyond 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1

- **Archetype feature:** Overhand Chop (Ex)
- **Description:** At 3rd level, when a two-handed fighter makes a single attack (with the attack action or a charge) with a two-handed weapon, he adds double his Strength bonus on damage rolls.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a two-handed fighter makes a single attack (with the attack action or a charge) with a two-handed weapon, he adds double his Strength bonus on damage rolls.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Training (Ex)
- **Description:** As the fighter class feature, but the bonuses only apply when wielding two-handed melee weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** As the fighter class feature, but the bonuses only apply when wielding two-handed melee weapons.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 2

- **Archetype feature:** Backswing (Ex)
- **Description:** At 7th level, when a two-handed fighter makes a full attack with a two-handed weapon, he adds double his Strength bonus on damage rolls for all attacks after the first.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, when a two-handed fighter makes a full attack with a two-handed weapon, he adds double his Strength bonus on damage rolls for all attacks after the first.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 3

- **Archetype feature:** Piledriver (Ex)
- **Description:** At 11th level, as a standard action, a two-handed fighter can make a single melee attack with a two-handed weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, as a standard action, a two-handed fighter can make a single melee attack with a two-handed weapon. If the attack hits, he may make a bull rush or trip combat maneuver against the target of his attack as a free action that does not provoke an attack of opportunity.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 4

- **Archetype feature:** Greater Power Attack (Ex)
- **Description:** At 15th level, when using Power Attack with a two-handed melee weapon, the bonus damage from Power Attack is doubled (+100%) instead of increased by half (+50%).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, when using Power Attack with a two-handed melee weapon, the bonus damage from Power Attack is doubled (+100%) instead of increased by half (+50%).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor mastery

- **Archetype feature:** Devastating Blow (Ex)
- **Description:** At 19th level, as a standard action, a two-handed fighter may make a single melee attack with a two-handed weapon at a –5 penalty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, as a standard action, a two-handed fighter may make a single melee attack with a two-handed weapon at a –5 penalty. If the attack hits, it is treated as a critical threat. Special weapon abilities that activate only on a critical hit do not activate if this critical hit is confirmed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Shattering Strike (Ex)
- Overhand Chop (Ex)
- Weapon Training (Ex)
- Backswing (Ex)
- Piledriver (Ex)
- Greater Power Attack (Ex)
- Devastating Blow (Ex)
