# Berserker - Sea Reaver

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Sea Reaver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Sea%20Reaver
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Marine Terror (Ex); Eyes of the Storm (Ex); Savage Sailor (Ex); Sure-Footed (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A sea reaver is not proficient with medium armor.
- **Detailed mechanics:**
  - **Rules text to implement:** A sea reaver is not proficient with medium armor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: fast movement

- **Archetype feature:** Marine Terror (Ex)
- **Description:** A sea reaver can hold her breath for a number of rounds equal to four times her Constitution score.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sea reaver can hold her breath for a number of rounds equal to four times her Constitution score. In addition, a sea reaver can move normally though squares of standing water or bog that is 1 foot deep. It does not cost her extra movement to traverse these terrains. Lastly, a sea reaver ignores the normal cover bonus to AC when attacking creatures that are partially immersed in water.
- **Implementation flags:**
  - ki subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Eyes of the Storm (Ex)
- **Description:** At 2nd level, a sea reaver ignores any concealment provided by fog, rain, sleet, mist, wind, or other weather effects that is less than total concealment, and any penalties weather applies on Perception checks are halved.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a sea reaver ignores any concealment provided by fog, rain, sleet, mist, wind, or other weather effects that is less than total concealment, and any penalties weather applies on Perception checks are halved.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Savage Sailor (Ex)
- **Description:** At 3rd level, a sea reaver gains a +1 bonus on Acrobatics, Climb, Profession (sailor), Survival, and Swim checks made in aquatic terrain, including aboard a ship or along shorelines.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a sea reaver gains a +1 bonus on Acrobatics, Climb, Profession (sailor), Survival, and Swim checks made in aquatic terrain, including aboard a ship or along shorelines. These bonuses improve by +1 every three levels after 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Sure-Footed (Ex)
- **Description:** At 5th level, a sea reaver takes no penalties when moving across slick surfaces, whether natural or magical (e.g., grease, ice storm, and sleet storm ).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a sea reaver takes no penalties when moving across slick surfaces, whether natural or magical (e.g., grease, ice storm, and sleet storm ). She is not at risk of falling, is not denied her Dexterity bonus when moving across such areas, and does not treat them as difficult terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the sea reaver archetype: bestial leaper, bestial swimmer, come and get me, hurling charge, raging leaper, raging swimmer, rolling dodge, and smasher.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the sea reaver archetype: bestial leaper, bestial swimmer, come and get me, hurling charge, raging leaper, raging swimmer, rolling dodge, and smasher.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Marine Terror (Ex)
- Eyes of the Storm (Ex)
- Savage Sailor (Ex)
- Sure-Footed (Ex)
- Rage Powers
