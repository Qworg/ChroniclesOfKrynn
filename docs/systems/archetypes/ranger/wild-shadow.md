# Ranger - Wild Shadow

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wild Shadow
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wild%20Shadow
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Wild at Heart (Ex); Favored Terrain (Ex); Woodland Stride (Ex); Unfettered Step (Ex); Harrying Attack (Ex); Wild Stalker (Ex); Master of Terrain (Ex)
- **Replaced / altered class features:** the hunter’s bond class feature; the ranger’s woodland stride class feature gained at 7th level; the quarry class feature; the camouflage class feature; the improved quarry class feature

## Replacement details

### Alters: the track and wild empathy class features

- **Archetype feature:** Wild at Heart (Ex)
- **Description:** At 1st level, a wild shadow adds only 1/2 his class level when making wild empathy checks while in urban areas, and adds only 1/4 his class level to follow or identify tracks in such areas.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a wild shadow adds only 1/2 his class level when making wild empathy checks while in urban areas, and adds only 1/4 his class level to follow or identify tracks in such areas. In non-urban settings, he is considered two levels higher when determining the bonuses for such checks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Alters: the favored terrain class feature

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, when a wild shadow chooses a favored terrain, he cannot choose urban as the terrain type.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8.
  - Mechanics summary: At 3rd level, when a wild shadow chooses a favored terrain, he cannot choose urban as the terrain type. Furthermore, at 8th level and every five levels thereafter, when he chooses a new favorite terrain type, he cannot choose the urban terrain type.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored terrain hook.

### Replaces: the hunter’s bond class feature

- **Archetype feature:** Woodland Stride (Ex)
- **Description:** This ability functions as the 7th-level ranger class feature of the same name, but the wild shadow gains it at 4th level instead.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 4.
  - Mechanics summary: This ability functions as the 7th-level ranger class feature of the same name, but the wild shadow gains it at 4th level instead.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: the ranger’s woodland stride class feature gained at 7th level

- **Archetype feature:** Unfettered Step (Ex)
- **Description:** At 7th level, a wild shadow’s woodland stride class feature functions in any difficult terrain within any of his favored terrains, even in areas that are enchanted or magically manipulated to impede motion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a wild shadow’s woodland stride class feature functions in any difficult terrain within any of his favored terrains, even in areas that are enchanted or magically manipulated to impede motion.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored terrain hook.

### Replaces: the quarry class feature

- **Archetype feature:** Harrying Attack (Ex)
- **Description:** At 11th level, a wild shadow can use his knowledge of terrain to make shrewd attacks in combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a wild shadow can use his knowledge of terrain to make shrewd attacks in combat. Such attacks can make foes fumble or cause them to become entangled within areas of the wild shadow’s favored terrain. As a standard action, the wild shadow denotes one target within line of sight and within one of his favored terrains as his harried prey. Once the foe is so designated, every time the wild shadow hits this harried prey with a melee or ranged weapon attack (either manufactured or natural), that creature is entangled for 1 round. A wild shadow can have no more than one harried prey at a time and that creature must correspond to one of his favored enemy types. He can dismiss this effect at any time as a free action, be he cannot select a new harried prey for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored enemy hook, favored terrain hook.

### Replaces: the camouflage class feature

- **Archetype feature:** Wild Stalker (Ex)
- **Description:** At 14th level, a wild shadow learns to better use natural surroundings to obscure his position in combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14, 16, 19, 20.
  - Mechanics summary: At 14th level, a wild shadow learns to better use natural surroundings to obscure his position in combat. Whenever a wild shadow is within one of his favored terrains and a feature of that terrain grants him cover, the bonuses to AC and Reflex saves for that cover improve by 1. Additionally, while he is within one of his favored terrains, if he gains concealment or total concealment, the miss chance of either type of concealment improves by 10%. Furthermore, at 16th level and 19th level, the bonuses granted by cover increase by 1 and the miss chance increases by another 10% (maximum +3 and +30% respectively at 20th level).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, favored terrain hook.

### Replaces: the improved quarry class feature

- **Archetype feature:** Master of Terrain (Ex)
- **Description:** At 19th level, a wild shadow can use his harrying attack against creatures other than his favored enemy or he can spend a standard action to designate up to two of his favored enemies as his harried prey instead.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a wild shadow can use his harrying attack against creatures other than his favored enemy or he can spend a standard action to designate up to two of his favored enemies as his harried prey instead.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored enemy hook.

## Parsed source feature headings

- Wild at Heart (Ex)
- Favored Terrain (Ex)
- Woodland Stride (Ex)
- Unfettered Step (Ex)
- Harrying Attack (Ex)
- Wild Stalker (Ex)
- Master of Terrain (Ex)

