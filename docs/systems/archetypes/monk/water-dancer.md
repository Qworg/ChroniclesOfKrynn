# Monk - Water Dancer

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Water Dancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Water%20Dancer
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Elemental Focus (Su and Sp); Nereid’s Grace (Su); Unarmed Strike; Burn (Ex); Wild Talents; Water Dance (Su); Metakinesis (Su); Water Stride (Sp)
- **Replaced / altered class features:** Flurry of Blows; Stunning Fist; Quivering Palm; 1st, 2nd, 6th, 10th, 14th, and 18th-level Bonus Feats; Unarmed Strike; Evasion; Slow Fall; Improved Evasion; Abundant Step

## Implementation details

### Replaces: flurry of blows, stunning fist, and quivering palm

- **Archetype feature:** Elemental Focus (Su and Sp)
- **Description:** A water dancer gains the elemental focus ability of the kineticist class, but must choose water as his element.
- **Detailed mechanics:**
  - **Rules text to implement:** A water dancer gains the elemental focus ability of the kineticist class, but must choose water as his element. He gains the basic hydrokinesis wild talent as normal, and gains the kinetic blast feature of the kineticist class for the water element, using his monk level as his effective kineticist level. He can’t use his kinetic blast when armored or encumbered.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: the bonus feat the monk normally gains at 1st level

- **Archetype feature:** Nereid’s Grace (Su)
- **Description:** When unarmored and unencumbered, a water dancer adds 1 point of Charisma bonus per monk level to his Armor Class as a dodge bonus.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** When unarmored and unencumbered, a water dancer adds 1 point of Charisma bonus per monk level to his Armor Class as a dodge bonus. If he is caught flat-footed or otherwise denied his Dexterity bonus, he also loses this bonus. He uses his Charisma score instead of his Wisdom score to determine the size of his ki pool and the DC and effects of monk class features.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: unarmed strike

- **Archetype feature:** Unarmed Strike
- **Description:** A water dancer gains the unarmed strike monk class feature but treats his unarmed strike damage as that of a monk 4 levels lower (minimum 1st level).
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** A water dancer gains the unarmed strike monk class feature but treats his unarmed strike damage as that of a monk 4 levels lower (minimum 1st level).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: evasion

- **Archetype feature:** Burn (Ex)
- **Description:** At 2nd level, a water dancer gains the burn class feature of the kineticist class.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a water dancer gains the burn class feature of the kineticist class.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: the bonus feats at 2nd, 6th, 10th, 14th, and 18th levels

- **Archetype feature:** Wild Talents
- **Description:** At 2nd level and every 4 levels thereafter, a water dancer selects a new utility wild talent from the list of options available to the kineticist class, treating his monk level – 2 (minimum 1) as his kineticist level for the purpose of fulfilling prerequisites as well as for leveldependent effects of the utility talent.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level and every 4 levels thereafter, a water dancer selects a new utility wild talent from the list of options available to the kineticist class, treating his monk level – 2 (minimum 1) as his kineticist level for the purpose of fulfilling prerequisites as well as for leveldependent effects of the utility talent. He can select only universal wild talents or those that match his element (see elemental focus above). At 6th, 10th, and 16th levels, he can replace one of his utility wild talents with another wild talent of the same level or lower. He can’t replace a wild talent that he used to qualify for another of his wild talents.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: slow fall

- **Archetype feature:** Water Dance (Su)
- **Description:** At 4th level, a water dancer can move across any liquid surface as though it were solid ground up to a maximum distance of 20 feet before falling through the liquid’s surface as normal.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 6, 18, 10.
  - **Rules text to implement:** At 4th level, a water dancer can move across any liquid surface as though it were solid ground up to a maximum distance of 20 feet before falling through the liquid’s surface as normal. This distance increases by 10 feet at 6th level and every 2 levels thereafter, to a maximum of 90 feet at 18th level. Additionally, at 10th level the water dancer can even move vertically up water surfaces (such as a flowing waterfall) as though under the effects of spider climb. If he runs out of movement before reaching a solid surface when climbing a vertical water source, he immediately falls.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved evasion

- **Archetype feature:** Metakinesis (Su)
- **Description:** At 9th level, a water dancer gains the ability to alter his kinetic blasts as the kineticist’s metakinesis (empower) class feature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a water dancer gains the ability to alter his kinetic blasts as the kineticist’s metakinesis (empower) class feature.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: abundant step

- **Archetype feature:** Water Stride (Sp)
- **Description:** At 12th level, a water dancer can leap from one source of water to another as per dimension door as a move action by expending 1 point of ki from his ki pool.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a water dancer can leap from one source of water to another as per dimension door as a move action by expending 1 point of ki from his ki pool. He must begin and end his movement in a space of water equal to his size. He cannot take other creatures with him when he uses this ability.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Elemental Focus (Su and Sp)
- Nereid’s Grace (Su)
- Unarmed Strike
- Burn (Ex)
- Wild Talents
- Water Dance (Su)
- Metakinesis (Su)
- Water Stride (Sp)
