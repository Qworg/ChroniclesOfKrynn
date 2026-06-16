# Warrior - Spear Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Spear Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Spear%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Armor Proficiency; Balanced Stride (Ex); Spear Parry (Ex); Weapon Training (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** Class Skills; Armor Proficiencies; Bravery; Armor Training; Armor Mastery; Weapon Training; Weapon Mastery

## Replacement details

### Alters: the fighter’s class skills

- **Archetype feature:** Class Skills
- **Description:** A spear fighter adds Acrobatics to his list of class skills and removes Ride as a class skill.
- **Mechanics:**
  - Mechanics summary: A spear fighter adds Acrobatics to his list of class skills and removes Ride as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: the fighter’s armor proficiencies

- **Archetype feature:** Armor Proficiency
- **Description:** A spear fighter is not proficient with heavy armor or tower shields.
- **Mechanics:**
  - Mechanics summary: A spear fighter is not proficient with heavy armor or tower shields. Instead, he gains Dodge as a bonus feat, even if he doesn’t fulfill the prerequisites, but he can’t use this feat while wearing heavy armor or using a shield.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: bravery

- **Archetype feature:** Balanced Stride (Ex)
- **Description:** At 2nd level, the spear fighter gains a +1 bonus on Acrobatics checks to avoid attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the spear fighter gains a +1 bonus on Acrobatics checks to avoid attacks of opportunity. This bonus increases by 1 for every 4 levels he has beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 1, 2, 3
- **Archetype feature:** Spear Parry (Ex)
- **Description:** At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear. This functions as a swashbuckler’s opportune parry and riposte deed except as noted below. The spear fighter must use a weapon from the spears weapon group to perform the parry. He doesn’t need panache to parry an attack or to make an attack against a creature whose attack he has parried; instead, he takes a cumulative –4 penalty on all attacks (including further parry attempts) until the end of his next turn. At 7th, 11th, and 15th levels, the penalty decreases by 1. At 19th level, a spear fighter can use spear parry without penalty.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.
  - Needs implementation review: panache resource, deed subsystem, swashbuckler class mechanics.

### Replaces: 4
- **Archetype feature:** Spear Parry (Ex)
- **Description:** At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear. This functions as a swashbuckler’s opportune parry and riposte deed except as noted below. The spear fighter must use a weapon from the spears weapon group to perform the parry. He doesn’t need panache to parry an attack or to make an attack against a creature whose attack he has parried; instead, he takes a cumulative –4 penalty on all attacks (including further parry attempts) until the end of his next turn. At 7th, 11th, and 15th levels, the penalty decreases by 1. At 19th level, a spear fighter can use spear parry without penalty.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.
  - Needs implementation review: panache resource, deed subsystem, swashbuckler class mechanics.

### Replaces: armor mastery

- **Archetype feature:** Spear Parry (Ex)
- **Description:** At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear. This functions as a swashbuckler’s opportune parry and riposte deed except as noted below. The spear fighter must use a weapon from the spears weapon group to perform the parry. He doesn’t need panache to parry an attack or to make an attack against a creature whose attack he has parried; instead, he takes a cumulative –4 penalty on all attacks (including further parry attempts) until the end of his next turn. At 7th, 11th, and 15th levels, the penalty decreases by 1. At 19th level, a spear fighter can use spear parry without penalty.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.
  - Needs implementation review: panache resource, deed subsystem, swashbuckler class mechanics.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Weapon Training
- Weapon Mastery

## Parsed source feature headings

- Class Skills
- Armor Proficiency
- Balanced Stride (Ex)
- Spear Parry (Ex)
- Weapon Training (Ex)
- Weapon Mastery (Ex)

