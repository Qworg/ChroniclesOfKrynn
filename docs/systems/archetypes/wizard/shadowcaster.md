# Wizard - Shadowcaster

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Shadowcaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Shadowcaster
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Shadow Spells (Su); Shadowsight (Ex); Shadowy Specialization (Ex)
- **Replaced / altered class features:** arcane bond; the shadowcaster’s 5th-level wizard bonus feat; the shadowcaster’s 10th-level wizard bonus feat

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Shadow Spells (Su)
- **Description:** At 1st level, a shadowcaster uses his shadow to prepare additional spells.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 3.
  - Mechanics summary: At 1st level, a shadowcaster uses his shadow to prepare additional spells. He must spend his entire period of spell preparation in dim illumination to use this ability. He may prepare a number of additional spell levels of spells equal to the level of the highestlevel wizard spell he can cast. For example, if he can cast 6th-level wizard spells, he could prepare six 1st-level spells, two 3rd level-spells, or any similar combination that adds up to a total of six spell levels. These spells are stored in his shadow. He can only cast these spells when he is in an area of normal light or dim light.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the shadowcaster’s 5th-level wizard bonus feat

- **Archetype feature:** Shadowsight (Ex)
- **Description:** At 5th level, a shadowcaster gains darkvision 60 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a shadowcaster gains darkvision 60 feet.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the shadowcaster’s 10th-level wizard bonus feat

- **Archetype feature:** Shadowy Specialization (Ex)
- **Description:** At 10th level, when a shadowcaster casts shades , shadow conjuration , shadow evocation , and similar illusion spells that have a listed fraction of the strength of real effects, he increases the percentage of damage caused by the spell’s effect or summoned creatures by one-fifth (+20%) against creatures that make their saving throw against the effect, up to a maximum of 1..
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, when a shadowcaster casts shades , shadow conjuration , shadow evocation , and similar illusion spells that have a listed fraction of the strength of real effects, he increases the percentage of damage caused by the spell’s effect or summoned creatures by one-fifth (+20%) against creatures that make their saving throw against the effect, up to a maximum of 1... For example, shadow evocation and shadow conjuration deal 40% normal damage on a successful save instead of 20%.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

## Parsed source feature headings

- Shadow Spells (Su)
- Shadowsight (Ex)
- Shadowy Specialization (Ex)

