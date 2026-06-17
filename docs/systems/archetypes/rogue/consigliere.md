# Rogue - Consigliere

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Consigliere
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Consigliere
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Convincing Attitude (Ex); Combat Advisor (Ex); Bonus Feats (Ex); Field Boss (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding and evasion; uncanny dodge and improved uncanny dodge; all instances of trap sense; the rogue talent normally gained at 10th level

## Implementation details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A consigliere adds Knowledge (nobility) to his list of class skills, instead of Knowledge (dungeoneering).
- **Detailed mechanics:**
  - **Rules text to implement:** A consigliere adds Knowledge (nobility) to his list of class skills, instead of Knowledge (dungeoneering).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trapfinding and evasion

- **Archetype feature:** Convincing Attitude (Ex)
- **Description:** At 1st level, a consigliere gains Persuasive as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 2, 3.
  - **Rules text to implement:** At 1st level, a consigliere gains Persuasive as a bonus feat. At 2nd level, he gains the charmer APG rogue talent (or the certainty [Diplomacy] rogue talent if he is an unchained rogue). At 3rd level, if a consigliere attempts a Diplomacy check and fails to influence a creature’s attitude by 5 or more, the creature’s attitude remains unchanged instead of decreasing by one step.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Combat Advisor (Ex)
- **Description:** At 4th level, whenever a consigliere misses with a melee attack against an opponent, he can designate an ally within 30 feet of the target to receive a +1 insight bonus on her next attack roll against that opponent before the consigliere’s next turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, whenever a consigliere misses with a melee attack against an opponent, he can designate an ally within 30 feet of the target to receive a +1 insight bonus on her next attack roll against that opponent before the consigliere’s next turn. At 8th level, the insight bonus increases to +2.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: all instances of trap sense

- **Archetype feature:** Bonus Feats (Ex)
- **Description:** Starting at 4th level, a consigliere can choose to gain a single teamwork feat instead of a single rogue talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** Starting at 4th level, a consigliere can choose to gain a single teamwork feat instead of a single rogue talent. Starting at 12th level, the consigliere can choose to gain teamwork feats instead of rogue talents as many times as he chooses.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the rogue talent normally gained at 10th level

- **Archetype feature:** Field Boss (Ex)
- **Description:** At 10th level, as a standard action, a consigliere can grant a teamwork feat to all allies within 30 feet who can see and hear her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, as a standard action, a consigliere can grant a teamwork feat to all allies within 30 feet who can see and hear her. This teamwork feat must be one the consigliere knows. Allies retain the use of this feat for 3 rounds plus 1 round for every 2 rogue levels the consigliere has. Allies do not need to meet the prerequisites of this teamwork feat. The consigliere can use this ability once per day at 10th level, plus 1 additional time per day every 4 rogue levels thereafter.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the consigliere archetype: assault leader APG, black market connections UC, coax information APG, honeyed words APG (or certainty [Bluff ] for an unchained rogue), and shades of gray.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the consigliere archetype: assault leader APG, black market connections UC, coax information APG, honeyed words APG (or certainty [Bluff ] for an unchained rogue), and shades of gray.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the consigliere archetype: hard minded UC, opportunist, redirect attack APG, rumormonger UC, skill mastery, slippery mind, and unwitting ally UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the consigliere archetype: hard minded UC, opportunist, redirect attack APG, rumormonger UC, skill mastery, slippery mind, and unwitting ally UC.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Class Skills
- Convincing Attitude (Ex)
- Combat Advisor (Ex)
- Bonus Feats (Ex)
- Field Boss (Ex)
- Rogue Talents
- Advanced Talents
