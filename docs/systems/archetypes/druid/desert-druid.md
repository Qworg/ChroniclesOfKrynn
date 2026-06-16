# Druid - Desert Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Desert Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Desert%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Desert Native (Ex); Sandwalker (Ex); Desert Endurance (Ex); Wild Shape (Su); Shaded Vision (Ex); Dunemeld (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Desert Native (Ex)
- **Description:** At 2nd level, a desert druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in desert terrain, and she cannot be tracked in such environments.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a desert druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in desert terrain, and she cannot be tracked in such environments.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Sandwalker (Ex)
- **Description:** At 3rd level, a desert druid suffers no penalty to speed or on Acrobatics or Stealth checks when moving through sandy or desert terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a desert druid suffers no penalty to speed or on Acrobatics or Stealth checks when moving through sandy or desert terrain.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: resist nature’s lure

- **Archetype feature:** Desert Endurance (Ex)
- **Description:** At 4th level, a desert druid ignores the effects of a hot climate as if using endure elements.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a desert druid ignores the effects of a hot climate as if using endure elements . She also has a reduced need to eat and drink, as if wearing a ring of sustenance (though normal sleep is still required).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: venom immunity

- **Archetype feature:** Shaded Vision (Ex)
- **Description:** At 9th level, a desert druid becomes immune to blinding and dazzling effects and gains a +2 bonus on saving throws against gaze attacks and illusions of the figment and pattern subschools.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a desert druid becomes immune to blinding and dazzling effects and gains a +2 bonus on saving throws against gaze attacks and illusions of the figment and pattern subschools.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: a thousand faces

- **Archetype feature:** Dunemeld (Ex)
- **Description:** At 13th level, a desert druid can assume the form of a swirling mass of sand at will.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a desert druid can assume the form of a swirling mass of sand at will. This is equivalent to gaseous form , but the druid gains a land and burrow speed of 10 feet rather than a fly speed. While in this form, the druid gains a circumstance bonus on Stealth checks made in desert terrain equal to her druid level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Desert Native (Ex)
- Sandwalker (Ex)
- Desert Endurance (Ex)
- Wild Shape (Su)
- Shaded Vision (Ex)
- Dunemeld (Ex)

