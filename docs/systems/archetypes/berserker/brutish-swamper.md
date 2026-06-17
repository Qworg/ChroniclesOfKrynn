# Berserker - Brutish Swamper

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Brutish Swamper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Brutish%20Swamper
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Swamp Skills; Marsh March (Ex); Home (Ex); Stubborn (Ex); Wrastlin’ (Ex); Rage Powers
- **Replaced / altered class features:** Skills; Fast Movement; Uncanny Dodge; Improved Uncanny Dodge; Trap Sense; 6th-level Rage Power

## Implementation details

### Alters: the barbarian’s skills

- **Archetype feature:** Swamp Skills
- **Description:** A brutish swamper adds Knowledge (geography) and Knowledge (local) to her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A brutish swamper adds Knowledge (geography) and Knowledge (local) to her list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: fast movement

- **Archetype feature:** Marsh March (Ex)
- **Description:** A brutish swamper can move through the underbrush and muddy terrain of bogs and swamps at her normal speed without taking damage or suffering other impairments.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A brutish swamper can move through the underbrush and muddy terrain of bogs and swamps at her normal speed without taking damage or suffering other impairments. Briars, mud, thorns, and overgrown areas that have been magically manipulated to impede motion, however, still affect her.
- **Implementation flags:**
  - ki subsystem.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Home (Ex)
- **Description:** At 2nd level, a brutish swamper gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in swamps.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 5, 20.
  - **Rules text to implement:** At 2nd level, a brutish swamper gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in swamps. This bonus increases by +1 at 5th level and again every 3 levels after 5th (up to a maximum bonus of +8 at 20th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Stubborn (Ex)
- **Description:** At 3rd level, a brutish swamper resists any attempts to change her attitude or compel her to action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a brutish swamper resists any attempts to change her attitude or compel her to action. Diplomacy and Intimidate checks against her take a –2 penalty, and no result can shift her attitude more than one step in a 24-hour period. These penalties increase by 2 for every 3 levels the brutish swamper has beyond 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rage power normally gained at 6th level

- **Archetype feature:** Wrastlin’ (Ex)
- **Description:** At 6th level, while raging, a brutish swamper gains a +2 bonus to her CMD against grapple combat maneuvers and a +2 bonus on damage rolls made as part of successful grapple combat maneuver checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, while raging, a brutish swamper gains a +2 bonus to her CMD against grapple combat maneuvers and a +2 bonus on damage rolls made as part of successful grapple combat maneuver checks.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the brutish swamper archetype: brawler, greater brawler, greater tyrant totem, lesser tyrant totem, lizard stride, low-light vision, superstition, and tyrant totem.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the brutish swamper archetype: brawler, greater brawler, greater tyrant totem, lesser tyrant totem, lizard stride, low-light vision, superstition, and tyrant totem.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Swamp Skills
- Marsh March (Ex)
- Home (Ex)
- Stubborn (Ex)
- Wrastlin’ (Ex)
- Rage Powers
