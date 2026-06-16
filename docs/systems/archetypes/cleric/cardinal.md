# Cleric - Cardinal

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Cardinal
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Cardinal
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Armor Proficiency; Political Skill
- **Replaced / altered class features:** the cleric’s armor proficiencies; the cleric’s spontaneous casting ability

## Replacement details

### Replaces: the cleric’s armor proficiencies

- **Archetype feature:** Armor Proficiency
- **Description:** A cardinal is proficient in light armor, but not shields.
- **Mechanics:**
  - Mechanics summary: A cardinal is proficient in light armor, but not shields.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the cleric’s spontaneous casting ability

- **Archetype feature:** Political Skill
- **Description:** A cardinal adds Bluff, Intimidate, Knowledge (geography), and Knowledge (local) to her list of class skills.
- **Mechanics:**
  - Mechanics summary: A cardinal adds Bluff, Intimidate, Knowledge (geography), and Knowledge (local) to her list of class skills. She gains a number of skill ranks equal to 6 + her Intelligence modifier at each level, instead of the normal 2 + her Intelligence modifier. However, she gains only one domain, and her base attack bonus from cleric levels is equal to half her class level (which is the same as for a sorcerer or wizard). It alters the cleric’s domains, as well as her class skills, skill ranks per level, and base attack bonus.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, cleric domain hook, ki/monk hook.

## Parsed source feature headings

- Armor Proficiency
- Political Skill

