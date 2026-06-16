# Warrior - Lore Warden

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Lore Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Lore%20Warden
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Scholastic (Ex); Skill Over Strength (Ex); Swords Secret (Ex)
- **Replaced / altered class features:** the fighter’s proficiency with medium armor, heavy armor, and shields; bravery and the fighter bonus feat gained at 2nd level

## Replacement details

### Replaces: the fighter’s proficiency with medium armor, heavy armor, and shields

- **Archetype feature:** Scholastic (Ex)
- **Description:** A lore warden gains 2 additional skill ranks each level.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A lore warden gains 2 additional skill ranks each level. These ranks must be spent on Intelligence-based skills. All Craft and Knowledge skills are class skills for lore wardens, as are Linguistics and Spellcraft.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

### Replaces: bravery

- **Archetype feature:** Skill Over Strength (Ex)
- **Description:** At 2nd level, a lore warden qualifies for feats and other abilities as though she had the Combat Expertise feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6, 10.
  - Mechanics summary: At 2nd level, a lore warden qualifies for feats and other abilities as though she had the Combat Expertise feat. At 6th level, she gains Combat Expertise as a bonus feat, even if she would not normally qualify for the feat. If she already has Combat Expertise, she instead gains any one combat feat that includes Combat Expertise as a prerequisite (and for which she otherwise qualifies). At 10th level, she can treat her base attack bonus as though it were 2 higher for the purpose of calculating the effects of Combat Expertise.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the fighter bonus feat gained at 2nd level

- **Archetype feature:** Skill Over Strength (Ex)
- **Description:** At 2nd level, a lore warden qualifies for feats and other abilities as though she had the Combat Expertise feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6, 10.
  - Mechanics summary: At 2nd level, a lore warden qualifies for feats and other abilities as though she had the Combat Expertise feat. At 6th level, she gains Combat Expertise as a bonus feat, even if she would not normally qualify for the feat. If she already has Combat Expertise, she instead gains any one combat feat that includes Combat Expertise as a prerequisite (and for which she otherwise qualifies). At 10th level, she can treat her base attack bonus as though it were 2 higher for the purpose of calculating the effects of Combat Expertise.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: armor training

- **Archetype feature:** Swords Secret (Ex)
- **Description:** A lore warden learns specialized techniques that help her to quickly analyze and defeat her foes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 11, 19, 15.
  - Mechanics summary: A lore warden learns specialized techniques that help her to quickly analyze and defeat her foes. At 3rd level, a lore warden gains one swords secret, and she gains an additional swords secret for every 4 fighter levels gained after 3rd. Except where noted, a lore warden cannot select the same swords secret more than once. Exploit Weakness (Ex) : The lore warden adds one-third her class level on attack rolls to confirm critical hits. At 11th level, whenever she confirms a critical hit, her weapon attacks ignore the first 5 points of damage reduction or hardness the target has until the end of her next turn. At 19th level, the lore warden can automatically confirm a critical hit once per round when she threatens a critical hit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: armor mastery

- **Archetype feature:** Swords Secret (Ex)
- **Description:** A lore warden learns specialized techniques that help her to quickly analyze and defeat her foes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 11, 19, 15.
  - Mechanics summary: A lore warden learns specialized techniques that help her to quickly analyze and defeat her foes. At 3rd level, a lore warden gains one swords secret, and she gains an additional swords secret for every 4 fighter levels gained after 3rd. Except where noted, a lore warden cannot select the same swords secret more than once. Exploit Weakness (Ex) : The lore warden adds one-third her class level on attack rolls to confirm critical hits. At 11th level, whenever she confirms a critical hit, her weapon attacks ignore the first 5 points of damage reduction or hardness the target has until the end of her next turn. At 19th level, the lore warden can automatically confirm a critical hit once per round when she threatens a critical hit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Scholastic (Ex)
- Skill Over Strength (Ex)
- Swords Secret (Ex)

