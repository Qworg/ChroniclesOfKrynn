# Rogue - Spy

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Spy
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Spy
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skilled Liar (Ex); Poison Use (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Skilled Liar (Ex)
- **Description:** Whenever a spy uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Whenever a spy uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1). This bonus does not apply to feint attempts or attempts to pass secret messages.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trap sense

- **Archetype feature:** Poison Use (Ex)
- **Description:** A 3rd level, a spy is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** A 3rd level, a spy is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the spy archetype: canny observer, guileful polyglot, honeyed words, major magic*, minor magic*, and quick disguise.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the spy archetype: canny observer, guileful polyglot, honeyed words, major magic*, minor magic*, and quick disguise.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the spy archetype: crippling strike*, master of disguise, and stealthy sniper.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the spy archetype: crippling strike*, master of disguise, and stealthy sniper.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skilled Liar (Ex)
- Poison Use (Ex)
- Rogue Talents
- Advanced Talents
