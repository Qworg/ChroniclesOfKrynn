# Alchemist - Deep Bomber

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Deep Bomber
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Deep%20Bomber
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Silent Bomb; Targeting Bomb*; Stonekin; Discoveries
- **Replaced / altered class features:** poison use; swift alchemy (the deep bomber gains swift alchemy at 18th level and never gains instant alchemy); swift poisoning

## Replacement details

### Replaces: poison use

- **Archetype feature:** Silent Bomb
- **Description:** At 2nd level, when the deep bomber creates a bomb, he can choose to have it explode without making any noise, although those damaged by it may cry out.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, when the deep bomber creates a bomb, he can choose to have it explode without making any noise, although those damaged by it may cry out.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, ki/monk hook.

### Replaces: swift alchemy (the deep bomber gains swift alchemy at 18th level and never gains instant alchemy)

- **Archetype feature:** Targeting Bomb*
- **Description:** At 3rd level, when the deep bomber creates a bomb, he can choose to have its detonation include a faerie fire effect that applies to all creatures within the splash radius (including the target, if any).
- **Mechanics:**
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, when the deep bomber creates a bomb, he can choose to have its detonation include a faerie fire effect that applies to all creatures within the splash radius (including the target, if any).
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

### Replaces: swift poisoning

- **Archetype feature:** Stonekin
- **Description:** At 6th level, the deep bomber automatically learns tree shape as a 2nd-level extract, except instead of a tree, he takes the form of a stalagmite that is the same size as his current size.
- **Mechanics:**
  - Level hooks: 6, 2, 7, 3.
  - Mechanics summary: At 6th level, the deep bomber automatically learns tree shape as a 2nd-level extract, except instead of a tree, he takes the form of a stalagmite that is the same size as his current size. At 7th level, he automatically learns meld into stone as a 3rd-level extract.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, ki/monk hook.

## Parsed source feature headings

- Silent Bomb
- Targeting Bomb*
- Stonekin
- Discoveries

