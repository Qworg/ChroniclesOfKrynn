# Druid - Dinosaur Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Dinosaur Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Dinosaur%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Summon Dinosaur (Sp); Dinosaur Bond (Ex); Dinosaur Shape (Su); Primeval Voice (Su)
- **Replaced / altered class features:** Spontaneous Casting; Nature’s Bond; Wild Shape; Resist Nature’s Lure

## Implementation details

### Alters: spontaneous casting

- **Archetype feature:** Summon Dinosaur (Sp)
- **Description:** A dinosaur druid can summon a wide range of dinosaurs and related prehistoric beasts using summon nature’s ally spells.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** A dinosaur druid can summon a wide range of dinosaurs and related prehistoric beasts using summon nature’s ally spells. She adds the following options to these spells when using spontaneous casting to cast such a spell. Summon Nature’s Ally I : Compsognathus. Summon Nature’s Ally II : Dimorphodon, troodon. Summon Nature’s Ally III : Plesiosaurus, velociraptor. Summon Nature’s Ally IV : Dimetrodon, pachycephalosaurus, parasaurolophus. Summon Nature’s Ally V : Amargasaurus, ceratosaurus, iguanodon, kentrosaurus, styracosaurus. Summon Nature’s Ally VI : Allosaurus, quetzalcoatlus, tylosaurus. Summon Nature’s Ally VII : Therizinosaurus. Summon Nature’s Ally VIII : Diplodocus, spinosaurus. Summon Nature’s Ally IX : Giganotosaurus.
- **Implementation flags:**
  - summoning subsystem.

### Alters: nature’s bond

- **Archetype feature:** Dinosaur Bond (Ex)
- **Description:** A dinosaur druid must choose an animal companion as her nature’s bond, and the animal companion must be a dinosaur (including those detailed in Pathfinder RPG Bestiary volumes).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dinosaur druid must choose an animal companion as her nature’s bond, and the animal companion must be a dinosaur (including those detailed in Pathfinder RPG Bestiary volumes).
- **Implementation flags:**
  - animal companion progression.

### Alters: wild shape

- **Archetype feature:** Dinosaur Shape (Su)
- **Description:** A dinosaur druid specializes in assuming the form of dinosaurs when using wild shape.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A dinosaur druid specializes in assuming the form of dinosaurs when using wild shape. When she assumes the form of a dinosaur via wild shape, she gains a +2 size bonus to her Constitution in addition to the other modifiers granted by beast shape. When she uses wild shape to assume the form of a creature other than a dinosaur, the wild shape effect lasts for only 1 minute per level, rather than 1 hour per level.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Primeval Voice (Su)
- **Description:** At 4th level, a dinosaur druid gains the ability to speak with dinosaurs (as per speak with animals ) at all times.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a dinosaur druid gains the ability to speak with dinosaurs (as per speak with animals ) at all times.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Summon Dinosaur (Sp)
- Dinosaur Bond (Ex)
- Dinosaur Shape (Su)
- Primeval Voice (Su)
