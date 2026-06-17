# Rogue - Master of Disguise

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Master of Disguise
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Master%20of%20Disguise
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Consummate Actor (Ex); Grandmaster of Disguise (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding and the rogue talent gained at 2nd level; the rogue talent gained at 10th level

## Implementation details

### Replaces: trapfinding and the rogue talent gained at 2nd level

- **Archetype feature:** Consummate Actor (Ex)
- **Description:** A master of disguise adds half her rogue level (minimum 1) on all Disguise checks and on Bluff checks to stay in character while using Disguise.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A master of disguise adds half her rogue level (minimum 1) on all Disguise checks and on Bluff checks to stay in character while using Disguise. At 2nd level, she gains the quick disguise APG rogue talent, and she can create a disguise twice as quickly as normal even for that rogue talent (she can create a disguise that encompasses only minor details as a standard action).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 10th level

- **Archetype feature:** Grandmaster of Disguise (Ex)
- **Description:** At 10th level, a master of disguise gains the master of disguise APG advanced rogue talent and can use it an unlimited number of times per day.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, a master of disguise gains the master of disguise APG advanced rogue talent and can use it an unlimited number of times per day. Because she must still don a physical disguise to gain this bonus, it doesn’t stack with the bonuses from spells like alter self and disguise self, but since it is completely nonmagical, it is more reliable when scrutinized under magical detection.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the master of disguise archetype: camouflage APG, false friend ARG, major magic, minor magic, obfuscate story ARG, shades of gray, and steal the story ARG.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the master of disguise archetype: camouflage APG, false friend ARG, major magic, minor magic, obfuscate story ARG, shades of gray, and steal the story ARG.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the master of disguise archetype: hard minded UC, hidden mind, skill mastery, slippery mind, and unwitting ally UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the master of disguise archetype: hard minded UC, hidden mind, skill mastery, slippery mind, and unwitting ally UC.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Consummate Actor (Ex)
- Grandmaster of Disguise (Ex)
- Rogue Talents
- Advanced Talents
