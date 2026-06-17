# Bard - Fey Courtier

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Fey Courtier
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Fey%20Courtier
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Fey Contacts; Bard Level; Base Value; Purchase Limit; Summon Fey Allies
- **Replaced / altered class features:** Dirge of Doom; Frightening Tune; Inspire Heroics; Versatile Performance: Inspire Competence

## Implementation details

### Replaces: dirge of doom and frightening tune

- **Archetype feature:** Bardic Performance
- **Description:** The fey courtier has access to the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8, 14, 15.
  - **Rules text to implement:** The fey courtier has access to the following bardic performances. Scorn of the Wilds (Sp) : At 8th level, the fey courtier can use bardic performance to permanently mark a creature with nature's displeasure by spending 2 rounds performing while the target remains within 30 feet. The performance includes a litany of the target's misdeeds against fey and nature. Unless the target succeeds at a Will saving throw (DC = 10 + half the bard's level + his Charisma modifier), it is cursed as per nature's exile or bestow curse. At 14th level, the fey courtier's options expand to include baleful polymorph and green caress. As part of the performance, the fey courtier must define a condition under which the curse will be lifted, which must relate to making amends for the crime against fey or nature and cannot be suicidal to carry out. A creature that succeeds at its saving throw is immune to the fey courtier's scorn of the wild for 24 hours. This is a curse effect. Stone Dance (Sp) : At 15th level, the bard's performance can move even the features of the natural world. This performance functions as animate plants (DC = 10 + half the bard's level + his Charisma modifier) except it can also animate unworked stone and water from natural bodies of water (with statistics equivalent to an appropriate plant).
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - curse subsystem.
  - feat grant/prerequisite handling.

### Replaces: inspire heroics

- **Archetype feature:** Bardic Performance
- **Description:** The fey courtier has access to the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8, 14, 15.
  - **Rules text to implement:** The fey courtier has access to the following bardic performances. Scorn of the Wilds (Sp) : At 8th level, the fey courtier can use bardic performance to permanently mark a creature with nature's displeasure by spending 2 rounds performing while the target remains within 30 feet. The performance includes a litany of the target's misdeeds against fey and nature. Unless the target succeeds at a Will saving throw (DC = 10 + half the bard's level + his Charisma modifier), it is cursed as per nature's exile or bestow curse. At 14th level, the fey courtier's options expand to include baleful polymorph and green caress. As part of the performance, the fey courtier must define a condition under which the curse will be lifted, which must relate to making amends for the crime against fey or nature and cannot be suicidal to carry out. A creature that succeeds at its saving throw is immune to the fey courtier's scorn of the wild for 24 hours. This is a curse effect. Stone Dance (Sp) : At 15th level, the bard's performance can move even the features of the natural world. This performance functions as animate plants (DC = 10 + half the bard's level + his Charisma modifier) except it can also animate unworked stone and water from natural bodies of water (with statistics equivalent to an appropriate plant).
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - curse subsystem.
  - feat grant/prerequisite handling.

### Replaces: versatile performance

- **Archetype feature:** Fey Contacts
- **Description:** At 2nd level, thanks to his fey contacts and knowledge of the byzantine trade customs of the fey courts, a fey courtier can treat any wilderness area with fey residents as a settlement with a certain base value and purchase limit based on his bard level for the purpose of buying and selling magic items.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, thanks to his fey contacts and knowledge of the byzantine trade customs of the fey courts, a fey courtier can treat any wilderness area with fey residents as a settlement with a certain base value and purchase limit based on his bard level for the purpose of buying and selling magic items. See here for rules on settlement base values and purchase limits. The fey courtier can also use these contacts to gather information about the residents, geography, and nearby areas with Diplomacy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Purchase Limit
- **Description:** 2nd 50 gp 500 gp 6th 500 gp 2,500 gp 10th 2,000 gp 10,000 gp 14th 8,000 gp 50,000 gp 18th 32,000 gp 200,000 gp
- **Detailed mechanics:**
  - **Rules text to implement:** 2nd 50 gp 500 gp 6th 500 gp 2,500 gp 10th 2,000 gp 10,000 gp 14th 8,000 gp 50,000 gp 18th 32,000 gp 200,000 gp
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: inspire competence

- **Archetype feature:** Summon Fey Allies
- **Description:** At 3rd level, the fey courtier gains Augment Summoning as a bonus feat and can call upon natural allies who owe him favors.
- **Detailed mechanics:**
  - **Level hooks:** 3, 1.
  - **Rules text to implement:** At 3rd level, the fey courtier gains Augment Summoning as a bonus feat and can call upon natural allies who owe him favors. He adds summon nature’s ally I to his list of 1st-level bard spells known. Whenever he gains access to another spell level, he adds the next-higher summon nature’s ally spell to his list of bard spells known. The fey courtier adds the following creatures to the summon nature’s ally list: 1st— grimple (gremlin), mite, sprite ; 2nd— atomie, fuath (gremlin), nixie ; 3rd— leprechaun, nuglub (gremlin), pooka ; 4th— kelpie, korred, twigjack ; 5th— lampad, lurker in light, swan maiden ; 6th— cold rider, oceanid, sangoi.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bardic Performance
- Fey Contacts
- Purchase Limit
- Summon Fey Allies
