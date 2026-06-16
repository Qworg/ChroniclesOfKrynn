# Druid - River Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** River Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20River%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Ferrier (Ex); Read the Currents (Ex); Countercurrent (Ex); Deep Breath (Ex); Wild Shape (Su); Tongue of the Sun and Moon (Ex)
- **Replaced / altered class features:** Class Skills; Nature Sense; Woodland Stride; Trackless Step; Resist Nature’s Lure; Wild Shape; Timeless Body

## Replacement details

### Alters: the druid’s class skills and replaces nature sense

- **Archetype feature:** Ferrier (Ex)
- **Description:** A river druid adds Diplomacy to her list of class skills and gains a +2 bonus on Diplomacy and Knowledge (nature) skill checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A river druid adds Diplomacy to her list of class skills and gains a +2 bonus on Diplomacy and Knowledge (nature) skill checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: woodland stride

- **Archetype feature:** Read the Currents (Ex)
- **Description:** At 2nd level, a river druid gains a bonus equal to half her druid level on initiative checks and Acrobatics, Knowledge (geography), Perception, Stealth, Survival, and Swim checks when she is in, on, or adjacent to flowing water.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a river druid gains a bonus equal to half her druid level on initiative checks and Acrobatics, Knowledge (geography), Perception, Stealth, Survival, and Swim checks when she is in, on, or adjacent to flowing water.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Countercurrent (Ex)
- **Description:** At 3rd level, a river druid takes no penalty to speed or on Acrobatics or Stealth checks in shallow water up to 2 feet deep (1 foot deep for Small characters) such as shallow bogs, shorelines, streams, and partially flooded areas.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a river druid takes no penalty to speed or on Acrobatics or Stealth checks in shallow water up to 2 feet deep (1 foot deep for Small characters) such as shallow bogs, shorelines, streams, and partially flooded areas. A river druid (and any vehicle she pilots) isn’t moved by flowing water unless she allows it.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.
  - Needs implementation review: vehicle-specific action rules.

### Replaces: resist nature’s lure

- **Archetype feature:** Deep Breath (Ex)
- **Description:** At 4th level, a river druid can hold her breath for a number of minutes equal to her Constitution score (after this, she must begin attempting Constitution checks to avoid suffocation as normal).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a river druid can hold her breath for a number of minutes equal to her Constitution score (after this, she must begin attempting Constitution checks to avoid suffocation as normal).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** A river druid gains this ability at 6th level, except her effective druid level for the ability is equal to her druid level – 2.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: A river druid gains this ability at 6th level, except her effective druid level for the ability is equal to her druid level – 2.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

### Replaces: timeless body

- **Archetype feature:** Tongue of the Sun and Moon (Ex)
- **Description:** At 15th level, a river druid can speak with any living creature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a river druid can speak with any living creature.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Ferrier (Ex)
- Read the Currents (Ex)
- Countercurrent (Ex)
- Deep Breath (Ex)
- Wild Shape (Su)
- Tongue of the Sun and Moon (Ex)

