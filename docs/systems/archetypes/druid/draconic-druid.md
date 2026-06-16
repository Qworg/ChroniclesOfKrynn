# Druid - Draconic Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Draconic Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Draconic%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Drake Companion; Dragon Sense; Resist Dragon's Might; Dragon Shape
- **Replaced / altered class features:** nature bond, wild empathy, woodland stride, venom immunity, a thousand faces, and timeless body; nature sense; resist nature’s lure

## Replacement details

### Replaces: nature bond, wild empathy, woodland stride, venom immunity, a thousand faces, and timeless body

- **Archetype feature:** Drake Companion
- **Description:** A draconic druid gains a drake companion instead of an animal companion.
- **Mechanics:**
  - Mechanics summary: A draconic druid gains a drake companion instead of an animal companion.
- **Implementation flags:**
  - Likely existing hooks: animal companion hook.

### Replaces: nature sense

- **Archetype feature:** Dragon Sense
- **Description:** A draconic druid studies dragons and their history.
- **Mechanics:**
  - Mechanics summary: A draconic druid studies dragons and their history. She gains a +2 bonus on Knowledge (arcana) and Knowledge (history) checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Dragon's Might
- **Description:** A draconic druid gains a +4 bonus on saving throws against the spells, spell-like abilities, and supernatural abilities of dragons.
- **Mechanics:**
  - Mechanics summary: A draconic druid gains a +4 bonus on saving throws against the spells, spell-like abilities, and supernatural abilities of dragons.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Drake Companion
- Dragon Sense
- Resist Dragon's Might
- Dragon Shape

