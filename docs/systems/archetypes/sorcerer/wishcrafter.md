# Sorcerer - Wishcrafter

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Wishcrafter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Wishcrafter
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Wishbound Arcana (Su); Expanded Wishcraft; Heart’s Desire (Su); Twisted Wish (Su); Perfect Wishcraft (Su)
- **Replaced / altered class features:** bloodline arcana; the bloodline bonus feat gained at 7th level; the bloodline bonus feat gained at 13th level; the bloodline bonus feat gained at 19th level

## Replacement details

### Replaces: bloodline arcana

- **Archetype feature:** Wishbound Arcana (Su)
- **Description:** At 1st level, the wishcrafter can use the wishes of non-genie creatures other than herself in place of the normal verbal components of her spells.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the wishcrafter can use the wishes of non-genie creatures other than herself in place of the normal verbal components of her spells. A creature can make a wish as a free action at any time, even during the wishcrafter’s turn. The wishcrafter must be able to hear and understand a wish in order to use it as a spell component. A spell that doesn’t normally have a verbal component gains one when cast using this ability. A wish doesn’t need to mention the name of a specific spell, but must describe an outcome that can be accomplished by casting a spell the wishcrafter knows (for example, wishing to be bigger could supply the verbal component for enlarge person ). A wishcrafter gains a +1 bonus to her caster level when using a creature’s wish as a verbal component in this manner, but cannot include herself as a target of such spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the bloodline bonus feat gained at 7th level

- **Archetype feature:** Heart’s Desire (Su)
- **Description:** At 7th level, as a swift action, a wishcrafter can force a single creature within 30 feet to confess its deepest desire.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, as a swift action, a wishcrafter can force a single creature within 30 feet to confess its deepest desire. The target receives a Will save to negate this effect (DC 10 + 1/2 the wishcrafter’s level + the wishcrafter’s Charisma modifier). On a failed save, the creature must immediately wish aloud in a clear voice for something it truly desires, allowing the wishcrafter to activate her wishbound arcana ability if she knows a spell that can fulfill that wish. Regardless of whether the save is successful, a creature cannot be the target of the same wishcrafter’s heart’s desire ability again for 24 hours. The wishcrafter can use this ability a number of times per day equal to her Charisma bonus.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the bloodline bonus feat gained at 13th level

- **Archetype feature:** Twisted Wish (Su)
- **Description:** At 13th level, a wishcrafter becomes adept at corrupting wishes to negatively affect the creature that wished them.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a wishcrafter becomes adept at corrupting wishes to negatively affect the creature that wished them. When a wishcrafter affects a creature with a spell using its wish as a spell component, she may twist the wish, applying a –4 penalty to the creature’s saving throws against the spell. The effects of wishes twisted this way are difficult to remove; the DC of caster level checks to dispel them increases by 5.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty, save DC calculation, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the bloodline bonus feat gained at 19th level

- **Archetype feature:** Perfect Wishcraft (Su)
- **Description:** At 19th level, the wishcrafter perfects her ability to manipulate reality.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, the wishcrafter perfects her ability to manipulate reality. Once per day, she may cast any spell on the sorcerer/wizard spell list as if it were on her list of spells known. Using this ability otherwise has all of the benefits and limitations of the wishbound arcana ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook.

## Parsed source feature headings

- Wishbound Arcana (Su)
- Expanded Wishcraft
- Heart’s Desire (Su)
- Twisted Wish (Su)
- Perfect Wishcraft (Su)

