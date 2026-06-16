# Druid - Sky Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Sky Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Sky%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Nature Bond (Ex); Sky’s Embrace (Su); Resist Storm (Ex); Skymaster (Su); Wild Shape (Su); Soaring Form (Ex); Into the Wild Blue (Su)
- **Replaced / altered class features:** woodland stride; resist nature’s lure; trackless step; venom immunity; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Sky’s Embrace (Su)
- **Description:** At 2nd level, a sky druid no longer takes falling damage, as though she were constantly under the effect of feather fall.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sky druid no longer takes falling damage, as though she were constantly under the effect of feather fall . Additionally, she may take ranks in the Fly skill regardless of whether she has a natural fly speed, and may use her Fly skill in place of Acrobatics when making jump checks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, ki/monk hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Storm (Ex)
- **Description:** At 4th level, a sky druid gains a +4 bonus on saving throws against spells with the air or electricity descriptors and against effects that control or modify the weather (such as sleet storm ).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a sky druid gains a +4 bonus on saving throws against spells with the air or electricity descriptors and against effects that control or modify the weather (such as sleet storm ).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: trackless step

- **Archetype feature:** Skymaster (Su)
- **Description:** At 5th level, a sky druid can use the fly spell (self only) for a number of minutes per day equal to her druid level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a sky druid can use the fly spell (self only) for a number of minutes per day equal to her druid level. These minutes do not need to be consecutive.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: venom immunity

- **Archetype feature:** Soaring Form (Ex)
- **Description:** At 9th level, a sky druid is no longer affected by altitude sickness or natural or magical wind.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a sky druid is no longer affected by altitude sickness or natural or magical wind.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: a thousand faces

- **Archetype feature:** Into the Wild Blue (Su)
- **Description:** At 13th level, a sky druid gains a fly speed equal to twice her base land speed (good maneuverability).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a sky druid gains a fly speed equal to twice her base land speed (good maneuverability).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Nature Bond (Ex)
- Sky’s Embrace (Su)
- Resist Storm (Ex)
- Skymaster (Su)
- Wild Shape (Su)
- Soaring Form (Ex)
- Into the Wild Blue (Su)

