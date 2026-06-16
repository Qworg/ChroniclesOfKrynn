# Bard - Dwarven Scholar

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dwarven Scholar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dwarven%20Scholar
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Studied Insight (Ex); Dwarven Training (Ex); Bardic Performance
- **Replaced / altered class features:** Key Ability Score; Weapon and Armor Proficiencies; Versatile Performance; Inspire Courage; Suggestion

## Replacement details

### Alters: the bard’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A dwarven scholar is proficient with one weapon of her choosing with the word “dwarven” in its name, in addition to her normal weapon proficiencies.
- **Mechanics:**
  - Mechanics summary: A dwarven scholar is proficient with one weapon of her choosing with the word “dwarven” in its name, in addition to her normal weapon proficiencies. She is not proficient with shields.
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Alters: armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A dwarven scholar is proficient with one weapon of her choosing with the word “dwarven” in its name, in addition to her normal weapon proficiencies.
- **Mechanics:**
  - Mechanics summary: A dwarven scholar is proficient with one weapon of her choosing with the word “dwarven” in its name, in addition to her normal weapon proficiencies. She is not proficient with shields.
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Replaces: versatile performance

- **Archetype feature:** Dwarven Training (Ex)
- **Description:** At 2nd level, a dwarven scholar masters one aspect of dwarven combat and gains a bonus combat feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a dwarven scholar masters one aspect of dwarven combat and gains a bonus combat feat. She must meet the prerequisites for this feat, but she treats her bard level as her base attack bonus (in addition to base attack bonuses gained from other classes and racial Hit Dice) for the purpose of qualifying for this feat. At 6th level and every 4 levels thereafter, she gains another bonus combat feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: inspire courage and suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A dwarven scholar gains the following type of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6.
  - Mechanics summary: A dwarven scholar gains the following type of bardic performance. War Chant (Su) : At 1st level, a dwarven scholar can use her performance to inspire the martial prowess of the ancient dwarves in her allies. The dwarven scholar selects a single combat feat she knows. Allies affected by this performance gain the benefit of this feat for as long as the performance is maintained. To be affected, an ally must be able to perceive the dwarven scholar’s performance. If a combat feat has a daily use limitation (such as Stunning Fist ), any uses of that combat feat by the dwarven scholar’s allies while using this ability counts toward the dwarven scholar’s feat’s daily limit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook, bardic performance hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Key Ability Score
- Weapon and Armor Proficiencies

## Parsed source feature headings

- Weapon and Armor Proficiency
- Studied Insight (Ex)
- Dwarven Training (Ex)
- Bardic Performance

