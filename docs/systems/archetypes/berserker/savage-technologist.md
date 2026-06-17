# Berserker - Savage Technologist

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Savage Technologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Savage%20Technologist
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class skills; Weapon and Armor Proficiency; Rage (Ex); Sword and Gun (Ex); Primal Magnetism (Ex); Crack Shot (Ex)
- **Replaced / altered class features:** Uncanny Dodge; Improved Uncanny Dodge

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class skills
- **Description:** Acrobatics (Dex), Climb (Str), Craft (Int), Diplomacy (Cha), Intimidate (Cha), Knowledge (local) (Int), Perception (Wis), Sense Motive Wis), Ride (Dex), Survival (Wis), and Swim (Str).
- **Detailed mechanics:**
  - **Rules text to implement:** Acrobatics (Dex), Climb (Str), Craft (Int), Diplomacy (Cha), Intimidate (Cha), Knowledge (local) (Int), Perception (Wis), Sense Motive Wis), Ride (Dex), Survival (Wis), and Swim (Str).
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A savage technologist is proficient with all simple and martial weapons, all firearms, light armor, and shields (except tower shields).
- **Detailed mechanics:**
  - **Rules text to implement:** A savage technologist is proficient with all simple and martial weapons, all firearms, light armor, and shields (except tower shields).
- **Implementation flags:**
  - firearm subsystem.
  - feat grant/prerequisite handling.

### Alters: rage

- **Archetype feature:** Rage (Ex)
- **Description:** A savage technologist can enter rage as a barbarian, except she gains a morale bonus to Strength and Dexterity instead of Strength and Constitution, and she does not take a penalty to Armor Class.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A savage technologist can enter rage as a barbarian, except she gains a morale bonus to Strength and Dexterity instead of Strength and Constitution, and she does not take a penalty to Armor Class. She retains the bonus on Will saving throws. When a barbarian ability would increase the savage technologist’s Strength while raging, it increases her Dexterity instead.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: Uncanny Dodge

- **Archetype feature:** Sword and Gun (Ex)
- **Description:** At 2nd level, when a raging savage technologist wields a one-handed firearm in one hand and a light or one-handed melee weapon in the other, she can make ranged attacks with the firearm without provoking attacks of opportunity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, when a raging savage technologist wields a one-handed firearm in one hand and a light or one-handed melee weapon in the other, she can make ranged attacks with the firearm without provoking attacks of opportunity. She also gains the benefits of the Two-Weapon Fighting feat, but only if all attacks are made with those weapons.
- **Implementation flags:**
  - ki subsystem.
  - firearm subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Primal Magnetism (Ex)
- **Description:** At 3rd level, a savage technologist adds her Strength modifier on Diplomacy checks when interacting with tribal cultures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a savage technologist adds her Strength modifier on Diplomacy checks when interacting with tribal cultures. She can expend 2 rounds of rage (even if not raging) to add a bonus equal to 1/2 his barbarian level on a Diplomacy check.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: Improved Uncanny Dodge

- **Archetype feature:** Crack Shot (Ex)
- **Description:** At 5th level, a savage technologist adds her Dexterity modifier to her damage rolls when making ranged attacks with a firearm while raging.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a savage technologist adds her Dexterity modifier to her damage rolls when making ranged attacks with a firearm while raging.
- **Implementation flags:**
  - ki subsystem.
  - firearm subsystem.

## Parsed source feature headings

- Class skills
- Weapon and Armor Proficiency
- Rage (Ex)
- Sword and Gun (Ex)
- Primal Magnetism (Ex)
- Crack Shot (Ex)
