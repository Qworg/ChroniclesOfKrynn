# Ranger - Darklands Sailor

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Darklands Sailor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Darklands%20Sailor
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skilled Pilot (Ex); Keen Ear (Ex); Quick Swim (Ex); Subsonic Warning (Ex); Hidden Depths (Ex)
- **Replaced / altered class features:** track; woodland stride; swift tracker; camouflage and hide in plain sight

## Implementation details

### Replaces: track

- **Archetype feature:** Skilled Pilot (Ex)
- **Description:** A Darklands sailor adds half his level (minimum 1) to Profession (sailor) and Survival checks to navigate or avoid natural hazards in subterranean waterways.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A Darklands sailor adds half his level (minimum 1) to Profession (sailor) and Survival checks to navigate or avoid natural hazards in subterranean waterways.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: favored terrain

- **Archetype feature:** Keen Ear (Ex)
- **Description:** At 3rd level, a Darklands sailor learns how to use sound to compensate for poor visibility when facing threats above and below the water.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8, 13, 18.
  - **Rules text to implement:** At 3rd level, a Darklands sailor learns how to use sound to compensate for poor visibility when facing threats above and below the water. He gains the uncanny dodge rogue ability when underground and either swimming or aboard a boat. At 8th level, he gains improved uncanny dodge under these conditions, treating his Darklands sailor level as his effective rogue level for the purpose of denying an enemy’s sneak attacks. At 13th level, he gains blind sense with a range of 30 feet against creatures touching water. At 18th level, his blind sense range increases to 60 feet or equal to the range of his darkvision, whichever is greater. If the Darklands sailor becomes deafened, he loses all benefits of this ability until his hearing is restored.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: woodland stride

- **Archetype feature:** Quick Swim (Ex)
- **Description:** At 7th level, a Darklands sailor can swim at his full speed as a move action without penalty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a Darklands sailor can swim at his full speed as a move action without penalty.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: swift tracker

- **Archetype feature:** Subsonic Warning (Ex)
- **Description:** At 8th level as a swift action, a Darklands sailor can provide the benefits of his keen ear ability to the subjects of his hunter’s bond.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level as a swift action, a Darklands sailor can provide the benefits of his keen ear ability to the subjects of his hunter’s bond. This effect lasts for a number of rounds per day equal to the Darklands sailor’s Wisdom modifier. These rounds need not be consecutive. A deafened creature can’t benefit from a Darklands sailor’s subsonic warning.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: camouflage and hide in plain sight

- **Archetype feature:** Hidden Depths (Ex)
- **Description:** At 12th level, a Darklands sailor can use the Stealth skill to hide while underground or underwater, even if he doesn’t have cover or concealment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12, 17.
  - **Rules text to implement:** At 12th level, a Darklands sailor can use the Stealth skill to hide while underground or underwater, even if he doesn’t have cover or concealment. At 17th level, he can use the Stealth skill even while being observed when underground or underwater.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Skilled Pilot (Ex)
- Keen Ear (Ex)
- Quick Swim (Ex)
- Subsonic Warning (Ex)
- Hidden Depths (Ex)
