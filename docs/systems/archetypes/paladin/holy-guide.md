# Paladin - Holy Guide

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Holy Guide
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Holy%20Guide
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Favored Terrain (Ex); Teamwork Feat (Ex)
- **Replaced / altered class features:** the mercy gained at 3rd level; the mercy gained at 6th level

## Replacement details

### Replaces: the mercy gained at 3rd level

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a holy guide chooses a favored terrain from the ranger favored terrains table.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a holy guide chooses a favored terrain from the ranger favored terrains table. This otherwise functions like the ranger ability of the same name. Every time a holy guide would be able to select another mercy, he can instead select another favored terrain and increase his bonuses for one existing favored terrain, just like a ranger.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook, paladin mercy hook.

### Replaces: the mercy gained at 6th level

- **Archetype feature:** Teamwork Feat (Ex)
- **Description:** At 6th level, a holy guide gains a teamwork feat as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a holy guide gains a teamwork feat as a bonus feat. He must meet the prerequisites for this feat. As a standard action, He can expend one use of smite evil to grant this feat to all allies within 30 feet who can see and hear him. Allies retain the use of this bonus feat for 3 rounds plus 1 round for every 2 levels the holy guide possesses. Allies do not need to meet the prerequisites of this bonus feat. Evil creatures do not gain the benefit of this teamwork feat, even if the paladin considers them allies.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, smite hook, paladin mercy hook.

## Parsed source feature headings

- Class Skills
- Favored Terrain (Ex)
- Teamwork Feat (Ex)

