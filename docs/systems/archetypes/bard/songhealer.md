# Bard - Songhealer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Songhealer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Songhealer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Enhance Healing (Su); Bardic Performance
- **Replaced / altered class features:** versatile performance; frightening tune; deadly performance

## Replacement details

### Replaces: versatile performance

- **Archetype feature:** Enhance Healing (Su)
- **Description:** A number of times per day equal to his Charisma modifier, a songhealer can cause any healing effect from a spell completion or spell trigger item to function at a caster level equal to his class level.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A number of times per day equal to his Charisma modifier, a songhealer can cause any healing effect from a spell completion or spell trigger item to function at a caster level equal to his class level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: frightening tune

- **Archetype feature:** Bardic Performance
- **Description:** A songhealer gains the following type of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14, 20.
  - Mechanics summary: A songhealer gains the following type of bardic performance. Healing Performance (Su) : A bard of 14th level or higher can use his performance to create an effect equivalent to heal on a living target (or harm on an undead target), using the bard’s level as the caster level. Using this ability requires 5 rounds of continuous performance, and the target must be able to see and hear the bard throughout the performance. Funereal Ballad (Su) : A bard of 20th level or higher can use his performance to create an effect equivalent to resurrection on a dead creature, using the bard’s level as the caster level. Using this ability requires 20 rounds of continuous performance, and the target must be within 10 feet of the bard for the entire performance.
- **Implementation flags:**
  - Likely existing hooks: bardic performance hook.

### Replaces: deadly performance

- **Archetype feature:** Bardic Performance
- **Description:** A songhealer gains the following type of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14, 20.
  - Mechanics summary: A songhealer gains the following type of bardic performance. Healing Performance (Su) : A bard of 14th level or higher can use his performance to create an effect equivalent to heal on a living target (or harm on an undead target), using the bard’s level as the caster level. Using this ability requires 5 rounds of continuous performance, and the target must be able to see and hear the bard throughout the performance. Funereal Ballad (Su) : A bard of 20th level or higher can use his performance to create an effect equivalent to resurrection on a dead creature, using the bard’s level as the caster level. Using this ability requires 20 rounds of continuous performance, and the target must be within 10 feet of the bard for the entire performance.
- **Implementation flags:**
  - Likely existing hooks: bardic performance hook.

## Parsed source feature headings

- Enhance Healing (Su)
- Bardic Performance

