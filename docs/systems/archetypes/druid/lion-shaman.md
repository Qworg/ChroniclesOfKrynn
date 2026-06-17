# Druid - Lion Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Lion Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Lion%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A lion shaman who chooses an animal companion must select a lion.
- **Detailed mechanics:**
  - **Rules text to implement:** A lion shaman who chooses an animal companion must select a lion. If choosing a domain, the lion shaman must choose from the Animal, Glory, Nobility, and Sun domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A lion shaman can use wild empathy with felines as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A lion shaman can use wild empathy with felines as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a lion shaman may adopt an aspect of the lion while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a lion shaman may adopt an aspect of the lion while retaining her normal form. This ability functions as the bear shaman ability, but the druid may select from the following bonuses: movement (+20 enhancement bonus to land speed), senses (low-light vision, scent), or natural weapons (bite [1d4], 2 claws [1d4] for a Medium druid, rake, +2 CMB to grapple). While using totem transformation, the lion shaman may speak normally and can cast speak with animals (felines only) at will.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a lion shaman may cast summon nature’s ally as a standard action when summoning felines, and these summoned creatures gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a lion shaman may cast summon nature’s ally as a standard action when summoning felines, and these summoned creatures gain temporary hit points equal to her druid level. This ability otherwise functions as the bear shaman ability.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a lion shaman’s wild shape ability functions at her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a lion shaman’s wild shape ability functions at her druid level – 2. If she takes on the form of a feline, she instead uses her druid level + 2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a lion shaman gains one of the following bonus feats: Dodge, Lunge, Improved Iron Will, Iron Will, or Skill Focus (Acrobatics).
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every 4 levels thereafter, a lion shaman gains one of the following bonus feats: Dodge, Lunge, Improved Iron Will, Iron Will, or Skill Focus (Acrobatics). She must meet the prerequisites for these bonus feats.
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
