# Warrior - Gladiator

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Gladiator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Gladiator
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skills; Weapon and Armor Proficiency; Bonus Feats; Fame (Ex)
- **Replaced / altered class features:** bravery

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skills
- **Description:** A gladiator gains Perform (act, comedy, and dance) (Cha) as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A gladiator gains Perform (act, comedy, and dance) (Cha) as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A gladiator is not proficient with heavy armor or tower shields.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** A gladiator is not proficient with heavy armor or tower shields. Instead he gains the Performance Weapon Mastery feat at 1st level as a bonus feat. This bonus feat is in addition to the bonus feat a fighter gains at 1st level. Furthermore, a gladiator using piecemeal armor is considered to be wearing a suit of armor as long as he wearing two or three armor pieces, gaining the +1 to armor bonus but still taking the +5% chance of arcane spell failure if the pieces are mixed.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A gladiator may choose to take combat or performance feats as bonus feats.
- **Detailed mechanics:**
  - **Rules text to implement:** A gladiator may choose to take combat or performance feats as bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Fame (Ex)
- **Description:** At 2nd level, when a gladiator begins a performance combat, he always starts with at least 1 victory point.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 10.
  - **Rules text to implement:** At 2nd level, when a gladiator begins a performance combat, he always starts with at least 1 victory point. If he already has victory points, he gains 1 extra victory point. At 10th level, the gladiator starts out with at least 2 victory points. If he already has victory points, he gains 2 extra victory points.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Skills
- Weapon and Armor Proficiency
- Bonus Feats
- Fame (Ex)
