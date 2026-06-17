# Warrior - Spear Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Spear Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Spear%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Armor Proficiency; Balanced Stride (Ex); Spear Parry (Ex); Weapon Training (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** Class Skills; Armor Proficiencies; Bravery; Armor Training; Armor Mastery; Weapon Training; Weapon Mastery

## Implementation details

### Alters: the fighter’s class skills

- **Archetype feature:** Class Skills
- **Description:** A spear fighter adds Acrobatics to his list of class skills and removes Ride as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A spear fighter adds Acrobatics to his list of class skills and removes Ride as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: the fighter’s armor proficiencies

- **Archetype feature:** Armor Proficiency
- **Description:** A spear fighter is not proficient with heavy armor or tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A spear fighter is not proficient with heavy armor or tower shields. Instead, he gains Dodge as a bonus feat, even if he doesn’t fulfill the prerequisites, but he can’t use this feat while wearing heavy armor or using a shield.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Balanced Stride (Ex)
- **Description:** At 2nd level, the spear fighter gains a +1 bonus on Acrobatics checks to avoid attacks of opportunity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the spear fighter gains a +1 bonus on Acrobatics checks to avoid attacks of opportunity. This bonus increases by 1 for every 4 levels he has beyond 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1, 2, 3, and 4, and armor mastery

- **Archetype feature:** Spear Parry (Ex)
- **Description:** At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 19.
  - **Rules text to implement:** At 3rd level, a spear fighter learns to parry his opponents’ attacks with his spear. This functions as a swashbuckler’s opportune parry and riposte deed except as noted below. The spear fighter must use a weapon from the spears weapon group to perform the parry. He doesn’t need panache to parry an attack or to make an attack against a creature whose attack he has parried; instead, he takes a cumulative –4 penalty on all attacks (including further parry attempts) until the end of his next turn. At 7th, 11th, and 15th levels, the penalty decreases by 1. At 19th level, a spear fighter can use spear parry without penalty.
- **Implementation flags:**
  - panache subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 5th level, a spear fighter must choose the spears weapon group for the weapon training class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a spear fighter must choose the spears weapon group for the weapon training class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Mastery (Ex)
- **Description:** At 20th level, a spear fighter must choose a weapon from the spears weapon group for his weapon mastery class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a spear fighter must choose a weapon from the spears weapon group for his weapon mastery class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Armor Proficiency
- Balanced Stride (Ex)
- Spear Parry (Ex)
- Weapon Training (Ex)
- Weapon Mastery (Ex)
