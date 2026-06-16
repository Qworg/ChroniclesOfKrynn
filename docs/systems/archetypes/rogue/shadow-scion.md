# Rogue - Shadow Scion

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Shadow Scion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Shadow%20Scion
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Shadow Dweller (Ex); Shadow Strike; Shadow Step (Sp); Shadow Speaker (Sp); Shadow Master (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the rogue talent gained at 2nd level; the rogue talent gained at 8th level; the rogue talent gained at 14th level; master strike

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Shadow Dweller (Ex)
- **Description:** A shadow scion gains darkvision with a range of 30 feet and a +1 competence bonus on Stealth checks in dim light and darkness.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: A shadow scion gains darkvision with a range of 30 feet and a +1 competence bonus on Stealth checks in dim light and darkness. If she already has darkvision, the range of her darkvision increases by 10 feet. At 3rd level, and every 2 levels thereafter, the range of her darkvision increases by 10 feet and her bonus on Stealth checks increases by 1.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Shadow Strike
- **Description:** At 2nd level, a shadow scion gains Shadow Strike APG as a bonus feat.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a shadow scion gains Shadow Strike APG as a bonus feat. A character using the unchained rogue class from Pathfinder RPG Pathfinder Unchained instead gains Blind-Fight as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Shadow Step (Sp)
- **Description:** At 8th level, a shadow scion can walk through the Shadow Plane and reappear elsewhere on the Material Plane as a standard action.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a shadow scion can walk through the Shadow Plane and reappear elsewhere on the Material Plane as a standard action. The shadow scion can travel up to 30 feet per rogue level per day in this fashion, either in a single round or broken up across multiple shadow steps. This movement must be used in increments of at least 5 feet and does not provoke attacks of opportunity. When the shadow scion arrives on the Material Plane, she is cloaked in shadow and gains concealment as per the blur spell for 1 round.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the rogue talent gained at 14th level

- **Archetype feature:** Shadow Speaker (Sp)
- **Description:** At 14th level, a shadow scion can spend 1 minute meditating within a patch of dim light or darkness; at the end of the time, she can draw information from the shadows.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 14, 19.
  - Mechanics summary: At 14th level, a shadow scion can spend 1 minute meditating within a patch of dim light or darkness; at the end of the time, she can draw information from the shadows. This functions as commune with nature , except that it functions in any terrain to a radius of 100 feet per rogue level, and it cannot reveal information about any object or subject that is not currently in dim light or darkness. The shadow scion can use this ability once per day at 14th level and twice per day at 19th level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: master strike

- **Archetype feature:** Shadow Master (Su)
- **Description:** At 20th level, whenever a shadow scion is in an area of dim light, she gains DR 10/cold iron and a +2 luck bonus on all saving throws.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, whenever a shadow scion is in an area of dim light, she gains DR 10/cold iron and a +2 luck bonus on all saving throws. In addition, whenever she confirms a critical hit against a foe that is in an area of dim light, that foe is blinded for 1d6 rounds.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Shadow Dweller (Ex)
- Shadow Strike
- Shadow Step (Sp)
- Shadow Speaker (Sp)
- Shadow Master (Su)
- Rogue Talents
- Advanced Talents

