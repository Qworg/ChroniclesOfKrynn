# Warrior - Foehammer

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Foehammer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Foehammer
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Sledgehammer (Ex); Weapon Training (Ex); Hammer to the Ground (Ex); Rhythmic Blows (Ex); Piledriver (Ex); Ground Breaker (Ex); Hammer Master (Ex); Devastating Blow (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** armor training 1; armor training 2 and 4; weapon training 2; armor training 3; weapon training 3; weapon training 4; armor mastery

## Implementation details

### Replaces: armor training 1

- **Archetype feature:** Sledgehammer (Ex)
- **Description:** At 3rd level, a foehammer wielding a hammer gains a +2 circumstance bonus on combat maneuver checks made to bull rush, overrun, sunder, or trip.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a foehammer wielding a hammer gains a +2 circumstance bonus on combat maneuver checks made to bull rush, overrun, sunder, or trip.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 5th level, a foehammer must select hammers and does not gain weapon training with other groups, though his weapon training bonus improves by +1 every four levels after 5th.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a foehammer must select hammers and does not gain weapon training with other groups, though his weapon training bonus improves by +1 every four levels after 5th.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 2 and 4

- **Archetype feature:** Hammer to the Ground (Ex)
- **Description:** At 7th level, when a foehammer succeeds at a bull rush combat maneuver, he can make a trip combat maneuver at the end of the bull rush.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7, 15.
  - **Rules text to implement:** At 7th level, when a foehammer succeeds at a bull rush combat maneuver, he can make a trip combat maneuver at the end of the bull rush. If he does not move with the target, the force of his blow may still trip his foe, but he takes a –5 penalty on the combat maneuver check to trip. At 15th level, any creature a foehammer successfully bull rushes is automatically knocked prone at the end of the bull rush.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Rhythmic Blows (Ex)
- **Description:** At 9th level, each time that a foehammer hits a target, he gains a +1 bonus on attack rolls against that target.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, each time that a foehammer hits a target, he gains a +1 bonus on attack rolls against that target. This bonus stacks with each hit against that target, but lasts only until the end of the foehammer’s turn.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 3

- **Archetype feature:** Piledriver (Ex)
- **Description:** At 11th level, as a standard action, a foehammer may make a single melee attack with a weapon from the hammer weapon training group.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, as a standard action, a foehammer may make a single melee attack with a weapon from the hammer weapon training group. If the attack hits, he may make a bull rush or trip combat maneuver against the target of his attack as a free action that does not provoke an attack of opportunity.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Ground Breaker (Ex)
- **Description:** At 13th level, as a full-round action, a foehammer may strike the ground with his hammer.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, as a full-round action, a foehammer may strike the ground with his hammer. If the attack deals more damage than the floor’s hardness, the space he occupies and all adjacent squares become difficult terrain. Creatures in those squares, except for the foehammer, are knocked prone (DC 15 Reflex negates).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 4

- **Archetype feature:** Hammer Master (Ex)
- **Description:** At 17th level, any combat feats a foehammer has learned with any weapon from the hammer weapon training group (e.g., Improved Critical, Weapon Focus) apply to all weapons from that group.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, any combat feats a foehammer has learned with any weapon from the hammer weapon training group (e.g., Improved Critical, Weapon Focus) apply to all weapons from that group.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor mastery

- **Archetype feature:** Devastating Blow (Ex)
- **Description:** At 19th level, as a standard action, a foehammer may make a single melee attack with a weapon from the hammer weapon training group at a –5 penalty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, as a standard action, a foehammer may make a single melee attack with a weapon from the hammer weapon training group at a –5 penalty. If the attack hits, it is treated as a critical threat. Weapon special abilities that only activate on a critical hit do not activate if this critical hit is confirmed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Mastery (Ex)
- **Description:** A foehammer must choose a weapon from the hammer group.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A foehammer must choose a weapon from the hammer group.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Sledgehammer (Ex)
- Weapon Training (Ex)
- Hammer to the Ground (Ex)
- Rhythmic Blows (Ex)
- Piledriver (Ex)
- Ground Breaker (Ex)
- Hammer Master (Ex)
- Devastating Blow (Ex)
- Weapon Mastery (Ex)
