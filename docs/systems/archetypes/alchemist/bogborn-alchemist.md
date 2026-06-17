# Alchemist - Bogborn Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Bogborn Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Bogborn%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Amphibious Mutagen (Ex); Discovery Options; Discoveries
- **Replaced / altered class features:** Class Skills; Throw Anything

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A bogborn alchemist adds Swim to his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A bogborn alchemist adds Swim to his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: throw anything

- **Archetype feature:** Amphibious Mutagen (Ex)
- **Description:** At 1st level, when a bogborn alchemist uses a mutagen, he may choose to have his mutagen form enhanced for aquatic movement.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when a bogborn alchemist uses a mutagen, he may choose to have his mutagen form enhanced for aquatic movement. This gives him the amphibious special quality, his feet elongate, and the webbing between his fingers and toes expands, granting a swim speed of 15 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discovery Options
- **Description:** A bogborn alchemist can select the toxic skin grippli racial trait in place of an alchemical discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** A bogborn alchemist can select the toxic skin grippli racial trait in place of an alchemical discovery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the bogborn alchemist archetype: chameleon; concentrate poison, sticky poison ; nauseating flesh, poison conversion; bottled ooze, tanglefoot bomb, tentacle.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the bogborn alchemist archetype: chameleon; concentrate poison, sticky poison ; nauseating flesh, poison conversion; bottled ooze, tanglefoot bomb, tentacle.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Amphibious Mutagen (Ex)
- Discovery Options
- Discoveries
