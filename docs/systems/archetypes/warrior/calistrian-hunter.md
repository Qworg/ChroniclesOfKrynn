# Warrior - Calistrian Hunter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Calistrian Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Calistrian%20Hunter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Tenacious Tracker (Ex); Vengeance (Ex); Savor the Sting (Ex); Swift Revenge (Ex); Perceived Wrongs (Ex); Certain Revenge (Ex)
- **Replaced / altered class features:** bravery; weapon training 1; weapon training 2; weapon training 3; weapon training 4; weapon mastery

## Implementation details

### Replaces: the normal fighter armor and weapon proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A Calistrian hunter is proficient with all simple and martial weapons, plus the whip.
- **Detailed mechanics:**
  - **Rules text to implement:** A Calistrian hunter is proficient with all simple and martial weapons, plus the whip. In addition, the hunter is proficient with light and medium armor as well as shields (except tower shields).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A Calistrian hunter gains Diplomacy, Knowledge (local), and Perception as class skills and loses Knowledge (dungeoneering) and Knowledge (engineering) as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A Calistrian hunter gains Diplomacy, Knowledge (local), and Perception as class skills and loses Knowledge (dungeoneering) and Knowledge (engineering) as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: bravery

- **Archetype feature:** Tenacious Tracker (Ex)
- **Description:** At 2nd level, a Calistrian hunter gains a +1 bonus on Diplomacy checks to gather information and on Survival checks made to identify or follow tracks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a Calistrian hunter gains a +1 bonus on Diplomacy checks to gather information and on Survival checks made to identify or follow tracks. This bonus increases by 1 for every 4 levels the Calistrian hunter possesses beyond 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Vengeance (Ex)
- **Description:** At 5th level, a Calistrian hunter deals 1d4 points of bleed damage when he damages a creature that has damaged him since the beginning of his last turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 9, 13, 17.
  - **Rules text to implement:** At 5th level, a Calistrian hunter deals 1d4 points of bleed damage when he damages a creature that has damaged him since the beginning of his last turn. Whenever a creature takes bleed damage from this effect, it also takes a –1 penalty on attack rolls, weapon damage rolls, saving throws, skill checks, and ability checks for 1 round. This penalty is a pain effect and does not stack with the effects of the sickened condition. This bleed damage increases to 1d6 at 9th level, 1d8 at 13th level, and 2d6 at 17th level.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: weapon training 2

- **Archetype feature:** Savor the Sting (Ex)
- **Description:** At 9th level, whenever a target takes bleed damage from a Calistrian hunter’s vengeance ability, the Calistrian hunter gains an equal number of temporary hit points.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, whenever a target takes bleed damage from a Calistrian hunter’s vengeance ability, the Calistrian hunter gains an equal number of temporary hit points. These temporary hit points last for 1 minute and do not stack with each other.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Swift Revenge (Ex)
- **Description:** At 13th level, a Calistrian hunter gains the quarry class feature; this functions like the ranger ability of the same name, but the target must be one that has damaged the Calistrian hunter in the past hour.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a Calistrian hunter gains the quarry class feature; this functions like the ranger ability of the same name, but the target must be one that has damaged the Calistrian hunter in the past hour.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 4

- **Archetype feature:** Perceived Wrongs (Ex)
- **Description:** At 17th level, a Calistrian hunter can, once per day, use his vengeance ability against any creature—even one that has not harmed him.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a Calistrian hunter can, once per day, use his vengeance ability against any creature—even one that has not harmed him. If the target is also one that has damaged him since the beginning of his last turn, the bleed damage increases to 3d6 and the target is sickened for as long as the bleed effect continues.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon mastery

- **Archetype feature:** Certain Revenge (Ex)
- **Description:** At 20th level, a Calistrian hunter gains the improved quarry class feature; this functions like the ranger ability of the same name, but the target must have attacked him in the past day.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a Calistrian hunter gains the improved quarry class feature; this functions like the ranger ability of the same name, but the target must have attacked him in the past day. Whenever he uses his vengeance ability against his quarry, the bleed damage increases by 2 per bleed damage die.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Tenacious Tracker (Ex)
- Vengeance (Ex)
- Savor the Sting (Ex)
- Swift Revenge (Ex)
- Perceived Wrongs (Ex)
- Certain Revenge (Ex)
