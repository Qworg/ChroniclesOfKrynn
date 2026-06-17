# Ranger - Dragon Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Dragon Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Dragon%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Predatory Deduction (Ex); Wyrm Hatred (Ex); Dragoncrafting (Ex); Undaunted (Ex); Expert Dragoncrafter (Ex); Elemental Resilience (Su)
- **Replaced / altered class features:** Track; the additional favored enemy and any bonuses to existing favored enemies gained at 5th level; the additional favored enemy and any bonuses to existing favored enemies gained at 10th level; the additional favored enemy and any bonuses to existing favored enemies gained at 15th level; the additional favored enemy and any bonuses to existing favored enemies gained at 20th level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A dragon hunter adds Knowledge (arcana) to his list of class skills, in addition to the normal ranger class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A dragon hunter adds Knowledge (arcana) to his list of class skills, in addition to the normal ranger class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: Track

- **Archetype feature:** Predatory Deduction (Ex)
- **Description:** Beginning at 1st level, when a dragon hunter successfully uses Survival to spot the trail of a creature of the dragon type, the hunter may attempt an immediate DC 15 Knowledge (arcana) check.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** Beginning at 1st level, when a dragon hunter successfully uses Survival to spot the trail of a creature of the dragon type, the hunter may attempt an immediate DC 15 Knowledge (arcana) check. On a success, the dragon hunter is able to deduce the species, age category, size, and color of the dragon. If the trail is less than 48 hours old, the dragon hunter gains a +2 circumstance bonus on the Knowledge check.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wyrm Hatred (Ex)
- **Description:** Beginning at 1st level, a dragon hunter must select dragons as his favored enemy, granting him a +2 bonus on Bluff, Knowledge, Perception, Sense Motive, and Survival checks against creatures of the dragon type.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 5, 20.
  - **Rules text to implement:** Beginning at 1st level, a dragon hunter must select dragons as his favored enemy, granting him a +2 bonus on Bluff, Knowledge, Perception, Sense Motive, and Survival checks against creatures of the dragon type. He also gains +2 bonuses on weapon attack and damage rolls against them. These bonuses increase by +2 at 5th level and every five levels thereafter (10th, 15th, and 20th level).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the additional favored enemy and any bonuses to existing favored enemies gained at 5th level

- **Archetype feature:** Dragoncrafting (Ex)
- **Description:** Dragon hunters are experts not only at tracking and killing dragons, but also at using dragon bodies to craft unique equipment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** Dragon hunters are experts not only at tracking and killing dragons, but also at using dragon bodies to craft unique equipment. A dragon hunter gains Dragoncrafting as a bonus feat at 5th level, even if she does not meet the prerequisites. See page 18 of this book for more information.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: the additional favored enemy and any bonuses to existing favored enemies gained at 10th level

- **Archetype feature:** Undaunted (Ex)
- **Description:** Beginning at 10th level, a dragon hunter gains a +4 bonus on Will saves made to resist mind-affecting fear effects, Reflex saves made to avoid damage from breath weapons, Reflex saves made to avoid crush attacks, and Reflex saves made to avoid damage from tail sweep attacks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** Beginning at 10th level, a dragon hunter gains a +4 bonus on Will saves made to resist mind-affecting fear effects, Reflex saves made to avoid damage from breath weapons, Reflex saves made to avoid crush attacks, and Reflex saves made to avoid damage from tail sweep attacks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the additional favored enemy and any bonuses to existing favored enemies gained at 15th level

- **Archetype feature:** Expert Dragoncrafter (Ex)
- **Description:** At 15th level, a dragon hunter may take 10 on Heal and Craft skill checks to harvest dragoncraft materials and to create dragoncraft items.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a dragon hunter may take 10 on Heal and Craft skill checks to harvest dragoncraft materials and to create dragoncraft items. Additionally, the amount of time required to create a dragoncraft item is reduced by half.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Replaces: the additional favored enemy and any bonuses to existing favored enemies gained at 20th level

- **Archetype feature:** Elemental Resilience (Su)
- **Description:** At 20th level, a dragon hunter gains energy resistance 30 against a single energy type for 1 hour.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a dragon hunter gains energy resistance 30 against a single energy type for 1 hour. The energy types he may choose are acid, cold, electricity, and fire. He may use this ability once per day.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Predatory Deduction (Ex)
- Wyrm Hatred (Ex)
- Dragoncrafting (Ex)
- Undaunted (Ex)
- Expert Dragoncrafter (Ex)
- Elemental Resilience (Su)
