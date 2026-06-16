# Druid - Jungle Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Jungle Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Jungle%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Jungle Guardian (Ex); Woodland Stride (Ex); Torrid Endurance (Ex); Wild Shape (Su); Verdant Sentinel (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Jungle Guardian (Ex)
- **Description:** At 2nd level, a jungle druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in jungle terrain, and she cannot be tracked in such environments.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a jungle druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in jungle terrain, and she cannot be tracked in such environments.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Woodland Stride (Ex)
- **Description:** A jungle druid gains this ability at 3rd level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: A jungle druid gains this ability at 3rd level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Torrid Endurance (Ex)
- **Description:** At 4th level, a jungle druid ignores the effects of a hot climate as if under the effects of endure elements.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a jungle druid ignores the effects of a hot climate as if under the effects of endure elements . She also gains a +4 bonus on saves against disease and the exceptional abilities of animals and magical beasts.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: a thousand faces

- **Archetype feature:** Verdant Sentinel (Ex)
- **Description:** At 13th level, a jungle druid can cast tree shape at will.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a jungle druid can cast tree shape at will.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Jungle Guardian (Ex)
- Woodland Stride (Ex)
- Torrid Endurance (Ex)
- Wild Shape (Su)
- Verdant Sentinel (Ex)

