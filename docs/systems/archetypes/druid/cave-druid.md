# Druid - Cave Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Cave Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Cave%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Cavesense (Ex); Nature Bond; Wild Empathy (Ex); Tunnelrunner (Ex); Lightfoot (Ex); Resist Subterranean Corruption (Ex); Wild Shape (Su)
- **Replaced / altered class features:** the nature sense ability; woodland stride; trackless step; resist nature’s lure

## Implementation details

### Replaces: the nature sense ability

- **Archetype feature:** Cavesense (Ex)
- **Description:** A underground druid adds Knowledge (dungeoneering) rather than Knowledge (geography) as a class skill and gains a +2 bonus on Knowledge (dungeoneering) and Survival skill checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A underground druid adds Knowledge (dungeoneering) rather than Knowledge (geography) as a class skill and gains a +2 bonus on Knowledge (dungeoneering) and Survival skill checks.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond
- **Description:** A cave druid may select the Darkness domain in addition to the choices normally allowed, but may not select the Air or Weather domains.
- **Detailed mechanics:**
  - **Rules text to implement:** A cave druid may select the Darkness domain in addition to the choices normally allowed, but may not select the Air or Weather domains.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A cave druid can influence oozes, rather than magical beasts, with a –4 penalty on her wild empathy check.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A cave druid can influence oozes, rather than magical beasts, with a –4 penalty on her wild empathy check.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Tunnelrunner (Ex)
- **Description:** At 2nd level, a cave druid can move through areas of rubble or narrow passages that require squeezing at her normal movement rate and without penalty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a cave druid can move through areas of rubble or narrow passages that require squeezing at her normal movement rate and without penalty.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Lightfoot (Ex)
- **Description:** At 3rd level, a cave druid cannot be detected with tremorsense.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a cave druid cannot be detected with tremorsense.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Subterranean Corruption (Ex)
- **Description:** At 4th level, a cave druid gains a +2 bonus on saves against exceptional, supernatural, and spell-like abilities of oozes and aberrations.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a cave druid gains a +2 bonus on saves against exceptional, supernatural, and spell-like abilities of oozes and aberrations.
- **Implementation flags:**
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** A cave druid gains this ability at 6th level, except that her effective druid level for this ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 10, 12.
  - **Rules text to implement:** A cave druid gains this ability at 6th level, except that her effective druid level for this ability is equal to her druid level – 2. She cannot use wild shape to adopt a plant form. At 10th level, the cave druid can assume the form of a Small or Medium ooze as if using beast shape III, and at 12th level that of a Tiny or Large ooze as if using beast shape IV (treating the ooze as if it were a magical beast without a natural armor bonus). When in ooze form, the cave druid has no discernible anatomy and is immune to poison, sneak attacks, and critical hits.
- **Implementation flags:**
  - wild shape subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Cavesense (Ex)
- Nature Bond
- Wild Empathy (Ex)
- Tunnelrunner (Ex)
- Lightfoot (Ex)
- Resist Subterranean Corruption (Ex)
- Wild Shape (Su)
