# Paladin - Champion of the Cascade

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Champion of the Cascade
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Champion%20of%20the%20Cascade
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Armor Proficiency; Class Skills; Swiftsurge (Ex); Flowing Stride (Su); Rising Tide (Su)
- **Replaced / altered class features:** Armor Proficiency; Class Skills; Divine Health; Mercy; Divine Bond

## Implementation details

### Alters: the paladin’s armor proficiency

- **Archetype feature:** Armor Proficiency
- **Description:** A champion of the cascade is proficient with light armor, medium armor, and shields (except tower shields).
- **Detailed mechanics:**
  - **Rules text to implement:** A champion of the cascade is proficient with light armor, medium armor, and shields (except tower shields).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the paladin’s class skills

- **Archetype feature:** Class Skills
- **Description:** A champion of the cascade adds Acrobatics, Knowledge (geography), and Swim to her list of class skills and removes Knowledge (nobility).
- **Detailed mechanics:**
  - **Rules text to implement:** A champion of the cascade adds Acrobatics, Knowledge (geography), and Swim to her list of class skills and removes Knowledge (nobility).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: divine health

- **Archetype feature:** Swiftsurge (Ex)
- **Description:** At 3rd level, a champion of the cascade does not take any penalty on Acrobatics or Swim checks due to her armor check penalty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a champion of the cascade does not take any penalty on Acrobatics or Swim checks due to her armor check penalty.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: mercy

- **Archetype feature:** Flowing Stride (Su)
- **Description:** At 3rd level, whenever a champion of the cascade uses lay on hands to restore hit points to one target, she can grant a willing target the ability to walk on water as water walk for 1 minute.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 9, 15.
  - **Rules text to implement:** At 3rd level, whenever a champion of the cascade uses lay on hands to restore hit points to one target, she can grant a willing target the ability to walk on water as water walk for 1 minute. At 9th level, this extends to creatures healed by her channel positive energy. At 15th level, healed creatures can walk on water for 24 hours.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: divine bond

- **Archetype feature:** Rising Tide (Su)
- **Description:** At 5th level, a champion of the cascade’s connection to her deity allows her to summon rivers and alter her surroundings.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 10.
  - **Rules text to implement:** At 5th level, a champion of the cascade’s connection to her deity allows her to summon rivers and alter her surroundings. As a standard action, she can change up to two 5-foot squares per paladin level within 100 feet to become freshwater pools with a depth of up to 5 feet per paladin level. The squares must be adjacent to each other. Each creature standing in the area where she first creates the water must attempt a Reflex save (DC = 10 + half the paladin’s level + the paladin’s Charisma modifier) to jump to the nearest unaffected space and avoid falling into the water. The champion of the cascade can use this ability for 1 minute per paladin level. These minutes do not need to be consecutive, but they must be spent in 1-minute increments. The changed squares revert back to their original form after the duration ends, and any creatures in the water are shunted out to the nearest open space. At 10th level, as a swift action, she may spend 1 minute of her rising tide’s duration to create a geyser in any body of water she has created, lifting an allied creature in that square up to 10 feet per paladin level into the air for 1 round.
- **Implementation flags:**
  - summoning subsystem.

## Parsed source feature headings

- Armor Proficiency
- Class Skills
- Swiftsurge (Ex)
- Flowing Stride (Su)
- Rising Tide (Su)
