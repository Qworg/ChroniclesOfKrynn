# Berserker - Urban Barbarian

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Urban Barbarian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Urban%20Barbarian
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Skills; Crowd Control (Ex); Controlled Rage (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Crowd Control (Ex)
- **Description:** At 1st level, an urban barbarian gains a +1 bonus on attack rolls and a +1 dodge bonus to AC when adjacent to two or more enemies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an urban barbarian gains a +1 bonus on attack rolls and a +1 dodge bonus to AC when adjacent to two or more enemies. In addition, her movement is not impeded by crowds, and she gains a bonus equal to 1/2 her barbarian level on Intimidate checks to influence crowds.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Alters: rage

- **Archetype feature:** Controlled Rage (Ex)
- **Description:** When an urban barbarian rages, instead of making a normal rage she applies a +4 morale bonus to her Strength, Dexterity, or Constitution.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: When an urban barbarian rages, instead of making a normal rage she applies a +4 morale bonus to her Strength, Dexterity, or Constitution. This bonus increases to +6 when she gains greater rage and +8 when she gains mighty rage. She may apply the full bonus to one ability score or may split the bonus between several scores in increments of +2. When using a controlled rage, an urban barbarian gains no bonus on Will saves, takes no penalties to AC, and can still use Intelligence-, Dexterity-, and Charisma-based skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, rage/rage-power hook, ki/monk hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Skills
- Crowd Control (Ex)
- Controlled Rage (Ex)
- Rage Powers

