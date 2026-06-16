# Bard - Hoaxer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Hoaxer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Hoaxer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Counterfeiter (Ex); Bardic Performance (Su); Misery (Ex); Versed in Curses (Ex); Curse Crafter (Ex)
- **Replaced / altered class features:** bardic knowledge; versatile performance; well-versed; lore master

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Counterfeiter (Ex)
- **Description:** A hoaxer adds half his bard level (minimum 1) on all Appraise, Bluff, and Sleight of Hand checks, as well as on Craft, Knowledge, Linguistics, Perception, and Profession checks to create or detect a counterfeit or forgery.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A hoaxer adds half his bard level (minimum 1) on all Appraise, Bluff, and Sleight of Hand checks, as well as on Craft, Knowledge, Linguistics, Perception, and Profession checks to create or detect a counterfeit or forgery. He can attempt such skill checks untrained.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: versatile performance

- **Archetype feature:** Misery (Ex)
- **Description:** At 2nd level, a hoaxer learns to take joy in the misfortune of others.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, a hoaxer learns to take joy in the misfortune of others. He gains a +1 morale bonus on attack rolls and damage rolls against creatures suffering from a curse, hex, or harmful mind-affecting effect, as well as a +1 morale bonus on Will saving throws against spells from such creatures. These bonuses increase by 1 at 5th level and every 6 bard levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: well-versed

- **Archetype feature:** Versed in Curses (Ex)
- **Description:** At 2nd level, a hoaxer gains a +4 bonus on saving throws against curses, hexes, and language-dependent effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a hoaxer gains a +4 bonus on saving throws against curses, hexes, and language-dependent effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: lore master

- **Archetype feature:** Curse Crafter (Ex)
- **Description:** At 5th level, a hoaxer learns how to craft cursed items.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a hoaxer learns how to craft cursed items. He gains one item creation feat as a bonus feat at 5th level, plus an additional item creation feat every 6 levels thereafter. He can use these feats only to craft cursed items. In addition, he can craft items that appear magical but have no true magical properties—as if permanently affected by the magic aura spell—for 50 gp.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Counterfeiter (Ex)
- Bardic Performance (Su)
- Misery (Ex)
- Versed in Curses (Ex)
- Curse Crafter (Ex)

