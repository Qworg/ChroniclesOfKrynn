# Rogue - False Medium

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** False Medium
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20False%20Medium
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Dim the Lights (Ex); False Sensitivity (Ex); Haunting Presences (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the 2nd-level rogue talent; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Dim the Lights (Ex)
- **Description:** At 1st level, while in dim light or darkness, a false medium adds 1/2 his rogue level as a bonus on Bluff, Disguise, and Sleight of Hand checks, and creatures without low-light vision or darkvision take an equal penalty on skill checks to oppose the false medium’s Bluff, Disguise, and Sleight of Hand checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, while in dim light or darkness, a false medium adds 1/2 his rogue level as a bonus on Bluff, Disguise, and Sleight of Hand checks, and creatures without low-light vision or darkvision take an equal penalty on skill checks to oppose the false medium’s Bluff, Disguise, and Sleight of Hand checks.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the 2nd-level rogue talent

- **Archetype feature:** False Sensitivity (Ex)
- **Description:** At 2nd level, a charlatan can convincingly fake the ability to use occult skill unlocks such as automatic writing and dowsing.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a charlatan can convincingly fake the ability to use occult skill unlocks such as automatic writing and dowsing. An untrained onlooker can’t tell the difference between the false medium’s scams and a true use of occult skill unlocks. An onlooker capable of using the particular occult skill unlock that the false medium is faking can attempt the appropriate skill check for that unlock, opposed by the false medium’s Bluff check, to detect the fraud. In any case, any results of the false medium’s charades are fabricated (for instance, the false medium might ask leading questions to elicit false memories while pretending to use hypnotism).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trap sense

- **Archetype feature:** Haunting Presences (Ex)
- **Description:** At 3rd level, the false medium exploits his natural talent for deception to convince others of the presence of false supernatural entities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the false medium exploits his natural talent for deception to convince others of the presence of false supernatural entities. As long as the false medium is in conditions of dim light or darkness, he can use Bluff skill checks to emulate the effects of dancing lights, ghost sound, silent image, or ventriloquism by throwing his voice, subtly misdirecting or convincing subjects, or manipulating light and shadows. The range of these effects is 10 feet from the false medium, plus an additional 5 feet for every 3 rogue levels he possesses beyond 3rd. The effects last for 1 round, though they can be maintained with additional checks. Only one of these effects can be created or maintained in a given round. Observers can attempt either a Perception or Sense Motive check (whichever of their bonuses is higher) to oppose this Bluff check; the GM should roll these checks secretly. This is an extraordinary ability and not an illusion, so if the false medium succeeds at the opposed check, even powerful effects like true seeing don’t detect the fakery.
- **Implementation flags:**
  - ki subsystem.
  - haunt subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the false medium rogue archetype: esoteric scholar UC, fast fingers APG, honeyed words APG, major magic, minor magic, and quick trapsmith APG.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the false medium rogue archetype: esoteric scholar UC, fast fingers APG, honeyed words APG, major magic, minor magic, and quick trapsmith APG.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the false medium rogue archetype: feat, master of disguise APG, and skill mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the false medium rogue archetype: feat, master of disguise APG, and skill mastery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Dim the Lights (Ex)
- False Sensitivity (Ex)
- Haunting Presences (Ex)
- Rogue Talents
- Advanced Talents
