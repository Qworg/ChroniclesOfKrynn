# Alchemist - Psychonaut

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Psychonaut
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Psychonaut
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bomb; Precognition; Psychic Senses; Remote Consciousness; Greater Precognition; Master Precognition; Discoveries
- **Replaced / altered class features:** poison resistance +6; poison immunity; the increase to bomb damage at this level; the increase to bomb damage at this level

## Replacement details

### Replaces: poison resistance +4

- **Archetype feature:** Precognition
- **Description:** At 5th level, a psychonaut adds augury to his formula book as a 2nd-level extract (this extract does not require a divine focus component).
- **Mechanics:**
  - Level hooks: 5, 2.
  - Mechanics summary: At 5th level, a psychonaut adds augury to his formula book as a 2nd-level extract (this extract does not require a divine focus component).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: poison resistance +6

- **Archetype feature:** Psychic Senses
- **Description:** At 8th level, a psychonaut adds clairaudience/clairvoyance , detect scrying , scrying , and speak with dead to his formula book as 3rd-level extracts (a scrying extract does not require a focus or divine focus component).
- **Mechanics:**
  - Level hooks: 8, 3.
  - Mechanics summary: At 8th level, a psychonaut adds clairaudience/clairvoyance , detect scrying , scrying , and speak with dead to his formula book as 3rd-level extracts (a scrying extract does not require a focus or divine focus component). When a psychonaut uses a speak with dead extract, he gains the power to hear the lingering spirit within a corpse rather than enabling the corpse to audibly speak, but the extract otherwise works as the spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: poison immunity

- **Archetype feature:** Remote Consciousness
- **Description:** At 10th level, a psychonaut adds dream , lesser astral projection , nightmare , plane shift , sending , and telepathic bond to his formula book as 4th-level extracts (a plane shift extract does not require a focus component).
- **Mechanics:**
  - Level hooks: 10, 4.
  - Mechanics summary: At 10th level, a psychonaut adds dream , lesser astral projection , nightmare , plane shift , sending , and telepathic bond to his formula book as 4th-level extracts (a plane shift extract does not require a focus component).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Greater Precognition
- **Description:** At 15th level, a psychonaut adds moment of prescience to his formula book as a 5th-level extract.
- **Mechanics:**
  - Level hooks: 15, 5.
  - Mechanics summary: At 15th level, a psychonaut adds moment of prescience to his formula book as a 5th-level extract.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Master Precognition
- **Description:** At 17th level, a psychonaut adds foresight to his formula book as a 6th-level extract.
- **Mechanics:**
  - Level hooks: 17, 6.
  - Mechanics summary: At 17th level, a psychonaut adds foresight to his formula book as a 6th-level extract.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

## Parsed source feature headings

- Bomb
- Precognition
- Psychic Senses
- Remote Consciousness
- Greater Precognition
- Master Precognition
- Discoveries

