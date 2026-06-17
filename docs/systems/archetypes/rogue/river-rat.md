# Rogue - River Rat

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** River Rat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20River%20Rat
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Swamper (Ex); Rat’s Resilience (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trapfinding; Trap Sense

## Implementation details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A river rat gains Knowledge (nature) as a class skill instead of Knowledge (dungeoneering).
- **Detailed mechanics:**
  - **Rules text to implement:** A river rat gains Knowledge (nature) as a class skill instead of Knowledge (dungeoneering).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trapfinding

- **Archetype feature:** Swamper (Ex)
- **Description:** At 1st level, a river rat gains a bonus equal to half her rogue level on Swim checks (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a river rat gains a bonus equal to half her rogue level on Swim checks (minimum +1). A river rat ignores difficult terrain caused by light undergrowth and shallow bogs, and it costs her only 2 squares of movement to enter a square of deep bog or heavy undergrowth, rather than 4 squares of movement. She takes no penalty on Acrobatics or Stealth checks for being in bogs and undergrowth. All of these abilities apply only when she is wearing light or no armor and carrying no more than a light load.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Rat’s Resilience (Ex)
- **Description:** A river rat is inured to dangers presented by disease-carrying parasites, poisonous fish, and other toxic river denizens.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** A river rat is inured to dangers presented by disease-carrying parasites, poisonous fish, and other toxic river denizens. At 3rd level, a river rat gains a +1 bonus on saving throws against disease and poison effects. This bonus increases by 1 every 3 levels thereafter, to a maximum bonus of +6 at 18th level.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the river rat archetype: camouflage, hold breath, rogue crawl, stand up, strong stroke, survivalist.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the river rat archetype: camouflage, hold breath, rogue crawl, stand up, strong stroke, survivalist.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the river rat archetype: hide in plain sight, opportunist, skill mastery, stealthy sniper.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the river rat archetype: hide in plain sight, opportunist, skill mastery, stealthy sniper.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Class Skills
- Swamper (Ex)
- Rat’s Resilience (Ex)
- Rogue Talents
- Advanced Talents
