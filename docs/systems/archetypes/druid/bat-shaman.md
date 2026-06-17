# Druid - Bat Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Bat Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Bat%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** woodland stride; wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A bat shaman who chooses an animal companion must select a bat.
- **Detailed mechanics:**
  - **Rules text to implement:** A bat shaman who chooses an animal companion must select a bat. If choosing a domain, the bat shaman must choose from Air, Animal, Darkness (Night subdomain), and Trickery (Deception subdomain).
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A bat shaman can use wild empathy with bats as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A bat shaman can use wild empathy with bats as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a bat shaman may adopt an aspect of the bat while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 5.
  - **Rules text to implement:** At 2nd level, a bat shaman may adopt an aspect of the bat while retaining her normal form. This ability functions as the ape shaman ability, but the druid may select from the following sets of bonuses and abilities: movement (fly speed 30 ft. [average]; the druid must be at least 5th level to select this bonus), natural weapons (bite [1d4 for a Medium shaman]), or senses (blindsense 20 ft.). While using totem transformation, the bat shaman may speak normally and can cast speak with animals (bats only) at will.
- **Implementation flags:**
  - rage/rage power subsystem.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a bat shaman may cast summon nature’s ally as a standard action when summoning bats, and these summoned creatures gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a bat shaman may cast summon nature’s ally as a standard action when summoning bats, and these summoned creatures gain temporary hit points equal to her druid level. This ability otherwise functions as the ape shaman ability.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a bat shaman’s wild shape ability functions at her druid level –2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a bat shaman’s wild shape ability functions at her druid level –2. If she takes on the form of a bat, she instead uses her druid level + 2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every four levels thereafter, a bat shaman gains one of the following bonus feats: Acrobatic, Agile Maneuvers, Improved Initiative, Lightning Reflexes, or Skill Focus (Perception).
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every four levels thereafter, a bat shaman gains one of the following bonus feats: Acrobatic, Agile Maneuvers, Improved Initiative, Lightning Reflexes, or Skill Focus (Perception). She must meet the prerequisites for these bonus feats.
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
