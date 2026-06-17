# Inquisitor - Heretic

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Heretic
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Heretic
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Judgment (Su); Lore of Escape (Ex); Hide Tracks (Ex)
- **Replaced / altered class features:** monster lore

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Judgment (Su)
- **Description:** A heretic gains the following judgment in addition to the normal list of inquisitor judgments.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A heretic gains the following judgment in addition to the normal list of inquisitor judgments. Escape (Su) : Each time the inquisitor using this judgment hits an opponent with a melee or ranged attack, she can use a move action attempt to create a diversion to hide (see the Stealth skill).
- **Implementation flags:**
  - judgment subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: monster lore

- **Archetype feature:** Lore of Escape (Ex)
- **Description:** At 1st level, the heretic uses every trick she knows to escape those now pursuing her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the heretic uses every trick she knows to escape those now pursuing her. She adds her Wisdom modifier on Bluff and Stealth skill checks in addition to the normal ability score modifiers.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Hide Tracks (Ex)
- **Description:** At 1st level, a heretical inquisitor is adept at hiding her tracks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a heretical inquisitor is adept at hiding her tracks. Creatures attempting to track her take a –5 penalty on rolls to find or follow her tracks. Ex-Inquisitors An inquisitor who becomes an ex-inquisitor can, with the GM’s permission, take the heretic archetype, replacing her class abilities with the appropriate archetype abilities. If the character atones or joins a different faith, she loses her heretic abilities and regains her previous inquisitor class abilities.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Judgment (Su)
- Lore of Escape (Ex)
- Hide Tracks (Ex)
