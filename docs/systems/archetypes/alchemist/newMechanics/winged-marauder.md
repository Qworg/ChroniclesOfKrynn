# Alchemist - Winged Marauder

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Winged Marauder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Winged%20Marauder
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Flying Beast Tamer (Ex); Discovery
- **Replaced / altered class features:** the mutagen and persistent mutagen class features

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A winged marauder gains Acrobatics, Handle Animal, and Ride as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A winged marauder gains Acrobatics, Handle Animal, and Ride as class skills. These replace Disable Device, Sleight of Hand, and Use Magic Device as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the mutagen and persistent mutagen class features

- **Archetype feature:** Flying Beast Tamer (Ex)
- **Description:** At 1st level, a winged marauder acquires a flying mount as an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a winged marauder acquires a flying mount as an animal companion. This works as the druid animal companion class feature, except the marauder must select a dire bat or giant vulture. The marauder’s effective druid level is equal to his alchemist level. A marauder and his companion don’t gain the share spells ability.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discovery
- **Description:** A winged marauder can select the following additional discovery.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A winged marauder can select the following additional discovery. Sipping Pet (Ex) : As a standard action, the marauder can administer a dose of a liquid (such as an extract, infusion, potion, or an alchemical liquid like antitoxin) to his animal companion, even if the companion is unconscious. The alchemist must be adjacent to or riding the companion to use this ability. An alchemist must have the infusion discovery to select this discovery.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Flying Beast Tamer (Ex)
- Discovery
