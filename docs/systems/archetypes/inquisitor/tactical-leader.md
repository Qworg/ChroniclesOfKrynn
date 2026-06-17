# Inquisitor - Tactical Leader

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Tactical Leader
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Tactical%20Leader
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Leader’s Words (Ex); Tactician (Ex); Battle Acumen (Ex)
- **Replaced / altered class features:** stern gaze; solo tactics and teamwork feats; exploit weakness

## Implementation details

### Replaces: stern gaze

- **Archetype feature:** Leader’s Words (Ex)
- **Description:** Tactical leaders are skilled at speaking soothing words that keep the peace and bolster allies’ resolve.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Tactical leaders are skilled at speaking soothing words that keep the peace and bolster allies’ resolve. A tactical leader receives a morale bonus on all Diplomacy checks equal to half his inquisitor level (minimum +1).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: solo tactics and teamwork feats

- **Archetype feature:** Tactician (Ex)
- **Description:** At 3rd level, 9th level, and 18th level, a tactical leader gains a teamwork feat as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 9, 18, 12.
  - **Rules text to implement:** At 3rd level, 9th level, and 18th level, a tactical leader gains a teamwork feat as a bonus feat. He must meet the prerequisites for this feat. As a standard action, the tactical leader can grant one of these feats to all allies within 30 feet who can see and hear him. Allies retain the use of this bonus feat for 3 rounds plus 1 round for every 2 inquisitor levels the tactical leader has. Allies do not need to meet the prerequisites of these bonus feats. The tactical leader can use this ability once per day at 3rd level, plus one additional time per day at 6th, 9th, 15th, and 18th level. At 12th level, a tactical leader can use the tactician ability as a swift action. At 18th level, whenever the tactical leader uses this ability, he grants any two teamwork feats that he knows. He can select from any of his teamwork feats, not just his bonus feats. If the tactical leader also has cavalier levels, these levels stack for determining the number of uses of this ability per day.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: exploit weakness

- **Archetype feature:** Battle Acumen (Ex)
- **Description:** At 14th level, a tactical leader can grant his judgment benefits to a single other ally within 30 feet who can see and hear the tactical leader as an immediate action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a tactical leader can grant his judgment benefits to a single other ally within 30 feet who can see and hear the tactical leader as an immediate action. These benefits last until the beginning of the tactical leader’s next turn. A tactical leader must have a judgment active to use this ability and the benefits granted are the same as those selected by his judgment. A tactical leader can use this ability a number of times per day equal to his Wisdom modifier (minimum 1).
- **Implementation flags:**
  - judgment subsystem.

## Parsed source feature headings

- Leader’s Words (Ex)
- Tactician (Ex)
- Battle Acumen (Ex)
