# Rogue - Smuggler

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Smuggler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Smuggler
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bribery; Conceal Item; Distraction
- **Replaced / altered class features:** trap sense; trapfinding; Evasion

## Implementation details

### Replaces: trap sense

- **Archetype feature:** Bribery
- **Description:** An experienced smuggler knows how to smooth over interactions with customs officials.
- **Detailed mechanics:**
  - **Level hooks:** 3, 6, 9, 12, 15, 18.
  - **Rules text to implement:** An experienced smuggler knows how to smooth over interactions with customs officials. At 3rd level, when dealing with officials working at a checkpoint, conducting an inspection, or performing another such activity, a smuggler can make a Diplomacy check opposed by the presiding official’s Sense Motive check to ensure her contraband makes it through. She gains a +1 bonus on this Diplomacy check. On a successful check, the smuggler pays a small bribe (5d4 gp) to guarantee her cargo remains undisturbed. This bonus rises to +2 when the smuggler reaches 6th level, +3 at 9th level, +4 at 12th level, +5 at 15th level, and +6 at 18th level.
- **Implementation flags:**
  - ki subsystem.

### Replaces: trapfinding

- **Archetype feature:** Conceal Item
- **Description:** A smuggler adds 1/2 her level on Sleight of Hand checks (minimum +1).
- **Detailed mechanics:**
  - **Rules text to implement:** A smuggler adds 1/2 her level on Sleight of Hand checks (minimum +1). A smuggler can use Sleight of Hand to conceal a small item in a container or room, such as the false bottom of a chest or beneath floorboards. Anyone attempting to find an item concealed by a smuggler makes a Perception check opposed by the Sleight of Hand check made by the smuggler when she concealed the object.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: Evasion

- **Archetype feature:** Distraction
- **Description:** A smuggler uses patter and body language to deflect searchers from hidden items.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** A smuggler uses patter and body language to deflect searchers from hidden items. At 2nd level, a smuggler may make a Bluff check opposed by a searcher’s Perception check when a searcher looks for items the smuggler has concealed. If the smuggler’s Bluff check succeeds, the searcher must make a second Perception check and take the lower of the two rolls.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Bribery
- Conceal Item
- Distraction
