# Monk - Windstep Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Windstep Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Windstep%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hurricane Punch (Ex); Wind Step (Su); Swift Ki (Su)
- **Replaced / altered class features:** stunning fist; slow fall

## Implementation details

### Replaces: stunning fist

- **Archetype feature:** Hurricane Punch (Ex)
- **Description:** At 1st level, a windstep master gains Hurricane Punch (see page 19) as a bonus feat, even if he does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 4, 12, 20, 8, 16.
  - **Rules text to implement:** At 1st level, a windstep master gains Hurricane Punch (see page 19) as a bonus feat, even if he does not meet the prerequisites. While using this feat, he doesn’t provoke an attack of opportunity, even if he doesn’t have the Improved Bull Rush feat. At 4th level, while using the Hurricane Punch feat, the windstep master can bull rush a target up to two size categories larger. At 12th level, the windstep master’s target can be up to three size categories larger. At 20th level, the target can be of any size category. At 8th level, when the windstep master uses the Hurricane Punch feat to successfully bull rush a creature, he can push the creature back an additional 5 feet. At 16th level, he can push the creature back an additional 10 feet.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: slow fall

- **Archetype feature:** Wind Step (Su)
- **Description:** At 4th level, the windstep master’s steps become supernaturally light.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, the windstep master’s steps become supernaturally light. As a move action, he can use air walk (as per the spell) up to a distance equal to his fast movement bonus. He must reach a solid, level surface able to support his weight by the end of his turn or he falls.
- **Implementation flags:**
  - air walk spell effect.

### Alters: ki pool

- **Archetype feature:** Swift Ki (Su)
- **Description:** At 4th level, the windstep master can spend 1 point from his ki pool as a swift action to sustain his wind step for 1 minute.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, the windstep master can spend 1 point from his ki pool as a swift action to sustain his wind step for 1 minute. During this time, the windstep master can remain airborne even if he doesn’t reach a solid surface. He can also spend 1 point from his ki pool as a swift action to increase his wind step distance by 20 feet for 1 round. The windstep master does not gain the ability to spend ki to increase his base speed by 20 feet for 1 round.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Hurricane Punch (Ex)
- Wind Step (Su)
- Swift Ki (Su)
