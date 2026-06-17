# Alchemist - Deep Bomber

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Deep Bomber
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Deep%20Bomber
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Silent Bomb; Targeting Bomb*; Stonekin; Discoveries
- **Replaced / altered class features:** poison use; swift alchemy (the deep bomber gains swift alchemy at 18th level and never gains instant alchemy); swift poisoning

## Implementation details

### Replaces: poison use

- **Archetype feature:** Silent Bomb
- **Description:** At 2nd level, when the deep bomber creates a bomb, he can choose to have it explode without making any noise, although those damaged by it may cry out.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, when the deep bomber creates a bomb, he can choose to have it explode without making any noise, although those damaged by it may cry out.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

### Replaces: swift alchemy (the deep bomber gains swift alchemy at 18th level and never gains instant alchemy)

- **Archetype feature:** Targeting Bomb*
- **Description:** At 3rd level, when the deep bomber creates a bomb, he can choose to have its detonation include a faerie fire effect that applies to all creatures within the splash radius (including the target, if any).
- **Detailed mechanics:**
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, when the deep bomber creates a bomb, he can choose to have its detonation include a faerie fire effect that applies to all creatures within the splash radius (including the target, if any).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: swift poisoning

- **Archetype feature:** Stonekin
- **Description:** At 6th level, the deep bomber automatically learns tree shape as a 2nd-level extract, except instead of a tree, he takes the form of a stalagmite that is the same size as his current size.
- **Detailed mechanics:**
  - **Level hooks:** 6, 2, 7, 3.
  - **Rules text to implement:** At 6th level, the deep bomber automatically learns tree shape as a 2nd-level extract, except instead of a tree, he takes the form of a stalagmite that is the same size as his current size. At 7th level, he automatically learns meld into stone as a 3rd-level extract.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the deep bomber archetype: delayed bomb, dispelling bomb, fast bombs, infusion, madness bomb, poison bomb.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the deep bomber archetype: delayed bomb, dispelling bomb, fast bombs, infusion, madness bomb, poison bomb.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Silent Bomb
- Targeting Bomb*
- Stonekin
- Discoveries
