# Ranger - Lantern Lighter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Lantern Lighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Lantern%20Lighter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Daylight; Enhanced Vision (Ex); Poison Resistance (Ex); Favored Terrain (Ex); Cavern Stride (Ex); Darkvision (Ex); Poison Immunity (Ex); Stunning Light (Su); Camouflage (Ex); Paralyzing Light (Su)
- **Replaced / altered class features:** wild empathy; endurance; woodland stride; camouflage; the favored terrain gained at 13th level; hide in plain sight; the favored terrain gained at 18th level

## Implementation details

### Alters: the ranger’s spells

- **Archetype feature:** Daylight
- **Description:** A lantern lighter treats daylight as a 3rd-level ranger spell.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** A lantern lighter treats daylight as a 3rd-level ranger spell.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: wild empathy

- **Archetype feature:** Enhanced Vision (Ex)
- **Description:** A lantern lighter hones his senses to better combat subterranean enemies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A lantern lighter hones his senses to better combat subterranean enemies. He gains low-light vision. If the lantern lighter already has low-light vision, he can instead see three times as far as humans in areas of dim light.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: endurance

- **Archetype feature:** Poison Resistance (Ex)
- **Description:** At 3rd level, a lantern lighter gains a +4 bonus on saving throws against poison.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a lantern lighter gains a +4 bonus on saving throws against poison.
- **Implementation flags:**
  - poison subsystem.

### Alters: favored terrain

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a lantern lighter selects a favored terrain as normal.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** At 3rd level, a lantern lighter selects a favored terrain as normal. The skill bonus and initiative bonus granted in this favored terrain increase by 2 at 8th level and every 5 ranger levels thereafter.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: woodland stride

- **Archetype feature:** Cavern Stride (Ex)
- **Description:** At 7th level, a lantern lighter’s movement is unimpeded by nonmagical difficult terrain underground and nonmagical webs.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a lantern lighter’s movement is unimpeded by nonmagical difficult terrain underground and nonmagical webs.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the favored terrain gained at 8th level

- **Archetype feature:** Darkvision (Ex)
- **Description:** At 8th level, a lantern lighter’s senses fully attune to the darkness, granting him darkvision to a distance of 60 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a lantern lighter’s senses fully attune to the darkness, granting him darkvision to a distance of 60 feet. If the lantern lighter already has darkvision, its range increases by 30 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: camouflage

- **Archetype feature:** Poison Immunity (Ex)
- **Description:** At 12th level, a lantern lighter gains immunity to poison.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a lantern lighter gains immunity to poison.
- **Implementation flags:**
  - poison subsystem.

### Replaces: the favored terrain gained at 13th level

- **Archetype feature:** Stunning Light (Su)
- **Description:** At 13th level, a lantern lighter learns to increase the effectiveness of bright light on creatures with light blindness.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a lantern lighter learns to increase the effectiveness of bright light on creatures with light blindness. Daylight spells cast by the lantern lighter or other sources of bright light he wields cause creatures with light blindness within the area of bright light to become stunned for 1 round in addition to being blinded.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: hide in plain sight

- **Archetype feature:** Camouflage (Ex)
- **Description:** At 17th level, a lantern lighter gains camouflage, as the ranger class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a lantern lighter gains camouflage, as the ranger class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the favored terrain gained at 18th level

- **Archetype feature:** Paralyzing Light (Su)
- **Description:** At 18th level, a lantern lighter can stop light-blind enemies in their tracks, often gaining a great edge in battle.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 18.
  - **Rules text to implement:** At 18th level, a lantern lighter can stop light-blind enemies in their tracks, often gaining a great edge in battle. Daylight spells cast by the lantern lighter or sources of bright light wielded by him cause creatures with light blindness within the area of bright light to become paralyzed for 1 round in addition to being blinded and stunned.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Daylight
- Enhanced Vision (Ex)
- Poison Resistance (Ex)
- Favored Terrain (Ex)
- Cavern Stride (Ex)
- Darkvision (Ex)
- Poison Immunity (Ex)
- Stunning Light (Su)
- Camouflage (Ex)
- Paralyzing Light (Su)
