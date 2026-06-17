# Ranger - Groom

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Groom
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Groom
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hide the Horses (Ex); Horse Whisperer (Su); Scout the Area (Ex)
- **Replaced / altered class features:** track; Endurance; the ranger’s 1st favored terrain

## Implementation details

### Replaces: track

- **Archetype feature:** Hide the Horses (Ex)
- **Description:** A groom finds the best place to stable and conceal a party’s mounts while the group explores a dungeon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A groom finds the best place to stable and conceal a party’s mounts while the group explores a dungeon. A groom adds half her level (minimum 1) on Stealth skill checks for both herself and the mounts she’s hiding while she is concealing a party’s mounts.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: Endurance

- **Archetype feature:** Horse Whisperer (Su)
- **Description:** At 3rd level, a groom can use speak with animals at will, but can use this power only on horses, riding dogs, and other mounts of the animal type.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a groom can use speak with animals at will, but can use this power only on horses, riding dogs, and other mounts of the animal type.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the ranger’s 1st favored terrain

- **Archetype feature:** Scout the Area (Ex)
- **Description:** At 3rd level, a groom gains a +4 bonus on Knowledge (local) checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a groom gains a +4 bonus on Knowledge (local) checks. In addition, she always knows where to find the nearest expert or spellcaster who can provide a particular service, such as the nearest source of raise dead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Hide the Horses (Ex)
- Horse Whisperer (Su)
- Scout the Area (Ex)
