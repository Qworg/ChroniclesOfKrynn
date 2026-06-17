# Inquisitor - Cloaked Wolf

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Cloaked Wolf
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Cloaked%20Wolf
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Lure Prey (Ex); Always Wary (Ex); Unleashed Fury (Ex)
- **Replaced / altered class features:** stern gaze; solo tactics and teamwork feats

## Implementation details

### Alters: the inquisitor’s class skills

- **Archetype feature:** Class Skills
- **Description:** A cloaked wolf adds Sleight of Hand to her list of class skills, instead of Intimidate.
- **Detailed mechanics:**
  - **Rules text to implement:** A cloaked wolf adds Sleight of Hand to her list of class skills, instead of Intimidate.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: stern gaze

- **Archetype feature:** Lure Prey (Ex)
- **Description:** Cloaked wolves are skilled at maintaining a harmless guise even while they silently prepare to strike against their enemies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** Cloaked wolves are skilled at maintaining a harmless guise even while they silently prepare to strike against their enemies. Starting at 1st level, a cloaked wolf receives a morale bonus on all Disguise and Sleight of Hand checks equal to half her inquisitor level (minimum +1). When a cloaked wolf uses Sleight of Hand to draw a hidden weapon, this bonus doubles.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: cunning initiative and replaces monster lore

- **Archetype feature:** Always Wary (Ex)
- **Description:** A cloaked wolf is always ready for betrayal and subterfuge.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A cloaked wolf is always ready for betrayal and subterfuge. Whenever she attempts a Sense Motive check to avoid being surprised by a foe using Bluff to conceal the attack, the cloaked wolf can always act during the surprise round, regardless of the result of the check. At 2nd level, she adds her Wisdom modifier (in addition to her Dexterity modifier) to her initiative checks during any such encounter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: solo tactics and teamwork feats

- **Archetype feature:** Unleashed Fury (Ex)
- **Description:** At 3rd level, a cloaked wolf can transition between parley and combat in the blink of an eye.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6.
  - **Rules text to implement:** At 3rd level, a cloaked wolf can transition between parley and combat in the blink of an eye. She gains Quick Draw as a bonus feat. Additionally, at 6th level and every 3 inquisitor levels thereafter, she gains a bonus feat from the following list: Alertness, Catch Off-Guard, Deceitful, Deft Hands, Dodge, Improved Initiative, Improved Unarmed Strike, Improvised Weapon Mastery, Lookout APG, Mobility, Spring Attack, Stunning Fist, and Throw Anything. She must meet the prerequisites of the selected bonus feat. As a standard action, a cloaked wolf can choose to learn a new bonus feat from the above list in place of the most recent bonus feat she has already learned. In effect, the cloaked wolf loses the bonus feat in exchange for the new one. She can only change the most recent bonus feat gained. Whenever she gains a new bonus feat, the previous bonus feat becomes set and cannot be changed again. A cloaked wolf can change her most recent bonus feat a number of times per day equal to her Wisdom modifier (minimum 1).
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Lure Prey (Ex)
- Always Wary (Ex)
- Unleashed Fury (Ex)
