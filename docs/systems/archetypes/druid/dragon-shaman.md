# Druid - Dragon Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Dragon Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Dragon%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Dragon Bite (Su); Bonus Feat
- **Replaced / altered class features:** a thousand faces; wild shape; the additional use of wild shape at 8th level; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A dragon shaman who chooses an animal companion must select a crocodile or monitor lizard.
- **Detailed mechanics:**
  - **Rules text to implement:** A dragon shaman who chooses an animal companion must select a crocodile or monitor lizard. If choosing a domain, the dragon shaman must choose from the Air, Animal, Destruction, Earth, Fire, War, and Water domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A dragon shaman can use her wild empathy ability with lizards as a full-round action with a +4 bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dragon shaman can use her wild empathy ability with lizards as a full-round action with a +4 bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a dragon shaman may adopt an aspect of the dragon while retaining her normal form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 5, 7, 12.
  - **Rules text to implement:** At 2nd level, a dragon shaman may adopt an aspect of the dragon while retaining her normal form. She gains one of the following bonuses: movement (fly speed 30 feet [average], the druid must be 5th level to select this bonus), senses (low-light vision, +4 racial bonus to Perception), toughness (+2 natural armor bonus to AC, Endurance feat), or natural weapons (bite [1d6] and 2 claws [1d4] for a Medium shaman, +2 bonus on CMB on grapple checks). While using totem transformation, the dragon shaman may speak normally and can cast speak with animals (lizards only) at will. Using this ability is a standard action at 2nd level, a move action at 7th level, and a swift action at 12th level. The dragon shaman can use this ability for a number of minutes per day equal to her druid level. These minutes do not need to be consecutive, but they must be used in 1-minute increments. This is a polymorph effect and cannot be used while the druid is using another polymorph effect, such as wild shape.
- **Implementation flags:**
  - rage/rage power subsystem.
  - wild shape subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Replaces: a thousand faces

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a dragon shaman may cast summon nature’s ally as a standard action when summoning lizards, and summoned lizards gain temporary hit points equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a dragon shaman may cast summon nature’s ally as a standard action when summoning lizards, and summoned lizards gain temporary hit points equal to her druid level. She can apply the young template to any lizard to reduce the level of the summoning spell required by one. She can also increase the level of summoning required by one in order to apply either the advanced or the giant template, or increase it by two to apply both the advanced and giant templates.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a dragon shaman’s wild shape ability functions at her druid level – 4.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a dragon shaman’s wild shape ability functions at her druid level – 4. If she takes on the form of a lizard, she instead uses her unmodified druid level.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: the additional use of wild shape at 8th level

- **Archetype feature:** Dragon Bite (Su)
- **Description:** At 8th level, a dragon shaman’s bite attack (whether using totem transformation or wild shape to take the form of a lizard) deals +1d6 points of energy damage (acid, cold, electricity, or fire).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a dragon shaman’s bite attack (whether using totem transformation or wild shape to take the form of a lizard) deals +1d6 points of energy damage (acid, cold, electricity, or fire). She chooses what kind of energy damage that she deals each time she bites.
- **Implementation flags:**
  - wild shape subsystem.
  - ki subsystem.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a dragon shaman gains one of the following bonus feats: Combat Casting, Dazzling Display, Magical Aptitude, Skill Focus (Knowledge [arcana]), and Spell Penetration.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every 4 levels thereafter, a dragon shaman gains one of the following bonus feats: Combat Casting, Dazzling Display, Magical Aptitude, Skill Focus (Knowledge [arcana]), and Spell Penetration. She must meet the prerequisites for these bonus feats.
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
- Dragon Bite (Su)
- Bonus Feat
