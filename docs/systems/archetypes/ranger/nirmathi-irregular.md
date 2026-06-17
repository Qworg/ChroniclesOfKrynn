# Ranger - Nirmathi Irregular

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Nirmathi Irregular
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Nirmathi%20Irregular
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Focused Enemy (Ex); Forest Ghost (Ex); Focused Terrain; Spells
- **Replaced / altered class features:** wild empathy

## Implementation details

### Replaces: the normal ranger armor and weapon proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A Nirmathi irregular is proficient with all simple and martial weapons and with light armor.
- **Detailed mechanics:**
  - **Rules text to implement:** A Nirmathi irregular is proficient with all simple and martial weapons and with light armor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Focused Enemy (Ex)
- **Description:** At 1st level, a Nirmathi irregular selects one favored enemy (usually “humanoid [human]”).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 20.
  - **Rules text to implement:** At 1st level, a Nirmathi irregular selects one favored enemy (usually “humanoid [human]”). He does not gain additional favored enemies at higher levels. He does get to increase his favored enemy bonus by +2 at 5th, 10th, 15th, and 20th level. This otherwise acts as and replaces the standard favored enemy ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: wild empathy

- **Archetype feature:** Forest Ghost (Ex)
- **Description:** At 1st level, a Nirmathi irregular adds a bonus equal to 1/2 his level on all Perception and Survival skill checks he makes while located in forest terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a Nirmathi irregular adds a bonus equal to 1/2 his level on all Perception and Survival skill checks he makes while located in forest terrain.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Focused Terrain
- **Description:** At 3rd level, a Nirmathi irregular selects one favored terrain (usually “forest”).
- **Detailed mechanics:**
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, a Nirmathi irregular selects one favored terrain (usually “forest”). He does not gain additional favored terrains at higher levels. He does get to increase his favored terrain bonus by +2 at 8th, 13th, and 18th level. This otherwise acts as and replaces the standard favored enemy ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spells
- **Description:** At 4th level, a Nirmathi irregular increases his number of spells per day by +1 for every spell level.
- **Detailed mechanics:**
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a Nirmathi irregular increases his number of spells per day by +1 for every spell level. This means the irregular gets at least 1 spell per day as soon as he gains access to a level of spells, even if Table 3–12: Ranger in the Core Rulebook lists 0 for spells per day. A Nirmathi irregular also learns to draw upon druidic magic, perhaps from association with the druids of Crystalhurst or a natural connection to the magic of the Fangwood. Each day when the ranger prepares spells, he may choose one druid spell and prepare it as if it were on the ranger spell list as a ranger spell of its druid spell level.
- **Implementation flags:**
  - archetype spell-list override.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Focused Enemy (Ex)
- Forest Ghost (Ex)
- Focused Terrain
- Spells
