# Paladin - Wilderness Warden

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Wilderness Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Wilderness%20Warden
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Natural Defense (Su); Smite Evil (Su); Aura of Comfort (Ex); Favored Terrain (Ex); Spells; Aura of Purity (Su); Natural Shield (Su)
- **Replaced / altered class features:** Class Skills; Divine Grace; Smite Evil; Aura of Courage; 3rd, 9th, 15th-level Mercy; Spells; Aura of Resolve; Aura of Justice

## Implementation details

### Alters: the paladin’s class skills

- **Archetype feature:** Class Skills
- **Description:** A wilderness warden gains Climb, Knowledge (geography), Knowledge (nature), Survival, and Swim as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A wilderness warden gains Climb, Knowledge (geography), Knowledge (nature), Survival, and Swim as class skills. She does not gain Diplomacy, Heal, Knowledge (nobility), or Spellcraft as class skills.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Replaces: divine grace

- **Archetype feature:** Natural Defense (Su)
- **Description:** At 2nd level, once per day, a wilderness warden can grant herself energy resistance 10 to cold, electricity, or fire and a +2 insight bonus to her CMD for a number of minutes equal to her paladin level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 5.
  - **Rules text to implement:** At 2nd level, once per day, a wilderness warden can grant herself energy resistance 10 to cold, electricity, or fire and a +2 insight bonus to her CMD for a number of minutes equal to her paladin level. The energy resistance increases by 5 and the CMD bonus increases by 1 at 5th level and every 5 levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: smite evil

- **Archetype feature:** Smite Evil (Su)
- **Description:** A wilderness warden gains this ability at 4th level, and it functions at her paladin level – 3.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** A wilderness warden gains this ability at 4th level, and it functions at her paladin level – 3. She can expend a daily use of smite evil to gain an additional daily use of natural defense. She deals additional damage on her first successful attack when the target of her smite evil is an evil fey, humanoid (giant), magical beast, or monstrous humanoid, rather than an evil dragon, outsider (evil), or undead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of courage

- **Archetype feature:** Aura of Comfort (Ex)
- **Description:** At 3rd level, a wilderness warden is comfortable in nearly any climate, as if she were affected by a constant endure elements spell, and she and allies within 10 feet of her gain a +4 bonus on Constitution checks and saving throws to resist fatigue; exhaustion; and the effects of hunger, thirst, and hot or cold climates (including from magical effects).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a wilderness warden is comfortable in nearly any climate, as if she were affected by a constant endure elements spell, and she and allies within 10 feet of her gain a +4 bonus on Constitution checks and saving throws to resist fatigue; exhaustion; and the effects of hunger, thirst, and hot or cold climates (including from magical effects).
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: the mercies gained at 3rd level, 9th level, and 15th level

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a wilderness warden selects a favored terrain, as per the ranger class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 9, 15.
  - **Rules text to implement:** At 3rd level, a wilderness warden selects a favored terrain, as per the ranger class feature. Every 6 levels after 3rd, she selects an additional favored terrain; each time she does so, the bonuses she gains in her previous favored terrain or terrains increase by 2.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the paladin’s spells

- **Archetype feature:** Spells
- **Description:** For each level of spell she can cast, a wilderness warden can prepare and cast one spell per day from the druid spell list rather than the paladin spell list.
- **Detailed mechanics:**
  - **Rules text to implement:** For each level of spell she can cast, a wilderness warden can prepare and cast one spell per day from the druid spell list rather than the paladin spell list.
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: aura of resolve

- **Archetype feature:** Aura of Purity (Su)
- **Description:** At 8th level, a wilderness warden gains immunity to poison.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a wilderness warden gains immunity to poison. Each ally within 10 feet gains a +2 bonus on saving throws against disease and poison.
- **Implementation flags:**
  - poison subsystem.

### Replaces: aura of justice

- **Archetype feature:** Natural Shield (Su)
- **Description:** At 11th level, a wilderness warden can expend two daily uses of her natural defense ability to grant the benefits of that ability to all nonevil allies within 10 feet for 1 minute.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a wilderness warden can expend two daily uses of her natural defense ability to grant the benefits of that ability to all nonevil allies within 10 feet for 1 minute.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Natural Defense (Su)
- Smite Evil (Su)
- Aura of Comfort (Ex)
- Favored Terrain (Ex)
- Spells
- Aura of Purity (Su)
- Natural Shield (Su)
