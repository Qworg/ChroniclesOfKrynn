# Inquisitor - Abolisher

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Abolisher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Abolisher
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Sworn to Purity (Ex); Revealing Gaze (Ex); Expose Aberration (Sp); Escape Corruption’s Grasp (Sp)
- **Replaced / altered class features:** stern gaze; detect alignment and alters bane; discern lies

## Replacement details

### Alters: domains

- **Archetype feature:** Sworn to Purity (Ex)
- **Description:** An abolisher must select one of the following domains: Air, Animal, Earth, Fire, Plant, Water, or Weather.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An abolisher must select one of the following domains: Air, Animal, Earth, Fire, Plant, Water, or Weather. If she ever changes her deity to one that has none of the listed domains, she loses this archetype and becomes a normal inquisitor or ex-inquisitor.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: stern gaze

- **Archetype feature:** Revealing Gaze (Ex)
- **Description:** An abolisher receives a morale bonus on opposed Perception checks against other creatures’ Disguise and Stealth checks equal to half her inquisitor level (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An abolisher receives a morale bonus on opposed Perception checks against other creatures’ Disguise and Stealth checks equal to half her inquisitor level (minimum +1). She grants this bonus to all adjacent allies.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: detect alignment

- **Archetype feature:** Expose Aberration (Sp)
- **Description:** At 2nd level, an abolisher can use detect aberration APG at will.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, an abolisher can use detect aberration APG at will. When she hits a creature with a weapon attack, she automatically knows if the creature is an aberration or not. At 5th level, she can activate her bane ability as an immediate action after she hits an aberration but before damage is rolled.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: alters bane

- **Archetype feature:** Expose Aberration (Sp)
- **Description:** At 2nd level, an abolisher can use detect aberration APG at will.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, an abolisher can use detect aberration APG at will. When she hits a creature with a weapon attack, she automatically knows if the creature is an aberration or not. At 5th level, she can activate her bane ability as an immediate action after she hits an aberration but before damage is rolled.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: discern lies

- **Archetype feature:** Escape Corruption’s Grasp (Sp)
- **Description:** At 5th level, an abolisher is divinely protected against the grasping tentacles and paralyzing secretions of aberrations.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an abolisher is divinely protected against the grasping tentacles and paralyzing secretions of aberrations. For a number of rounds per day equal to her inquisitor level, she can ignore impediments to movement, as per freedom of movement . These rounds don’t need to be consecutive. Activating this ability is an immediate action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Sworn to Purity (Ex)
- Revealing Gaze (Ex)
- Expose Aberration (Sp)
- Escape Corruption’s Grasp (Sp)

