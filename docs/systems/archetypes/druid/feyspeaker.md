# Druid - Feyspeaker

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Feyspeaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Feyspeaker
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fey Magic; Fey Speech (Ex); Wild Mischief (Ex)
- **Replaced / altered class features:** nature sense and alters the druid’s base attack bonus, class skills, and skills ranks per level; the druid’s proficiency with medium armor

## Replacement details

### Alters: wild shape and spellcasting

- **Archetype feature:** Fey Magic
- **Description:** At 1st level, a feyspeaker allows the strange idylls of the fey to guide her magic.
- **Mechanics:**
  - Level hooks: 1, 4, 2, 6.
  - Mechanics summary: At 1st level, a feyspeaker allows the strange idylls of the fey to guide her magic. The feyspeaker uses her Charisma score instead of her Wisdom score as her key spellcasting ability score (to determine her spell DCs, bonus spells per day, concentration checks, and so on). At 4th, 6th, 8th, 10th, 12th, 14th, 16th, and 18th levels, a feyspeaker adds one enchantment or illusion spell from the sorcerer/wizard spell list to her druid spell list as a spell of 1 level higher (for instance, at 4th level, she could add color spray as a 2nd-level druid spell). In order to select a spell, she must be of a level high enough (including the increased spell level) to cast it. Once selected, the spell cannot be changed. A feyspeaker loses the ability to spontaneously cast summon nature’s ally spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, wild shape hook.

### Replaces: nature sense

- **Archetype feature:** Fey Speech (Ex)
- **Description:** At 1st level, a feyspeaker’s words carry a tiny fragment of the otherworldly power of the fey’s voices.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a feyspeaker’s words carry a tiny fragment of the otherworldly power of the fey’s voices. She gains Bluff, Diplomacy, Disguise, and Sense Motive as class skills. A feyspeaker also learns Sylvan as a bonus language. In addition, the feyspeaker gains a number of skill ranks at each level equal to 6 + her Intelligence modifier, instead of 4 + her Intelligence modifier. The feyspeaker’s base attack bonus from her druid levels is equal to half her druid level (much like a sorcerer’s base attack bonus is calculated), rather than the usual druid base attack bonus.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: alters the druid’s base attack bonus, class skills, and skills ranks per level

- **Archetype feature:** Fey Speech (Ex)
- **Description:** At 1st level, a feyspeaker’s words carry a tiny fragment of the otherworldly power of the fey’s voices.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a feyspeaker’s words carry a tiny fragment of the otherworldly power of the fey’s voices. She gains Bluff, Diplomacy, Disguise, and Sense Motive as class skills. A feyspeaker also learns Sylvan as a bonus language. In addition, the feyspeaker gains a number of skill ranks at each level equal to 6 + her Intelligence modifier, instead of 4 + her Intelligence modifier. The feyspeaker’s base attack bonus from her druid levels is equal to half her druid level (much like a sorcerer’s base attack bonus is calculated), rather than the usual druid base attack bonus.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the druid’s proficiency with medium armor

- **Archetype feature:** Wild Mischief (Ex)
- **Description:** At 1st level, a feyspeaker can fool an animal into thinking there is food, a potential mate, or a predator nearby.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a feyspeaker can fool an animal into thinking there is food, a potential mate, or a predator nearby. This ability functions just like a Bluff check to deceive a character. To determine the result of the wild mischief check, the feyspeaker rolls 1d20 and adds her druid level and her Charisma modifier. A typical domestic animal is not particularly suspicious of the feyspeaker (no circumstance modifier), whereas wild animals are usually suspicious (–5 penalty on the check). To use wild mischief, the feyspeaker and the animal must be able to study each other, which means they must be within 30 feet of one another under normal conditions. Generally, influencing an animal in this way takes 1 minute, but as when influencing people, it could take more or less time.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, ki/monk hook.

## Parsed source feature headings

- Fey Magic
- Fey Speech (Ex)
- Wild Mischief (Ex)

