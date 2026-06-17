# Inquisitor - Abolisher

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Abolisher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Abolisher
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Sworn to Purity (Ex); Revealing Gaze (Ex); Expose Aberration (Sp); Escape Corruption’s Grasp (Sp)
- **Replaced / altered class features:** stern gaze; detect alignment and alters bane; discern lies

## Implementation details

### Alters: domains

- **Archetype feature:** Sworn to Purity (Ex)
- **Description:** An abolisher must select one of the following domains: Air, Animal, Earth, Fire, Plant, Water, or Weather.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An abolisher must select one of the following domains: Air, Animal, Earth, Fire, Plant, Water, or Weather. If she ever changes her deity to one that has none of the listed domains, she loses this archetype and becomes a normal inquisitor or ex-inquisitor.
- **Implementation flags:**
  - domain system.

### Replaces: stern gaze

- **Archetype feature:** Revealing Gaze (Ex)
- **Description:** An abolisher receives a morale bonus on opposed Perception checks against other creatures’ Disguise and Stealth checks equal to half her inquisitor level (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An abolisher receives a morale bonus on opposed Perception checks against other creatures’ Disguise and Stealth checks equal to half her inquisitor level (minimum +1). She grants this bonus to all adjacent allies.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: detect alignment and alters bane

- **Archetype feature:** Expose Aberration (Sp)
- **Description:** At 2nd level, an abolisher can use detect aberration APG at will.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 2, 5.
  - **Rules text to implement:** At 2nd level, an abolisher can use detect aberration APG at will. When she hits a creature with a weapon attack, she automatically knows if the creature is an aberration or not. At 5th level, she can activate her bane ability as an immediate action after she hits an aberration but before damage is rolled.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: discern lies

- **Archetype feature:** Escape Corruption’s Grasp (Sp)
- **Description:** At 5th level, an abolisher is divinely protected against the grasping tentacles and paralyzing secretions of aberrations.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, an abolisher is divinely protected against the grasping tentacles and paralyzing secretions of aberrations. For a number of rounds per day equal to her inquisitor level, she can ignore impediments to movement, as per freedom of movement. These rounds don’t need to be consecutive. Activating this ability is an immediate action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Sworn to Purity (Ex)
- Revealing Gaze (Ex)
- Expose Aberration (Sp)
- Escape Corruption’s Grasp (Sp)
