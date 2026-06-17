# Rogue - Heister

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Heister
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Heister
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Rum Dubber (Ex); Ferret’s Grace (Ex); Unseen (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the rogue talent gained at 2nd level; uncanny dodge and the rogue talent gained at 4th level; improved uncanny dodge and the rogue talent gained at 8th level

## Implementation details

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Rum Dubber (Ex)
- **Description:** At 2nd level, whenever a heister attempts to open a lock without a set of thieves’ tools, the DC increases by 2, instead of 10.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, whenever a heister attempts to open a lock without a set of thieves’ tools, the DC increases by 2, instead of 10.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge and the rogue talent gained at 4th level

- **Archetype feature:** Ferret’s Grace (Ex)
- **Description:** At 4th level, a heister gains Stealthy as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a heister gains Stealthy as a bonus feat. Additionally, a heister counts as a creature one size category smaller than she actually is when determining whether or not she is squeezing into an enclosed space ( Pathfinder RPG Core Rulebook 193–194 ). Finally, when a heister uses the Escape Artist skill to move through a tight space where her head fits but her shoulders do not ( Core Rulebook 95–96 ), the DC is 20, instead of 30.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: improved uncanny dodge and the rogue talent gained at 8th level

- **Archetype feature:** Unseen (Ex)
- **Description:** At 8th level, a heister masters hiding in underground and urban terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a heister masters hiding in underground and urban terrain. She can use the Stealth skill to hide in underground and urban terrain, even while being observed. She also gains the terrain mastery UC rogue talent twice, once each for underground and urban terrain.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the heister archetype: expert leaper APG, fast getaway APG, fast picks APG, fast stealth, getaway artist UC, ledge walker, and quick disable (as well as certainty for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the heister archetype: expert leaper APG, fast getaway APG, fast picks APG, fast stealth, getaway artist UC, ledge walker, and quick disable (as well as certainty for an unchained rogue).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the heister archetype: fast tumble APG, getaway master UC, hidden mind, and skill mastery (as well as cutting edge for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the heister archetype: fast tumble APG, getaway master UC, hidden mind, and skill mastery (as well as cutting edge for an unchained rogue).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Rum Dubber (Ex)
- Ferret’s Grace (Ex)
- Unseen (Ex)
- Rogue Talents
- Advanced Talents
