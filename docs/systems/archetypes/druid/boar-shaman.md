# Druid - Boar Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Boar Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Boar%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** woodland stride; wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A boar shaman who chooses an animal companion must select a boar.
- **Detailed mechanics:**
  - **Rules text to implement:** A boar shaman who chooses an animal companion must select a boar. If choosing a domain, the boar shaman must choose from the Animal, Destruction (Rage), Protection, and Strength domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A boar shaman can use wild empathy with porcine creatures as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A boar shaman can use wild empathy with porcine creatures as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a boar shaman may adopt an aspect of the boar while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a boar shaman may adopt an aspect of the boar while retaining her normal form. This ability functions as the ape shaman ability, but the druid may select from the following sets of bonuses and abilities: movement (+10 enhancement bonus to land speed), senses (low-light vision, scent), natural weapons (gore [1d8 for a Medium druid], +2 on combat maneuver checks to overrun), or toughness (+2 natural armor bonus to AC, Endurance feat). While using totem transformation, the boar shaman may speak normally and can cast speak with animals (boars and related animals only) at will.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a boar shaman may cast summon nature’s ally as a standard action when summoning boars or other porcine creatures, and these summoned creatures gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a boar shaman may cast summon nature’s ally as a standard action when summoning boars or other porcine creatures, and these summoned creatures gain temporary hit points equal to her druid level. This ability otherwise functions as the ape shaman ability.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a boar shaman’s wild shape ability functions at her druid level –2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a boar shaman’s wild shape ability functions at her druid level –2. If she takes on the form of a boar, she instead uses her druid level +2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every four levels thereafter, a boar shaman gains one of the following bonus feats: Bleeding Critical, Blind-Fight, Diehard, or Improved Overrun.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every four levels thereafter, a boar shaman gains one of the following bonus feats: Bleeding Critical, Blind-Fight, Diehard, or Improved Overrun. She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Bonus Feat
