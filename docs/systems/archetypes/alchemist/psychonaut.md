# Alchemist - Psychonaut

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Psychonaut
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Psychonaut
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bomb; Precognition; Psychic Senses; Remote Consciousness; Greater Precognition; Master Precognition; Discoveries
- **Replaced / altered class features:** poison resistance +6; poison immunity; the increase to bomb damage at this level; the increase to bomb damage at this level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bomb
- **Description:** A psychonaut’s bombs deal damage one die step lower than normal (regular bombs deal d4s, concussive bombs deal 1d3s, and so on).
- **Detailed mechanics:**
  - **Rules text to implement:** A psychonaut’s bombs deal damage one die step lower than normal (regular bombs deal d4s, concussive bombs deal 1d3s, and so on). This ability otherwise functions as and replaces the standard alchemist bomb class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: poison resistance +4

- **Archetype feature:** Precognition
- **Description:** At 5th level, a psychonaut adds augury to his formula book as a 2nd-level extract (this extract does not require a divine focus component).
- **Detailed mechanics:**
  - **Level hooks:** 5, 2.
  - **Rules text to implement:** At 5th level, a psychonaut adds augury to his formula book as a 2nd-level extract (this extract does not require a divine focus component).
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison resistance +6

- **Archetype feature:** Psychic Senses
- **Description:** At 8th level, a psychonaut adds clairaudience/clairvoyance, detect scrying, scrying, and speak with dead to his formula book as 3rd-level extracts (a scrying extract does not require a focus or divine focus component).
- **Detailed mechanics:**
  - **Level hooks:** 8, 3.
  - **Rules text to implement:** At 8th level, a psychonaut adds clairaudience/clairvoyance, detect scrying, scrying, and speak with dead to his formula book as 3rd-level extracts (a scrying extract does not require a focus or divine focus component). When a psychonaut uses a speak with dead extract, he gains the power to hear the lingering spirit within a corpse rather than enabling the corpse to audibly speak, but the extract otherwise works as the spell.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison immunity

- **Archetype feature:** Remote Consciousness
- **Description:** At 10th level, a psychonaut adds dream, lesser astral projection, nightmare, plane shift, sending, and telepathic bond to his formula book as 4th-level extracts (a plane shift extract does not require a focus component).
- **Detailed mechanics:**
  - **Level hooks:** 10, 4.
  - **Rules text to implement:** At 10th level, a psychonaut adds dream, lesser astral projection, nightmare, plane shift, sending, and telepathic bond to his formula book as 4th-level extracts (a plane shift extract does not require a focus component).
- **Implementation flags:**
  - poison subsystem.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Greater Precognition
- **Description:** At 15th level, a psychonaut adds moment of prescience to his formula book as a 5th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 15, 5.
  - **Rules text to implement:** At 15th level, a psychonaut adds moment of prescience to his formula book as a 5th-level extract.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Master Precognition
- **Description:** At 17th level, a psychonaut adds foresight to his formula book as a 6th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 17, 6.
  - **Rules text to implement:** At 17th level, a psychonaut adds foresight to his formula book as a 6th-level extract.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the psychonaut archetype: confusion bomb, eternal potion, extend potion, lingering spirit, and madness bomb.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the psychonaut archetype: confusion bomb, eternal potion, extend potion, lingering spirit, and madness bomb.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bomb
- Precognition
- Psychic Senses
- Remote Consciousness
- Greater Precognition
- Master Precognition
- Discoveries
