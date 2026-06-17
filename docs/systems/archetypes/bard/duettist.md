# Bard - Duettist

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Duettist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Duettist
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Diminished Competency; Familiar (Ex); Versatile Familiar (Ex); Performing Familiar (Su); Harmonizing Familiar (Su); Symphonic Familiar (Su)
- **Replaced / altered class features:** bardic knowledge; lore master; dirge of doom; frightening tune

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Competency
- **Description:** A duettist does not gain the well-versed or jack-of-all-trades class features.
- **Detailed mechanics:**
  - **Rules text to implement:** A duettist does not gain the well-versed or jack-of-all-trades class features.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bardic knowledge

- **Archetype feature:** Familiar (Ex)
- **Description:** At 1st level, a duettist gains a familiar, treating his bard level as his effective wizard level for the purpose of this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a duettist gains a familiar, treating his bard level as his effective wizard level for the purpose of this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: versatile performance

- **Archetype feature:** Versatile Familiar (Ex)
- **Description:** At 2nd level, a duettist’s familiar learns to use performance to supplement its skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a duettist’s familiar learns to use performance to supplement its skills. A duettist’s familiar benefits from its master’s versatile performance class feature.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: lore master

- **Archetype feature:** Performing Familiar (Su)
- **Description:** At 4th level, a duettist’s familiar learns how to create supernatural effects with its performances, just like its master.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a duettist’s familiar learns how to create supernatural effects with its performances, just like its master. The familiar can use any of its master’s bardic performances, but only the familiar or the duettist can have a performance active at any given time, not both. If one is performing and the other starts a performance, the previous performance immediately ends. Each round that the familiar performs consumes 2 rounds of the duettist’s bardic performance.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: dirge of doom

- **Archetype feature:** Harmonizing Familiar (Su)
- **Description:** At 8th level, the duettist and his familiar have learned how to perform together in harmony.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, the duettist and his familiar have learned how to perform together in harmony. When a duettist and his familiar perform the same bardic performance simultaneously, its effects are enhanced. If the performance has a DC, the DC increases by 2. If the performance provides a competence bonus, the competence bonus increases by 1. Because both the duettist and the familiar are performing, each round performed consumes 3 rounds of bardic performance.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: frightening tune

- **Archetype feature:** Symphonic Familiar (Su)
- **Description:** At 14th level, the duettist and his familiar have learned how to create a symphony of complementary performances that meld together to produce two different effects.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, the duettist and his familiar have learned how to create a symphony of complementary performances that meld together to produce two different effects. They can each perform a different bardic performance simultaneously, and each has its full effect. Because both the duettist and the familiar are performing, each round performed consumes 3 rounds of bardic performance.
- **Implementation flags:**
  - bardic performance subsystem.

## Parsed source feature headings

- Diminished Competency
- Familiar (Ex)
- Versatile Familiar (Ex)
- Performing Familiar (Su)
- Harmonizing Familiar (Su)
- Symphonic Familiar (Su)
