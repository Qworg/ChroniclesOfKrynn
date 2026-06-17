# Druid - World Walker

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** World Walker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20World%20Walker
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Favored Terrain (Ex); Path of Trees (Su)
- **Replaced / altered class features:** trackless step and resist nature’s lure; both venom immunity and timeless body

## Implementation details

### Replaces: trackless step and resist nature’s lure

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, the world walker gains the ranger’s favored terrain ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the world walker gains the ranger’s favored terrain ability. She treats her druid level as her ranger level for this ability. If she has levels in both classes, both class’s levels stack for determining the effect of this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: both venom immunity and timeless body

- **Archetype feature:** Path of Trees (Su)
- **Description:** At 9th level, once a day, a wanderer can step within a tree and then teleport from that tree to another one in a manner similar to the tree stride spell.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9, 12, 15, 13.
  - **Rules text to implement:** At 9th level, once a day, a wanderer can step within a tree and then teleport from that tree to another one in a manner similar to the tree stride spell. She gains an extra use of this ability each day at 12th level, and a third use of this ability at 15th level. Furthermore, a world walker of 13th level or higher can use this ability to teleport to any other tree of its type up to 100 miles away.
- **Implementation flags:**
  - teleport/positioning subsystem.

## Parsed source feature headings

- Favored Terrain (Ex)
- Path of Trees (Su)
