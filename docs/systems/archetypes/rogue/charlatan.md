# Rogue - Charlatan

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Charlatan
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Charlatan
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Natural Born Liar (Ex); Grand Hoax (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Natural Born Liar (Ex)
- **Description:** At 1st level, when a charlatan successfully deceives a creature with a Bluff, that creature takes a ­–2 penalty on the charlatan’s Bluff checks for the next 24 hours.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when a charlatan successfully deceives a creature with a Bluff, that creature takes a ­–2 penalty on the charlatan’s Bluff checks for the next 24 hours. This ability does not stack with itself.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Grand Hoax (Ex)
- **Description:** At 3rd level, the charlatan begins to master the art of the grand hoax and learns to create deceptions designed to bestow harm upon her foes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 10.
  - **Rules text to implement:** At 3rd level, the charlatan begins to master the art of the grand hoax and learns to create deceptions designed to bestow harm upon her foes. She gains the rumormonger advanced talent, even though she is not yet 10th level. This ability takes the place of trap sense.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the charlatan archetype: black market connections*, coax information, cunning lie*, honeyed words, and underhanded*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the charlatan archetype: black market connections*, coax information, cunning lie*, honeyed words, and underhanded*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the charlatan archetype: hard to fool*, skill mastery, and unwitting ally*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the charlatan archetype: hard to fool*, skill mastery, and unwitting ally*.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Natural Born Liar (Ex)
- Grand Hoax (Ex)
- Rogue Talents
- Advanced Talents
