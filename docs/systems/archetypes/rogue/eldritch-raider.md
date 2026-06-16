# Rogue - Eldritch Raider

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Eldritch Raider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Eldritch%20Raider
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Skill Ranks per Level; Detect Magic (Sp); Eldritch Intuition (Ex); New Talents; Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the rogue talent rogues gained at 2nd level; the trap sense class feature

## Replacement details

### Replaces: the rogue talent rogues gained at 2nd level

- **Archetype feature:** Detect Magic (Sp)
- **Description:** At 2nd level, an eldritch raider gains the ability to use detect magic at will.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an eldritch raider gains the ability to use detect magic at will. The eldritch raider treats her rogue level as her caster level for this ability. This ability counts as the minor magic rogue talent for purposes of qualifying for other rogue talents.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the trap sense class feature

- **Archetype feature:** Eldritch Intuition (Ex)
- **Description:** At 3rd level, an eldritch raider gains an intuitive sense that allows her to more easily activate sorcerer and wizard spell completion and spell trigger items.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6, 9, 12, 15, 18.
  - Mechanics summary: At 3rd level, an eldritch raider gains an intuitive sense that allows her to more easily activate sorcerer and wizard spell completion and spell trigger items. She gains a +1 bonus on Use Magic Device checks for this purpose. This bonus increases to +2 at 6th level, +3 at 9th level, +4 at 12th level, +5 at 15th level, and +6 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Class Skills
- Skill Ranks per Level
- Detect Magic (Sp)
- Eldritch Intuition (Ex)
- New Talents
- Rogue Talents
- Advanced Talents

