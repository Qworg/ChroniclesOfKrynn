# Warrior - Two-Handed Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Two-Handed Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Two-Handed%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Shattering Strike (Ex); Overhand Chop (Ex); Weapon Training (Ex); Backswing (Ex); Piledriver (Ex); Greater Power Attack (Ex); Devastating Blow (Ex)
- **Replaced / altered class features:** bravery; armor training 1; armor training 2; armor training 3; armor training 4; armor mastery

## Replacement details

### Replaces: bravery

- **Archetype feature:** Shattering Strike (Ex)
- **Description:** At 2nd level, a two-handed fighter gains a +1 bonus to CMB and CMD on sunder attempts and on damage rolls made against objects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a two-handed fighter gains a +1 bonus to CMB and CMD on sunder attempts and on damage rolls made against objects. These bonuses increase by +1 for every four levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 1

- **Archetype feature:** Overhand Chop (Ex)
- **Description:** At 3rd level, when a two-handed fighter makes a single attack (with the attack action or a charge) with a two-handed weapon, he adds double his Strength bonus on damage rolls.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when a two-handed fighter makes a single attack (with the attack action or a charge) with a two-handed weapon, he adds double his Strength bonus on damage rolls.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 2

- **Archetype feature:** Backswing (Ex)
- **Description:** At 7th level, when a two-handed fighter makes a full attack with a two-handed weapon, he adds double his Strength bonus on damage rolls for all attacks after the first.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, when a two-handed fighter makes a full attack with a two-handed weapon, he adds double his Strength bonus on damage rolls for all attacks after the first.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 3

- **Archetype feature:** Piledriver (Ex)
- **Description:** At 11th level, as a standard action, a two-handed fighter can make a single melee attack with a two-handed weapon.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, as a standard action, a two-handed fighter can make a single melee attack with a two-handed weapon. If the attack hits, he may make a bull rush or trip combat maneuver against the target of his attack as a free action that does not provoke an attack of opportunity.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor training 4

- **Archetype feature:** Greater Power Attack (Ex)
- **Description:** At 15th level, when using Power Attack with a two-handed melee weapon, the bonus damage from Power Attack is doubled (+100%) instead of increased by half (+50%).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, when using Power Attack with a two-handed melee weapon, the bonus damage from Power Attack is doubled (+100%) instead of increased by half (+50%).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor mastery

- **Archetype feature:** Devastating Blow (Ex)
- **Description:** At 19th level, as a standard action, a two-handed fighter may make a single melee attack with a two-handed weapon at a –5 penalty.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, as a standard action, a two-handed fighter may make a single melee attack with a two-handed weapon at a –5 penalty. If the attack hits, it is treated as a critical threat.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

## Parsed source feature headings

- Shattering Strike (Ex)
- Overhand Chop (Ex)
- Weapon Training (Ex)
- Backswing (Ex)
- Piledriver (Ex)
- Greater Power Attack (Ex)
- Devastating Blow (Ex)

