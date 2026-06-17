# Warrior - Ustalavic Duelist

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Ustalavic Duelist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Ustalavic%20Duelist
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Duelist Stance (Ex); Duelist Training (Ex); Lepidstadt Thrust (Ex); Science of the Blade (Ex); Surgical Strike (Ex)
- **Replaced / altered class features:** the fighter’s 1st-level bonus feat; weapon training 1; weapon training 2; weapon training 3; weapon training 4

## Implementation details

### Replaces: the fighter’s normal weapon and armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An Ustalavic duelist is proficient with all simple and martial weapons and with all light and medium armor and shields (except tower shields).
- **Detailed mechanics:**
  - **Rules text to implement:** An Ustalavic duelist is proficient with all simple and martial weapons and with all light and medium armor and shields (except tower shields).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the fighter’s 1st-level bonus feat

- **Archetype feature:** Duelist Stance (Ex)
- **Description:** At 1st level, an Ustalavic duelist gains a +1 dodge bonus to AC as long as he is wearing no armor or light armor, wields a melee weapon in one hand, and his other hand is empty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 20.
  - **Rules text to implement:** At 1st level, an Ustalavic duelist gains a +1 dodge bonus to AC as long as he is wearing no armor or light armor, wields a melee weapon in one hand, and his other hand is empty. This bonus increases by 1 for every 5 levels the duelist possesses to a maximum of +5 at 20th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 1

- **Archetype feature:** Duelist Training (Ex)
- **Description:** At 5th level, an Ustalavic duelist must select the light blades group for the weapon training class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** At 5th level, an Ustalavic duelist must select the light blades group for the weapon training class feature. The Ustalavic duelist’s weapon training bonus with light blades increases by 1 on attack and damage rolls for every 4 levels he possesses beyond 5th (to a maximum of +4 on attack and damage rolls at 17th level). If he is using his duelist stance, this damage bonus increases by 2. The Ustalavic duelist does not gain weapon training in any other groups as he increases in level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 2

- **Archetype feature:** Lepidstadt Thrust (Ex)
- **Description:** At 9th level, when using Vital Strike, Improved Vital Strike, or Greater Vital Strike, an Ustalavic duelist adds his Intelligence modifier to damage rolls (this bonus to damage is not multiplied on a critical hit).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, when using Vital Strike, Improved Vital Strike, or Greater Vital Strike, an Ustalavic duelist adds his Intelligence modifier to damage rolls (this bonus to damage is not multiplied on a critical hit). If the duelist confirms a critical hit while using one of these feats, he automatically deals maximum damage.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 3

- **Archetype feature:** Science of the Blade (Ex)
- **Description:** At 13th level, an Ustalavic duelist is able to apply his specialized knowledge of anatomy and physiology to his bladework.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, an Ustalavic duelist is able to apply his specialized knowledge of anatomy and physiology to his bladework. The duelist can make dirty trick ( Advanced Player’s Guide 320), disarm, and trip combat maneuvers using any one-handed piercing or slashing weapon.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 4

- **Archetype feature:** Surgical Strike (Ex)
- **Description:** At 17th level, when an Ustalavic duelist confirms a critical hit with a light or one-handed piercing or slashing weapon, he deals ability damage in addition to the normal bonus damage from the critical hit.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, when an Ustalavic duelist confirms a critical hit with a light or one-handed piercing or slashing weapon, he deals ability damage in addition to the normal bonus damage from the critical hit. The duelist chooses which ability is damaged, and deals an amount of damage equal to the critical multiplier of the wielded weapon.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Duelist Stance (Ex)
- Duelist Training (Ex)
- Lepidstadt Thrust (Ex)
- Science of the Blade (Ex)
- Surgical Strike (Ex)
