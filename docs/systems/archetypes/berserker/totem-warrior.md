# Berserker - Totem Warrior

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Totem Warrior
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Totem%20Warrior
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Rage Powers
- **Replaced / altered class features:** None

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The totem warrior is based entirely upon his totem rage powers.
- **Detailed mechanics:**
  - **Rules text to implement:** The totem warrior is based entirely upon his totem rage powers. In addition to the totem powers themselves, the following rage powers complement the totem warrior archtype (depending on the totem chosen): animal fury, low-light vision, night vision, raging climber, raging leaper, raging swimmer, and swift foot.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Rage Powers
