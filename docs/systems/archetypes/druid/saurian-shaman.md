# Druid - Saurian Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Saurian Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Saurian%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A saurian shaman who chooses an animal companion must select a dinosaur.
- **Detailed mechanics:**
  - **Rules text to implement:** A saurian shaman who chooses an animal companion must select a dinosaur. If choosing a domain, a saurian shaman must choose from the Animal, Destruction, Strength, and War domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A saurian shaman can use wild empathy with dinosaurs and reptiles as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A saurian shaman can use wild empathy with dinosaurs and reptiles as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a saurian shaman may adopt an aspect of the saurian while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a saurian shaman may adopt an aspect of the saurian while retaining her normal form. This ability functions as the dragon shaman’s totem transformation ability, but the druid may select from the following bonuses: movement (+10 enhancement bonus to land speed), scales (+2 natural armor bonus to AC), senses (low-light vision, scent), or natural weapons (bite [1d6], 2 claws [1d4] for a Medium druid, rake, +2 CMB to grapple). While using totem transformation, a saurian shaman may speak normally and can cast speak with animals (reptiles and dinosaurs only) at will.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a saurian shaman may cast summon nature’s ally as a standard action when summoning reptiles and dinosaurs, and these summoned creatures gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a saurian shaman may cast summon nature’s ally as a standard action when summoning reptiles and dinosaurs, and these summoned creatures gain temporary hit points equal to her druid level. This ability otherwise functions as the dragon shaman’s totemic summons ability.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a saurian shaman’s wild shape ability functions at her druid level –2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a saurian shaman’s wild shape ability functions at her druid level –2. If she takes on the form of a reptile or a dinosaur, she instead uses her druid level +2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a saurian shaman gains one of the following bonus feats: Improved Overrun, Nimble Moves, Power Attack, Skill Focus (Intimidate), or Vital Strike.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every 4 levels thereafter, a saurian shaman gains one of the following bonus feats: Improved Overrun, Nimble Moves, Power Attack, Skill Focus (Intimidate), or Vital Strike. She must meet the prerequisites for these bonus feats.
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
