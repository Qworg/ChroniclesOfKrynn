# Druid - Fungal Pilgrim

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Fungal Pilgrim
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Fungal%20Pilgrim
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Devotion to Ascension (Ex); Spore Spawning; Fungal Companion; Mycological Transformation (Ex)
- **Replaced / altered class features:** wild shape if the fungal pilgrim selected the Plant domain as her nature bond; wild shape if the fungal pilgrim selected an animal companion as her nature bond; timeless body

## Implementation details

### Alters: nature bond

- **Archetype feature:** Devotion to Ascension (Ex)
- **Description:** A fungal pilgrim must select the Plant domain for her nature bond if she does not select an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A fungal pilgrim must select the Plant domain for her nature bond if she does not select an animal companion.
- **Implementation flags:**
  - animal companion progression.
  - domain system.

### Replaces: wild shape if the fungal pilgrim selected the Plant domain as her nature bond

- **Archetype feature:** Spore Spawning
- **Description:** At 4th level, a fungal pilgrim who selected the Plant domain for her nature bond gains the ability to grow fungal creatures from the spores of her body.
- **Detailed mechanics:**
  - **Level hooks:** 4, 6, 18, 20.
  - **Rules text to implement:** At 4th level, a fungal pilgrim who selected the Plant domain for her nature bond gains the ability to grow fungal creatures from the spores of her body. Once per day, when casting a summon nature’s ally spell to summon a single creature, the fungal pilgrim can infuse her fungal connection into the casting. The creature summoned must be selected from the summon nature’s ally list for 1 spell level lower than the spell cast. For example, if the fungal pilgrim casts summon nature’s ally III, she must choose a creature from the list in summon nature’s ally II. Creatures summoned in this manner gain the fungal creature template ( Pathfinder RPG Bestiary 4 116 ), except they do not gain the create spawn and poison spore cloud special attacks. A creature summoned in this manner cannot be harvested for its poison. A druid can use this ability an additional time per day at 6th level and every 2 levels thereafter, for a total of eight times at 18th level. At 20th level, it can be used any number of times per day.
- **Implementation flags:**
  - domain system.
  - wild shape subsystem.
  - poison subsystem.
  - summoning subsystem.

### Replaces: wild shape if the fungal pilgrim selected an animal companion as her nature bond

- **Archetype feature:** Fungal Companion
- **Description:** At 4th level, a fungal pilgrim who selected an animal companion for her nature bond initiates a transformation in her companion.
- **Detailed mechanics:**
  - **Level hooks:** 4, 10, 14, 20.
  - **Rules text to implement:** At 4th level, a fungal pilgrim who selected an animal companion for her nature bond initiates a transformation in her companion. The animal companion gains the fungal creature template ( Bestiary 4 116 ), but does not gain the create spawn, poison spore cloud, and poisonous blood special attacks. At 10th level, the animal companion gains the poisonous blood special attack. At 14th level, the animal companion gains the poison spore cloud special attack. At 20th level, the animal companion gains the create spawn special attack; created spawn are under the control of the fungal pilgrim. Spawn created in this way last for only 48 hours before rotting away.
- **Implementation flags:**
  - animal companion progression.
  - wild shape subsystem.
  - poison subsystem.

### Replaces: timeless body

- **Archetype feature:** Mycological Transformation (Ex)
- **Description:** Fungal spores become fully integrated into the druid’s body, inside and out.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** Fungal spores become fully integrated into the druid’s body, inside and out. At 15th level, she gains all immunities granted by the plant creature type as well as the light sensitivity universal monster rule. She counts as a plant for the purposes of effects that would negatively affect or damage plants. In addition, she no longer needs to eat or sleep in the typical manner, and instead gains the fungal creature’s rejuvenation ability. She can perform her daily meditation during her rejuvenation.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Devotion to Ascension (Ex)
- Spore Spawning
- Fungal Companion
- Mycological Transformation (Ex)
