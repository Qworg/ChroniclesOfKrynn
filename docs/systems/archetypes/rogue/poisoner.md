# Rogue - Poisoner

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Poisoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Poisoner
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Poison Use (Ex); Master Poisoner (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Poison Use (Ex)
- **Description:** At 1st level, a poisoner is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a poisoner is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Implementation flags:**
  - poison subsystem.

### Replaces: trap sense

- **Archetype feature:** Master Poisoner (Ex)
- **Description:** At 3rd level, a poisoner can use Craft (alchemy) to change the type of a poison.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a poisoner can use Craft (alchemy) to change the type of a poison. This requires 1 hour of work with an alchemist’s lab and a Craft (alchemy) skill check with a DC equal to the poison’s DC. If successful, the poison’s type changes to contact, ingested, inhaled, or injury. If the check fails, the poison is ruined. The poisoner also receives a bonus on Craft (alchemy) skill checks when working with poison equal to 1/2 her rogue level.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the poisoner archetype: distracting attack, lasting poison, surprise attack*, swift poison, and weapon training*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the poisoner archetype: distracting attack, lasting poison, surprise attack*, swift poison, and weapon training*.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the poisoner archetype: deadly cocktail, hunter’s surprise, and opportunist*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the poisoner archetype: deadly cocktail, hunter’s surprise, and opportunist*.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Poison Use (Ex)
- Master Poisoner (Ex)
- Rogue Talents
- Advanced Talents
