# Berserker - Hurler

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Hurler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Hurler
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skilled Thrower (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Skilled Thrower (Ex)
- **Description:** The hurler is skilled at throwing objects in combat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The hurler is skilled at throwing objects in combat. Increase the range increment of any thrown weapon or object by 10 feet.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the hurler archetype: hurling, greater hurling, hurling charge, lesser hurling, strength surge*, and surprise accuracy*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the hurler archetype: hurling, greater hurling, hurling charge, lesser hurling, strength surge*, and surprise accuracy*.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skilled Thrower (Ex)
- Rage Powers
