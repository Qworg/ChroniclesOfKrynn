# Berserker - Sharptooth

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Sharptooth
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Sharptooth
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Swim Like a Fish (Ex); Scent of Blood (Ex); Ocean Breath (Ex); Blood in the Water (Ex); Rage Powers
- **Replaced / altered class features:** Fast Movement; Uncanny Dodge; Improved Uncanny Dodge; Trap Sense; 6th and 12th-level Rage Powers

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Swim Like a Fish (Ex)
- **Description:** A sharptooth gains a swim speed of 10 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** A sharptooth gains a swim speed of 10 feet. At 5th level and every 5 levels thereafter, her swim speed increases by 5 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: both uncanny dodge and improved uncanny dodge

- **Archetype feature:** Scent of Blood (Ex)
- **Description:** At 2nd level, a sharptooth gains scent as per the universal monster rule.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 5.
  - **Rules text to implement:** At 2nd level, a sharptooth gains scent as per the universal monster rule. At 5th level, she also gains keen scent as per universal monster rule.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Ocean Breath (Ex)
- **Description:** At 3rd level, a sharptooth counts her Constitution score as 1 higher for the purposes of holding her breath.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6, 18.
  - **Rules text to implement:** At 3rd level, a sharptooth counts her Constitution score as 1 higher for the purposes of holding her breath. She also gains a +1 bonus on Constitution checks to continue holding her breath. This bonus and the addition to her effective Constitution score both increase by 1 at 6th level and every 3 levels thereafter, to a maximum bonus of +6 at 18th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rage powers normally gained at 6th and 12th levels

- **Archetype feature:** Blood in the Water (Ex)
- **Description:** At 6th level, a sharptooth can tear the flesh from living creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6, 12.
  - **Rules text to implement:** At 6th level, a sharptooth can tear the flesh from living creatures. Her attacks add 3 points of bleed damage while she is raging. At 12th level, this bleed damage increases to equal her Constitution modifier if it’s higher.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the sharptooth archetype: animal fury, bleeding blow, contagious rage, pack rage, powerful blow, primal scent, raging swimmer, and scent.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the sharptooth archetype: animal fury, bleeding blow, contagious rage, pack rage, powerful blow, primal scent, raging swimmer, and scent.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Swim Like a Fish (Ex)
- Scent of Blood (Ex)
- Ocean Breath (Ex)
- Blood in the Water (Ex)
- Rage Powers
