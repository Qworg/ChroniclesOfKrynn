# Rogue - Snoop

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Snoop
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Snoop
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Inspiration (Ex); Investigator Talents (Ex); Uncanny Snoop (Ex); Master of Whispers (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding and evasion; uncanny dodge and improved uncanny dodge; the rogue talent gained at 8th level

## Implementation details

### Replaces: trapfinding and evasion

- **Archetype feature:** Inspiration (Ex)
- **Description:** At 1st level, a snoop gains an ability similar to the investigator’s inspiration class ability ( Pathfinder RPG Advanced Class Guide 31 ).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a snoop gains an ability similar to the investigator’s inspiration class ability ( Pathfinder RPG Advanced Class Guide 31 ). The snoop begins with an inspiration pool equal to half her rogue level plus her Intelligence modifier (minimum of 1). Unlike an investigator, a snoop can only use inspiration on skill checks, not on attack rolls or saving throws. This ability is otherwise identical to the investigator class ability of the same name.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Investigator Talents (Ex)
- **Description:** Beginning at 2nd level, and each time she selects a new rogue talent, a snoop can instead select one of the following investigator talents ( Advanced Class Guide 32–33 ) eidetic recollection, empathy, hidden agendas, inspired alertness, inspired intimidator, item lore, or underworld inspiration.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** Beginning at 2nd level, and each time she selects a new rogue talent, a snoop can instead select one of the following investigator talents ( Advanced Class Guide 32–33 ) eidetic recollection, empathy, hidden agendas, inspired alertness, inspired intimidator, item lore, or underworld inspiration. Her effective investigator level for the purpose of these talents is equal to her rogue level. She still can’t use inspiration on attack rolls or saving throws (so, for instance, she can’t use the second part of hidden agendas).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Uncanny Snoop (Ex)
- **Description:** At 4th level, a snoop gains a +2 bonus on Intimidate checks when trying to force an opponent to give her information (or Bluff and Diplomacy checks for the same purpose if she has the coax information APG rogue talent).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, a snoop gains a +2 bonus on Intimidate checks when trying to force an opponent to give her information (or Bluff and Diplomacy checks for the same purpose if she has the coax information APG rogue talent). She also gains a +2 bonus on Sense Motive checks to tell if someone’s information is false. At 8th level, these bonuses increase to +4.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Master of Whispers (Ex)
- **Description:** At 8th level, a snoop receives the rumormonger UC advanced rogue talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a snoop receives the rumormonger UC advanced rogue talent.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the snoop archetype: black market connections UC, coax information APG, fast stealth, follow clues APG, and strong impression APG (as well as certainty for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the snoop archetype: black market connections UC, coax information APG, fast stealth, follow clues APG, and strong impression APG (as well as certainty for an unchained rogue).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the snoop archetype: hard minded UC, hidden mind, skill mastery, and thoughtful re-examining APG (as well as cutting edge for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the snoop archetype: hard minded UC, hidden mind, skill mastery, and thoughtful re-examining APG (as well as cutting edge for an unchained rogue).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Inspiration (Ex)
- Investigator Talents (Ex)
- Uncanny Snoop (Ex)
- Master of Whispers (Ex)
- Rogue Talents
- Advanced Talents
