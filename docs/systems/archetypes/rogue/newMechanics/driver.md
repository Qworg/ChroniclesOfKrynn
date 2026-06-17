# Rogue - Driver

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Driver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Driver
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hard Drive (Ex); Driver’s Fortitude (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trap sense

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Hard Drive (Ex)
- **Description:** When driving a vehicle that uses a group of animals or magical beasts as muscle propulsion, the DCs of all driving checks are reduced by 2, the maximum speed of the vehicle increases by 10 feet, and the acceleration increases by 5 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** When driving a vehicle that uses a group of animals or magical beasts as muscle propulsion, the DCs of all driving checks are reduced by 2, the maximum speed of the vehicle increases by 10 feet, and the acceleration increases by 5 feet. This ability takes the place of trapfinding.
- **Implementation flags:**
  - vehicle subsystem.
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Driver’s Fortitude (Ex)
- **Description:** At 3rd level, the driver learns to keep driving and maintain control of her vehicle, even when mortally wounded.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the driver learns to keep driving and maintain control of her vehicle, even when mortally wounded. If the driver drops below 0 hit points but is not dead, she can attempt a DC 15 Fortitude save each round to remain conscious and in control of her vehicle, though she may take no other actions.
- **Implementation flags:**
  - vehicle subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the driver archetype: firearm training* and getaway artist*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the driver archetype: firearm training* and getaway artist*.
- **Implementation flags:**
  - firearm subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the driver archetype: feat and getaway master*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the driver archetype: feat and getaway master*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Hard Drive (Ex)
- Driver’s Fortitude (Ex)
- Rogue Talents
- Advanced Talents
