# Berserker - Drunken Brute

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Drunken Brute
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Drunken%20Brute
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Raging Drunk (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Raging Drunk (Ex)
- **Description:** While raging, the drunken brute can drink a potion, or a tankard of ale or similar quantity of alcohol, as a move action that does not provoke attacks of opportunity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** While raging, the drunken brute can drink a potion, or a tankard of ale or similar quantity of alcohol, as a move action that does not provoke attacks of opportunity. A potion has its normal effect, while an alcoholic drink allows the barbarian to maintain her rage that round without expending a round of rage for the day (instead of the alcohol’s normal effects). For each alcoholic drink consumed while raging, the barbarian is nauseated for 1 round when her rage expires, in addition to the normal fatigue that follows a rage. Tireless rage does not negate this nauseated condition but the internal fortitude rage power does.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the drunken brute archetype: boasting taunt, good for what ails you, internal fortitude*, liquid courage, moment of clarity*, roaring drunk, and staggering drunk.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the drunken brute archetype: boasting taunt, good for what ails you, internal fortitude*, liquid courage, moment of clarity*, roaring drunk, and staggering drunk.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Raging Drunk (Ex)
- Rage Powers
