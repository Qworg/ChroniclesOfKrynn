# Druid - Sky Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Sky Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Sky%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Nature Bond (Ex); Sky’s Embrace (Su); Resist Storm (Ex); Skymaster (Su); Wild Shape (Su); Soaring Form (Ex); Into the Wild Blue (Su)
- **Replaced / altered class features:** woodland stride; resist nature’s lure; trackless step; venom immunity; a thousand faces

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A sky druid loses medium armor proficiency.
- **Detailed mechanics:**
  - **Rules text to implement:** A sky druid loses medium armor proficiency.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond (Ex)
- **Description:** At 1st level, a sky druid who chooses an animal companion must select one with a fly speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a sky druid who chooses an animal companion must select one with a fly speed. If choosing a domain, the sky druid must choose from the Air, Animals, Liberation, and Weather domains, or subdomains appropriate to those domains.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Replaces: woodland stride

- **Archetype feature:** Sky’s Embrace (Su)
- **Description:** At 2nd level, a sky druid no longer takes falling damage, as though she were constantly under the effect of feather fall.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a sky druid no longer takes falling damage, as though she were constantly under the effect of feather fall. Additionally, she may take ranks in the Fly skill regardless of whether she has a natural fly speed, and may use her Fly skill in place of Acrobatics when making jump checks.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.
  - feather fall spell effect.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Storm (Ex)
- **Description:** At 4th level, a sky druid gains a +4 bonus on saving throws against spells with the air or electricity descriptors and against effects that control or modify the weather (such as sleet storm ).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a sky druid gains a +4 bonus on saving throws against spells with the air or electricity descriptors and against effects that control or modify the weather (such as sleet storm ).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Skymaster (Su)
- **Description:** At 5th level, a sky druid can use the fly spell (self only) for a number of minutes per day equal to her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a sky druid can use the fly spell (self only) for a number of minutes per day equal to her druid level. These minutes do not need to be consecutive.
- **Implementation flags:**
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a sky druid gains the ability to use wild shape.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a sky druid gains the ability to use wild shape. When a sky druid takes the form of a creature with a fly speed, this ability functions at her class level + 1. For all other forms, her effective druid level for the ability is equal to her actual sky druid level. This ability otherwise functions as and replaces wild shape.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Replaces: venom immunity

- **Archetype feature:** Soaring Form (Ex)
- **Description:** At 9th level, a sky druid is no longer affected by altitude sickness or natural or magical wind.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a sky druid is no longer affected by altitude sickness or natural or magical wind.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Into the Wild Blue (Su)
- **Description:** At 13th level, a sky druid gains a fly speed equal to twice her base land speed (good maneuverability).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a sky druid gains a fly speed equal to twice her base land speed (good maneuverability).
- **Implementation flags:**
  - flight/movement mode support.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Nature Bond (Ex)
- Sky’s Embrace (Su)
- Resist Storm (Ex)
- Skymaster (Su)
- Wild Shape (Su)
- Soaring Form (Ex)
- Into the Wild Blue (Su)
