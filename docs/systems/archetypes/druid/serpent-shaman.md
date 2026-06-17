# Druid - Serpent Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Serpent Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Serpent%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A serpent shaman who chooses an animal companion must select a snake.
- **Detailed mechanics:**
  - **Rules text to implement:** A serpent shaman who chooses an animal companion must select a snake. If choosing a domain, the serpent shaman must choose from the Animal, Charm, Trickery, and Water domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A serpent shaman can use wild empathy with reptiles as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A serpent shaman can use wild empathy with reptiles as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a serpent shaman may adopt an aspect of the snake while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a serpent shaman may adopt an aspect of the snake while retaining her normal form. This ability functions as the bear shaman ability, but the druid may select from the following bonuses: movement (climb speed 20 feet, swim speed 20 feet), scales (+2 natural armor bonus to AC), senses (low-light vision, scent), or natural weapons (bite [1d4], poison [ frequency 1 round (6), effect 1 Con damage, Cure 1 save, Con-based DC] for a Medium druid, +2 CMB to grapple). While using totem transformation, the serpent shaman may speak normally and can cast speak with animals (reptiles only) at will.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a serpent shaman may cast summon nature’s ally as a standard action when summoning snakes, and these summoned creatures gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a serpent shaman may cast summon nature’s ally as a standard action when summoning snakes, and these summoned creatures gain temporary hit points equal to her druid level. This ability otherwise functions as the bear shaman ability.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a serpent shaman’s wild shape ability functions at her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a serpent shaman’s wild shape ability functions at her druid level – 2. If she takes on the form of a snake, she instead uses her druid level + 2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a serpent shaman gains one of the following bonus feats: Combat Expertise, Improved Feint, Skill Focus (Bluff), Stealthy, or Strike Back.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every 4 levels thereafter, a serpent shaman gains one of the following bonus feats: Combat Expertise, Improved Feint, Skill Focus (Bluff), Stealthy, or Strike Back. She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Bonus Feat
