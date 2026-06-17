# Druid - Green Faith Initiate

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Green Faith Initiate
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Green%20Faith%20Initiate
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mediator’s Ear (Ex); Zephyr Message (Sp); Path to Refuge (Sp); Secrets across Lifetimes (Sp); A Thousand Voices (Su)
- **Replaced / altered class features:** Trackless Step; 6th, 10th-level use of Wild Shape; Venom Immunity; A Thousand Faces

## Implementation details

### Replaces: trackless step

- **Archetype feature:** Mediator’s Ear (Ex)
- **Description:** By 3rd level, a Green Faith initiate is respected for her neutrality and even-handed attitude toward all people as well as other living things.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** By 3rd level, a Green Faith initiate is respected for her neutrality and even-handed attitude toward all people as well as other living things. She quickly develops a sense of other peoples’ attitudes, much as she does with animals. A Green Faith initiate gains a bonus on Diplomacy and Sense Motive checks equal to half her druid level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the druid’s additional daily use of wild shape gained at 6th level

- **Archetype feature:** Zephyr Message (Sp)
- **Description:** At 6th level, once per day, a Green Faith initiate can cast whispering wind as a spell-like ability, treating her druid level as her caster level.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, once per day, a Green Faith initiate can cast whispering wind as a spell-like ability, treating her druid level as her caster level.
- **Implementation flags:**
  - wild shape subsystem.
  - spell-like ability support.

### Replaces: venom immunity

- **Archetype feature:** Path to Refuge (Sp)
- **Description:** At 9th level, once per day, a Green Faith initiate can travel as if with transport via plants to any major Green Faith druid circle or important holy site.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 9, 14, 19.
  - **Rules text to implement:** At 9th level, once per day, a Green Faith initiate can travel as if with transport via plants to any major Green Faith druid circle or important holy site. Each of these sites is marked with special standing stones that allow all Green Faith followers within range using transport via plants or tree stride to sense their distance from it and the direction to it. At 14th level and again at 19th level, she can use this ability one additional time per day.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the druid’s additional daily use of wild shape gained at 10th level

- **Archetype feature:** Secrets across Lifetimes (Sp)
- **Description:** At 10th level, a Green Faith initiate can use legend lore once per week as a spell-like ability, drawing upon the knowledge of Green Faith archdruids recorded in secret across the generations in places where magic such as this can retrieve it.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, a Green Faith initiate can use legend lore once per week as a spell-like ability, drawing upon the knowledge of Green Faith archdruids recorded in secret across the generations in places where magic such as this can retrieve it. This ability does not require material components.
- **Implementation flags:**
  - wild shape subsystem.
  - spell-like ability support.

### Replaces: a thousand faces

- **Archetype feature:** A Thousand Voices (Su)
- **Description:** At 13th level, a Green Faith initiate can communicate with any creature that has a language or with any stone, as if using tongues or stone tell, respectively, for up to 1 minute per druid level each day.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a Green Faith initiate can communicate with any creature that has a language or with any stone, as if using tongues or stone tell, respectively, for up to 1 minute per druid level each day. This duration does not need to be consecutive, but it must be spent in 1-minute increments.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Mediator’s Ear (Ex)
- Zephyr Message (Sp)
- Path to Refuge (Sp)
- Secrets across Lifetimes (Sp)
- A Thousand Voices (Su)
