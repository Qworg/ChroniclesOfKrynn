# Paladin - Iroran Paladin

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Iroran Paladin
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Iroran%20Paladin
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skills; Confident Defense (Ex); Unarmed Strike; Aura of Law (Su); Sense Perfection (Su); Personal Trial (Su); Aura of Excellence (Su); Ki Pool (Su); Divine Body (Su); Aura of Perfection (Su)
- **Replaced / altered class features:** his proficiency with medium armor, heavy armor, and shields; aura of good; detect evil; smite evil

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skills
- **Description:** An Iroran paladin gains Acrobatics, Climb, and Swim as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An Iroran paladin gains Acrobatics, Climb, and Swim as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: his proficiency with medium armor, heavy armor, and shields

- **Archetype feature:** Confident Defense (Ex)
- **Description:** At 1st level, when wearing light or no armor and not using a shield, an Iroran paladin adds 1 point of his Charisma bonus (if any) per class level to his Dexterity bonus to his Armor Class.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when wearing light or no armor and not using a shield, an Iroran paladin adds 1 point of his Charisma bonus (if any) per class level to his Dexterity bonus to his Armor Class. If he is caught flat-footed or otherwise denied his Dexterity bonus, he also loses this bonus.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Unarmed Strike
- **Description:** At 1st level, an Iroran paladin gains Improved Unarmed Strike as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an Iroran paladin gains Improved Unarmed Strike as a bonus feat. In addition, he gains the unarmed strike monk ability, treating his monk level as half his paladin level (minimum 1) for calculating his unarmed strike damage.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of good

- **Archetype feature:** Aura of Law (Su)
- **Description:** The power of an Iroran paladin’s aura of law is equal to his class level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The power of an Iroran paladin’s aura of law is equal to his class level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: detect evil

- **Archetype feature:** Sense Perfection (Su)
- **Description:** At 1st level, at will, an Iroran paladin can detect life forces as if he were using a paladin’s detect evil class ability; however, instead of sensing evil creatures, he senses creatures that have a ki pool.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, at will, an Iroran paladin can detect life forces as if he were using a paladin’s detect evil class ability; however, instead of sensing evil creatures, he senses creatures that have a ki pool. Each such creature has an aura like a cleric of an aligned deity, and treats its current number of ki points as its Hit Dice for the purposes of this ability.
- **Implementation flags:**
  - ki subsystem.

### Replaces: smite evil

- **Archetype feature:** Personal Trial (Su)
- **Description:** Once per day, an Iroran paladin can as a swift action declare one target within line of sight as his personal trial.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 20.
  - **Rules text to implement:** Once per day, an Iroran paladin can as a swift action declare one target within line of sight as his personal trial. The Iroran paladin gains a +1 insight bonus on attack rolls and damage rolls against that creature, to his AC against attacks made by the target, and on saving throws against the target’s spells and special abilities. This bonus increases by 1 at 4th level and every 4 levels thereafter, to a maximum bonus of +6 at 20th level. The personal trial effect remains until the target of the trial is dead or the next time the paladin rests and regains daily uses of this ability. At 4th level and every three levels thereafter, the Iroran paladin can use personal trial one additional time per day.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Aura of Excellence (Su)
- **Description:** At 3rd level, an Iroran paladin is immune to any effect that would force him to reroll a die against his will or roll twice and take the lower result.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an Iroran paladin is immune to any effect that would force him to reroll a die against his will or roll twice and take the lower result. Whenever an ally within 10 feet of him would reroll a die against her will, she can roll twice and take the higher result. Whenever an ally within 10 feet would be forced to roll twice and take the lower result, she can instead roll three times and take the second-lowest result. This ability functions only while the Iroran paladin is conscious, and replaces aura of courage.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ki Pool (Su)
- **Description:** At 4th level, an Iroran paladin gains a ki pool with an effective monk level equal to his class level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an Iroran paladin gains a ki pool with an effective monk level equal to his class level. The number of points in an Iroran paladin’s ki pool is equal to 1/2 his class level + his Charisma modifier. By spending 1 point from his ki pool, he can ignore any damage reduction possessed by the target of his personal trial ability for 1 round. This ability otherwise functions as the monk ability of the same name and replaces channel positive energy.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Body (Su)
- **Description:** Upon reaching 5th level, an Iroran paladin must form a bond with a weapon, except he can only choose to enhance his unarmed strike.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** Upon reaching 5th level, an Iroran paladin must form a bond with a weapon, except he can only choose to enhance his unarmed strike. This ability otherwise functions as and replaces divine bond.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Aura of Perfection (Su)
- **Description:** At 11th level, whenever an Iroran paladin or ally within 10 feet would reroll a die and take the second result even if it is lower (via the good fortune ability of the Luck domain, for example), he can roll an additional die as part of the reroll and use the higher of the two as the result of the reroll.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, whenever an Iroran paladin or ally within 10 feet would reroll a die and take the second result even if it is lower (via the good fortune ability of the Luck domain, for example), he can roll an additional die as part of the reroll and use the higher of the two as the result of the reroll. This ability functions only while the Iroran paladin is conscious, and replaces aura of justice.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skills
- Confident Defense (Ex)
- Unarmed Strike
- Aura of Law (Su)
- Sense Perfection (Su)
- Personal Trial (Su)
- Aura of Excellence (Su)
- Ki Pool (Su)
- Divine Body (Su)
- Aura of Perfection (Su)
