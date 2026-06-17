# Ranger - Wave Warden

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wave Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wave%20Warden
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Deep Sentinel (Ex); Aquatic Prowess Feat (Ex); Favored Terrain (Ex); Seaborn (Ex); Watery Summons (Sp)
- **Replaced / altered class features:** track; woodland stride; swift tracker

## Implementation details

### Replaces: track

- **Archetype feature:** Deep Sentinel (Ex)
- **Description:** A wave warden adds half his level (minimum +1) on Perception checks made to notice creatures underwater.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A wave warden adds half his level (minimum +1) on Perception checks made to notice creatures underwater.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Aquatic Prowess Feat (Ex)
- **Description:** At 2nd level and every four levels thereafter, a wave warden selects a bonus feat that improves his prowess in aquatic environments.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 10.
  - **Rules text to implement:** At 2nd level and every four levels thereafter, a wave warden selects a bonus feat that improves his prowess in aquatic environments. He can choose these feats even if he does not meet the prerequisites. Initially, he may choose from the following feats: Dodge, Mobility, Net Adept, Net and Trident, Net Maneuvering, Precise Shot, Rapid Reload, Sea Hunter, and Two-Weapon Fighting. At 6th level, he adds Improved Two-Weapon Fighting, Net Trickery, and Spring Attack to the list. At 10th level, he adds Greater Two-Weapon Fighting and Improved Precise Shot to the list. This ability otherwise functions like and replaces the standard ranger’s combat style bonus feats, including the limitations on armor worn.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a wave warden gains water as a favored terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** At 3rd level, a wave warden gains water as a favored terrain. At 8th level and every five levels thereafter, his bonus in aquatic terrain increases by +2. He does not gain additional favored terrains. This otherwise functions like the standard ranger’s favored terrain ability and replaces that ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Seaborn (Ex)
- **Description:** At 7th level, a wave warden may move through any sort of aquatic growth (such as coral or seaweed) or across a wet surface at his normal speed and without taking damage or suffering any other impairment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a wave warden may move through any sort of aquatic growth (such as coral or seaweed) or across a wet surface at his normal speed and without taking damage or suffering any other impairment. Obstacles that are enchanted or magically manipulated to impede motion still affect him.
- **Implementation flags:**
  - ki subsystem.

### Replaces: swift tracker

- **Archetype feature:** Watery Summons (Sp)
- **Description:** At 8th level, a wave warden can summon allies once per day as a full-round action.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8, 11.
  - **Rules text to implement:** At 8th level, a wave warden can summon allies once per day as a full-round action. This functions as summon nature’s ally III, except it can only be used to summon creatures with the aquatic or water subtypes. At 11th level, this ability improves to summon nature’s ally IV, with this progression continuing every three levels thereafter. The warden’s caster level is equal to his ranger level.
- **Implementation flags:**
  - summoning subsystem.

## Parsed source feature headings

- Deep Sentinel (Ex)
- Aquatic Prowess Feat (Ex)
- Favored Terrain (Ex)
- Seaborn (Ex)
- Watery Summons (Sp)
