# Paladin - Knight of Coins

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Knight of Coins
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Knight%20of%20Coins
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Eye for Forgeries (Sp); Blessing of Prosperity (Su)
- **Replaced / altered class features:** Class Skills; Skill Ranks; Detect Evil; 3rd, 9th, 15th-level Mercy

## Replacement details

### Alters: the paladin’s class skills and skill ranks per level

- **Archetype feature:** Class Skills
- **Description:** A knight of coins adds Appraise, Knowledge (local), Perception, and Use Magic Device to her list of class skills.
- **Mechanics:**
  - Mechanics summary: A knight of coins adds Appraise, Knowledge (local), Perception, and Use Magic Device to her list of class skills. She gains a number of skill ranks equal to 4 + her Intelligence modifier at each level, instead of a number of skill ranks equal to 2 + her Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: detect evil

- **Archetype feature:** Eye for Forgeries (Sp)
- **Description:** At will, a knight of coins can concentrate on a single item within 30 feet as a move action.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: At will, a knight of coins can concentrate on a single item within 30 feet as a move action. When she does, the knight of coins can detect if it is magical, as per the spell detect magic . The knight of coins cannot concentrate on more than one item in this way at a time.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the mercies gained at 3rd, 9th
- **Archetype feature:** Blessing of Prosperity (Su)
- **Description:** A knight of coins is a patron of wealth and seeks to even the playing field for those who have unfair economic disadvantages.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 9.
  - Mechanics summary: A knight of coins is a patron of wealth and seeks to even the playing field for those who have unfair economic disadvantages. At 3rd level and every 6 levels thereafter, the paladin can select a blessing (see Blessings below). By expending a use of lay on hands, the knight of coins can instead grant a boon to herself or a creature touched as a standard action. A blessing of prosperity lasts up to 1 hour, though the knight of coins who bestowed it can end a blessing’s benefits early (whether it affects her or another creature) as a free action. Using this ability requires only one free hand and is a standard action, unless the knight of coins targets herself, in which case it is a swift action. If she knows multiple blessings of prosperity, the knight of coins can bestow multiple blessings on a single target as part of the action and the expenditure of a use of lay on hands required to use this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, paladin mercy hook.

### Replaces: 15th levels

- **Archetype feature:** Blessing of Prosperity (Su)
- **Description:** A knight of coins is a patron of wealth and seeks to even the playing field for those who have unfair economic disadvantages.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 9.
  - Mechanics summary: A knight of coins is a patron of wealth and seeks to even the playing field for those who have unfair economic disadvantages. At 3rd level and every 6 levels thereafter, the paladin can select a blessing (see Blessings below). By expending a use of lay on hands, the knight of coins can instead grant a boon to herself or a creature touched as a standard action. A blessing of prosperity lasts up to 1 hour, though the knight of coins who bestowed it can end a blessing’s benefits early (whether it affects her or another creature) as a free action. Using this ability requires only one free hand and is a standard action, unless the knight of coins targets herself, in which case it is a swift action. If she knows multiple blessings of prosperity, the knight of coins can bestow multiple blessings on a single target as part of the action and the expenditure of a use of lay on hands required to use this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, paladin mercy hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 3rd, 9th, 15th-level Mercy

## Parsed source feature headings

- Class Skills
- Eye for Forgeries (Sp)
- Blessing of Prosperity (Su)

