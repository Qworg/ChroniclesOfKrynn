# Druid - River Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** River Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20River%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ferrier (Ex); Read the Currents (Ex); Countercurrent (Ex); Deep Breath (Ex); Wild Shape (Su); Tongue of the Sun and Moon (Ex)
- **Replaced / altered class features:** Class Skills; Nature Sense; Woodland Stride; Trackless Step; Resist Nature’s Lure; Wild Shape; Timeless Body

## Implementation details

### Alters: the druid’s class skills and replaces nature sense

- **Archetype feature:** Ferrier (Ex)
- **Description:** A river druid adds Diplomacy to her list of class skills and gains a +2 bonus on Diplomacy and Knowledge (nature) skill checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A river druid adds Diplomacy to her list of class skills and gains a +2 bonus on Diplomacy and Knowledge (nature) skill checks.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: woodland stride

- **Archetype feature:** Read the Currents (Ex)
- **Description:** At 2nd level, a river druid gains a bonus equal to half her druid level on initiative checks and Acrobatics, Knowledge (geography), Perception, Stealth, Survival, and Swim checks when she is in, on, or adjacent to flowing water.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a river druid gains a bonus equal to half her druid level on initiative checks and Acrobatics, Knowledge (geography), Perception, Stealth, Survival, and Swim checks when she is in, on, or adjacent to flowing water.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Countercurrent (Ex)
- **Description:** At 3rd level, a river druid takes no penalty to speed or on Acrobatics or Stealth checks in shallow water up to 2 feet deep (1 foot deep for Small characters) such as shallow bogs, shorelines, streams, and partially flooded areas.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a river druid takes no penalty to speed or on Acrobatics or Stealth checks in shallow water up to 2 feet deep (1 foot deep for Small characters) such as shallow bogs, shorelines, streams, and partially flooded areas. A river druid (and any vehicle she pilots) isn’t moved by flowing water unless she allows it. Water that has been magically manipulated to impede or boost motion still affects her.
- **Implementation flags:**
  - vehicle subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Deep Breath (Ex)
- **Description:** At 4th level, a river druid can hold her breath for a number of minutes equal to her Constitution score (after this, she must begin attempting Constitution checks to avoid suffocation as normal).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a river druid can hold her breath for a number of minutes equal to her Constitution score (after this, she must begin attempting Constitution checks to avoid suffocation as normal).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** A river druid gains this ability at 6th level, except her effective druid level for the ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** A river druid gains this ability at 6th level, except her effective druid level for the ability is equal to her druid level – 2.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: timeless body

- **Archetype feature:** Tongue of the Sun and Moon (Ex)
- **Description:** At 15th level, a river druid can speak with any living creature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a river druid can speak with any living creature.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Ferrier (Ex)
- Read the Currents (Ex)
- Countercurrent (Ex)
- Deep Breath (Ex)
- Wild Shape (Su)
- Tongue of the Sun and Moon (Ex)
