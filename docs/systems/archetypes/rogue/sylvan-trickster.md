# Rogue - Sylvan Trickster

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sylvan Trickster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sylvan%20Trickster
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Wild Empathy (Ex); Fey Tricks; Resist Nature’s Lure (Ex); Fey Resistance (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trapfinding; Rogue Talents; Uncanny Dodge; Improved Uncanny Dodge

## Implementation details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A sylvan trickster adds Knowledge (nature) to her list of class skills and learns Sylvan as a bonus language.
- **Detailed mechanics:**
  - **Rules text to implement:** A sylvan trickster adds Knowledge (nature) to her list of class skills and learns Sylvan as a bonus language. She does not gain Knowledge (dungeoneering) as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trapfinding

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A sylvan trickster can improve an animal’s attitude.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sylvan trickster can improve an animal’s attitude. This ability functions as the druid ability of the same name, using the sylvan trickster’s rogue level as her effective druid level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: rogue talents

- **Archetype feature:** Fey Tricks
- **Description:** A sylvan trickster can select a witch hex in place of a rogue talent.
- **Detailed mechanics:**
  - **Level hooks:** 10, 18.
  - **Rules text to implement:** A sylvan trickster can select a witch hex in place of a rogue talent. At 10th level, the sylvan trickster can select a hex or major hex in place of a rogue talent. At 18th level, a sylvan trickster can select a hex, major hex, or grand hex in place of a rogue talent. She cannot select any hex more than once.
- **Implementation flags:**
  - hex subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Resist Nature’s Lure (Ex)
- **Description:** At 4th level, a sylvan trickster gains resist nature’s lure as the druid ability of the same name.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a sylvan trickster gains resist nature’s lure as the druid ability of the same name.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Fey Resistance (Ex)
- **Description:** At 8th level, a sylvan trickster gains DR 2/cold iron.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8, 11, 20.
  - **Rules text to implement:** At 8th level, a sylvan trickster gains DR 2/cold iron. At 11th level and every 3 levels thereafter, this damage reduction increases by 2 (to a maximum of DR 10/cold iron at 20th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the sylvan trickster archetype: camouflage, charmer, honeyed words, major magic, minor magic, survivalist, terrain mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the sylvan trickster archetype: camouflage, charmer, honeyed words, major magic, minor magic, survivalist, terrain mastery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the sylvan trickster archetype: familiar, hide in plain sight.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the sylvan trickster archetype: familiar, hide in plain sight.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Wild Empathy (Ex)
- Fey Tricks
- Resist Nature’s Lure (Ex)
- Fey Resistance (Ex)
- Rogue Talents
- Advanced Talents
