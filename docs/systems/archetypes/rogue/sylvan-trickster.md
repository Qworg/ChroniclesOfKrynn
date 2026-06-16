# Rogue - Sylvan Trickster

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sylvan Trickster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sylvan%20Trickster
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Wild Empathy (Ex); Fey Tricks; Resist Nature’s Lure (Ex); Fey Resistance (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trapfinding; Rogue Talents; Uncanny Dodge; Improved Uncanny Dodge

## Replacement details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A sylvan trickster adds Knowledge (nature) to her list of class skills and learns Sylvan as a bonus language.
- **Mechanics:**
  - Mechanics summary: A sylvan trickster adds Knowledge (nature) to her list of class skills and learns Sylvan as a bonus language. She does not gain Knowledge (dungeoneering) as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: trapfinding

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A sylvan trickster can improve an animal’s attitude.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sylvan trickster can improve an animal’s attitude. This ability functions as the druid ability of the same name, using the sylvan trickster’s rogue level as her effective druid level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: rogue talents

- **Archetype feature:** Fey Tricks
- **Description:** A sylvan trickster can select a witch hex in place of a rogue talent.
- **Mechanics:**
  - Level hooks: 10, 18.
  - Mechanics summary: A sylvan trickster can select a witch hex in place of a rogue talent. At 10th level, the sylvan trickster can select a hex or major hex in place of a rogue talent. At 18th level, a sylvan trickster can select a hex, major hex, or grand hex in place of a rogue talent. She cannot select any hex more than once.
- **Implementation flags:**
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: uncanny dodge

- **Archetype feature:** Resist Nature’s Lure (Ex)
- **Description:** At 4th level, a sylvan trickster gains resist nature’s lure as the druid ability of the same name.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a sylvan trickster gains resist nature’s lure as the druid ability of the same name.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: improved uncanny dodge

- **Archetype feature:** Fey Resistance (Ex)
- **Description:** At 8th level, a sylvan trickster gains DR 2/cold iron.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8, 11, 20.
  - Mechanics summary: At 8th level, a sylvan trickster gains DR 2/cold iron. At 11th level and every 3 levels thereafter, this damage reduction increases by 2 (to a maximum of DR 10/cold iron at 20th level).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Class Skills
- Wild Empathy (Ex)
- Fey Tricks
- Resist Nature’s Lure (Ex)
- Fey Resistance (Ex)
- Rogue Talents
- Advanced Talents

