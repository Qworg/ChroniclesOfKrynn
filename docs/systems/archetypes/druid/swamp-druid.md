# Druid - Swamp Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Swamp Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Swamp%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Marshwight (Ex); Swamp Strider (Ex); Pond Scum (Ex); Wild Shape (Su); Slippery (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; a thousand faces

## Implementation details

### Replaces: woodland stride

- **Archetype feature:** Marshwight (Ex)
- **Description:** At 2nd level, a swamp druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Swim, and Survival checks equal to 1/2 her druid level in swamp terrain, and she cannot be tracked in such an environment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a swamp druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Swim, and Survival checks equal to 1/2 her druid level in swamp terrain, and she cannot be tracked in such an environment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Swamp Strider (Ex)
- **Description:** At 3rd level, a swamp druid suffers no penalty to speed or on Acrobatics or Stealth checks in bogs and undergrowth.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a swamp druid suffers no penalty to speed or on Acrobatics or Stealth checks in bogs and undergrowth.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Pond Scum (Ex)
- **Description:** At 4th level, a swamp druid gains a +4 bonus on saves against disease and the exceptional, supernatural, and spell-like abilities of monstrous humanoids.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a swamp druid gains a +4 bonus on saves against disease and the exceptional, supernatural, and spell-like abilities of monstrous humanoids. A swamp druid also gains DR/— equal to half her druid level against attacks by swarms. If this damage resistance prevents damage, the druid is unaffected by distraction or other special attacks of the swarm.
- **Implementation flags:**
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** A swamp druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** A swamp druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: a thousand faces

- **Archetype feature:** Slippery (Ex)
- **Description:** At 13th level, a swamp druid gains continuous freedom of movement.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a swamp druid gains continuous freedom of movement.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Marshwight (Ex)
- Swamp Strider (Ex)
- Pond Scum (Ex)
- Wild Shape (Su)
- Slippery (Ex)
