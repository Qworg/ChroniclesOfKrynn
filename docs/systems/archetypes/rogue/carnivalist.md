# Rogue - Carnivalist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Carnivalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Carnivalist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Familiar; Pet Performance (Ex); Sneak Attack (Ex); Animal Trainer (Ex)
- **Replaced / altered class features:** the rogue talents gained at 2nd, 4th, and 6th level; trap sense

## Replacement details

### Replaces: the rogue talents gained at 2nd, 4th
- **Archetype feature:** Pet Performance (Ex)
- **Description:** A carnivalist gains use of several bardic performances, making Handle Animal checks in place of any Perform checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4, 6.
  - Mechanics summary: A carnivalist gains use of several bardic performances, making Handle Animal checks in place of any Perform checks. At 2nd level, she gains the distraction bardic performance. At 4th level, she gains the fascinate bardic performance. At 6th level, she also gains use of the following performance. Trained Legerdemain (Ex) : At 6th level, a carnivalist can command a familiar or pet within 30 feet to make a Disable Device or Sleight of Hand check as if trained in the skill, using its own skill ranks (if any), Dexterity modifier, and equipment, with a competence bonus equal to 1/2 her rogue level. The check requires the normal amount of time to complete and the DC increases by 5.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, bardic performance hook, ki/monk hook.

### Replaces: 6th level

- **Archetype feature:** Pet Performance (Ex)
- **Description:** A carnivalist gains use of several bardic performances, making Handle Animal checks in place of any Perform checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4, 6.
  - Mechanics summary: A carnivalist gains use of several bardic performances, making Handle Animal checks in place of any Perform checks. At 2nd level, she gains the distraction bardic performance. At 4th level, she gains the fascinate bardic performance. At 6th level, she also gains use of the following performance. Trained Legerdemain (Ex) : At 6th level, a carnivalist can command a familiar or pet within 30 feet to make a Disable Device or Sleight of Hand check as if trained in the skill, using its own skill ranks (if any), Dexterity modifier, and equipment, with a competence bonus equal to 1/2 her rogue level. The check requires the normal amount of time to complete and the DC increases by 5.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, bardic performance hook, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Animal Trainer (Ex)
- **Description:** Starting at 3rd level, a carnivalist receives a bonus equal to 1/2 her rogue level whenever she uses Handle Animal on a Tiny or Small animal.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: Starting at 3rd level, a carnivalist receives a bonus equal to 1/2 her rogue level whenever she uses Handle Animal on a Tiny or Small animal. In addition, she can increase the DC by 5 to reduce the time needed to teach an animal a new trick or train an animal for a general purpose to 1 day for every week normally required. She can also train more than one animal at once, although each animal after the first adds 2 to the DC.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

## Parsed source feature headings

- Class Skills
- Familiar
- Pet Performance (Ex)
- Sneak Attack (Ex)
- Animal Trainer (Ex)

