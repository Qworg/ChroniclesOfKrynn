# Rogue - Sniper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sniper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sniper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Accuracy (Ex); Deadly Range (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Accuracy (Ex)
- **Description:** At 1st level, a sniper halves all range increment penalties when making ranged attacks with a bow or crossbow.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a sniper halves all range increment penalties when making ranged attacks with a bow or crossbow.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Deadly Range (Ex)
- **Description:** At 3rd level, a sniper increases the range at which she can apply her sneak attack damage by 10 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a sniper increases the range at which she can apply her sneak attack damage by 10 feet. This range increases by 10 feet for every 3 levels after 3rd.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

## Parsed source feature headings

- Accuracy (Ex)
- Deadly Range (Ex)
- Rogue Talents
- Advanced Talents

