# Sorcerer - Wishcrafter

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Wishcrafter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Wishcrafter
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Wishbound Arcana (Su); Expanded Wishcraft; Heart’s Desire (Su); Twisted Wish (Su); Perfect Wishcraft (Su)
- **Replaced / altered class features:** bloodline arcana; the bloodline bonus feat gained at 7th level; the bloodline bonus feat gained at 13th level; the bloodline bonus feat gained at 19th level

## Implementation details

### Replaces: bloodline arcana

- **Archetype feature:** Wishbound Arcana (Su)
- **Description:** At 1st level, the wishcrafter can use the wishes of non-genie creatures other than herself in place of the normal verbal components of her spells.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the wishcrafter can use the wishes of non-genie creatures other than herself in place of the normal verbal components of her spells. A creature can make a wish as a free action at any time, even during the wishcrafter’s turn. The wishcrafter must be able to hear and understand a wish in order to use it as a spell component. A spell that doesn’t normally have a verbal component gains one when cast using this ability. A wish doesn’t need to mention the name of a specific spell, but must describe an outcome that can be accomplished by casting a spell the wishcrafter knows (for example, wishing to be bigger could supply the verbal component for enlarge person ). A wishcrafter gains a +1 bonus to her caster level when using a creature’s wish as a verbal component in this manner, but cannot include herself as a target of such spells. She can be affected by such a spell if it affects an area rather than a target or targets. A wishcrafter is under no compulsion to grant a creature’s wish. Once the wishcrafter grants a creature’s wish using this ability, she cannot use this ability to grant that creature any further wishes for 24 hours.
- **Implementation flags:**
  - crafting subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Expanded Wishcraft
- **Description:** At 3rd level and every 2 levels thereafter, the wishcrafter grows more adept at altering reality to fit the whims of others.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level and every 2 levels thereafter, the wishcrafter grows more adept at altering reality to fit the whims of others. She may add an additional spell selected from the sorcerer/wizard spell list to her list of spells known. This spell must be one level lower than the highest-level spell she can cast. A wishcrafter can only use these spells in conjunction with her wishbound arcana ability. For example, if she used this ability to learn cat’s grace, she can only cast it when another creature wishes for it, and can’t cast it on herself because it is a targeted spell. She cannot use these spells to craft or recharge magic items. These bonus spells replace the bloodline spells gained by the sorcerer’s bloodline.
- **Implementation flags:**
  - archetype spell-list override.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: the bloodline bonus feat gained at 7th level

- **Archetype feature:** Heart’s Desire (Su)
- **Description:** At 7th level, as a swift action, a wishcrafter can force a single creature within 30 feet to confess its deepest desire.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, as a swift action, a wishcrafter can force a single creature within 30 feet to confess its deepest desire. The target receives a Will save to negate this effect (DC 10 + 1/2 the wishcrafter’s level + the wishcrafter’s Charisma modifier). On a failed save, the creature must immediately wish aloud in a clear voice for something it truly desires, allowing the wishcrafter to activate her wishbound arcana ability if she knows a spell that can fulfill that wish. This is a mind-affecting effect. Regardless of whether the save is successful, a creature cannot be the target of the same wishcrafter’s heart’s desire ability again for 24 hours. The wishcrafter can use this ability a number of times per day equal to her Charisma bonus.
- **Implementation flags:**
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: the bloodline bonus feat gained at 13th level

- **Archetype feature:** Twisted Wish (Su)
- **Description:** At 13th level, a wishcrafter becomes adept at corrupting wishes to negatively affect the creature that wished them.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a wishcrafter becomes adept at corrupting wishes to negatively affect the creature that wished them. When a wishcrafter affects a creature with a spell using its wish as a spell component, she may twist the wish, applying a –4 penalty to the creature’s saving throws against the spell. The effects of wishes twisted this way are difficult to remove; the DC of caster level checks to dispel them increases by 5.
- **Implementation flags:**
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: the bloodline bonus feat gained at 19th level

- **Archetype feature:** Perfect Wishcraft (Su)
- **Description:** At 19th level, the wishcrafter perfects her ability to manipulate reality.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, the wishcrafter perfects her ability to manipulate reality. Once per day, she may cast any spell on the sorcerer/wizard spell list as if it were on her list of spells known. Using this ability otherwise has all of the benefits and limitations of the wishbound arcana ability.
- **Implementation flags:**
  - archetype spell-list override.
  - crafting subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Wishbound Arcana (Su)
- Expanded Wishcraft
- Heart’s Desire (Su)
- Twisted Wish (Su)
- Perfect Wishcraft (Su)
