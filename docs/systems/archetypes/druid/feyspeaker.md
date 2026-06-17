# Druid - Feyspeaker

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Feyspeaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Feyspeaker
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Fey Magic; Fey Speech (Ex); Wild Mischief (Ex)
- **Replaced / altered class features:** nature sense and alters the druid’s base attack bonus, class skills, and skills ranks per level; the druid’s proficiency with medium armor

## Implementation details

### Alters: wild shape and spellcasting

- **Archetype feature:** Fey Magic
- **Description:** At 1st level, a feyspeaker allows the strange idylls of the fey to guide her magic.
- **Detailed mechanics:**
  - **Level hooks:** 1, 4, 2, 6.
  - **Rules text to implement:** At 1st level, a feyspeaker allows the strange idylls of the fey to guide her magic. The feyspeaker uses her Charisma score instead of her Wisdom score as her key spellcasting ability score (to determine her spell DCs, bonus spells per day, concentration checks, and so on). At 4th, 6th, 8th, 10th, 12th, 14th, 16th, and 18th levels, a feyspeaker adds one enchantment or illusion spell from the sorcerer/wizard spell list to her druid spell list as a spell of 1 level higher (for instance, at 4th level, she could add color spray as a 2nd-level druid spell). In order to select a spell, she must be of a level high enough (including the increased spell level) to cast it. Once selected, the spell cannot be changed. A feyspeaker loses the ability to spontaneously cast summon nature’s ally spells. She gains the wild shape ability at 6th level and gains all benefits related to wild shape 2 druid levels later than usual. She can never use wild shape to transform into an elemental.
- **Implementation flags:**
  - wild shape subsystem.
  - summoning subsystem.
  - archetype spell-list override.

### Replaces: nature sense and alters the druid’s base attack bonus, class skills, and skills ranks per level

- **Archetype feature:** Fey Speech (Ex)
- **Description:** At 1st level, a feyspeaker’s words carry a tiny fragment of the otherworldly power of the fey’s voices.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a feyspeaker’s words carry a tiny fragment of the otherworldly power of the fey’s voices. She gains Bluff, Diplomacy, Disguise, and Sense Motive as class skills. A feyspeaker also learns Sylvan as a bonus language. In addition, the feyspeaker gains a number of skill ranks at each level equal to 6 + her Intelligence modifier, instead of 4 + her Intelligence modifier. The feyspeaker’s base attack bonus from her druid levels is equal to half her druid level (much like a sorcerer’s base attack bonus is calculated), rather than the usual druid base attack bonus.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the druid’s proficiency with medium armor

- **Archetype feature:** Wild Mischief (Ex)
- **Description:** At 1st level, a feyspeaker can fool an animal into thinking there is food, a potential mate, or a predator nearby.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a feyspeaker can fool an animal into thinking there is food, a potential mate, or a predator nearby. This ability functions just like a Bluff check to deceive a character. To determine the result of the wild mischief check, the feyspeaker rolls 1d20 and adds her druid level and her Charisma modifier. As with Bluff checks, wild mischief checks are modified depending on the believability of the false information. A typical domestic animal is not particularly suspicious of the feyspeaker (no circumstance modifier), whereas wild animals are usually suspicious (–5 penalty on the check). To use wild mischief, the feyspeaker and the animal must be able to study each other, which means they must be within 30 feet of one another under normal conditions. Generally, influencing an animal in this way takes 1 minute, but as when influencing people, it could take more or less time. A feyspeaker can also use this ability to influence a magical beast with an Intelligence score of 1 or 2, but she takes a –4 penalty on the check.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Fey Magic
- Fey Speech (Ex)
- Wild Mischief (Ex)
