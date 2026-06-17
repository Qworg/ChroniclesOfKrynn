# Inquisitor - Urban Infiltrator

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Urban Infiltrator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Urban%20Infiltrator
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Gifted Detective (Ex); A Thousand Faces (Su)
- **Replaced / altered class features:** monster lore; stalwart

## Implementation details

### Alters: the inquisitor’s class skills

- **Archetype feature:** Class Skills
- **Description:** An urban infiltrator adds Disable Device, Knowledge (history), Knowledge (local), and Knowledge (nobility) to her list of class skills in place of Knowledge (dungeoneering) and Knowledge (nature).
- **Detailed mechanics:**
  - **Rules text to implement:** An urban infiltrator adds Disable Device, Knowledge (history), Knowledge (local), and Knowledge (nobility) to her list of class skills in place of Knowledge (dungeoneering) and Knowledge (nature).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: monster lore

- **Archetype feature:** Gifted Detective (Ex)
- **Description:** An urban infiltrator adds her Wisdom modifier as well as her Charisma modifier on Bluff and Disguise skill checks and on Diplomacy checks to gather information.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An urban infiltrator adds her Wisdom modifier as well as her Charisma modifier on Bluff and Disguise skill checks and on Diplomacy checks to gather information. Attempting a Diplomacy check to gather information never takes an urban infiltrator more than 1 hour.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: stalwart

- **Archetype feature:** A Thousand Faces (Su)
- **Description:** At 11th level, an urban inquisitor gains the ability to change her appearance at will, as if using the alter self spell.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, an urban inquisitor gains the ability to change her appearance at will, as if using the alter self spell.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Gifted Detective (Ex)
- A Thousand Faces (Su)
