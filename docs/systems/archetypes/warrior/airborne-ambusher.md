# Warrior - Airborne Ambusher

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Airborne Ambusher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Airborne%20Ambusher
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Combat Flyer (Ex); Aerobatics (Ex); Flying Dodger (Ex); Plummeting Charge (Ex)
- **Replaced / altered class features:** weapon training 2

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An airborne ambusher is not proficient with heavy armor or tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** An airborne ambusher is not proficient with heavy armor or tower shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** An airborne ambusher adds Fly to his list of class skills and removes Climb from his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An airborne ambusher adds Fly to his list of class skills and removes Climb from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

### Replaces: bravery

- **Archetype feature:** Combat Flyer (Ex)
- **Description:** At 2nd level, an airborne ambusher may use his fighter bonus feats to select Flyby Attack and Hover.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an airborne ambusher may use his fighter bonus feats to select Flyby Attack and Hover.
- **Implementation flags:**
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Replaces: weapon training 1

- **Archetype feature:** Aerobatics (Ex)
- **Description:** At 5th level, an airborne ambusher may make a Fly check instead of an Acrobatics check to move through a threatened area or an enemy’s space.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, an airborne ambusher may make a Fly check instead of an Acrobatics check to move through a threatened area or an enemy’s space.
- **Implementation flags:**
  - flight/movement mode support.

### Replaces: weapon training 2

- **Archetype feature:** Flying Dodger (Ex)
- **Description:** At 9th level, when an airborne ambusher flies at least half its fly speed on its turn, it gains a +1 dodge bonus to AC for 1 round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 11, 17.
  - **Rules text to implement:** At 9th level, when an airborne ambusher flies at least half its fly speed on its turn, it gains a +1 dodge bonus to AC for 1 round. This bonus increases to +2 at 11th level and +4 at 17th level.
- **Implementation flags:**
  - flight/movement mode support.

### Replaces: weapon training 3 and 4

- **Archetype feature:** Plummeting Charge (Ex)
- **Description:** At 13th level, if an airborne ambusher flies at least half its fly speed as part of a charge, it gains a +2 racial bonus on the attack roll (in addition to the normal charge bonus) and a +4 bonus on its critical confirmation roll.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13, 17.
  - **Rules text to implement:** At 13th level, if an airborne ambusher flies at least half its fly speed as part of a charge, it gains a +2 racial bonus on the attack roll (in addition to the normal charge bonus) and a +4 bonus on its critical confirmation roll. These bonuses improve to +4 and +6 at 17th level.
- **Implementation flags:**
  - flight/movement mode support.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Combat Flyer (Ex)
- Aerobatics (Ex)
- Flying Dodger (Ex)
- Plummeting Charge (Ex)
