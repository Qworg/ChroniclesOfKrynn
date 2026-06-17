# Warrior - Swarm Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Swarm Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Swarm%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Athletic Prowess (Ex); Mobility (Ex); Safety in Numbers (Ex); Bonus Teamwork Feats (Ex); Bonus Feats (Ex); Share Space (Ex); Strike the Underbelly (Ex); Always Underfoot (Ex); Soft Underbelly (Ex)
- **Replaced / altered class features:** bravery; the bonus combat feats the fighter normally receives at those levels; weapon training 1; weapon training 2; weapon training 3 and 4; weapon mastery

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A swarm fighter is proficient with all simple and martial weapons.
- **Detailed mechanics:**
  - **Rules text to implement:** A swarm fighter is proficient with all simple and martial weapons. She is proficient with light and medium armor, but not with shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Athletic Prowess (Ex)
- **Description:** A swarm fighter adds Acrobatics and Climb to her class skills, and gains a bonus on checks with these skills equal to 1/2 her swarm fighter level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A swarm fighter adds Acrobatics and Climb to her class skills, and gains a bonus on checks with these skills equal to 1/2 her swarm fighter level.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the bonus feat a fighter gains at first level, and can’t be replaced at a later level

- **Archetype feature:** Mobility (Ex)
- **Description:** The swarm fighter gains Mobility as a bonus feat, even if she does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The swarm fighter gains Mobility as a bonus feat, even if she does not meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Safety in Numbers (Ex)
- **Description:** A swarm fighter benefits greatly from the proximity of her allies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A swarm fighter benefits greatly from the proximity of her allies. She gains a morale bonus on saves against fear effects equal to the number of allies within 20 feet of her. This bonus can’t exceed half her level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the bonus combat feats the fighter normally receives at those levels

- **Archetype feature:** Bonus Teamwork Feats (Ex)
- **Description:** At 2nd level and every 4 levels thereafter, the swarm fighter gains a bonus Teamwork Feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level and every 4 levels thereafter, the swarm fighter gains a bonus Teamwork Feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats (Ex)
- **Description:** At 4th level, and every 4 levels thereafter, the swarm fighter gains a bonus combat feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, and every 4 levels thereafter, the swarm fighter gains a bonus combat feat. These are gained as with the fighter’s normal bonus feats class feature (but less frequently).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 1

- **Archetype feature:** Share Space (Ex)
- **Description:** At 5th level, the swarm fighter can move into the space of another creature at least one size category larger than she is.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, the swarm fighter can move into the space of another creature at least one size category larger than she is. She may end her movement in, and make attacks from, that space. She must succeed at the Acrobatics check for moving through an occupied square to move into a space occupied by an enemy. While sharing the space of another creature, she gains a +2 shield bonus to AC and a +1 circumstance bonus on Reflex saves.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Strike the Underbelly (Ex)
- **Description:** At 9th level, creatures with which the swarm fighter shares a space are denied their Dexterity bonus to Armor Class against the swam fighter’s attacks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, creatures with which the swarm fighter shares a space are denied their Dexterity bonus to Armor Class against the swam fighter’s attacks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3 and 4

- **Archetype feature:** Always Underfoot (Ex)
- **Description:** At 13th level, the swarm fighter gains Step Up as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13, 17.
  - **Rules text to implement:** At 13th level, the swarm fighter gains Step Up as a bonus feat. A creature sharing a square with the swarm fighter is considered adjacent for the purposes of this feat. At 17th level, the swarm fighter gains Following Step as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon mastery

- **Archetype feature:** Soft Underbelly (Ex)
- **Description:** At 20th level, any attacks made against creatures with which the swarm fighter shares a space automatically confirm all critical threats.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, any attacks made against creatures with which the swarm fighter shares a space automatically confirm all critical threats.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Athletic Prowess (Ex)
- Mobility (Ex)
- Safety in Numbers (Ex)
- Bonus Teamwork Feats (Ex)
- Bonus Feats (Ex)
- Share Space (Ex)
- Strike the Underbelly (Ex)
- Always Underfoot (Ex)
- Soft Underbelly (Ex)
