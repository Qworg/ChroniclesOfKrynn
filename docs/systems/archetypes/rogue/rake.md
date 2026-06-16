# Rogue - Rake

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Rake
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Rake
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bravado’s Blade (Ex); Rake’s Smile (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Bravado’s Blade (Ex)
- **Description:** When a rake hits an opponent and deals sneak attack damage, she can forgo 1d6 points of that damage and make a free Intimidate check to demoralize the foe.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: When a rake hits an opponent and deals sneak attack damage, she can forgo 1d6 points of that damage and make a free Intimidate check to demoralize the foe. For every additional 1d6 points of sneak attack damage she forgoes, she receives a +5 circumstance bonus on this check.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, sneak attack hook.

### Replaces: trap sense

- **Archetype feature:** Rake’s Smile (Ex)
- **Description:** At 3rd level, a rake gains a +1 morale bonus on Bluff and Diplomacy checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a rake gains a +1 morale bonus on Bluff and Diplomacy checks. This bonus increases by +1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Bravado’s Blade (Ex)
- Rake’s Smile (Ex)
- Rogue Talents
- Advanced Talents

