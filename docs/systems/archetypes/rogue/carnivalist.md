# Rogue - Carnivalist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Carnivalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Carnivalist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Familiar; Pet Performance (Ex); Sneak Attack (Ex); Animal Trainer (Ex)
- **Replaced / altered class features:** the rogue talents gained at 2nd, 4th, and 6th level; trap sense

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A carnivalist gains Handle Animal as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A carnivalist gains Handle Animal as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Familiar
- **Description:** At 1st level, a carnivalist gains a familiar as a wizard of equal level.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a carnivalist gains a familiar as a wizard of equal level. Levels in a class that grants a familiar stack with carnivalist levels for determining the familiar’s abilities.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the rogue talents gained at 2nd, 4th, and 6th level

- **Archetype feature:** Pet Performance (Ex)
- **Description:** A carnivalist gains use of several bardic performances, making Handle Animal checks in place of any Perform checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 4, 6.
  - **Rules text to implement:** A carnivalist gains use of several bardic performances, making Handle Animal checks in place of any Perform checks. At 2nd level, she gains the distraction bardic performance. At 4th level, she gains the fascinate bardic performance. At 6th level, she also gains use of the following performance. Trained Legerdemain (Ex) : At 6th level, a carnivalist can command a familiar or pet within 30 feet to make a Disable Device or Sleight of Hand check as if trained in the skill, using its own skill ranks (if any), Dexterity modifier, and equipment, with a competence bonus equal to 1/2 her rogue level. The check requires the normal amount of time to complete and the DC increases by 5. The carnivalist must maintain this pet performance each round her familiar or pet attempts a Disable Device or Sleight of Hand check. The pet performance ability otherwise functions identically to bardic performance. Levels in a class with the distraction or fascinate bardic performances stack with carnivalist levels for the purpose of determining bonuses granted by these performances.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** A carnivalist gains this ability starting at 2nd level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A carnivalist gains this ability starting at 2nd level. The sneak attack damage dealt is 1d6 points at 2nd level, and increases by 1d6 points every 4 carnivalist levels thereafter. A carnivalist’s familiar can also deal sneak attack damage as appropriate to foes as long as it is within 30 feet of her (though only Small and larger creatures may flank enemies, as usual).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Animal Trainer (Ex)
- **Description:** Starting at 3rd level, a carnivalist receives a bonus equal to 1/2 her rogue level whenever she uses Handle Animal on a Tiny or Small animal.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** Starting at 3rd level, a carnivalist receives a bonus equal to 1/2 her rogue level whenever she uses Handle Animal on a Tiny or Small animal. In addition, she can increase the DC by 5 to reduce the time needed to teach an animal a new trick or train an animal for a general purpose to 1 day for every week normally required. She can also train more than one animal at once, although each animal after the first adds 2 to the DC.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Familiar
- Pet Performance (Ex)
- Sneak Attack (Ex)
- Animal Trainer (Ex)
