# Rogue - Heister

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Heister
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Heister
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Rum Dubber (Ex); Ferret’s Grace (Ex); Unseen (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the rogue talent gained at 2nd level; uncanny dodge and the rogue talent gained at 4th level; improved uncanny dodge and the rogue talent gained at 8th level

## Replacement details

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Rum Dubber (Ex)
- **Description:** At 2nd level, whenever a heister attempts to open a lock without a set of thieves’ tools, the DC increases by 2, instead of 10.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, whenever a heister attempts to open a lock without a set of thieves’ tools, the DC increases by 2, instead of 10.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

### Replaces: uncanny dodge

- **Archetype feature:** Ferret’s Grace (Ex)
- **Description:** At 4th level, a heister gains Stealthy as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a heister gains Stealthy as a bonus feat. Additionally, a heister counts as a creature one size category smaller than she actually is when determining whether or not she is squeezing into an enclosed space ( Pathfinder RPG Core Rulebook 193–194 ). Finally, when a heister uses the Escape Artist skill to move through a tight space where her head fits but her shoulders do not ( Core Rulebook 95–96 ), the DC is 20, instead of 30.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Ferret’s Grace (Ex)
- **Description:** At 4th level, a heister gains Stealthy as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a heister gains Stealthy as a bonus feat. Additionally, a heister counts as a creature one size category smaller than she actually is when determining whether or not she is squeezing into an enclosed space ( Pathfinder RPG Core Rulebook 193–194 ). Finally, when a heister uses the Escape Artist skill to move through a tight space where her head fits but her shoulders do not ( Core Rulebook 95–96 ), the DC is 20, instead of 30.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Unseen (Ex)
- **Description:** At 8th level, a heister masters hiding in underground and urban terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a heister masters hiding in underground and urban terrain. She can use the Stealth skill to hide in underground and urban terrain, even while being observed. She also gains the terrain mastery UC rogue talent twice, once each for underground and urban terrain.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Unseen (Ex)
- **Description:** At 8th level, a heister masters hiding in underground and urban terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a heister masters hiding in underground and urban terrain. She can use the Stealth skill to hide in underground and urban terrain, even while being observed. She also gains the terrain mastery UC rogue talent twice, once each for underground and urban terrain.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Rum Dubber (Ex)
- Ferret’s Grace (Ex)
- Unseen (Ex)
- Rogue Talents
- Advanced Talents

