# Druid - Cave Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Cave Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Cave%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Cavesense (Ex); Nature Bond; Wild Empathy (Ex); Tunnelrunner (Ex); Lightfoot (Ex); Resist Subterranean Corruption (Ex); Wild Shape (Su)
- **Replaced / altered class features:** the nature sense ability; woodland stride; trackless step; resist nature’s lure

## Replacement details

### Replaces: the nature sense ability

- **Archetype feature:** Cavesense (Ex)
- **Description:** A underground druid adds Knowledge (dungeoneering) rather than Knowledge (geography) as a class skill and gains a +2 bonus on Knowledge (dungeoneering) and Survival skill checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A underground druid adds Knowledge (dungeoneering) rather than Knowledge (geography) as a class skill and gains a +2 bonus on Knowledge (dungeoneering) and Survival skill checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: woodland stride

- **Archetype feature:** Tunnelrunner (Ex)
- **Description:** At 2nd level, a cave druid can move through areas of rubble or narrow passages that require squeezing at her normal movement rate and without penalty.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a cave druid can move through areas of rubble or narrow passages that require squeezing at her normal movement rate and without penalty.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: trackless step

- **Archetype feature:** Lightfoot (Ex)
- **Description:** At 3rd level, a cave druid cannot be detected with tremorsense.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a cave druid cannot be detected with tremorsense.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Subterranean Corruption (Ex)
- **Description:** At 4th level, a cave druid gains a +2 bonus on saves against exceptional, supernatural, and spell-like abilities of oozes and aberrations.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a cave druid gains a +2 bonus on saves against exceptional, supernatural, and spell-like abilities of oozes and aberrations.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

## Parsed source feature headings

- Cavesense (Ex)
- Nature Bond
- Wild Empathy (Ex)
- Tunnelrunner (Ex)
- Lightfoot (Ex)
- Resist Subterranean Corruption (Ex)
- Wild Shape (Su)

