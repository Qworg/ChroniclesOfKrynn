# Alchemist - Homunculist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Homunculist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Homunculist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Diminished Poisoning; Homunculus Familiar (Ex); Experimentation (Ex)
- **Replaced / altered class features:** mutagen

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Poisoning
- **Description:** A homunculist doesn’t gain the poison use, poison resistance, poison immunity, or swift poisoning class features.
- **Detailed mechanics:**
  - **Rules text to implement:** A homunculist doesn’t gain the poison use, poison resistance, poison immunity, or swift poisoning class features.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: mutagen

- **Archetype feature:** Homunculus Familiar (Ex)
- **Description:** The homunculist has created a living homunculus in the shape of an animal or vermin.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The homunculist has created a living homunculus in the shape of an animal or vermin. It functions in all ways as a familiar, treating the homunculist’s alchemist level as his effective wizard level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Experimentation (Ex)
- **Description:** A homunculist is constantly experimenting on his familiar to give it new and unusual features and abilities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** A homunculist is constantly experimenting on his familiar to give it new and unusual features and abilities. At 4th level, the homunculist can grant his familiar 1 evolution point worth of eidolon evolutions for every 4 alchemist levels he possesses, though he can’t select any evolutions that require a particular base form. Each time the homunculist gains a level, he can change his familiar’s evolutions. These evolutions stack with those from the Evolved Familiar feat. The homunculist can select the Evolved Familiar feat as an alchemist discovery if he meets its prerequisites.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Diminished Poisoning
- Homunculus Familiar (Ex)
- Experimentation (Ex)
