# Ranger - Ilsurian Archer

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Ilsurian Archer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Ilsurian%20Archer
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bullseye Shot (Ex); Archery Style (Ex); Vicious Aim (Ex); Iomedae’s Influence (Ex); Pinpoint Targeting (Ex); Quarry (Ex)
- **Replaced / altered class features:** track and wild empathy; all spellcasting, and the Ilsurian ranger is not considered to have a caster level; swift tracking; improved quarry

## Implementation details

### Replaces: track and wild empathy

- **Archetype feature:** Bullseye Shot (Ex)
- **Description:** At 1st level, an Ilsurian archer gains the Bullseye Shot ISG feat as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an Ilsurian archer gains the Bullseye Shot ISG feat as a bonus feat. He need not meet its prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the ranger’s combat style feat class feature

- **Archetype feature:** Archery Style (Ex)
- **Description:** At 2nd level, an Ilsurian archer must select the archery combat style.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an Ilsurian archer must select the archery combat style.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: all spellcasting, and the Ilsurian ranger is not considered to have a caster level

- **Archetype feature:** Vicious Aim (Ex)
- **Description:** At 4th level, an Ilsurian archer adds half his highest favored enemy bonus to all attack rolls and damage rolls for attacks made with ranged weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an Ilsurian archer adds half his highest favored enemy bonus to all attack rolls and damage rolls for attacks made with ranged weapons. This does not stack with his normal favored enemy bonus when targeting a creature that qualifies as a favored enemy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: swift tracking

- **Archetype feature:** Iomedae’s Influence (Ex)
- **Description:** At 8th level, an Ilsurian archer gains Weapon Focus with the longsword as a bonus feat, due to the influence the church of Iomedae has over Ilsurian causes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, an Ilsurian archer gains Weapon Focus with the longsword as a bonus feat, due to the influence the church of Iomedae has over Ilsurian causes.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: quarry

- **Archetype feature:** Pinpoint Targeting (Ex)
- **Description:** At 11th level, an Ilsurian ranger gains Pinpoint Targeting as a bonus feat, even if he does not meet its prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, an Ilsurian ranger gains Pinpoint Targeting as a bonus feat, even if he does not meet its prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: improved quarry

- **Archetype feature:** Quarry (Ex)
- **Description:** At 19th level, an Ilsurian ranger gains the quarry class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, an Ilsurian ranger gains the quarry class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bullseye Shot (Ex)
- Archery Style (Ex)
- Vicious Aim (Ex)
- Iomedae’s Influence (Ex)
- Pinpoint Targeting (Ex)
- Quarry (Ex)
