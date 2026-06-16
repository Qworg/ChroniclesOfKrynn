# Druid - Dinosaur Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Dinosaur Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Dinosaur%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Summon Dinosaur (Sp); Dinosaur Bond (Ex); Dinosaur Shape (Su); Primeval Voice (Su)
- **Replaced / altered class features:** Spontaneous Casting; Nature’s Bond; Wild Shape; Resist Nature’s Lure

## Replacement details

### Alters: spontaneous casting

- **Archetype feature:** Summon Dinosaur (Sp)
- **Description:** A dinosaur druid can summon a wide range of dinosaurs and related prehistoric beasts using summon nature’s ally spells.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: A dinosaur druid can summon a wide range of dinosaurs and related prehistoric beasts using summon nature’s ally spells. She adds the following options to these spells when using spontaneous casting to cast such a spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: nature’s bond

- **Archetype feature:** Dinosaur Bond (Ex)
- **Description:** A dinosaur druid must choose an animal companion as her nature’s bond, and the animal companion must be a dinosaur (including those detailed in Pathfinder RPG Bestiary volumes).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A dinosaur druid must choose an animal companion as her nature’s bond, and the animal companion must be a dinosaur (including those detailed in Pathfinder RPG Bestiary volumes).
- **Implementation flags:**
  - Likely existing hooks: animal companion hook.

### Alters: wild shape

- **Archetype feature:** Dinosaur Shape (Su)
- **Description:** A dinosaur druid specializes in assuming the form of dinosaurs when using wild shape.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A dinosaur druid specializes in assuming the form of dinosaurs when using wild shape. When she assumes the form of a dinosaur via wild shape, she gains a +2 size bonus to her Constitution in addition to the other modifiers granted by beast shape . When she uses wild shape to assume the form of a creature other than a dinosaur, the wild shape effect lasts for only 1 minute per level, rather than 1 hour per level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, wild shape hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Primeval Voice (Su)
- **Description:** At 4th level, a dinosaur druid gains the ability to speak with dinosaurs (as per speak with animals ) at all times.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a dinosaur druid gains the ability to speak with dinosaurs (as per speak with animals ) at all times.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Summon Dinosaur (Sp)
- Dinosaur Bond (Ex)
- Dinosaur Shape (Su)
- Primeval Voice (Su)

