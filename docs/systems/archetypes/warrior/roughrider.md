# Warrior - Roughrider

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Roughrider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Roughrider
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Steadfast Mount (Ex); Armored Charger (Ex); Mounted Mettle (Ex); Leap from the Saddle (Ex); Relentless Steed (Ex); Ride Them Down (Ex); Unavoidable Onslaught (Ex); Indomitable Steed (Ex)
- **Replaced / altered class features:** bravery; armor training 1; weapon training 1, 2, 3, and 4; armor training 2; armor training 3; armor training 4; armor training 4; armor mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Steadfast Mount (Ex)
- **Description:** At 2nd level, after a roughrider has spent 1 hour practicing with a mount, the mount gains a +1 dodge bonus to AC and a +1 morale bonus on saves, but only while the roughrider is mounted on it or adjacent to it.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, after a roughrider has spent 1 hour practicing with a mount, the mount gains a +1 dodge bonus to AC and a +1 morale bonus on saves, but only while the roughrider is mounted on it or adjacent to it. This bonus increases by +1 for every four levels after 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1

- **Archetype feature:** Armored Charger (Ex)
- **Description:** At 3rd level, a roughrider no longer suffers armor check penalties on Ride skill checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a roughrider no longer suffers armor check penalties on Ride skill checks. His mount’s speed is not reduced when carrying a medium load or wearing medium barding.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: weapon training 1, 2, 3, and 4

- **Archetype feature:** Mounted Mettle (Ex)
- **Description:** At 5th level, a roughrider and his mount gain a +1 bonus on attack and damage rolls when he is mounted or adjacent to his mount.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a roughrider and his mount gain a +1 bonus on attack and damage rolls when he is mounted or adjacent to his mount. This bonus increases by +1 for every four levels after 5th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2

- **Archetype feature:** Leap from the Saddle (Ex)
- **Description:** At 7th level, after a roughrider’s mount takes a single move, he may attempt a fast dismount (DC 20 Ride check).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, after a roughrider’s mount takes a single move, he may attempt a fast dismount (DC 20 Ride check). If he succeeds, he can take a full attack action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 3

- **Archetype feature:** Relentless Steed (Ex)
- **Description:** At 11th level, a roughrider’s mount does not reduce its speed when wearing heavy barding or carrying a heavy load.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a roughrider’s mount does not reduce its speed when wearing heavy barding or carrying a heavy load. The roughrider may also reroll a Ride skill check or a saving throw made by the mount once per day, but must use the second roll even if it is worse. This ability may be used one additional time per day for every four levels beyond 11th.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: armor training 4

- **Archetype feature:** Ride Them Down (Ex)
- **Description:** At 15th level, can spur his mount on while readying an attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, can spur his mount on while readying an attack. If a roughrider’s mount takes a single move, the roughrider can make a full attack, taking his attacks at any point during his mount’s movement. If he has the Trample feat, he may substitute an overrun combat maneuver for each of his attacks. This movement provokes attacks of opportunity against the roughrider but not his mount.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: armor training 4

- **Archetype feature:** Unavoidable Onslaught (Ex)
- **Description:** At 15th level, a roughrider’s mounted charge is not blocked by friendly creatures or difficult terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a roughrider’s mounted charge is not blocked by friendly creatures or difficult terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor mastery

- **Archetype feature:** Indomitable Steed (Ex)
- **Description:** At 19th level, a roughrider and his steed gain DR 5/— when mounted.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a roughrider and his steed gain DR 5/— when mounted.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Steadfast Mount (Ex)
- Armored Charger (Ex)
- Mounted Mettle (Ex)
- Leap from the Saddle (Ex)
- Relentless Steed (Ex)
- Ride Them Down (Ex)
- Unavoidable Onslaught (Ex)
- Indomitable Steed (Ex)
