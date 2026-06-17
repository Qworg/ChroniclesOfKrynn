# Wizard - Instructor

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Instructor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Instructor
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Apprentice (Ex); Trained Teamwork (Ex)
- **Replaced / altered class features:** arcane bond

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Apprentice (Ex)
- **Description:** The wizard gains a built-in cohort-like trainee who can later mature into a true apprentice wizard.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 3
  - Action/timing: Passive companion feature
  - Duration: Permanent until replaced through level-up choice or loss
  - Uses: No daily cap
  - Core function:
    - At 1st level, gain a loyal apprentice that functions similarly to a Leadership cohort.
    - The initial apprentice is a 1st-level commoner with Magical Aptitude and NPC ability scores of 13, 12, 11, 10, 9, and 8 before racial modifiers.
    - At 3rd level, if the instructor's Leadership score is at least 2, the apprentice becomes a 1st-level wizard of the instructor's school and uses heroic ability scores of 15, 14, 13, 12, 10, and 8 before racial modifiers.
    - The apprentice never gains item creation feats but otherwise follows normal cohort rules.
    - Each time the instructor gains a level, the current apprentice may be dismissed and replaced under these same rules.
    - If the apprentice dies, the instructor takes a -2 penalty to Leadership.
  - Scaling: The companion can upgrade from commoner to wizard at 3rd level if the Leadership score threshold is met.
  - Interactions: Leadership score governs both the upgrade timing and the death penalty.
  - Edge cases: A low Leadership score can delay the 3rd-level wizard upgrade even after the level threshold is reached.
  - Implementation flags:
    - Likely existing hooks: cohort companion, Leadership-gated class upgrade, death penalty to Leadership.

### Alters: bonus feats at 5th, 10th, 15th, and 20th level

- **Archetype feature:** Trained Teamwork (Ex)
- **Description:** Bonus feats can be spent on teamwork options that the apprentice mirrors while nearby.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 5, 10, 15, 20
  - Action/timing: Passive; feat sharing is always on while the apprentice is within range
  - Duration: Permanent, with sharing active only inside 60 feet
  - Uses: No daily cap
  - Core function:
    - Starting at 5th level, the instructor may choose a teamwork feat whenever one of the listed wizard bonus-feat slots is gained.
    - While the apprentice is within 60 feet, she gains every teamwork feat the instructor selected through this ability as a bonus feat.
    - The apprentice does not need to meet prerequisites for those shared feats.
  - Scaling: Each listed milestone grants another chance to select a teamwork feat.
  - Interactions: Only teamwork feats taken through this replacement track are shared automatically.
  - Edge cases: Moving beyond 60 feet suspends access to the shared feats until the apprentice returns to range.
  - Implementation flags:
    - Likely existing hooks: restricted bonus-feat selection for teamwork feats, range-conditional feat sharing with cohort.

## Parsed source feature headings

- Apprentice (Ex)
- Trained Teamwork (Ex)
