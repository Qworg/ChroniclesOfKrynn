# Druid - Mooncaller

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Mooncaller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Mooncaller
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Night Sight (Ex); Resist Call of the Wild (Ex); Purity of Body (Ex); Wolfsbane (Su)
- **Replaced / altered class features:** woodland stride; resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Night Sight (Ex)
- **Description:** At 2nd level, a mooncaller gains low-light vision.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a mooncaller gains low-light vision. If she already has low-light vision, she gains darkvision with a range of 30 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Call of the Wild (Ex)
- **Description:** At 4th level, a mooncaller gains a +4 bonus on saving throws to avoid confusion, daze, feeblemind, and insanity effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a mooncaller gains a +4 bonus on saving throws to avoid confusion, daze, feeblemind, and insanity effects. She also gains a +4 bonus against the exceptional, spell-like, and supernatural abilities of creatures with the shapechanger subtype.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: venom immunity

- **Archetype feature:** Purity of Body (Ex)
- **Description:** At 9th level, a mooncaller gains immunity to all diseases, including supernatural and magical diseases.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a mooncaller gains immunity to all diseases, including supernatural and magical diseases.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: a thousand faces

- **Archetype feature:** Wolfsbane (Su)
- **Description:** At 13th level, a mooncaller gains DR 3/silver, increasing to DR 4/silver at 16th level and DR 5/silver at 19th level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13, 16, 19.
  - Mechanics summary: At 13th level, a mooncaller gains DR 3/silver, increasing to DR 4/silver at 16th level and DR 5/silver at 19th level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Night Sight (Ex)
- Resist Call of the Wild (Ex)
- Purity of Body (Ex)
- Wolfsbane (Su)

