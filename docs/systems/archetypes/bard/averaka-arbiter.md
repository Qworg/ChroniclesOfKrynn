# Bard - Averaka Arbiter

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Averaka Arbiter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Averaka%20Arbiter
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Versatile Teamwork (Ex)
- **Replaced / altered class features:** versatile performance and well-versed

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** An Averaka arbiter gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** An Averaka arbiter gains the following types of bardic performance. Inspire Teamwork (Ex) : A 3rd-level Averaka arbiter can use his performance to treat his allies as if they possessed the same teamwork feats as the bard for the purpose of determining whether the bard receives a bonus from his teamwork feats. His allies do not receive any bonuses from these feats unless they actually possess the feats themselves. The allies’ positioning and actions must still meet the prerequisites listed in the teamwork feat for the bard to receive the listed bonus. This performance replaces inspire competence. Ritual of Reconciliation (Su) : An Averaka arbiter of 8th level or higher can use his performance to improve the attitudes of nearby creatures by two steps. To be affected, a creature must be within 30 feet and able to hear the bard. Creatures whose attitude toward the bard becomes indifferent or better immediately cease attacking the bard and his allies, but may otherwise act as they please. The effect persists for as long as the creature is within 30 feet and the bard continues his performance. The effect ends if one of the bard’s allies attacks the creature. A successful Will saving throw (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) negates the effect. Ritual of reconciliation relies on audible components. This performance replaces dirge of doom.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: versatile performance and well-versed

- **Archetype feature:** Versatile Teamwork (Ex)
- **Description:** At 2nd level, an Averaka arbiter gains a bonus teamwork feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, an Averaka arbiter gains a bonus teamwork feat. He gains an additional bonus teamwork feat at 6th level and every 4 levels thereafter.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bardic Performance
- Versatile Teamwork (Ex)
