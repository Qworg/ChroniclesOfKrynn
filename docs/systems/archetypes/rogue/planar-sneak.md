# Rogue - Planar Sneak

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Planar Sneak
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Planar%20Sneak
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Planar Sense (Ex); Elemental Execution (Su); Rogue Talents; Advanced Rogue Talents
- **Replaced / altered class features:** trap sense; uncanny dodge and improved uncanny dodge

## Replacement details

### Replaces: trap sense

- **Archetype feature:** Planar Sense (Ex)
- **Description:** At 3rd level, a planar sneak gains a +1 bonus on saving throws against all effects with the air, chaos, earth, evil, fire, good, law, or water descriptors.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, a planar sneak gains a +1 bonus on saving throws against all effects with the air, chaos, earth, evil, fire, good, law, or water descriptors. This bonus increases by 1 for every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Elemental Execution (Su)
- **Description:** At 4th level, a planar sneak treats creatures with the elemental subtype as though they were vulnerable to her sneak attack, but she deals only half as much sneak attack damage as she normally would.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, a planar sneak treats creatures with the elemental subtype as though they were vulnerable to her sneak attack, but she deals only half as much sneak attack damage as she normally would. She can confirm critical hits against such creatures, though 50% of the time, the critical hit is automatically negated and damage is instead rolled normally. At 8th level, this ability also applies to all outsiders otherwise immune to critical hits and sneak attack damage.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

## Parsed source feature headings

- Planar Sense (Ex)
- Elemental Execution (Su)
- Rogue Talents
- Advanced Rogue Talents

