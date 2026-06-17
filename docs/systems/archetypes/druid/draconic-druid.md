# Druid - Draconic Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Draconic Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Draconic%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Drake Companion; Dragon Sense; Resist Dragon's Might; Dragon Shape
- **Replaced / altered class features:** nature bond, wild empathy, woodland stride, venom immunity, a thousand faces, and timeless body; nature sense; resist nature’s lure

## Implementation details

### Replaces: nature bond, wild empathy, woodland stride, venom immunity, a thousand faces, and timeless body

- **Archetype feature:** Drake Companion
- **Description:** A draconic druid gains a drake companion instead of an animal companion.
- **Detailed mechanics:**
  - **Rules text to implement:** A draconic druid gains a drake companion instead of an animal companion.
- **Implementation flags:**
  - animal companion progression.

### Replaces: nature sense

- **Archetype feature:** Dragon Sense
- **Description:** A draconic druid studies dragons and their history.
- **Detailed mechanics:**
  - **Rules text to implement:** A draconic druid studies dragons and their history. She gains a +2 bonus on Knowledge (arcana) and Knowledge (history) checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Dragon's Might
- **Description:** A draconic druid gains a +4 bonus on saving throws against the spells, spell-like abilities, and supernatural abilities of dragons.
- **Detailed mechanics:**
  - **Rules text to implement:** A draconic druid gains a +4 bonus on saving throws against the spells, spell-like abilities, and supernatural abilities of dragons.
- **Implementation flags:**
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Dragon Shape
- **Description:** A draconic druid can’t use wild shape to change into any of the usual forms available to a druid.
- **Detailed mechanics:**
  - **Level hooks:** 4, 10, 12.
  - **Rules text to implement:** A draconic druid can’t use wild shape to change into any of the usual forms available to a druid. Instead, at 4th level, she can use wild shape to change into a dragon-scaled version of herself with long fangs, gaining a +1 natural armor bonus to her AC and a bite attack appropriate for her size (1d6 points of damage for a Medium druid) but otherwise retaining her usual form. At 10th level, she can spend two uses of wild shape to transform into a Medium dragon as per form of the dragon I, and at 12th level, she can spend two uses to change into a Large dragon as per form of the dragon II. Each time that a draconic druid uses wild shape counts as a separate casting of the spell for the purpose of refreshing her uses of her breath weapon.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Drake Companion
- Dragon Sense
- Resist Dragon's Might
- Dragon Shape
