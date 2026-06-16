# Rogue - False Medium

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** False Medium
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20False%20Medium
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Dim the Lights (Ex); False Sensitivity (Ex); Haunting Presences (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the 2nd-level rogue talent; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Dim the Lights (Ex)
- **Description:** At 1st level, while in dim light or darkness, a false medium adds 1/2 his rogue level as a bonus on Bluff, Disguise, and Sleight of Hand checks, and creatures without low-light vision or darkvision take an equal penalty on skill checks to oppose the false medium’s Bluff, Disguise, and Sleight of Hand checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, while in dim light or darkness, a false medium adds 1/2 his rogue level as a bonus on Bluff, Disguise, and Sleight of Hand checks, and creatures without low-light vision or darkvision take an equal penalty on skill checks to oppose the false medium’s Bluff, Disguise, and Sleight of Hand checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, ki/monk hook.

### Replaces: the 2nd-level rogue talent

- **Archetype feature:** False Sensitivity (Ex)
- **Description:** At 2nd level, a charlatan can convincingly fake the ability to use occult skill unlocks such as automatic writing and dowsing.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a charlatan can convincingly fake the ability to use occult skill unlocks such as automatic writing and dowsing. An untrained onlooker can’t tell the difference between the false medium’s scams and a true use of occult skill unlocks. An onlooker capable of using the particular occult skill unlock that the false medium is faking can attempt the appropriate skill check for that unlock, opposed by the false medium’s Bluff check, to detect the fraud.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.
  - Needs implementation review: occult subsystem.

### Replaces: trap sense

- **Archetype feature:** Haunting Presences (Ex)
- **Description:** At 3rd level, the false medium exploits his natural talent for deception to convince others of the presence of false supernatural entities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the false medium exploits his natural talent for deception to convince others of the presence of false supernatural entities. As long as the false medium is in conditions of dim light or darkness, he can use Bluff skill checks to emulate the effects of dancing lights , ghost sound , silent image , or ventriloquism by throwing his voice, subtly misdirecting or convincing subjects, or manipulating light and shadows. The range of these effects is 10 feet from the false medium, plus an additional 5 feet for every 3 rogue levels he possesses beyond 3rd. The effects last for 1 round, though they can be maintained with additional checks. Only one of these effects can be created or maintained in a given round. Observers can attempt either a Perception or Sense Motive check (whichever of their bonuses is higher) to oppose this Bluff check; the GM should roll these checks secretly.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: haunt rules.

## Parsed source feature headings

- Dim the Lights (Ex)
- False Sensitivity (Ex)
- Haunting Presences (Ex)
- Rogue Talents
- Advanced Talents

