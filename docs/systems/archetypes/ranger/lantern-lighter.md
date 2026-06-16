# Ranger - Lantern Lighter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Lantern Lighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Lantern%20Lighter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Daylight; Enhanced Vision (Ex); Poison Resistance (Ex); Favored Terrain (Ex); Cavern Stride (Ex); Darkvision (Ex); Poison Immunity (Ex); Stunning Light (Su); Camouflage (Ex); Paralyzing Light (Su)
- **Replaced / altered class features:** wild empathy; endurance; woodland stride; camouflage; the favored terrain gained at 13th level; hide in plain sight; the favored terrain gained at 18th level

## Replacement details

### Alters: the ranger’s spells

- **Archetype feature:** Daylight
- **Description:** A lantern lighter treats daylight as a 3rd-level ranger spell.
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: A lantern lighter treats daylight as a 3rd-level ranger spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: wild empathy

- **Archetype feature:** Enhanced Vision (Ex)
- **Description:** A lantern lighter hones his senses to better combat subterranean enemies.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A lantern lighter hones his senses to better combat subterranean enemies. He gains low-light vision. If the lantern lighter already has low-light vision, he can instead see three times as far as humans in areas of dim light.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: endurance

- **Archetype feature:** Poison Resistance (Ex)
- **Description:** At 3rd level, a lantern lighter gains a +4 bonus on saving throws against poison.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a lantern lighter gains a +4 bonus on saving throws against poison.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Alters: favored terrain

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a lantern lighter selects a favored terrain as normal.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8.
  - Mechanics summary: At 3rd level, a lantern lighter selects a favored terrain as normal. The skill bonus and initiative bonus granted in this favored terrain increase by 2 at 8th level and every 5 ranger levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, favored terrain hook, ki/monk hook.

### Replaces: woodland stride

- **Archetype feature:** Cavern Stride (Ex)
- **Description:** At 7th level, a lantern lighter’s movement is unimpeded by nonmagical difficult terrain underground and nonmagical webs.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a lantern lighter’s movement is unimpeded by nonmagical difficult terrain underground and nonmagical webs.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the favored terrain gained at 8th level

- **Archetype feature:** Darkvision (Ex)
- **Description:** At 8th level, a lantern lighter’s senses fully attune to the darkness, granting him darkvision to a distance of 60 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a lantern lighter’s senses fully attune to the darkness, granting him darkvision to a distance of 60 feet. If the lantern lighter already has darkvision, its range increases by 30 feet.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: camouflage

- **Archetype feature:** Poison Immunity (Ex)
- **Description:** At 12th level, a lantern lighter gains immunity to poison.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a lantern lighter gains immunity to poison.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the favored terrain gained at 13th level

- **Archetype feature:** Stunning Light (Su)
- **Description:** At 13th level, a lantern lighter learns to increase the effectiveness of bright light on creatures with light blindness.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a lantern lighter learns to increase the effectiveness of bright light on creatures with light blindness. Daylight spells cast by the lantern lighter or other sources of bright light he wields cause creatures with light blindness within the area of bright light to become stunned for 1 round in addition to being blinded.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, favored terrain hook.

### Replaces: hide in plain sight

- **Archetype feature:** Camouflage (Ex)
- **Description:** At 17th level, a lantern lighter gains camouflage, as the ranger class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a lantern lighter gains camouflage, as the ranger class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: the favored terrain gained at 18th level

- **Archetype feature:** Paralyzing Light (Su)
- **Description:** At 18th level, a lantern lighter can stop light-blind enemies in their tracks, often gaining a great edge in battle.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 18.
  - Mechanics summary: At 18th level, a lantern lighter can stop light-blind enemies in their tracks, often gaining a great edge in battle. Daylight spells cast by the lantern lighter or sources of bright light wielded by him cause creatures with light blindness within the area of bright light to become paralyzed for 1 round in addition to being blinded and stunned.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, favored terrain hook.

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

