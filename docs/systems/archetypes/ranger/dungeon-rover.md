# Ranger - Dungeon Rover

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Dungeon Rover
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Dungeon%20Rover
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Stone Scouting (Ex); Vermin Affinity (Ex); Dungeon Ally (Ex); Subterranean Stride (Ex); Improved Stone Scouting (Ex)
- **Replaced / altered class features:** track; wild empathy; woodland stride; swift tracker

## Replacement details

### Replaces: track

- **Archetype feature:** Stone Scouting (Ex)
- **Description:** A dungeon rover gains a +2 bonus on Perception checks to notice underground environmental hazards, including traps, potential cave-ins, and dangerous flora.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A dungeon rover gains a +2 bonus on Perception checks to notice underground environmental hazards, including traps, potential cave-ins, and dangerous flora. A dungeon rover receives a check to notice these hazards whenever he passes within 10 feet of them, whether or not he is actively looking.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: wild empathy

- **Archetype feature:** Vermin Affinity (Ex)
- **Description:** A dungeon rover gains the ability to improve the attitude of mindless subterranean creatures.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A dungeon rover gains the ability to improve the attitude of mindless subterranean creatures. This ability functions as the wild empathy class feature, except a dungeon rover can influence any vermin (even those without Intelligence scores) instead of animals. Additionally, a dungeon rover can influence oozes with a –4 penalty on his vermin affinity check.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty.

### Alters: hunter’s bond

- **Archetype feature:** Dungeon Ally (Ex)
- **Description:** At 4th level, a dungeon rover may select a giant slug, a giant centipede, a goblin dog, a giant scorpion, or any poisonous snake as his animal companion, in addition to the usual animal companion options available to rangers with the hunter’s bond class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a dungeon rover may select a giant slug, a giant centipede, a goblin dog, a giant scorpion, or any poisonous snake as his animal companion, in addition to the usual animal companion options available to rangers with the hunter’s bond class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, animal companion hook.

### Replaces: woodland stride

- **Archetype feature:** Subterranean Stride (Ex)
- **Description:** At 7th level, a dungeon rover is never slowed by difficult terrain while underground.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a dungeon rover is never slowed by difficult terrain while underground. However, areas that are enchanted or magically manipulated to impede motion still affect him.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: swift tracker

- **Archetype feature:** Improved Stone Scouting (Ex)
- **Description:** At 8th level, a dungeon rover’s bonus on Perception checks to notice underground environmental hazards increases to +4.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a dungeon rover’s bonus on Perception checks to notice underground environmental hazards increases to +4. Additionally, the rover receives a check to notice these irregularities whenever he passes within 15 feet of them.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Stone Scouting (Ex)
- Vermin Affinity (Ex)
- Dungeon Ally (Ex)
- Subterranean Stride (Ex)
- Improved Stone Scouting (Ex)

