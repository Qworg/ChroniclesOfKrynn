# Bard - Magician

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Magician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Magician
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Magical Talent (Ex); Improved Counterspell; Extended Performance (Su); Expanded Repertoire (Ex); Arcane Bond (Ex); Wand Mastery (Ex)
- **Replaced / altered class features:** bardic knowledge; countersong; well-versed; versatile performance; lore master; jack of all trades

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Magical Talent (Ex)
- **Description:** A magician gains a bonus equal to half his level on Knowledge (arcana), Spellcraft, and Use Magic Device checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A magician gains a bonus equal to half his level on Knowledge (arcana), Spellcraft, and Use Magic Device checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: countersong

- **Archetype feature:** Improved Counterspell
- **Description:** A magician gains Improved Counterspell as a bonus feat.
- **Mechanics:**
  - Mechanics summary: A magician gains Improved Counterspell as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: well-versed

- **Archetype feature:** Extended Performance (Su)
- **Description:** At 2nd level, a magician can extend the duration of bardic performance after he stops concentrating by sacrificing a spell slot as a swift action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a magician can extend the duration of bardic performance after he stops concentrating by sacrificing a spell slot as a swift action. The performance effect lingers for 1 extra round per level of the spell. Only one spell may be sacrificed per performance, and performance types that take affect after a specific number of rounds cannot be extended.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, bardic performance hook.

### Replaces: versatile performance

- **Archetype feature:** Expanded Repertoire (Ex)
- **Description:** At 2nd level and every four levels thereafter, a magician can add one spell to his spells known from the spell list of any arcane spellcasting class.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level and every four levels thereafter, a magician can add one spell to his spells known from the spell list of any arcane spellcasting class. The spell must be of a level he can cast.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: lore master

- **Archetype feature:** Arcane Bond (Ex)
- **Description:** At 5th level, a magician gains the arcane bond ability as a wizard.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a magician gains the arcane bond ability as a wizard . He may not choose a familiar or a weapon as a bonded item.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: jack of all trades

- **Archetype feature:** Wand Mastery (Ex)
- **Description:** At 10th level, when a magician uses a wand containing a spell on his spell list, he uses his Charisma bonus to set the wand’s save DC.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 16.
  - Mechanics summary: At 10th level, when a magician uses a wand containing a spell on his spell list, he uses his Charisma bonus to set the wand’s save DC. At 16th level, when using such a wand, he uses his caster level in place of the wand’s caster level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.

## Parsed source feature headings

- Bardic Performance
- Magical Talent (Ex)
- Improved Counterspell
- Extended Performance (Su)
- Expanded Repertoire (Ex)
- Arcane Bond (Ex)
- Wand Mastery (Ex)

