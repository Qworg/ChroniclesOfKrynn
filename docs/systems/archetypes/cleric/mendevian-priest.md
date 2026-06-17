# Cleric - Mendevian Priest

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Mendevian Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Mendevian%20Priest
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Diminished Spellcasting; Demonic Knowledge (Ex); Teamwork Feat
- **Replaced / altered class features:** Domains

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A Mendevian priest is proficient with all simple weapons, light armor, medium armor, heavy armor, shields (except tower shields), and the favored weapon of her deity.
- **Detailed mechanics:**
  - **Rules text to implement:** A Mendevian priest is proficient with all simple weapons, light armor, medium armor, heavy armor, shields (except tower shields), and the favored weapon of her deity.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Spellcasting
- **Description:** A Mendevian priest chooses only one domain from her deity’s list of domains rather than the normal two domains.
- **Detailed mechanics:**
  - **Rules text to implement:** A Mendevian priest chooses only one domain from her deity’s list of domains rather than the normal two domains. In all other respects, this works like and replaces the standard cleric domain ability.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Demonic Knowledge (Ex)
- **Description:** At 1st level, when making Knowledge (planes) checks regarding demons, demonic cults, and their magic, a Mendevian priest gains a bonus on the check equal to half her class level (minimum +1) and can make these Knowledge skill checks untrained.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when making Knowledge (planes) checks regarding demons, demonic cults, and their magic, a Mendevian priest gains a bonus on the check equal to half her class level (minimum +1) and can make these Knowledge skill checks untrained.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Teamwork Feat
- **Description:** At 4th level and 8th level, the Mendevian priest gains a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level and 8th level, the Mendevian priest gains a bonus feat. This must be a teamwork feat, Alignment Channel, Greater Spell Penetration, Leadership, or Spell Penetration. The cleric must meet the prerequisites of the selected bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Diminished Spellcasting
- Demonic Knowledge (Ex)
- Teamwork Feat
