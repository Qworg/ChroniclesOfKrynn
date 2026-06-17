# Alchemist - Clone Master

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Clone Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Clone%20Master
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bomb; Lesser Simulacrum; Rebirth; Simulacrum; Clone; Discoveries
- **Replaced / altered class features:** poison resistance +6 and poison immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bomb
- **Description:** A clone master’s bombs deal damage one die step lower than normal (regular bombs deal d4s, concussive bombs deal 1d3s, and so on).
- **Detailed mechanics:**
  - **Rules text to implement:** A clone master’s bombs deal damage one die step lower than normal (regular bombs deal d4s, concussive bombs deal 1d3s, and so on). This otherwise functions as and replaces the standard alchemist bomb class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Lesser Simulacrum
- **Description:** At 7th level, a clone master adds lesser simulacrum to his formula book as a 3rd-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 7, 3.
  - **Rules text to implement:** At 7th level, a clone master adds lesser simulacrum to his formula book as a 3rd-level extract.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: poison resistance +6 and poison immunity

- **Archetype feature:** Rebirth
- **Description:** At 8th level, a clone master can prepare a clone of himself that awakens if he is slain.
- **Detailed mechanics:**
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a clone master can prepare a clone of himself that awakens if he is slain. Creating the clone costs 5,000 gp, takes 1 week of work, and requires 3 additional weeks for the clone to grow to maturity. If he dies, the clone awakens as if the alchemist had used the clone spell on himself. He can have one inert of himself at a time. Unused clones created by a clone master do not rot.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Simulacrum
- **Description:** At 13th level, a clone master adds simulacrum to his formula book as a 5th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 13, 5.
  - **Rules text to implement:** At 13th level, a clone master adds simulacrum to his formula book as a 5th-level extract.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Clone
- **Description:** At 16th level, a clone master adds clone to his formula book as a 6th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 16, 6.
  - **Rules text to implement:** At 16th level, a clone master adds clone to his formula book as a 6th-level extract.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the clone master archetype: alchemical simulacrum, doppelganger simulacrum, preserve organs, and parasitic twin.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the clone master archetype: alchemical simulacrum, doppelganger simulacrum, preserve organs, and parasitic twin.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bomb
- Lesser Simulacrum
- Rebirth
- Simulacrum
- Clone
- Discoveries
