# Inquisitor - Cloaked Wolf

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Cloaked Wolf
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Cloaked%20Wolf
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Lure Prey (Ex); Always Wary (Ex); Unleashed Fury (Ex)
- **Replaced / altered class features:** stern gaze; solo tactics and teamwork feats

## Replacement details

### Alters: the inquisitor’s class skills

- **Archetype feature:** Class Skills
- **Description:** A cloaked wolf adds Sleight of Hand to her list of class skills, instead of Intimidate.
- **Mechanics:**
  - Mechanics summary: A cloaked wolf adds Sleight of Hand to her list of class skills, instead of Intimidate.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: stern gaze

- **Archetype feature:** Lure Prey (Ex)
- **Description:** Cloaked wolves are skilled at maintaining a harmless guise even while they silently prepare to strike against their enemies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: Cloaked wolves are skilled at maintaining a harmless guise even while they silently prepare to strike against their enemies. Starting at 1st level, a cloaked wolf receives a morale bonus on all Disguise and Sleight of Hand checks equal to half her inquisitor level (minimum +1). When a cloaked wolf uses Sleight of Hand to draw a hidden weapon, this bonus doubles.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Alters: cunning initiative and replaces monster lore

- **Archetype feature:** Always Wary (Ex)
- **Description:** A cloaked wolf is always ready for betrayal and subterfuge.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A cloaked wolf is always ready for betrayal and subterfuge. Whenever she attempts a Sense Motive check to avoid being surprised by a foe using Bluff to conceal the attack, the cloaked wolf can always act during the surprise round, regardless of the result of the check. At 2nd level, she adds her Wisdom modifier (in addition to her Dexterity modifier) to her initiative checks during any such encounter.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: solo tactics and teamwork feats

- **Archetype feature:** Unleashed Fury (Ex)
- **Description:** At 3rd level, a cloaked wolf can transition between parley and combat in the blink of an eye.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, a cloaked wolf can transition between parley and combat in the blink of an eye. She gains Quick Draw as a bonus feat. Additionally, at 6th level and every 3 inquisitor levels thereafter, she gains a bonus feat from the following list: Alertness, Catch Off-Guard, Deceitful, Deft Hands, Dodge, Improved Initiative, Improved Unarmed Strike, Improvised Weapon Mastery, Lookout APG , Mobility, Spring Attack, Stunning Fist, and Throw Anything. She must meet the prerequisites of the selected bonus feat. As a standard action, a cloaked wolf can choose to learn a new bonus feat from the above list in place of the most recent bonus feat she has already learned. In effect, the cloaked wolf loses the bonus feat in exchange for the new one.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Lure Prey (Ex)
- Always Wary (Ex)
- Unleashed Fury (Ex)

