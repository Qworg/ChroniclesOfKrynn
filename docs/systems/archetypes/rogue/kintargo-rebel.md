# Rogue - Kintargo Rebel

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Kintargo Rebel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Kintargo%20Rebel
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Sophisticated Stealth (Ex); Misdirection (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trap sense; uncanny dodge

## Implementation details

### Replaces: trap sense

- **Archetype feature:** Sophisticated Stealth (Ex)
- **Description:** At 3rd level, a Kintargo rebel gains a +1 bonus on Knowledge (nobility) checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a Kintargo rebel gains a +1 bonus on Knowledge (nobility) checks. In addition, she gains a +1 bonus on Bluff checks to convey a secret message and on Sense Motive checks to discern secret messages. These bonuses increase by 1 every 3 rogue levels thereafter.
- **Implementation flags:**
  - ki subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Misdirection (Sp)
- **Description:** At 4th level, a Kintargo rebel gains the ability to cast misdirection on herself once per day, though instead of choosing an object for the second target, she must choose a creature in range.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a Kintargo rebel gains the ability to cast misdirection on herself once per day, though instead of choosing an object for the second target, she must choose a creature in range. The caster level for this ability is equal to her class level, and the save DC for this spell is 12 + the Kintargo rebel’s Intelligence modifier. The save DC of this ability increases by 1 if the secondary target is lawful or evil.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the Kintargo rebel archetype: canny observer APG, charmer APG, false friend ARG, fast getaway APG, honeyed words APG, obfuscate story ARG, and quick disguise ARG.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the Kintargo rebel archetype: canny observer APG, charmer APG, false friend ARG, fast getaway APG, honeyed words APG, obfuscate story ARG, and quick disguise ARG.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the Kintargo rebel archetype: hard to fool UC, master of disguise APG, skill mastery, slippery mind, and thoughtful reexamining APG.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the Kintargo rebel archetype: hard to fool UC, master of disguise APG, skill mastery, slippery mind, and thoughtful reexamining APG.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Sophisticated Stealth (Ex)
- Misdirection (Sp)
- Rogue Talents
- Advanced Talents
