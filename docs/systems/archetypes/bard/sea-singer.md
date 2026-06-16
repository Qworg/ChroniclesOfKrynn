# Bard - Sea Singer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Sea Singer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Sea%20Singer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; World Traveler (Ex); Familiar; Sea Legs (Ex)
- **Replaced / altered class features:** bardic knowledge; versatile performance; well-versed

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** World Traveler (Ex)
- **Description:** A sea singer gains a bonus equal to half his bard level on Knowledge (geography), Knowledge (local), Knowledge (nature), and Linguistics checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: A sea singer gains a bonus equal to half his bard level on Knowledge (geography), Knowledge (local), Knowledge (nature), and Linguistics checks. He can reroll a check against one of these skills, but must take the result of the second roll even if it is worse. He can reroll one additional time per day at 5th level and every five levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: versatile performance

- **Archetype feature:** Familiar
- **Description:** At 2nd level, a sea singer acquires an exotic pet—a monkey or parrot (treat as raven)—that gains abilities as a wizard’s familiar , using the sea singer’s bard level as his wizard level.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sea singer acquires an exotic pet—a monkey or parrot (treat as raven)—that gains abilities as a wizard’s familiar , using the sea singer’s bard level as his wizard level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: well-versed

- **Archetype feature:** Sea Legs (Ex)
- **Description:** At 2nd level, a sea singer gains a +4 bonus on saving throws against air and water effects and effects that would cause the sea singer to slip, trip, or otherwise be knocked prone.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sea singer gains a +4 bonus on saving throws against air and water effects and effects that would cause the sea singer to slip, trip, or otherwise be knocked prone. He gains a +2 bonus to CMD against grapple, overrun, and trip.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Bardic Performance
- World Traveler (Ex)
- Familiar
- Sea Legs (Ex)

