# Bard - Studious Librarian

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Studious Librarian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Studious%20Librarian
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Scribe Scroll; Comparative Arcane Studies (Su); Critical Research Focus (Ex); Perfect Recollection (Ex); One with the Library (Ex)
- **Replaced / altered class features:** distraction; suggestion and jack-of-all-trades; dirge of doom; mass suggestion; deadly performance

## Replacement details

### Replaces: distraction

- **Archetype feature:** Scribe Scroll
- **Description:** A studious librarian gains Scribe Scroll as a bonus feat.
- **Mechanics:**
  - Mechanics summary: A studious librarian gains Scribe Scroll as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: suggestion and jack-of-all-trades

- **Archetype feature:** Comparative Arcane Studies (Su)
- **Description:** At 6th level, the studious librarian is exposed to a wide variety of magical writing, and can use his own magic to duplicate spells from other classes’ spell lists.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10, 18.
  - Mechanics summary: At 6th level, the studious librarian is exposed to a wide variety of magical writing, and can use his own magic to duplicate spells from other classes’ spell lists. Once per day, a studious librarian can cast any spell from the bard , sorcerer/wizard , or witch spell lists from a scroll or spellbook in hand as if it were one of his bard spells known, expending a bard spell slot of the same spell level to cast the desired spell. Casting a spell from a scroll this way does not cause the spell to vanish from the scroll. A spell cast in this way cannot be modified by metamagic. The studious librarian gains one additional daily use of this ability at 10th level and again every 4 bard levels thereafter, to a maximum of four times per day at 18th level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: dirge of doom

- **Archetype feature:** Critical Research Focus (Ex)
- **Description:** At 8th level, the studious librarian threatens a critical hit on a Research check ( Ultimate Intrigue 148 ) with a roll of 18, 19, or 20.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, the studious librarian threatens a critical hit on a Research check ( Ultimate Intrigue 148 ) with a roll of 18, 19, or 20. He gains a +4 bonus on Research checks to confirm a critical hit.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: mass suggestion

- **Archetype feature:** Perfect Recollection (Ex)
- **Description:** At 19th level, the studious librarian can always take 20 on Knowledge checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, the studious librarian can always take 20 on Knowledge checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: deadly performance

- **Archetype feature:** One with the Library (Ex)
- **Description:** At 20th level, the studious librarian can replace one of her spells known with any bard spell from a scroll once per day by studying the scroll for 1 hour.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, the studious librarian can replace one of her spells known with any bard spell from a scroll once per day by studying the scroll for 1 hour. Doing so erases the spell from the scroll.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Scribe Scroll
- Comparative Arcane Studies (Su)
- Critical Research Focus (Ex)
- Perfect Recollection (Ex)
- One with the Library (Ex)

