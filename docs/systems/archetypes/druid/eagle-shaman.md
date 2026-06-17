# Druid - Eagle Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Eagle Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Eagle%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** An eagle shaman who chooses an animal companion must select a bird (eagle).
- **Detailed mechanics:**
  - **Rules text to implement:** An eagle shaman who chooses an animal companion must select a bird (eagle). If choosing a domain, the eagle shaman must choose from the Air, Animal, Nobility, and Weather domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** An eagle shaman can use wild empathy with birds as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An eagle shaman can use wild empathy with birds as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, an eagle shaman may adopt an aspect of the eagle while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 5.
  - **Rules text to implement:** At 2nd level, an eagle shaman may adopt an aspect of the eagle while retaining her normal form. This ability functions as the bear shaman ability, but the druid may select from the following bonuses: movement (fly speed 30 feet [average], the druid must be 5th level to select this bonus), senses (low-light vision, +4 racial bonus to Perception), or natural weapons (bite [1d4], 2 talons [1d4] for a Medium shaman). While using totem transformation, the eagle shaman may speak normally and can cast speak with animals (birds only) at will.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, an eagle shaman may cast summon nature’s ally as a standard action when summoning eagles, rocs, and giant eagles (added to the 4th-level list), and these summoned creatures gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 4.
  - **Rules text to implement:** At 5th level, an eagle shaman may cast summon nature’s ally as a standard action when summoning eagles, rocs, and giant eagles (added to the 4th-level list), and these summoned creatures gain temporary hit points equal to her druid level. This ability otherwise functions as the bear shaman ability.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, an eagle shaman’s wild shape ability functions at her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, an eagle shaman’s wild shape ability functions at her druid level – 2. If she takes on the form of an eagle or roc, she instead uses her druid level + 2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, an eagle shaman gains one of the following bonus feats: Flyby Attack, Improved Lightning Reflexes, Lightning Reflexes, Skill Focus (Perception), or Wind Stance.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every 4 levels thereafter, an eagle shaman gains one of the following bonus feats: Flyby Attack, Improved Lightning Reflexes, Lightning Reflexes, Skill Focus (Perception), or Wind Stance. She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Bonus Feat
