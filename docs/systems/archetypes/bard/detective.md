# Bard - Detective

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Detective
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Detective
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Eye for Detail (Ex); Arcane Insight (Ex); Arcane Investigation
- **Replaced / altered class features:** bardic knowledge; well-versed; versatile performance

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Eye for Detail (Ex)
- **Description:** A detective gains a bonus equal to half his level on Knowledge (local), Perception, and Sense Motive checks, as well as Diplomacy checks to gather information (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A detective gains a bonus equal to half his level on Knowledge (local), Perception, and Sense Motive checks, as well as Diplomacy checks to gather information (minimum +1).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: well-versed

- **Archetype feature:** Arcane Insight (Ex)
- **Description:** At 2nd level, a detective can find and disable magical traps, like a rogue’s trapfinding ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a detective can find and disable magical traps, like a rogue’s trapfinding ability. In addition, he gains a +4 bonus on saving throws made against illusions and a +4 bonus on caster level checks and saving throws to see through disguises and protections against divination (such as magic aura , misdirection , and nondetection ).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: versatile performance

- **Archetype feature:** Arcane Investigation
- **Description:** In addition, a detective’s class spell list includes the following: 1st— detect chaos / evil / law / good ; 2nd— zone of truth ; 3rd— arcane eye , speak with dead , speak with plants ; 4th— discern lies ; 5th— prying eyes , stone tell ; 6th— discern location , find the path , greater prying eyes , moment of prescience.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: In addition, a detective’s class spell list includes the following: 1st— detect chaos / evil / law / good ; 2nd— zone of truth ; 3rd— arcane eye , speak with dead , speak with plants ; 4th— discern lies ; 5th— prying eyes , stone tell ; 6th— discern location , find the path , greater prying eyes , moment of prescience . A detective may add one of these spells or any divination spell on the bard spell list to his list of spells known at 2nd level and every four levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Bardic Performance
- Eye for Detail (Ex)
- Arcane Insight (Ex)
- Arcane Investigation

