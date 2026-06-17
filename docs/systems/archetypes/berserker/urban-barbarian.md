# Berserker - Urban Barbarian

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Urban Barbarian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Urban%20Barbarian
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Skills; Crowd Control (Ex); Controlled Rage (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An urban barbarian is not proficient with medium armor.
- **Detailed mechanics:**
  - **Rules text to implement:** An urban barbarian is not proficient with medium armor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skills
- **Description:** An urban barbarian does not gain Handle Animal (Cha), Knowledge (nature) (Int), or Survival (Wis) as class skills; instead, she gains Diplomacy (Cha), Knowledge (local) (Int), Knowledge (nobility) (Int), Linguistics (Int), and Profession (Wis) as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An urban barbarian does not gain Handle Animal (Cha), Knowledge (nature) (Int), or Survival (Wis) as class skills; instead, she gains Diplomacy (Cha), Knowledge (local) (Int), Knowledge (nobility) (Int), Linguistics (Int), and Profession (Wis) as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: fast movement

- **Archetype feature:** Crowd Control (Ex)
- **Description:** At 1st level, an urban barbarian gains a +1 bonus on attack rolls and a +1 dodge bonus to AC when adjacent to two or more enemies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an urban barbarian gains a +1 bonus on attack rolls and a +1 dodge bonus to AC when adjacent to two or more enemies. In addition, her movement is not impeded by crowds, and she gains a bonus equal to 1/2 her barbarian level on Intimidate checks to influence crowds.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: rage

- **Archetype feature:** Controlled Rage (Ex)
- **Description:** When an urban barbarian rages, instead of making a normal rage she applies a +4 morale bonus to her Strength, Dexterity, or Constitution.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** When an urban barbarian rages, instead of making a normal rage she applies a +4 morale bonus to her Strength, Dexterity, or Constitution. This bonus increases to +6 when she gains greater rage and +8 when she gains mighty rage. She may apply the full bonus to one ability score or may split the bonus between several scores in increments of +2. When using a controlled rage, an urban barbarian gains no bonus on Will saves, takes no penalties to AC, and can still use Intelligence-, Dexterity-, and Charisma-based skills. This ability otherwise follows the normal rules for rage.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the urban barbarian archetype: boasting taunt, clear mind, deadly accuracy, guarded stance, intimidating glare, lethal accuracy, no escape, quick reflexes, perfect clarity, sharpened accuracy, surprise accuracy, and unexpected strike.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the urban barbarian archetype: boasting taunt, clear mind, deadly accuracy, guarded stance, intimidating glare, lethal accuracy, no escape, quick reflexes, perfect clarity, sharpened accuracy, surprise accuracy, and unexpected strike.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Skills
- Crowd Control (Ex)
- Controlled Rage (Ex)
- Rage Powers
