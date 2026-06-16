# Bard - Wasteland Chronicler

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Wasteland Chronicler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Wasteland%20Chronicler
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Wasteland Knowledge (Ex); Wasteland Specialist (Ex)
- **Replaced / altered class features:** Bardic Knowledge; Inspire Competence

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Wasteland Knowledge (Ex)
- **Description:** A wasteland chronicler adds half his level (minimum 1) as a bonus on Knowledge (geography), Knowledge (local), Knowledge (nature), Knowledge (planes), and Survival checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A wasteland chronicler adds half his level (minimum 1) as a bonus on Knowledge (geography), Knowledge (local), Knowledge (nature), Knowledge (planes), and Survival checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: inspire competence

- **Archetype feature:** Wasteland Specialist (Ex)
- **Description:** At 3rd level and every 5 levels thereafter, the wasteland chronicler gains the benefits of the favored terrain ranger class feature , but the wasteland chronicler can choose only cold, desert, mountain, or swamp from the ranger’s favored terrain list.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level and every 5 levels thereafter, the wasteland chronicler gains the benefits of the favored terrain ranger class feature , but the wasteland chronicler can choose only cold, desert, mountain, or swamp from the ranger’s favored terrain list. In addition, the wasteland chronicler adds half his level (minimum 1) as a bonus on Diplomacy checks to influence the attitude of wasteland dwellers. If the wasteland chronicler has the favored terrain ability from any other classes, the levels from these different sources stack for the purposes of improving the bonuses of selected favored terrains and choosing new favored terrains.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored terrain hook.

## Parsed source feature headings

- Wasteland Knowledge (Ex)
- Wasteland Specialist (Ex)

