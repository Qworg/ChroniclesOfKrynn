# Bard - Dwarven Scholar

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dwarven Scholar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dwarven%20Scholar
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Studied Insight (Ex); Dwarven Training (Ex); Bardic Performance
- **Replaced / altered class features:** Key Ability Score; Weapon and Armor Proficiencies; Versatile Performance; Inspire Courage; Suggestion

## Implementation details

### Alters: the bard’s weapon and armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A dwarven scholar is proficient with one weapon of her choosing with the word “dwarven” in its name, in addition to her normal weapon proficiencies.
- **Detailed mechanics:**
  - **Rules text to implement:** A dwarven scholar is proficient with one weapon of her choosing with the word “dwarven” in its name, in addition to her normal weapon proficiencies. She is not proficient with shields.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Studied Insight (Ex)
- **Description:** A dwarven scholar uses her Wisdom modifier instead of her Charisma modifier to determine all class features and effects relating to her bard class, including her bardic performance ability, bonus spells per day, the maximum spell level she can cast, and the save DCs of her spells.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dwarven scholar uses her Wisdom modifier instead of her Charisma modifier to determine all class features and effects relating to her bard class, including her bardic performance ability, bonus spells per day, the maximum spell level she can cast, and the save DCs of her spells.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Replaces: versatile performance

- **Archetype feature:** Dwarven Training (Ex)
- **Description:** At 2nd level, a dwarven scholar masters one aspect of dwarven combat and gains a bonus combat feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, a dwarven scholar masters one aspect of dwarven combat and gains a bonus combat feat. She must meet the prerequisites for this feat, but she treats her bard level as her base attack bonus (in addition to base attack bonuses gained from other classes and racial Hit Dice) for the purpose of qualifying for this feat. At 6th level and every 4 levels thereafter, she gains another bonus combat feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: inspire courage and suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A dwarven scholar gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 6.
  - **Rules text to implement:** A dwarven scholar gains the following type of bardic performance. War Chant (Su) : At 1st level, a dwarven scholar can use her performance to inspire the martial prowess of the ancient dwarves in her allies. The dwarven scholar selects a single combat feat she knows. Allies affected by this performance gain the benefit of this feat for as long as the performance is maintained. To be affected, an ally must be able to perceive the dwarven scholar’s performance. If a combat feat has a daily use limitation (such as Stunning Fist ), any uses of that combat feat by the dwarven scholar’s allies while using this ability counts toward the dwarven scholar’s feat’s daily limit. At 6th level, the dwarven scholar may grant the benefit of two combat feats at the same time. She may use one of these feats to meet a prerequisite of the second feat. Maintaining two feats in this way requires spending 2 rounds of bardic performance every round.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Studied Insight (Ex)
- Dwarven Training (Ex)
- Bardic Performance
