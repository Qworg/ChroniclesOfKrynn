# Rogue - Seeker of the Lost

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Seeker of the Lost
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Seeker%20of%20the%20Lost
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcana Breaker (Su); Underwater Striker (Ex); Wary Disarm (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the 2nd-level rogue talent; uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: the 2nd-level rogue talent

- **Archetype feature:** Arcana Breaker (Su)
- **Description:** Typically, only magical traps survive for long periods underwater, so a seeker of the lost specializes in noticing and disarming such traps.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 18, 2.
  - Mechanics summary: Typically, only magical traps survive for long periods underwater, so a seeker of the lost specializes in noticing and disarming such traps. At 3rd level, a seeker of the lost gains a +1 competence bonus on Perception checks to notice magical traps and on Disable Device checks to disarm magical traps. This bonus increases by an additional +1 every 3 levels beyond 3rd (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: uncanny dodge

- **Archetype feature:** Underwater Striker (Ex)
- **Description:** At 4th level, a seeker of the lost gains the ability to strike precisely underwater.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a seeker of the lost gains the ability to strike precisely underwater. When a seeker of the lost makes a sneak attack with a melee weapon, the damage is not halved for being made underwater, as is usually the case for attacks that deal slashing or bludgeoning damage or, if the rogue is offbalance, attacks that deal piercing damage (see Pathfinder Campaign Setting: Aquatic Adventures for more information about being off-balance). In addition, when a seeker of the lost makes a sneak attack with a melee weapon against a construct, she ignores any hardness the construct has.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Wary Disarm (Ex)
- **Description:** At 8th level, whenever a seeker of the lost attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by an amount equal to her rogue level or more.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, whenever a seeker of the lost attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by an amount equal to her rogue level or more. If she does set off a trap she was attempting to disarm, she doubles her trap sense bonus to avoid the trap.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Arcana Breaker (Su)
- Underwater Striker (Ex)
- Wary Disarm (Ex)
- Rogue Talents
- Advanced Talents

