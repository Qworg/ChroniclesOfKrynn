# Wizard - Instructor

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Instructor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Instructor
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Apprentice (Ex); Trained Teamwork (Ex)
- **Replaced / altered class features:** arcane bond

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Apprentice (Ex)
- **Description:** At 1st level, an instructor acquires the services of a loyal apprentice.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 7.
  - Mechanics summary: At 1st level, an instructor acquires the services of a loyal apprentice. She functions similarly to a cohort, though your apprentice begins as a 1st-level commoner with Magical Aptitude as their 1st-level feat and NPC ability scores (13, 12, 11, 10, 9, 8 before racial modifiers). When the instructor reaches 3rd level, if his Leadership score is at least 2, the apprentice becomes a 1st-level wizard of the same school specialization as the instructor, and she gains heroic ability scores (15, 14, 13, 12, 10, 8 before racial modifiers). The apprentice never gains item creation feats, but otherwise follows the normal rules for a cohort. Each time the instructor gains a level, he may dismiss his existing apprentice as graduated (or expelled, depending on her performance), and gain a new cohort following the same rules. If an apprentice dies in service to the instructor, the instructor takes a –2 penalty to his Leadership score.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty.

### Alters: the bonus feats gained at 5th, 10th, 15th
- **Archetype feature:** Trained Teamwork (Ex)
- **Description:** Starting at 5th level, the instructor can take a teamwork feat as his wizard bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 20.
  - Mechanics summary: Starting at 5th level, the instructor can take a teamwork feat as his wizard bonus feat. As long as his apprentice is within 60 feet, the apprentice gains all such teamwork feats as bonus feats. The apprentice does not have to meet the feat’s prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Alters: 20th level

- **Archetype feature:** Trained Teamwork (Ex)
- **Description:** Starting at 5th level, the instructor can take a teamwork feat as his wizard bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 20.
  - Mechanics summary: Starting at 5th level, the instructor can take a teamwork feat as his wizard bonus feat. As long as his apprentice is within 60 feet, the apprentice gains all such teamwork feats as bonus feats. The apprentice does not have to meet the feat’s prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Apprentice (Ex)
- Trained Teamwork (Ex)

