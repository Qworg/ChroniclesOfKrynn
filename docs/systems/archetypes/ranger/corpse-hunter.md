# Ranger - Corpse Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Corpse Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Corpse%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Spells; Undead Exterminator; Disrupt Control (Su); Graveyard Stride (Ex); Incorporeal Armament (Su)
- **Replaced / altered class features:** woodland stride; swift tracker

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A corpse hunter adds Knowledge (religion) to his list of class skills, and removes Knowledge (nature) from his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A corpse hunter adds Knowledge (religion) to his list of class skills, and removes Knowledge (nature) from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spells
- **Description:** In addition to the default spells on the ranger spell list, a corpse hunter adds the following to his list of spells at the indicated spell levels: 1st— bless water, detect undead, hide from undead, sanctify corpse UM, 2nd— halt undead, 3rd— speak with dead, 4th— searing light.
- **Detailed mechanics:**
  - **Rules text to implement:** In addition to the default spells on the ranger spell list, a corpse hunter adds the following to his list of spells at the indicated spell levels: 1st— bless water, detect undead, hide from undead, sanctify corpse UM, 2nd— halt undead, 3rd— speak with dead, 4th— searing light.
- **Implementation flags:**
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Undead Exterminator
- **Description:** At 1st level, a corpse hunter must select undead as his first and only favored enemy, granting him a +2 bonus on Bluff, Knowledge, Perception, Sense Motive, and Survival checks when dealing with creatures of the undead type and a +2 bonus on weapon attack and damage rolls against undead.
- **Detailed mechanics:**
  - **Level hooks:** 1, 20.
  - **Rules text to implement:** At 1st level, a corpse hunter must select undead as his first and only favored enemy, granting him a +2 bonus on Bluff, Knowledge, Perception, Sense Motive, and Survival checks when dealing with creatures of the undead type and a +2 bonus on weapon attack and damage rolls against undead. A corpse hunter does not gain additional favored enemies at 5th, 10th, 15th, and 20th level, though his favored enemy bonus against undead creatures increases by 2 at each of these levels (to a maximum bonus of +10 at 20th level).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Disrupt Control (Su)
- **Description:** At 5th level, a corpse hunter can infuse his attacks with divine power capable of harming an undead creature as well as its controller.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 10, 15, 20.
  - **Rules text to implement:** At 5th level, a corpse hunter can infuse his attacks with divine power capable of harming an undead creature as well as its controller. As a standard action, the corpse hunter can make a single melee attack against an undead creature, or a single ranged attack against an undead creature within 30 feet. If the attack is successful, he deals 1d4 points of Charisma damage to the target undead creature in addition to normal damage. If the target undead creature is being controlled by another creature within 120 feet, the controller takes 1d4 points of Charisma damage as well; unlike the initial target, the controller may attempt a Will save (DC = 10 + 1/2 the corpse hunter’s class level + the corpse hunter’s Wisdom modifier) to halve the damage she would take from this attack. A corpse hunter can use this ability once per day at 5th level, plus an additional time per day at 10th level, 15th level, and 20th level. The amount of Charisma damage dealt increases to 1d6 at 10th level, 1d8 at 15th level, and 2d4 at 20th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Graveyard Stride (Ex)
- **Description:** At 7th level, a corpse hunter may move easily through difficult terrain in areas where corpses are interred, such as graveyards, catacombs, crypts, or necropolises.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a corpse hunter may move easily through difficult terrain in areas where corpses are interred, such as graveyards, catacombs, crypts, or necropolises. When in such an environment, the corpse hunter may move at his normal speed without taking damage or suffering any impairment, although any magical effects and enchantments that impair movement still affect him.
- **Implementation flags:**
  - ki subsystem.

### Replaces: swift tracker

- **Archetype feature:** Incorporeal Armament (Su)
- **Description:** At 8th level, a corpse hunter can channel his will into any weapon he wields, making it effective against incorporeal undead.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a corpse hunter can channel his will into any weapon he wields, making it effective against incorporeal undead. A corpse hunter may imbue a single wielded weapon with the ghost touch special ability as a swift action, causing it to deal damage normally against incorporeal creatures. The corpse hunter may use this ability for a number of rounds per day equal to half his ranger level; these rounds need not be consecutive. The corpse hunter can end this ability as a free action.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Class Skills
- Spells
- Undead Exterminator
- Disrupt Control (Su)
- Graveyard Stride (Ex)
- Incorporeal Armament (Su)
