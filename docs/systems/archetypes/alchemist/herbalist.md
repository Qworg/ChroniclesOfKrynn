# Alchemist - Herbalist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Herbalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Herbalist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Herbalism (Su); Natural Magic; Seedpods (Su)
- **Replaced / altered class features:** Alchemy; Key Ability Score; Throw Anything; Bombs; Poison Use; Poison Resistance; Poison Immunity

## Replacement details

### Alters: alchemy

- **Archetype feature:** Herbalism (Su)
- **Description:** An herbalist’s studies allow him a unique method of creating alchemical discoveries.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: An herbalist’s studies allow him a unique method of creating alchemical discoveries. He can attempt Profession (herbalist) checks in place of Craft (alchemy) checks for all purposes, and he gains a competence bonus equal to half his alchemist level on Profession (herbalist) checks to create alchemical items and to forage for and process herbs (see page 152). An herbalist uses his Wisdom score instead of his Intelligence score for all alchemist class abilities.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Alters: the alchemist’s key ability score

- **Archetype feature:** Herbalism (Su)
- **Description:** An herbalist’s studies allow him a unique method of creating alchemical discoveries.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: An herbalist’s studies allow him a unique method of creating alchemical discoveries. He can attempt Profession (herbalist) checks in place of Craft (alchemy) checks for all purposes, and he gains a competence bonus equal to half his alchemist level on Profession (herbalist) checks to create alchemical items and to forage for and process herbs (see page 152). An herbalist uses his Wisdom score instead of his Intelligence score for all alchemist class abilities.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: Throw Anything

- **Archetype feature:** Natural Magic
- **Description:** An herbalist’s study of the leshy spirit grants him access to natural magic that eludes other alchemists.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: An herbalist’s study of the leshy spirit grants him access to natural magic that eludes other alchemists. Each time he gains access to a new level of extracts (including 1st level), he can add two spells from that spell level on the druid spell list to his alchemist class spell list; these spells must target a creature or creatures or have a range of “you,” and he must still add them to his formula book as normal before he can prepare them. As always, the extracts affect the drinker as if she were the target, so offensive touch spells are a nasty trap for the drinker.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: bombs, poison use, poison resistance, and poison immunity

- **Archetype feature:** Seedpods (Su)
- **Description:** An herbalist can produce and throw seedpods as ranged touch attacks, similar to the ranged attacks of other leshys.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 1, 2, 5, 8, 10.
  - Mechanics summary: An herbalist can produce and throw seedpods as ranged touch attacks, similar to the ranged attacks of other leshys. He can create a number of seedpods each day equal to his alchemist level + his Wisdom modifier and can throw them as a standard action with a range increment of 20 feet. A seedpod deals 1d6 points of bludgeoning damage, plus an additional 1d6 points of damage at 3rd level and every 2 levels thereafter (this additional damage isn’t multiplied on a critical hit or from effects like Vital Strike ). Seedpods are considered weapons and can be selected for feats like Weapon Focus , and the herbalist can take the Extra Bombs feat to gain additional daily uses of his seedpods. His seedpods also gain one of the following additional effects unless the target succeeds at a Fortitude save (DC = 10 + half the herbalist’s alchemist level + his Wisdom modifier). At 1st level, his seedpods can deafen their target for 1 round like a leaf leshy .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, save DC calculation, alchemist bomb hook.

## Parsed source feature headings

- Herbalism (Su)
- Natural Magic
- Seedpods (Su)

