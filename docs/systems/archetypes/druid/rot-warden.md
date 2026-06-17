# Druid - Rot Warden

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Rot Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Rot%20Warden
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Invoke Decay (Su); Nature Bond; Vermin Empathy (Su); Swarmcaller (Sp); Enduring Druid (Su); Wild Shape
- **Replaced / altered class features:** Spontaneous Casting; Nature Bond; Wild Empathy; Trackless Step; Venom Immunity; Resist Nature’s Lure; Wild Shape

## Implementation details

### Alters: spontaneous casting

- **Archetype feature:** Invoke Decay (Su)
- **Description:** A rot warden can channel stored spell energy into specific spells he hasn’t prepared ahead of time.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A rot warden can channel stored spell energy into specific spells he hasn’t prepared ahead of time. He can “lose” a prepared spell in order to cast the following spells at the indicated levels: 1st— decompose corpse, 2nd— warp wood, 3rd— fungal infestation, 4th— explosion of rot, 5th— insect plague, 6th— swarm skin, 7th— creeping doom, 8th— horrid wilting, 9th— massacre.
- **Implementation flags:**
  - ki subsystem.

### Alters: nature bond

- **Archetype feature:** Nature Bond
- **Description:** A rot warden who chooses a cleric domain as his nature bond must choose from the Destruction, Erosion, Repose, or Vermin domains.
- **Detailed mechanics:**
  - **Rules text to implement:** A rot warden who chooses a cleric domain as his nature bond must choose from the Destruction, Erosion, Repose, or Vermin domains.
- **Implementation flags:**
  - domain system.

### Replaces: wild empathy

- **Archetype feature:** Vermin Empathy (Su)
- **Description:** A rot warden can improve the attitude of vermin as a normal druid can with animals.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A rot warden can improve the attitude of vermin as a normal druid can with animals. Vermin have a starting attitude of unfriendly. The rot warden can also improve the attitude of vermin swarms, but he takes a –4 penalty on the check unless the swarm consists of the same kind of vermin as his vermin companion or his current wild shape.
- **Implementation flags:**
  - wild shape subsystem.
  - ki subsystem.

### Replaces: trackless step and venom immunity

- **Archetype feature:** Swarmcaller (Sp)
- **Description:** At 3rd level, a rot warden can summon a swarm of vermin once per day as a standard action.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 3, 9.
  - **Rules text to implement:** At 3rd level, a rot warden can summon a swarm of vermin once per day as a standard action. This functions like summon swarm, except the swarm the rot warden summons must be a cockroach, locust, or spider swarm. If he uses this ability during the surprise round of combat, nearby animals and vermin become hushed until the first round of combat ends; during this surprise round and first round of combat, flat-footed creatures also gain the shaken condition (this doesn’t stack with other fear effects). At 9th level, he adds army ant, centipede, and wasp swarms to the list of swarms he can call with this ability.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Enduring Druid (Su)
- **Description:** At 4th level, a rot warden gains a +4 bonus on saving throws against attacks and special abilities of vermin and swarms with the vermin type.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a rot warden gains a +4 bonus on saving throws against attacks and special abilities of vermin and swarms with the vermin type. This bonus also applies on saving throws against effects that would age or decay the rot warden or his equipment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: wild shape

- **Archetype feature:** Wild Shape
- **Description:** A rot warden gains this ability at 6th level, except his effective druid level is his druid level – 2.
- **Detailed mechanics:**
  - **Level hooks:** 6, 8, 10, 12.
  - **Rules text to implement:** A rot warden gains this ability at 6th level, except his effective druid level is his druid level – 2. He cannot take the form of an elemental. At 8th level, a rot warden can assume the form of a Small or Medium vermin as if using vermin shape I. At 10th level, the rot warden can assume the shape of a Tiny or Large vermin as if using vermin shape II. At 12th level, he can take the form of a Huge vermin as if using vermin shape III.
- **Implementation flags:**
  - wild shape subsystem.

## Parsed source feature headings

- Invoke Decay (Su)
- Nature Bond
- Vermin Empathy (Su)
- Swarmcaller (Sp)
- Enduring Druid (Su)
- Wild Shape
