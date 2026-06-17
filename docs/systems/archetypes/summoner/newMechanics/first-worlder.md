# Summoner - First Worlder

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** First Worlder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20First%20Worlder
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Summon Nature’s Ally (Sp); Fey Summons (Su); Eidolon
- **Replaced / altered class features:** Summon Monster I; Eidolon

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Summon Nature’s Ally (Sp)
- **Description:** Starting at 1st level, a first worlder can cast summon nature’s ally a number of times per day equal to 3 + his Charisma modifier.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 1, 19.
  - **Rules text to implement:** Starting at 1st level, a first worlder can cast summon nature’s ally a number of times per day equal to 3 + his Charisma modifier. At levels where a summoner would gain a more powerful summon monster spell as a spell-like ability, he instead gains the equivalent summon nature’s ally spell (at 19th level, he can use summon nature’s ally IX or gate ). When a first worlder gains a summon nature’s ally spell as a spell-like ability, he adds it to his class spell list (he must still select it as a spell known if he wants to cast it as an actual spell). This ability otherwise replaces the summon monster ability of a normal summoner.
- **Implementation flags:**
  - summoning subsystem.
  - spell-like ability support.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Fey Summons (Su)
- **Description:** At 3rd level, a first worlder adds the following creatures to the lists of what he can summon with his summon nature’s ally spell-like ability: Summon nature’s ally II : gremlin ( jinkin, pugwampi, or vexgit, see Bestiary 2).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a first worlder adds the following creatures to the lists of what he can summon with his summon nature’s ally spell-like ability: Summon nature’s ally II : gremlin ( jinkin, pugwampi, or vexgit, see Bestiary 2). Summon nature’s ally III : gremlin (nuglub, see Bestiary 2). Summon nature’s ally IV : unicorn. Summon nature’s ally V : pixie, satyr. Summon nature’s ally VII : nymph.
- **Implementation flags:**
  - ki subsystem.
  - summoning subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Eidolon
- **Description:** Instead of an outsider, a first worlder’s eidolon has the fey creature type and the extraplanar subtype.
- **Detailed mechanics:**
  - **Rules text to implement:** Instead of an outsider, a first worlder’s eidolon has the fey creature type and the extraplanar subtype. Its statistics are changed from a standard eidolon as follows: Hit Dice : d6 Hit Die (instead of d10). BAB : Equal to 1/2 the eidolon’s Hit Dice. Good/Bad Saves : The eidolon’s good saves area always Reflex and Will. Skills : The eidolon’s class skills are Acrobatics, Bluff, Climb, Craft, Diplomacy, Disguise, Escape Artist, Fly, Knowledge (geography), Knowledge (nature), Perception, Perform, Sense Motive, Sleight of Hand, Stealth, Swim, and Use Magic Device. Senses : The eidolon gains low-light vision instead of darkvision. The summoner can grant the eidolon darkvision 60 ft. as a 1-point evolution. Damage Reduction : If the first worlder chooses this evolution, he may select DR/cold iron instead of one of the alignment-based types of damage reduction. This otherwise works like and replaces the eidolon ability of a normal summoner.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

## Parsed source feature headings

- Summon Nature’s Ally (Sp)
- Fey Summons (Su)
- Eidolon
