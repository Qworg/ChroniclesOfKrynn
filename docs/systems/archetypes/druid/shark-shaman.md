# Druid - Shark Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Shark Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Shark%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A shark shaman who chooses an animal companion must select a shark.
- **Detailed mechanics:**
  - **Rules text to implement:** A shark shaman who chooses an animal companion must select a shark. If choosing a domain, a shark shaman may choose the Animal, Death, War, or Water domain.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A shark shaman can use wild empathy with fish as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A shark shaman can use wild empathy with fish as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a shark shaman may adopt an aspect of the shark while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a shark shaman may adopt an aspect of the shark while retaining her normal form. This ability functions as the dragon shaman’s totem transformation ability, but the druid may select from the following bonuses: movement (can breathe water, swim speed 30 feet), senses (scent 30 feet, scent 90 feet in water), natural weapons (bite 1d6 for a Medium shaman), or shark skin (+2 natural armor, creatures grappling the shaman take 1 point of slashing damage per round of grapple). While using totem transformation, the shark shaman may speak normally and can cast speak with animals (fish only) at will.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a shark shaman may use summon nature’s ally I to summon a stingray and summon nature’s ally II to summon a manta ray.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a shark shaman may use summon nature’s ally I to summon a stingray and summon nature’s ally II to summon a manta ray. She may cast summon nature’s ally as a standard action when summoning rays and sharks, and summond rays and sharks gain a number of temporary hit points equal to her druid level. This ability otherwise functions as the dragon shaman’s totemic summons ability.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a shark shaman’s wild shape ability functions at her druid level –2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a shark shaman’s wild shape ability functions at her druid level –2. If she takes on the form of a shark, she instead uses her druid level +2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a shark shaman gains one of the following bonus feats: Bleeding Critical, Improved Initiative, Lightning Reflexes, Self-Sufficient, or Skill Focus (Swim).
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every 4 levels thereafter, a shark shaman gains one of the following bonus feats: Bleeding Critical, Improved Initiative, Lightning Reflexes, Self-Sufficient, or Skill Focus (Swim). She must meet prerequisites for these bonus feats.
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
