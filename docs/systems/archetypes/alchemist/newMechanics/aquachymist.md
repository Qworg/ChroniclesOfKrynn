# Alchemist - Aquachymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Aquachymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Aquachymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Sureseal Alchemy (Su); Underwater Bombs (Su); Amphibious Mutagen (Su)
- **Replaced / altered class features:** the discovery at 2nd level

## Implementation details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An aquachymist has Swim as a class skill instead of Fly.
- **Detailed mechanics:**
  - **Rules text to implement:** An aquachymist has Swim as a class skill instead of Fly.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.
  - flight/movement mode support.

### Alters: alchemy

- **Archetype feature:** Sureseal Alchemy (Su)
- **Description:** An aquachymist’s extracts and mutagens self-generate a flexible outer shell of sureseal, similar to sureseal bladders, allowing the aquachymist to craft a waterproof supply without expending a plethora of sureseal bladders.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** An aquachymist’s extracts and mutagens self-generate a flexible outer shell of sureseal, similar to sureseal bladders, allowing the aquachymist to craft a waterproof supply without expending a plethora of sureseal bladders.
- **Implementation flags:**
  - crafting subsystem.

### Alters: bombs

- **Archetype feature:** Underwater Bombs (Su)
- **Description:** An aquachymist’s fire bombs deal steam damage, allowing them to deal damage underwater or on land.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** An aquachymist’s fire bombs deal steam damage, allowing them to deal damage underwater or on land. Since thrown weapons don’t work well underwater, when the aquachymist creates a bomb, he either weights it or includes excess air as part of the action of creating the bomb, granting the bomb his choice of swiftly rising or swiftly sinking buoyancy and allowing him to target foes directly above or below him. If the attack misses, the bomb doesn’t deal splash damage, but instead continues to travel up or down until it loses potency at the end of the alchemist’s turn; the exception is when the aquachymist throws a swiftly sinking bomb close to the bottom, in which case it might reach the bottom and explode there. Because of the strange aquadynamic features of the aquachymist’s underwater bombs, they have a range increment of only 5 feet above the water.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: the discovery at 2nd level

- **Archetype feature:** Amphibious Mutagen (Su)
- **Description:** At 2nd level, an aquachymist’s mutagen allows him to breathe both air and water for its duration, in addition to its other effects.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an aquachymist’s mutagen allows him to breathe both air and water for its duration, in addition to its other effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Sureseal Alchemy (Su)
- Underwater Bombs (Su)
- Amphibious Mutagen (Su)
