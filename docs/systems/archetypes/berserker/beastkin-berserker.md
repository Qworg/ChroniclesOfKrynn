# Berserker - Beastkin Berserker

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Beastkin Berserker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Beastkin%20Berserker
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Savage Rapport (Ex); Feral Transformation (Su)
- **Replaced / altered class features:** fast movement; the rage powers gained at 4th, 8th, and 12th levels

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Savage Rapport (Ex)
- **Description:** At 1st level, a beastkin berserker gains a spiritual connection to a specific kind of creature with the animal type (such as a badger or a triceratops).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 5.
  - **Rules text to implement:** At 1st level, a beastkin berserker gains a spiritual connection to a specific kind of creature with the animal type (such as a badger or a triceratops). She adds half her level (minimum 1) on Handle Animal, Intimidate, and Sense Motive checks involving the chosen type of animal. At 5th level and every 5 levels thereafter (10th, 15th, and 20th levels), the beastkin berserker can select an additional kind of animal to which these bonuses apply.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the rage powers gained at 4th, 8th, and 12th levels

- **Archetype feature:** Feral Transformation (Su)
- **Description:** At 4th level, when entering a rage, a beastkin berserker can take the form of a Small or Medium animal.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 8, 12.
  - **Rules text to implement:** At 4th level, when entering a rage, a beastkin berserker can take the form of a Small or Medium animal. This functions as beast shape I, except the duration is for as long as the beastkin berserker rages and the animal must be one she has chosen with her savage rapport. At 8th level, the beastkin berserker can use feral transformation to take the form of a Large or Tiny animal that she has chosen with her savage rapport. Feral transformation now acts as beast shape II. At 12th level, a beastkin berserker is able to use feral transformation to take the form of a Huge or Diminutive animal that she has chosen with her savage rapport. Feral transformation now functions as beast shape III.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.

## Parsed source feature headings

- Savage Rapport (Ex)
- Feral Transformation (Su)
