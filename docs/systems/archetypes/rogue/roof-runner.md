# Rogue - Roof Runner

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Roof Runner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Roof%20Runner
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Roof Running (Ex); Tumbling Descent (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Roof Running (Ex)
- **Description:** At 1st level, a roof runner becomes entirely adept at moving across the tops of buildings, spires, and similar locations.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a roof runner becomes entirely adept at moving across the tops of buildings, spires, and similar locations. Provided she is wearing light armor or no armor, the roof runner can move at full speed while traveling across the tops of buildings or similar structures, and takes no penalties on any Dexterity-based Skill checks or Reflex saves that might be incurred from moving about on a roof.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, saving throw hook, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Tumbling Descent (Ex)
- **Description:** At 2nd level, a roof runner can use her acrobatics skill to attempt a rapid descent from a rooftop or another surface, ricocheting against another surface and then diving through an opening (such as a balcony or window) directly below.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a roof runner can use her acrobatics skill to attempt a rapid descent from a rooftop or another surface, ricocheting against another surface and then diving through an opening (such as a balcony or window) directly below. So long as she has at least two surfaces no farther than 10 feet apart to bounce against, she can ricochet her body back from one to the next, descending great distances with a single check. The DC is 10 + 5 for every additional 10-foot increment descended beyond the initial 10 feet dropped.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Roof Running (Ex)
- Tumbling Descent (Ex)
- Rogue Talents
- Advanced Talents

