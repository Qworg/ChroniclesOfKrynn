# Druid - Bear Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Bear Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Bear%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** a thousand faces; wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A bear shaman who chooses an animal companion must select a bear.
- **Detailed mechanics:**
  - **Rules text to implement:** A bear shaman who chooses an animal companion must select a bear. If choosing a domain, the bear shaman must choose from the Animal, Earth, Protection, and Strength domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A bear shaman can use wild empathy with bears and wolverines as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A bear shaman can use wild empathy with bears and wolverines as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a bear shaman may adopt an aspect of the bear while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 7, 12.
  - **Rules text to implement:** At 2nd level, a bear shaman may adopt an aspect of the bear while retaining her normal form. She gains one of the following bonuses: movement (+10 enhancement bonus to land speed, +4 racial bonus on Swim checks), senses (low-light vision, scent), toughness (+2 natural armor bonus to AC, Endurance feat), or natural weapons (bite [1d6] and 2 claws [1d4] for a Medium shaman, +2 to CMB on grapple checks). While using totem transformation, the bear shaman may speak normally and can cast speak with animals (mammals only) at will. Using this ability is a standard action at 2nd level, a move action at 7th level, and a swift action at 12th level. The bear shaman can use this ability for a number of minutes per day equal to her druid level. These minutes do not need to be consecutive, but they must be used in 1-minute increments. This is a polymorph effect and cannot be used while the druid is using another polymorph effect, such as wild shape.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: a thousand faces

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a bear shaman may cast summon nature’s ally as a standard action when summoning bears, and summoned bears gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a bear shaman may cast summon nature’s ally as a standard action when summoning bears, and summoned bears gain temporary hit points equal to her druid level. She can apply the young template to any bear to reduce the level of the summoning spell required by one. She can also increase the level of summoning required by one in order to apply either the advanced or the giant template, or increase it by two to apply both the advanced and giant templates.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a bear shaman’s wild shape ability functions at her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a bear shaman’s wild shape ability functions at her druid level – 2. If she takes on the form of a bear, she instead uses her druid level + 2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a bear shaman gains one of the following bonus feats: Diehard, Endurance, Great Fortitude, Improved Great Fortitude, Toughness.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every 4 levels thereafter, a bear shaman gains one of the following bonus feats: Diehard, Endurance, Great Fortitude, Improved Great Fortitude, Toughness. She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Bonus Feat
