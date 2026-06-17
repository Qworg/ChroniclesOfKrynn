# Sorcerer - Razmiran Priest

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Razmiran Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Razmiran%20Priest
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** False Piety (Ex); Lay Healer (Su); Razmiran Channel (Su)
- **Replaced / altered class features:** the priest’s Eschew Materials bonus feat; the bloodline spells gained at 3rd level and 5th level respectively; the bloodline power gained at 9th level

## Implementation details

### Replaces: the priest’s Eschew Materials bonus feat

- **Archetype feature:** False Piety (Ex)
- **Description:** At 1st level, a Razmiran priest gains Knowledge (religion) and Perform as class skills, but loses Appraise and Fly as class skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a Razmiran priest gains Knowledge (religion) and Perform as class skills, but loses Appraise and Fly as class skills. He adds half his sorcerer level to Use Magic Device checks to activate spell trigger and spell completion items that use divine spells. He gains False Focus as a bonus feat (see page 10). In addition to replacing Appraise and Fly as class skills,
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

### Replaces: the bloodline spells gained at 3rd level and 5th level respectively

- **Archetype feature:** Lay Healer (Su)
- **Description:** At 3rd level, the Razmiran priest adds aid to his list of spells known as a 2nd-level spell.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 2, 5.
  - **Rules text to implement:** At 3rd level, the Razmiran priest adds aid to his list of spells known as a 2nd-level spell. At 5th level, he adds remove disease to his list of spells known as a 3rd-level spell.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the bloodline power gained at 9th level

- **Archetype feature:** Razmiran Channel (Su)
- **Description:** At 9th level, the Razmiran priest can use his own magic to power spell completion and spell trigger items that use divine spells.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9, 1.
  - **Rules text to implement:** At 9th level, the Razmiran priest can use his own magic to power spell completion and spell trigger items that use divine spells. He expends a sorcerer spell slot that is at least 1 level higher than the level of the spell he’s trying to activate, then makes a Use Magic Device check. If he succeeds, the item’s spell occurs and the item or charge is not expended. If he fails, nothing happens. Whether he succeeds or fail, his spell slot is expended.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- False Piety (Ex)
- Lay Healer (Su)
- Razmiran Channel (Su)
