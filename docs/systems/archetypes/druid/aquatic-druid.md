# Druid - Aquatic Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Aquatic Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Aquatic%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Wild Empathy (Ex); Aquatic Adaptation (Ex); Natural Swimmer (Ex); Resist Ocean’s Fury (Ex); Wild Shape (Su); Seaborn (Ex); Deep Diver (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** An aquatic druid’s wild empathy functions only on creatures that have a swim speed or the aquatic or water subtype; however, she can improve the attitude of any such creature with Intelligence 2 or less regardless of type, including mindless creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An aquatic druid’s wild empathy functions only on creatures that have a swim speed or the aquatic or water subtype; however, she can improve the attitude of any such creature with Intelligence 2 or less regardless of type, including mindless creatures.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Aquatic Adaptation (Ex)
- **Description:** At 2nd level, an aquatic druid gains an insight bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Survival, and Swim checks equal to 1/2 her druid level in aquatic terrain, and she cannot be tracked such environments.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an aquatic druid gains an insight bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Survival, and Swim checks equal to 1/2 her druid level in aquatic terrain, and she cannot be tracked such environments.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Natural Swimmer (Ex)
- **Description:** At 3rd level, an aquatic druid gains a swim speed equal to half her land speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an aquatic druid gains a swim speed equal to half her land speed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Ocean’s Fury (Ex)
- **Description:** At 4th level, an aquatic druid gains a +4 bonus on saving throws against spells of the water type or the exceptional or supernatural abilities of creatures with the aquatic or water subtype.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an aquatic druid gains a +4 bonus on saving throws against spells of the water type or the exceptional or supernatural abilities of creatures with the aquatic or water subtype.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** An aquatic druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** An aquatic druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity

- **Archetype feature:** Seaborn (Ex)
- **Description:** At 9th level, an aquatic druid gains the aquatic subtype, the amphibious trait, and a swim speed equal to her land speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, an aquatic druid gains the aquatic subtype, the amphibious trait, and a swim speed equal to her land speed. She also can endure cold climate effects as if using endure elements.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Deep Diver (Ex)
- **Description:** At 13th level, an aquatic druid gains DR/slashing or piercing equal to 1/2 her level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, an aquatic druid gains DR/slashing or piercing equal to 1/2 her level. This damage reduction also applies against spells and spell-like abilities that inflict damage by grappling or crushing (e.g., black tentacles, crushing hand ). She never takes pressure damage from deep water.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Wild Empathy (Ex)
- Aquatic Adaptation (Ex)
- Natural Swimmer (Ex)
- Resist Ocean’s Fury (Ex)
- Wild Shape (Su)
- Seaborn (Ex)
- Deep Diver (Ex)
