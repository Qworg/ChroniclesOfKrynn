# Druid - Arctic Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Arctic Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Arctic%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arctic Native (Ex); Icewalking (Ex); Arctic Endurance (Ex); Wild Shape (Su); Snowcaster (Su); Flurry Form (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Arctic Native (Ex)
- **Description:** At 2nd level, an arctic druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in cold or icy terrain, and she cannot be tracked in cold or icy terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an arctic druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in cold or icy terrain, and she cannot be tracked in cold or icy terrain.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Icewalking (Ex)
- **Description:** At 3rd level, an arctic druid suffers no penalty to speed or on Acrobatics, Climb, or Stealth checks in snowy or icy terrain or weather conditions and can walk across snow crusts or thin ice without breaking through.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an arctic druid suffers no penalty to speed or on Acrobatics, Climb, or Stealth checks in snowy or icy terrain or weather conditions and can walk across snow crusts or thin ice without breaking through.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, ki/monk hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Arctic Endurance (Ex)
- **Description:** At 4th level, an arctic druid ignores the effects of a cold climate as if using endure elements.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an arctic druid ignores the effects of a cold climate as if using endure elements . She is also immune to being dazzled.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: venom immunity

- **Archetype feature:** Snowcaster (Su)
- **Description:** At 9th level, an arctic druid can see normally in ice storm , sleet storm , or similar natural snowstorms.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, an arctic druid can see normally in ice storm , sleet storm , or similar natural snowstorms. In addition, she can prepare any druid spell with the fire subtype as a cold spell, with an identical effect but inflicting cold damage instead of fire damage.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: a thousand faces

- **Archetype feature:** Flurry Form (Ex)
- **Description:** At 13th level, an arctic druid can assume the form of a swirling column of snow equivalent to gaseous form at will.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, an arctic druid can assume the form of a swirling column of snow equivalent to gaseous form at will. While in this form, she gains a circumstance bonus on Stealth checks made in cold terrain equal to her druid level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Arctic Native (Ex)
- Icewalking (Ex)
- Arctic Endurance (Ex)
- Wild Shape (Su)
- Snowcaster (Su)
- Flurry Form (Ex)

