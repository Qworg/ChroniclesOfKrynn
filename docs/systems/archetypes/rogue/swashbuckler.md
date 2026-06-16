# Rogue - Swashbuckler

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Swashbuckler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Swashbuckler
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Martial Training (Ex); Daring (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Martial Training (Ex)
- **Description:** At 1st level, the swashbuckler may select one martial weapon to add to her list of weapon proficiencies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the swashbuckler may select one martial weapon to add to her list of weapon proficiencies. In addition, she may take the combat trick rogue talent up to two times.
- **Implementation flags:**
  - Needs implementation review: swashbuckler class mechanics.

### Replaces: trap sense

- **Archetype feature:** Daring (Ex)
- **Description:** At 3rd level, a swashbuckler gains a +1 morale bonus on Acrobatics checks and saving throws against fear.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a swashbuckler gains a +1 morale bonus on Acrobatics checks and saving throws against fear. This bonus increases by +1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: swashbuckler class mechanics.

## Parsed source feature headings

- Martial Training (Ex)
- Daring (Ex)
- Rogue Talents
- Advanced Talents

