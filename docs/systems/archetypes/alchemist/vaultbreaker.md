# Alchemist - Vaultbreaker

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Vaultbreaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Vaultbreaker
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Breaking and Entering (Ex); Rogue Talents; Safecracking (Ex); Enhanced Safecracking (Ex)
- **Replaced / altered class features:** the Brew Potion bonus feat; Throw Anything , the vaultbreaker’s bombs do not add his Intelligence bonus to damage rolls

## Implementation details

### Replaces: the Brew Potion bonus feat

- **Archetype feature:** Breaking and Entering (Ex)
- **Description:** A vaultbreaker gains Stealth as a class skill and can disarm magical traps as if he were a rogue with the trapfinding ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A vaultbreaker gains Stealth as a class skill and can disarm magical traps as if he were a rogue with the trapfinding ability.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: discoveries

- **Archetype feature:** Rogue Talents
- **Description:** A vaultbreaker can choose any of the following rogue talents in place of a discovery: expert leaper, fast stealth, ledge walker, nimble climber, or wall scramble.
- **Detailed mechanics:**
  - **Rules text to implement:** A vaultbreaker can choose any of the following rogue talents in place of a discovery: expert leaper, fast stealth, ledge walker, nimble climber, or wall scramble.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: Throw Anything, the vaultbreaker’s bombs do not add his Intelligence bonus to damage rolls

- **Archetype feature:** Safecracking (Ex)
- **Description:** At 1st level, a vaultbreaker’s bombs can help him disable locks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a vaultbreaker’s bombs can help him disable locks. He gains penetrating charge as a bonus discovery. Because
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: bombs and replaces the Throw Anything bonus feat

- **Archetype feature:** Safecracking (Ex)
- **Description:** At 1st level, a vaultbreaker’s bombs can help him disable locks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a vaultbreaker’s bombs can help him disable locks. He gains penetrating charge as a bonus discovery. Because
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: bombs and replaces the poison use class ability

- **Archetype feature:** Enhanced Safecracking (Ex)
- **Description:** At 3rd level, a vaultbreaker gains incendiary charge as a bonus discovery, and his incendiary charges ignore 10 points of an object’s hardness instead of 5.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a vaultbreaker gains incendiary charge as a bonus discovery, and his incendiary charges ignore 10 points of an object’s hardness instead of 5.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

## Parsed source feature headings

- Breaking and Entering (Ex)
- Rogue Talents
- Safecracking (Ex)
- Enhanced Safecracking (Ex)
