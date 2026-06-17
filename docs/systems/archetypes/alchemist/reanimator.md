# Alchemist - Reanimator

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Reanimator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Reanimator
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bomb; Simple Reanimation; Create Undead; Create Greater Undead; Discoveries
- **Replaced / altered class features:** the increase to bomb damage at this level; the increase to bomb damage at this level; the increase to bomb damage at this level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bomb
- **Description:** A reanimator’s bombs deal damage one die step lower than normal (regular bombs deal d4s, concussive bombs deal 1d3s, and so on).
- **Detailed mechanics:**
  - **Rules text to implement:** A reanimator’s bombs deal damage one die step lower than normal (regular bombs deal d4s, concussive bombs deal 1d3s, and so on). This ability otherwise functions as and replaces the standard alchemist bomb class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Simple Reanimation
- **Description:** At 7th level, a reanimator adds lesser animate dead to his formula book as a 3rd-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 7, 3.
  - **Rules text to implement:** At 7th level, a reanimator adds lesser animate dead to his formula book as a 3rd-level extract. When he uses that extract, rather than drinking it, he injects it into the corpse he intends to animate, which rises as an undead creature under his control 1 hour later. The extract can only create zombies (including variant zombies).
- **Implementation flags:**
  - ki subsystem.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Create Undead
- **Description:** At 13th level, a reanimator adds create undead to his formula book as a 4th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 13, 4.
  - **Rules text to implement:** At 13th level, a reanimator adds create undead to his formula book as a 4th-level extract. When he uses that extract, rather than drinking it, he injects it into the corpse he intends to animate, which rises as an uncontrolled undead 1 hour later. The extract can only create corporeal undead.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Create Greater Undead
- **Description:** At 15th level, a reanimator adds create greater undead to his formula book as a 5th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 15, 5.
  - **Rules text to implement:** At 15th level, a reanimator adds create greater undead to his formula book as a 5th-level extract. This otherwise acts similarly to a create undead extract.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the reanimator archetype: alchemical zombie, elixir of life, eternal potion, mummification, and preserve organs.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the reanimator archetype: alchemical zombie, elixir of life, eternal potion, mummification, and preserve organs.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bomb
- Simple Reanimation
- Create Undead
- Create Greater Undead
- Discoveries
