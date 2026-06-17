# Bard - Cultivator

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Cultivator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Cultivator
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Plant Magic; Verdant Voice; Song of Growth (Su); Resist Nature’s Lure (Ex); Nature Lore (Ex)
- **Replaced / altered class features:** Class Skills; Spells; Bardic Knowledge; Countersong; Well-Versed; Lore Master

## Implementation details

### Alters: the bard’s class skills

- **Archetype feature:** Class Skills
- **Description:** A cultivator gains Survival as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A cultivator gains Survival as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: the bard’s spells

- **Archetype feature:** Plant Magic
- **Description:** A cultivator bard adds the following spells to his bard spell list at the corresponding spell levels: entangle (1st), greensight (2nd), plant growth (3rd), antiplant shell (4th), tree stride (5th), green caress (6th).
- **Detailed mechanics:**
  - **Rules text to implement:** A cultivator bard adds the following spells to his bard spell list at the corresponding spell levels: entangle (1st), greensight (2nd), plant growth (3rd), antiplant shell (4th), tree stride (5th), green caress (6th).
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: bardic knowledge

- **Archetype feature:** Verdant Voice
- **Description:** By combining traditional Green Faith chants and fey songs into his bardic performance, a cultivator gains the ability to affect a creature of the plant type with mind-affecting bardic performances.
- **Detailed mechanics:**
  - **Rules text to implement:** By combining traditional Green Faith chants and fey songs into his bardic performance, a cultivator gains the ability to affect a creature of the plant type with mind-affecting bardic performances. However, doing so requires the cultivator to expend 1 additional round of bardic performance each round he maintains a performance augmented by verdant voice.
- **Implementation flags:**
  - bardic performance subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Song of Growth (Su)
- **Description:** A cultivator can spontaneously promote massive plant growth with his bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A cultivator can spontaneously promote massive plant growth with his bardic performance. While he maintains his song of growth, the cultivator can spend a standard action to select one side of a square within 30 feet of himself and instantly create an opaque barrier of plant matter to block that face, providing total cover. He can create one barrier as part of starting his bardic performance if he starts the performance as a standard action. The side the cultivator selects must be supported by the ground, and the growth itself cannot support more than 5 pounds of weight. The conjured barrier has hardness 0, AC 5, and 2 hit points per bard level. A cultivator can maintain a number of plant growths equal to his Charisma modifier + half his bard level. These barriers immediately crumble to dust when the cultivator ends his performance. This performance replaces countersong.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Replaces: well-versed

- **Archetype feature:** Resist Nature’s Lure (Ex)
- **Description:** At 2nd level, a cultivator gains resist nature’s lure, as the druid class feature of the same name, but with only a +2 bonus instead of +4.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 4.
  - **Rules text to implement:** At 2nd level, a cultivator gains resist nature’s lure, as the druid class feature of the same name, but with only a +2 bonus instead of +4. This increases to a +4 bonus at 4th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: lore master

- **Archetype feature:** Nature Lore (Ex)
- **Description:** At 5th level, the cultivator gains the lore master bard ability, except he can use it only on Knowledge (nature) checks and Survival checks to track creatures in natural environments.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, the cultivator gains the lore master bard ability, except he can use it only on Knowledge (nature) checks and Survival checks to track creatures in natural environments.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Plant Magic
- Verdant Voice
- Song of Growth (Su)
- Resist Nature’s Lure (Ex)
- Nature Lore (Ex)
