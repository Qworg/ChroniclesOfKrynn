# Bard - Wasteland Chronicler

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Wasteland Chronicler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Wasteland%20Chronicler
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Wasteland Knowledge (Ex); Wasteland Specialist (Ex)
- **Replaced / altered class features:** Bardic Knowledge; Inspire Competence

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Wasteland Knowledge (Ex)
- **Description:** A wasteland chronicler adds half his level (minimum 1) as a bonus on Knowledge (geography), Knowledge (local), Knowledge (nature), Knowledge (planes), and Survival checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A wasteland chronicler adds half his level (minimum 1) as a bonus on Knowledge (geography), Knowledge (local), Knowledge (nature), Knowledge (planes), and Survival checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: inspire competence

- **Archetype feature:** Wasteland Specialist (Ex)
- **Description:** At 3rd level and every 5 levels thereafter, the wasteland chronicler gains the benefits of the favored terrain ranger class feature, but the wasteland chronicler can choose only cold, desert, mountain, or swamp from the ranger’s favored terrain list.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level and every 5 levels thereafter, the wasteland chronicler gains the benefits of the favored terrain ranger class feature, but the wasteland chronicler can choose only cold, desert, mountain, or swamp from the ranger’s favored terrain list. In addition, the wasteland chronicler adds half his level (minimum 1) as a bonus on Diplomacy checks to influence the attitude of wasteland dwellers. If the wasteland chronicler has the favored terrain ability from any other classes, the levels from these different sources stack for the purposes of improving the bonuses of selected favored terrains and choosing new favored terrains.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Wasteland Knowledge (Ex)
- Wasteland Specialist (Ex)
