# Rogue - Sniper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sniper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sniper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Accuracy (Ex); Deadly Range (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Accuracy (Ex)
- **Description:** At 1st level, a sniper halves all range increment penalties when making ranged attacks with a bow or crossbow.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a sniper halves all range increment penalties when making ranged attacks with a bow or crossbow.
- **Implementation flags:**
  - ki subsystem.

### Replaces: trap sense

- **Archetype feature:** Deadly Range (Ex)
- **Description:** At 3rd level, a sniper increases the range at which she can apply her sneak attack damage by 10 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a sniper increases the range at which she can apply her sneak attack damage by 10 feet. This range increases by 10 feet for every 3 levels after 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the sniper archetype: camouflage, snap shot, sniper’s eye, and weapon training*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the sniper archetype: camouflage, snap shot, sniper’s eye, and weapon training*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the sniper archetype: defensive roll*, master of disguise, and stealthy sniper.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the sniper archetype: defensive roll*, master of disguise, and stealthy sniper.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Accuracy (Ex)
- Deadly Range (Ex)
- Rogue Talents
- Advanced Talents
