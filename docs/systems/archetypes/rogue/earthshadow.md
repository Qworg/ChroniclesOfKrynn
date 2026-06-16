# Rogue - Earthshadow

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Earthshadow
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Earthshadow
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Earthlink (Su); Earthcraft (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** evasion and the rogue talents gained at 4th, 8th, 12th, and 16th levels

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Earthlink (Su)
- **Description:** The earth grants an earthshadow swiftness and hones her senses.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: The earth grants an earthshadow swiftness and hones her senses. When an earthshadow is in direct contact with an expanse of natural earth or unworked stone that is at least as large as she is, she adds half her rogue level (minimum 1) to Acrobatics and Perception checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: evasion

- **Archetype feature:** Earthcraft (Su)
- **Description:** At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 4, 8, 12, 16.
  - Mechanics summary: At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks. At the start of each day, an earthshadow gains a pool of earthcraft points equal to half her rogue level plus her Wisdom modifier, and she can spend earthcraft points to use certain spell-like abilities. The caster level of these spell-like abilities is equal to the earthshadow’s rogue level. Earthcraft effects affect only the earthshadow, even if the spell could normally affect others. She can spend 1 earthcraft point to cast blend ( Pathfinder RPG Advanced Race Guide 29), even if she is not an elf, but this ability works only in areas of natural earth or unworked stone. At 4th level, an earthshadow can spend 2 earthcraft points to cast meld into stone .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the rogue talents gained at 4th, 8th, 12th
- **Archetype feature:** Earthcraft (Su)
- **Description:** At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 4, 8, 12, 16.
  - Mechanics summary: At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks. At the start of each day, an earthshadow gains a pool of earthcraft points equal to half her rogue level plus her Wisdom modifier, and she can spend earthcraft points to use certain spell-like abilities. The caster level of these spell-like abilities is equal to the earthshadow’s rogue level. Earthcraft effects affect only the earthshadow, even if the spell could normally affect others. She can spend 1 earthcraft point to cast blend ( Pathfinder RPG Advanced Race Guide 29), even if she is not an elf, but this ability works only in areas of natural earth or unworked stone. At 4th level, an earthshadow can spend 2 earthcraft points to cast meld into stone .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: 16th levels

- **Archetype feature:** Earthcraft (Su)
- **Description:** At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 4, 8, 12, 16.
  - Mechanics summary: At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks. At the start of each day, an earthshadow gains a pool of earthcraft points equal to half her rogue level plus her Wisdom modifier, and she can spend earthcraft points to use certain spell-like abilities. The caster level of these spell-like abilities is equal to the earthshadow’s rogue level. Earthcraft effects affect only the earthshadow, even if the spell could normally affect others. She can spend 1 earthcraft point to cast blend ( Pathfinder RPG Advanced Race Guide 29), even if she is not an elf, but this ability works only in areas of natural earth or unworked stone. At 4th level, an earthshadow can spend 2 earthcraft points to cast meld into stone .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Earthlink (Su)
- Earthcraft (Su)
- Rogue Talents
- Advanced Talents

