# Rogue - Investigator

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Investigator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Investigator
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Follow Up (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Follow Up (Ex)
- **Description:** An investigator can roll twice on any Diplomacy check made to gather information, and receives the information for both results.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An investigator can roll twice on any Diplomacy check made to gather information, and receives the information for both results. This takes the same amount of time as one check. If the lesser of the two checks reveals false information, the rogue is aware of it. False information is not revealed in this way if the people she questioned do not know it to be false.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the investigator archetype: coax information, fast picks, follow clues, hard to fool, and minor magic*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the investigator archetype: coax information, fast picks, follow clues, hard to fool, and minor magic*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the investigator archetype: hunter’s surprise, slippery mind*, and thought reexamining.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the investigator archetype: hunter’s surprise, slippery mind*, and thought reexamining.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Follow Up (Ex)
- Rogue Talents
- Advanced Talents
