# Paladin - Holy Guide

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Holy Guide
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Holy%20Guide
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Favored Terrain (Ex); Teamwork Feat (Ex)
- **Replaced / altered class features:** the mercy gained at 3rd level; the mercy gained at 6th level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A holy guide gains Knowledge (geography) and Survival as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A holy guide gains Knowledge (geography) and Survival as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the mercy gained at 3rd level

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a holy guide chooses a favored terrain from the ranger favored terrains table.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a holy guide chooses a favored terrain from the ranger favored terrains table. This otherwise functions like the ranger ability of the same name. Every time a holy guide would be able to select another mercy, he can instead select another favored terrain and increase his bonuses for one existing favored terrain, just like a ranger.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the mercy gained at 6th level

- **Archetype feature:** Teamwork Feat (Ex)
- **Description:** At 6th level, a holy guide gains a teamwork feat as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a holy guide gains a teamwork feat as a bonus feat. He must meet the prerequisites for this feat. As a standard action, He can expend one use of smite evil to grant this feat to all allies within 30 feet who can see and hear him. Allies retain the use of this bonus feat for 3 rounds plus 1 round for every 2 levels the holy guide possesses. Allies do not need to meet the prerequisites of this bonus feat. Evil creatures do not gain the benefit of this teamwork feat, even if the paladin considers them allies.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Favored Terrain (Ex)
- Teamwork Feat (Ex)
