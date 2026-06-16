# Inquisitor - Tactical Leader

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Tactical Leader
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Tactical%20Leader
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Leader’s Words (Ex); Tactician (Ex); Battle Acumen (Ex)
- **Replaced / altered class features:** stern gaze; solo tactics and teamwork feats; exploit weakness

## Replacement details

### Replaces: stern gaze

- **Archetype feature:** Leader’s Words (Ex)
- **Description:** Tactical leaders are skilled at speaking soothing words that keep the peace and bolster allies’ resolve.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Tactical leaders are skilled at speaking soothing words that keep the peace and bolster allies’ resolve. A tactical leader receives a morale bonus on all Diplomacy checks equal to half his inquisitor level (minimum +1).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: solo tactics and teamwork feats

- **Archetype feature:** Tactician (Ex)
- **Description:** At 3rd level, 9th level, and 18th level, a tactical leader gains a teamwork feat as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 9, 18, 12.
  - Mechanics summary: At 3rd level, 9th level, and 18th level, a tactical leader gains a teamwork feat as a bonus feat. He must meet the prerequisites for this feat. As a standard action, the tactical leader can grant one of these feats to all allies within 30 feet who can see and hear him. Allies retain the use of this bonus feat for 3 rounds plus 1 round for every 2 inquisitor levels the tactical leader has. Allies do not need to meet the prerequisites of these bonus feats. The tactical leader can use this ability once per day at 3rd level, plus one additional time per day at 6th, 9th, 15th, and 18th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: exploit weakness

- **Archetype feature:** Battle Acumen (Ex)
- **Description:** At 14th level, a tactical leader can grant his judgment benefits to a single other ally within 30 feet who can see and hear the tactical leader as an immediate action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a tactical leader can grant his judgment benefits to a single other ally within 30 feet who can see and hear the tactical leader as an immediate action. These benefits last until the beginning of the tactical leader’s next turn. A tactical leader must have a judgment active to use this ability and the benefits granted are the same as those selected by his judgment. A tactical leader can use this ability a number of times per day equal to his Wisdom modifier (minimum 1).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Leader’s Words (Ex)
- Tactician (Ex)
- Battle Acumen (Ex)

