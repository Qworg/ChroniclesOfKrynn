# Inquisitor - Green Faith Marshal

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Green Faith Marshal
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Green%20Faith%20Marshal
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Power of Nature; Wild Lore (Ex); Nature’s Ally (Sp); Wild Step (Ex)
- **Replaced / altered class features:** Domain; Stern Gaze; Monster Lore; Discern Lies; Stalwart

## Replacement details

### Alters: the inquisitor’s domain ability and replaces stern gaze

- **Archetype feature:** Power of Nature
- **Description:** A Green Faith marshal gains one domain selected from the animal and terrain domains ( Pathfinder RPG Ultimate Magic 33).
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: A Green Faith marshal gains one domain selected from the animal and terrain domains ( Pathfinder RPG Ultimate Magic 33). The 1st- though 6th-level bonus spells from this domain are added to the Green Faith marshal’s spell list.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook.

### Replaces: monster lore

- **Archetype feature:** Wild Lore (Ex)
- **Description:** A Green Faith marshal adds her Wisdom modifier to her Knowledge (nature) skill checks, in addition to her Intelligence modifier.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A Green Faith marshal adds her Wisdom modifier to her Knowledge (nature) skill checks, in addition to her Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: discern lies

- **Archetype feature:** Nature’s Ally (Sp)
- **Description:** At 5th level, a Green Faith marshal gains the ability to cast commune with nature once per week.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a Green Faith marshal gains the ability to cast commune with nature once per week.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: stalwart

- **Archetype feature:** Wild Step (Ex)
- **Description:** At 11th level, a Green Faith marshal can move through any sort of naturally occurring difficult terrain (such as natural thorns, briars, overgrown areas, and similar terrain) at her normal speed without taking damage or suffering any other impairment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a Green Faith marshal can move through any sort of naturally occurring difficult terrain (such as natural thorns, briars, overgrown areas, and similar terrain) at her normal speed without taking damage or suffering any other impairment. Terrain that is enchanted or magically manipulated to impede motion still affects her.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Power of Nature
- Wild Lore (Ex)
- Nature’s Ally (Sp)
- Wild Step (Ex)

