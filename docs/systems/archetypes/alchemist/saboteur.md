# Alchemist - Saboteur

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Saboteur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Saboteur
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Chameleon Mutagen (Su); Saboteur Discoveries; Grand Discoveries; Discoveries
- **Replaced / altered class features:** mutagen

## Replacement details

### Replaces: mutagen

- **Archetype feature:** Chameleon Mutagen (Su)
- **Description:** At 1st level, a saboteur discovers how to create a special elixir that he can imbibe in order to heighten his ability to move undetected and his mobility at the cost of his physical might.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a saboteur discovers how to create a special elixir that he can imbibe in order to heighten his ability to move undetected and his mobility at the cost of his physical might. When consumed, the elixir causes the saboteur’s skin to change color to match the background and causes his hands and feet to secrete a sticky residue. This grants him a circumstance bonus on Stealth checks equal to half his alchemist level (minimum +1), as well as granting him a climb speed equal to half his base speed, for 10 minutes per saboteur level. In addition, while the chameleon extract is in effect, the saboteur takes a –2 penalty to his Strength.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, mutagen hook, alchemist discovery hook, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Chameleon Mutagen (Su)
- Saboteur Discoveries
- Grand Discoveries
- Discoveries

