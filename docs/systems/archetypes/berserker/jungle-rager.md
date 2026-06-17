# Berserker - Jungle Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Jungle Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Jungle%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Home Ground Advantage (Ex); Jungle Endurance (Ex); Home Ground Supremacy (Ex); Damage Reduction (Ex); Rage Powers
- **Replaced / altered class features:** uncanny dodge; trap sense; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Home Ground Advantage (Ex)
- **Description:** At 2nd level, a jungle rager learns how to make optimal use of the natural cover of her homeland.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a jungle rager learns how to make optimal use of the natural cover of her homeland. She chooses a specific terrain type from the ranger list of favored terrains. When in this terrain, she increases her bonus to AC and on Reflex saving throws gained from cover, partial cover, and improved cover (but not soft cover) by 1. In this terrain, she also increases the miss chance caused by concealment for attacks against her by 5%.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: trap sense

- **Archetype feature:** Jungle Endurance (Ex)
- **Description:** At 3rd level, a jungle rager gains a +1 bonus on Fortitude saves to resist the effects of hot weather and diseases.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a jungle rager gains a +1 bonus on Fortitude saves to resist the effects of hot weather and diseases. This bonus increases by +1 every 3 barbarian levels after 3rd.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Home Ground Supremacy (Ex)
- **Description:** At 5th level, a jungle rager becomes even more capable when navigating and fighting in her preferred terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a jungle rager becomes even more capable when navigating and fighting in her preferred terrain. She gains the woodland stride ranger ability, though this ability works only in the terrain she selected for the home ground advantage ability. In this terrain, she gains an additional +1 bonus to AC when benefiting from cover or improved cover (but not soft cover).
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Damage Reduction (Ex)
- **Description:** A jungle rager gains this ability at 8th level, except her effective barbarian level for the ability is equal to her barbarian level – 1.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** A jungle rager gains this ability at 8th level, except her effective barbarian level for the ability is equal to her barbarian level – 1. In addition, this damage reduction is doubled against damage dealt by creatures with the swarm subtype. This ability otherwise functions as the barbarian ability of the same name.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the jungle rager archetype: animal fury, bestial climber, hive totem, internal fortitude, low-light vision, night vision, raging climber, scent, sharpened accuracy, and surprise accuracy.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the jungle rager archetype: animal fury, bestial climber, hive totem, internal fortitude, low-light vision, night vision, raging climber, scent, sharpened accuracy, and surprise accuracy.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Home Ground Advantage (Ex)
- Jungle Endurance (Ex)
- Home Ground Supremacy (Ex)
- Damage Reduction (Ex)
- Rage Powers
