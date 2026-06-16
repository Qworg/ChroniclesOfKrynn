# Bard - Voice of the Wild

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Voice of the Wild
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Voice%20of%20the%20Wild
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Wild Knowledge (Ex); Nature Magic; Bardic Performance
- **Replaced / altered class features:** bardic knowledge; countersong, all instances of versatile performance, and jack-of-all-trades; all increments of inspire competence, dirge of doom, and inspire heroics

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Wild Knowledge (Ex)
- **Description:** At 1st level, a voice of the wild adds 1/2 his level (minimum 1) to all Knowledge (nature) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a voice of the wild adds 1/2 his level (minimum 1) to all Knowledge (nature) checks. He can use Knowledge (geography) and Knowledge (nature) untrained.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: countersong, all instances of versatile performance, and jack-of-all-trades

- **Archetype feature:** Nature Magic
- **Description:** At 1st level, a voice of the wild can select a 1st-level druid or ranger spell as a bard spell known instead of a spell from the bard spell list.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a voice of the wild can select a 1st-level druid or ranger spell as a bard spell known instead of a spell from the bard spell list. The voice of the wild can select another druid or ranger spell (of any bard spell level he can cast) at 4th, 7th, 10th, 13th, and 16th levels. If he chooses to learn a new spell in place of an old one, he can exchange a druid or ranger spell for another.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: all increments of inspire competence, dirge of doom, and inspire heroics

- **Archetype feature:** Bardic Performance
- **Description:** Voices of the wild gain the following bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 10, 17.
  - Mechanics summary: Voices of the wild gain the following bardic performance. Song of the Wild (Su) : At 3rd level, the voice of the wild can use bardic performance to grant an animal aspect to an ally, as if using the hunter’s animal focus class feature . The ally must be able to hear or see the performance. The voice of the wild uses his bard level as his hunter level for determining the effect of the animal aspect. The bard can affect a second ally with this performance at 10th level and a third at 17th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, bardic performance hook.

## Parsed source feature headings

- Wild Knowledge (Ex)
- Nature Magic
- Bardic Performance

