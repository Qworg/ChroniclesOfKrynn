# Rogue - Pirate

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Pirate
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Pirate
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Sea Legs (Ex); Swinging Reposition (Ex); Unflinching (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the 2nd-level rogue talent; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Sea Legs (Ex)
- **Description:** At 1st level, a pirate becomes adept at moving on ships, boats, and similar vessels.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a pirate becomes adept at moving on ships, boats, and similar vessels. She gains the Sea Legs feat as a bonus feat, even if she does not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the 2nd-level rogue talent

- **Archetype feature:** Swinging Reposition (Ex)
- **Description:** At 2nd level, a pirate incorporates a ship’s masts, rigging, ropes, sails, and other such structures into her combat style.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a pirate incorporates a ship’s masts, rigging, ropes, sails, and other such structures into her combat style. Provided she is wearing light armor or no armor, when fighting in an environment where such structures exist, the rogue incorporates them into her movement, and does not have to move in a straight line when making either a charge attack or a bull rush combat maneuver. Once she completes her attack or maneuver, she can reposition herself. Immediately after making the charge or bull rush, she can move 5 feet as a free action, even if the charge ends her turn. This movement does not provoke attacks of opportunity.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Unflinching (Ex)
- **Description:** Pirates are a salty and steadfast lot.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: Pirates are a salty and steadfast lot. At 3rd level, a pirate gains a +1 bonus on saving throws against fear and mind-affecting effects. This bonus increases by +1 for every three levels, to a maximum of +6 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Sea Legs (Ex)
- Swinging Reposition (Ex)
- Unflinching (Ex)
- Rogue Talents
- Advanced Talents

