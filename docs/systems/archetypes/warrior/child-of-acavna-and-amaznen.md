# Warrior - Child of Acavna and Amaznen

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Child of Acavna and Amaznen
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Child%20of%20Acavna%20and%20Amaznen
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Eldritch Lore; Lore of Acavna and Amaznen (Ex); Eldritch Armor Training (Ex); Spells
- **Replaced / altered class features:** the bonus feat gained at 2nd level

## Implementation details

### Alters: the fighter’s weapon and armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A child of Acavna and Amaznen is not proficient with two-handed martial weapons or tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A child of Acavna and Amaznen is not proficient with two-handed martial weapons or tower shields.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the fighter’s skills and replaces the bonus fighter combat feat gained at 1st level

- **Archetype feature:** Eldritch Lore
- **Description:** A child of Acavna and Amaznen gains 4 skill ranks + a number of skill ranks equal to her Intelligence modifier at each level, instead of the normal 2 skill ranks + her Intelligence modifier at each level.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** A child of Acavna and Amaznen gains 4 skill ranks + a number of skill ranks equal to her Intelligence modifier at each level, instead of the normal 2 skill ranks + her Intelligence modifier at each level. Furthermore, Knowledge (arcana, religion), Linguistics, and Spellcraft are all class skills for the child of Acavna and Amaznen.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the bonus feat gained at 2nd level

- **Archetype feature:** Lore of Acavna and Amaznen (Ex)
- **Description:** At 2nd level, a child of Acavna and Amaznen is further initiated into the arcane secrets passed down from Azlant.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 0.
  - **Rules text to implement:** At 2nd level, a child of Acavna and Amaznen is further initiated into the arcane secrets passed down from Azlant. This gives her minor spellcasting abilities and access to lore collected to give her an edge against the enemies of humanity. The child of Acavna and Amaznen gains a spellbook containing 4 0-level wizard spells of her choice. She can prepare and cast these spells as a wizard, using her fighter level as her caster level. She can prepare a number of 0-level spells each day equal to 1 + 1 per 6 fighter levels. She also gains a +2 bonus on Knowledge checks relating to Azlant and the Azlanti, and on Knowledge checks to identify and learn the powers and weaknesses of aboleths, demons, serpentfolk, and undead.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: armor training

- **Archetype feature:** Eldritch Armor Training (Ex)
- **Description:** At 3rd level, a child of Acavna and Amaznen gains eldritch armor training.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 7, 11, 15.
  - **Rules text to implement:** At 3rd level, a child of Acavna and Amaznen gains eldritch armor training. This functions as armor training, except as a swift action she can also reduce the arcane spell failure chance due to armor she is wearing by 15% for any spells she casts this round. This reduction increases to 20% at 7th level, 25% at 11th level, and 30% at 15th level. In addition, if she has Arcane Armor Training or Arcane Armor Mastery, rather than having their normal effects, each of those feats increases the arcane spell failure reduction of her eldritch armor training by 10%.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: all weapon training and the bonus feats gained at 8th, 12th, 16th, and 20th level

- **Archetype feature:** Spells
- **Description:** Starting at 5th level, the spellcasting ability of a child of Acavna and Amaznen increases to allow her to cast a limited number of spells drawn from the bloodrager spell list ( Pathfinder RPG Advanced Class Guide 22).
- **Detailed mechanics:**
  - **Level hooks:** 5, 1, 20.
  - **Rules text to implement:** Starting at 5th level, the spellcasting ability of a child of Acavna and Amaznen increases to allow her to cast a limited number of spells drawn from the bloodrager spell list ( Pathfinder RPG Advanced Class Guide 22). She automatically adds to her spellbook a number of 1st-level bloodrager spells equal to 3 + her Intelligence modifier. Her caster level for these spells is equal to her fighter level, and the bloodrager class spell list is considered to be her class spell list for the purposes of meeting prerequisites and using magic items. She uses the ranger’s spells per day, but uses her Intelligence score to determine her bonus spells and spell saving throw DCs, just as a wizard does. She does not gain any other wizard abilities, such as an arcane bond or school. Each time she attains a new fighter level, she gains one bloodrager spell of her choice to add to her spellbook. The free spells must be of spell levels she can cast. She otherwise follows the rules for a wizard regarding her spellbook and learning or preparing spells.
- **Implementation flags:**
  - rage/rage power subsystem.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Eldritch Lore
- Lore of Acavna and Amaznen (Ex)
- Eldritch Armor Training (Ex)
- Spells
