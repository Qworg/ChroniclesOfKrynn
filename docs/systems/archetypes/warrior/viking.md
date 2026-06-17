# Warrior - Viking

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Viking
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Viking
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Fearsome (Ex); Shield Defense (Ex); Berserker (Ex); Rage Powers (Ex)
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Bravery; Armor Training; Weapon Training; Bonus Feats

## Implementation details

### Alters: the fighter’s weapon and armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A viking is not proficient with heavy armor or tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A viking is not proficient with heavy armor or tower shields.
- **Implementation flags:**
  - ki subsystem.

### Replaces: bravery

- **Archetype feature:** Fearsome (Ex)
- **Description:** At 2nd level, a viking can attempt an Intimidate check to demoralize an opponent as a move action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 10, 18.
  - **Rules text to implement:** At 2nd level, a viking can attempt an Intimidate check to demoralize an opponent as a move action. At 10th level, she can do so as a swift action. At 18th level, she can attempt to demoralize a foe as a free action once per round.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor training

- **Archetype feature:** Shield Defense (Ex)
- **Description:** At 3rd level, a viking learns the art of fighting with a shield.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a viking learns the art of fighting with a shield. Whenever she is wearing medium, light, or no armor and using a shield, the viking’s shield bonus to AC increases by 1. At 7th, 11th, and 15th levels, this bonus increases by 1.
- **Implementation flags:**
  - ki subsystem.

### Replaces: weapon training

- **Archetype feature:** Berserker (Ex)
- **Description:** At 5th level, a viking gains the rage ability as per the barbarian class feature, and she uses her fighter level as her barbarian level for the purposes of determining her rounds of rage, qualifying for rage powers, and determining the effects of rage powers.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a viking gains the rage ability as per the barbarian class feature, and she uses her fighter level as her barbarian level for the purposes of determining her rounds of rage, qualifying for rage powers, and determining the effects of rage powers.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: the fighter’s bonus feats

- **Archetype feature:** Rage Powers (Ex)
- **Description:** At 6th level, whenever a viking gains a fighter bonus feat, she can instead gain a single rage power, as the barbarian class feature, in place of the bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, whenever a viking gains a fighter bonus feat, she can instead gain a single rage power, as the barbarian class feature, in place of the bonus feat. Once selected, these rage powers cannot be changed.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Fearsome (Ex)
- Shield Defense (Ex)
- Berserker (Ex)
- Rage Powers (Ex)
