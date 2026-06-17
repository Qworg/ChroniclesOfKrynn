# Ranger - Deep Walker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Deep Walker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Deep%20Walker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Deep Knowledge (Ex); Rock Hopper (Ex); Deep Walker Camouflage (Ex); One with the Stone (Ex)
- **Replaced / altered class features:** favored terrain; woodland stride; camouflage; hide in plain sight

## Implementation details

### Replaces: favored terrain

- **Archetype feature:** Deep Knowledge (Ex)
- **Description:** At 3rd level, a deep walker gains a +2 bonus on initiative checks and Knowledge (dungeoneering), Perception, Stealth, and Survival skill checks while underground (in caves and dungeons).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, a deep walker gains a +2 bonus on initiative checks and Knowledge (dungeoneering), Perception, Stealth, and Survival skill checks while underground (in caves and dungeons). Every 5 levels thereafter, the deep walker gains an additional +3 on each of those checks while underground (to a maximum of +11 at 18th level).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: woodland stride

- **Archetype feature:** Rock Hopper (Ex)
- **Description:** At 7th level, a deep walker instinctively grasps for the most stable surfaces and holds on tighter while moving over underground rock and stone.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a deep walker instinctively grasps for the most stable surfaces and holds on tighter while moving over underground rock and stone. The deep walker gains a +5 bonus on all Acrobatics and Climb checks made to traverse underground terrain. Furthermore, the deep walker ignores difficult terrain created by underground terrain and subterranean flora.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: camouflage

- **Archetype feature:** Deep Walker Camouflage (Ex)
- **Description:** At 12th level, a deep walker can use the Stealth skill to hide in underground environments, even if the terrain does not grant cover or concealment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a deep walker can use the Stealth skill to hide in underground environments, even if the terrain does not grant cover or concealment.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: hide in plain sight

- **Archetype feature:** One with the Stone (Ex)
- **Description:** At 17th level, a deep walker can use the Stealth skill while he is underground, even when being observed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a deep walker can use the Stealth skill while he is underground, even when being observed.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Deep Knowledge (Ex)
- Rock Hopper (Ex)
- Deep Walker Camouflage (Ex)
- One with the Stone (Ex)
