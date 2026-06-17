# Druid - Ape Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Ape Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Ape%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** woodland stride; a thousand faces; wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** An ape shaman who chooses an animal companion must select an ape or related primate.
- **Detailed mechanics:**
  - **Rules text to implement:** An ape shaman who chooses an animal companion must select an ape or related primate. If choosing a domain, the ape shaman must choose from the Animal, Community (Family subdomain), Destruction (Rage subdomain), and Strength domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** An ape shaman can use wild empathy with apes and other primates as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An ape shaman can use wild empathy with apes and other primates as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, an ape shaman may adopt an aspect of the ape while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 7, 12.
  - **Rules text to implement:** At 2nd level, an ape shaman may adopt an aspect of the ape while retaining her normal form. The druid gains one of the following sets of bonuses and abilities: movement (climb speed 20 ft., +4 racial bonus on Climb checks), senses (low-light vision, scent), natural weapons (2 slams [1d6 for a Medium shaman], +2 on combat maneuver checks to grapple), or toughness (+2 natural armor bonus to AC, Endurance feat). While using totem transformation, the ape shaman may speak normally and can cast speak with animals (primates only) at will. Using this ability is a standard action at 2nd level, a move action at 7th level, and a swift action at 12th level. The ape shaman can use this ability for a number of minutes per day equal to her druid level. These minutes do not need to be consecutive, but they must be used in 1-minute increments. This is a polymorph effect and cannot be used while the druid is using another polymorph effect, such as wild shape.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: a thousand faces

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, an ape shaman may cast summon nature’s ally as a standard action when summoning primates, and these summoned creatures gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, an ape shaman may cast summon nature’s ally as a standard action when summoning primates, and these summoned creatures gain temporary hit points equal to her druid level. She can apply the young template to any primate to reduce the level of the summoning spell required by one. She can also increase the level of summoning required by one in order to apply either the advanced or the giant template, or increase it by two to apply both the advanced and giant templates.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, an ape shaman’s wild shape ability functions at her druid level –2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, an ape shaman’s wild shape ability functions at her druid level –2. If she takes on the form of an ape, she instead uses her druid level +2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every four levels thereafter, an ape shaman gains one of the following bonus feats: Diehard, Endurance, Great Fortitude, Improved Bull Rush, and Toughness.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every four levels thereafter, an ape shaman gains one of the following bonus feats: Diehard, Endurance, Great Fortitude, Improved Bull Rush, and Toughness. She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Bonus Feat
