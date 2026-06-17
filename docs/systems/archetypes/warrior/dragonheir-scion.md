# Warrior - Dragonheir Scion

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Dragonheir Scion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Dragonheir%20Scion
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Draconic Bloodline (Su); Chromatic Dragon Type; Energy Type; Metallic Dragon Type; Eldritch Strikes (Su); Fearful Might (Ex); Draconic Defense (Su); Draconic Strike (Su); Draconic Presense (Su); Wings (Su); Might of Wyrms (Su)
- **Replaced / altered class features:** the bonus feat gained at 1st level; bravery; armor training 1, 2, and 3; the bonus feat gained at 3rd level; the bonus feat gained at 5th level; armor training 4 and armor mastery; weapon mastery

## Implementation details

### Alters: the fighter’s class skills

- **Archetype feature:** Class Skills
- **Description:** The dragonheir scion adds Knowledge (arcana) and Use Magic Device to her list of class skills, instead of Handle Animal or Ride.
- **Detailed mechanics:**
  - **Rules text to implement:** The dragonheir scion adds Knowledge (arcana) and Use Magic Device to her list of class skills, instead of Handle Animal or Ride.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Draconic Bloodline (Su)
- **Description:** Each dragonheir scion can draw her lineage back to the influence of a great draconic progenitor.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** Each dragonheir scion can draw her lineage back to the influence of a great draconic progenitor. At 1st level, a dragonheir scion must select one of the chromatic or metallic dragon types. Once chosen, this cannot be changed. A number of dragonheir scion’s abilities deal damage and grant resistances based on her dragon type, as noted below. If a dragonheir scion takes a level in another class that grants a bloodline, the bloodlines must be of the same type, even if that means that the bloodline of one of the classes must change. Subject to GM discretion, the dragonheir scion can change her former bloodline to make them conform.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Energy Type
- **Description:** Black Acid Brass Fire Blue Electricity Bronze Electricity Green Acid Copper Acid Red Fire Gold Fire White Cold Silver Cold
- **Detailed mechanics:**
  - **Rules text to implement:** Black Acid Brass Fire Blue Electricity Bronze Electricity Green Acid Copper Acid Red Fire Gold Fire White Cold Silver Cold
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Eldritch Strikes (Su)
- **Description:** At 1st level, a dragonheir scion gains Arcane Strike as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a dragonheir scion gains Arcane Strike as a bonus feat. She does not need to meet its prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Fearful Might (Ex)
- **Description:** At 1st level, a dragonheir scion gains a +1 bonus on Intimidate checks to demoralize a foe.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 6, 18.
  - **Rules text to implement:** At 1st level, a dragonheir scion gains a +1 bonus on Intimidate checks to demoralize a foe. This bonus increases to +2 at 6th level and by an additional 1 every 4 fighter levels thereafter to a maximum of +5 at 18th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1, 2, and 3

- **Archetype feature:** Draconic Defense (Su)
- **Description:** At 3rd level, a dragonheir scion gains a +1 natural armor bonus and energy resistance 5 against her energy type.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 7, 13.
  - **Rules text to implement:** At 3rd level, a dragonheir scion gains a +1 natural armor bonus and energy resistance 5 against her energy type. At 7th level, this increases to a +2 natural armor bonus and energy resistance 10; at 13th level, it increases to a +3 natural armor bonus and energy resistance 20.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the bonus feat gained at 3rd level

- **Archetype feature:** Draconic Strike (Su)
- **Description:** At 3rd level, whenever the dragonheir scion damages a target with an attack augmented by Arcane Strike, the attack deals an additional 1d4 points of damage of the dragonheir scion’s energy type.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, whenever the dragonheir scion damages a target with an attack augmented by Arcane Strike, the attack deals an additional 1d4 points of damage of the dragonheir scion’s energy type.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feat gained at 5th level

- **Archetype feature:** Draconic Presense (Su)
- **Description:** At 5th level, the dragonheir scion receives Dazzling Display as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, the dragonheir scion receives Dazzling Display as a bonus feat. She does not need a weapon in hand to use this ability, and can use it as a standard action.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 4 and armor mastery

- **Archetype feature:** Wings (Su)
- **Description:** At 15th level, a dragonheir scion can grow leathery dragon wings from her back as a standard action, granting her a fly speed of 60 feet with average maneuverability.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a dragonheir scion can grow leathery dragon wings from her back as a standard action, granting her a fly speed of 60 feet with average maneuverability. She can dismiss the wings as a free action.
- **Implementation flags:**
  - rage/rage power subsystem.
  - flight/movement mode support.

### Replaces: weapon mastery

- **Archetype feature:** Might of Wyrms (Su)
- **Description:** At 20th level, a dragonheir scion’s draconic heritage becomes manifest.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a dragonheir scion’s draconic heritage becomes manifest. She gains immunity to paralysis, sleep, and damage of her energy type, as well as blindsense with a range of 60 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Draconic Bloodline (Su)
- Energy Type
- Eldritch Strikes (Su)
- Fearful Might (Ex)
- Draconic Defense (Su)
- Draconic Strike (Su)
- Draconic Presense (Su)
- Wings (Su)
- Might of Wyrms (Su)
