# Bard - Songhealer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Songhealer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Songhealer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Enhance Healing (Su); Bardic Performance
- **Replaced / altered class features:** versatile performance; frightening tune; deadly performance

## Implementation details

### Replaces: versatile performance

- **Archetype feature:** Enhance Healing (Su)
- **Description:** A number of times per day equal to his Charisma modifier, a songhealer can cause any healing effect from a spell completion or spell trigger item to function at a caster level equal to his class level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A number of times per day equal to his Charisma modifier, a songhealer can cause any healing effect from a spell completion or spell trigger item to function at a caster level equal to his class level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: frightening tune

- **Archetype feature:** Bardic Performance
- **Description:** A songhealer gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14, 20.
  - **Rules text to implement:** A songhealer gains the following type of bardic performance. Healing Performance (Su) : A bard of 14th level or higher can use his performance to create an effect equivalent to heal on a living target (or harm on an undead target), using the bard’s level as the caster level. Using this ability requires 5 rounds of continuous performance, and the target must be able to see and hear the bard throughout the performance. The healing performance relies on audible and visual components. Funereal Ballad (Su) : A bard of 20th level or higher can use his performance to create an effect equivalent to resurrection on a dead creature, using the bard’s level as the caster level. Using this ability requires 20 rounds of continuous performance, and the target must be within 10 feet of the bard for the entire performance. Funereal ballad relies on audible and visual components.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: deadly performance

- **Archetype feature:** Bardic Performance
- **Description:** A songhealer gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14, 20.
  - **Rules text to implement:** A songhealer gains the following type of bardic performance. Healing Performance (Su) : A bard of 14th level or higher can use his performance to create an effect equivalent to heal on a living target (or harm on an undead target), using the bard’s level as the caster level. Using this ability requires 5 rounds of continuous performance, and the target must be able to see and hear the bard throughout the performance. The healing performance relies on audible and visual components. Funereal Ballad (Su) : A bard of 20th level or higher can use his performance to create an effect equivalent to resurrection on a dead creature, using the bard’s level as the caster level. Using this ability requires 20 rounds of continuous performance, and the target must be within 10 feet of the bard for the entire performance. Funereal ballad relies on audible and visual components.
- **Implementation flags:**
  - bardic performance subsystem.

## Parsed source feature headings

- Enhance Healing (Su)
- Bardic Performance
