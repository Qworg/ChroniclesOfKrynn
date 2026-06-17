# Rogue - Chameleon

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Chameleon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Chameleon
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Misdirection (Ex); Effortless Sneak (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Misdirection (Ex)
- **Description:** At 1st level, a chameleon begins her career knowing that the secret to disappearing lies in deceiving the senses of her observers.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a chameleon begins her career knowing that the secret to disappearing lies in deceiving the senses of her observers. Every day she gains a pool of stealth points equal to her ranks in Bluff. These points refresh at the start of each day. Before making a Stealth check, she can choose to put stealth points into the roll, gaining a bonus on Stealth checks equal to the number of stealth points she puts into the roll. If she gains a bonus on Bluff checks because of a feat (such as Skill Focus [Bluff]), she adds a number of points to her stealth pool equal to the bonus the feat grants.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: trap sense

- **Archetype feature:** Effortless Sneak (Sp)
- **Description:** At 3rd level, the chameleon chooses a single terrain from the ranger’s favored terrain class feature.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 3, 6.
  - **Rules text to implement:** At 3rd level, the chameleon chooses a single terrain from the ranger’s favored terrain class feature. While she is within that terrain, she can take 10 on any Stealth check she can make within that terrain. When the chameleon reaches 6th level, and every three levels thereafter, she chooses a new type of terrain from the ranger’s favored terrain list. She gains this ability with the newly picked terrain.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the chameleon archetype: camouflage, fast stealth, quick disguise, and terrain mastery*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the chameleon archetype: camouflage, fast stealth, quick disguise, and terrain mastery*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the chameleon archetype: hide in plain sight* and master of disguise.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the chameleon archetype: hide in plain sight* and master of disguise.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Misdirection (Ex)
- Effortless Sneak (Sp)
- Rogue Talents
- Advanced Talents
