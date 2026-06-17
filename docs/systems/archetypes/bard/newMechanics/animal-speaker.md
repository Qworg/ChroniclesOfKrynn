# Bard - Animal Speaker

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Animal Speaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Animal%20Speaker
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Animal Friend; Nature’s Speaker; Bardic Performance; Summon Nature’s Ally
- **Replaced / altered class features:** fascinate; well-versed; inspire competence; suggestion

## Implementation details

### Replaces: fascinate

- **Archetype feature:** Animal Friend
- **Description:** An animal speaker selects a particular kind of animal, such as apes, badgers, bears, boars, cats, snakes, and so on.
- **Detailed mechanics:**
  - **Rules text to implement:** An animal speaker selects a particular kind of animal, such as apes, badgers, bears, boars, cats, snakes, and so on. The bard gains a +4 bonus on Handle Animal checks to influence animals of his chosen kind. Animals of this kind have a starting attitude of at least “indifferent” toward the bard and never attack him unless he attacks them first. Animal companions and magically controlled animals of the bard's chosen kind can be directed to attack the bard if the controlling creature wins an opposed Charisma check against the bard (this check can be made once per round until it succeeds, after which no further checks are needed). Supernatural versions of animals (such as animals with the fiendish template) can attempt an opposed Charisma check against the bard with a +4 bonus on its roll to overcome this hesitation. This ability has no effect on creatures other than animals.
- **Implementation flags:**
  - animal companion progression.
  - ki subsystem.

### Replaces: well-versed

- **Archetype feature:** Nature’s Speaker
- **Description:** At 5th, 11th, and 17th level, the animal speaker selects another kind of animal friend.
- **Detailed mechanics:**
  - **Level hooks:** 17.
  - **Rules text to implement:** At 5th, 11th, and 17th level, the animal speaker selects another kind of animal friend. The bard can use speak with animals at will on animals of his selected kinds.
- **Implementation flags:**
  - ki subsystem.

### Replaces: inspire competence

- **Archetype feature:** Bardic Performance
- **Description:** An animal speaker gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Level hooks:** 3, 6, 11, 17.
  - **Rules text to implement:** An animal speaker gains the following types of bardic performance. Soothing Performance : At 3rd level, an animal speaker can use bardic performance to influence animals. This works like the druid ability wild empathy, except he expends 1 round of bardic performance and makes a Perform check. If the bard already has wild empathy from another class, he adds the class levels that provide wild empathy to the result of his Perform check to influence an animal. Attract Rats : At 6th level, the animal speaker can use bardic performance to summon 1d3 rat swarms; they remain as long as he continues performing. At 11th level, he summons 2d3 swarms instead of 1d3 and the swarms have the advanced creature simple template. At 17th level, the number of swarms he summons increases to 3d3.
- **Implementation flags:**
  - bardic performance subsystem.
  - summoning subsystem.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** An animal speaker gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Level hooks:** 3, 6, 11, 17.
  - **Rules text to implement:** An animal speaker gains the following types of bardic performance. Soothing Performance : At 3rd level, an animal speaker can use bardic performance to influence animals. This works like the druid ability wild empathy, except he expends 1 round of bardic performance and makes a Perform check. If the bard already has wild empathy from another class, he adds the class levels that provide wild empathy to the result of his Perform check to influence an animal. Attract Rats : At 6th level, the animal speaker can use bardic performance to summon 1d3 rat swarms; they remain as long as he continues performing. At 11th level, he summons 2d3 swarms instead of 1d3 and the swarms have the advanced creature simple template. At 17th level, the number of swarms he summons increases to 3d3.
- **Implementation flags:**
  - bardic performance subsystem.
  - summoning subsystem.

### Replaces: mass suggestion

- **Archetype feature:** Summon Nature’s Ally
- **Description:** At 1st level, the animal speaker adds summon nature’s ally I to his bard spell list and bard spells known as a 1st-level spell.
- **Detailed mechanics:**
  - **Level hooks:** 1, 4, 2, 16, 6.
  - **Rules text to implement:** At 1st level, the animal speaker adds summon nature’s ally I to his bard spell list and bard spells known as a 1st-level spell. At 4th level (when he gains access to 2nd-level spells) he adds summon nature’s ally II to his spell list and spells known as a 2nd-level spell, and so on every 3 levels thereafter, until 16th level when he adds summon nature’s ally VI to his 6th-level spell list and spells known.
- **Implementation flags:**
  - summoning subsystem.
  - archetype spell-list override.

## Parsed source feature headings

- Animal Friend
- Nature’s Speaker
- Bardic Performance
- Summon Nature’s Ally
