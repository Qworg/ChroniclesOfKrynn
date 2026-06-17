# Alchemist - Vivisectionist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Vivisectionist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Vivisectionist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Sneak Attack; Torturer’s Eye; Cruel Anatomist; Torturous Transformation; Bleeding Attack; Crippling Strike; Discoveries
- **Replaced / altered class features:** bomb

## Implementation details

### Replaces: bomb

- **Archetype feature:** Sneak Attack
- **Description:** At 1st level, a vivisectionist gains the sneak attack ability as a rogue of the same level.
- **Detailed mechanics:**
  - **Level hooks:** 1, 2, 3.
  - **Rules text to implement:** At 1st level, a vivisectionist gains the sneak attack ability as a rogue of the same level. If a character already has sneak attack from another class, the levels from the classes that grant sneak attack stack to determine the effective rogue level for the sneak attack’s extra damage dice (so an alchemist 1/rogue 1 has a +1d6 sneak attack like a 2nd-level rogue, an alchemist 2/rogue 1 has a +2d6 sneak attack like a 3rd-level rogue, and so on).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Torturer’s Eye
- **Description:** At 2nd level, a vivisectionist adds deathwatch to his formula book as a 1st-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 2, 1.
  - **Rules text to implement:** At 2nd level, a vivisectionist adds deathwatch to his formula book as a 1st-level extract.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Cruel Anatomist
- **Description:** At 3rd level, a vivisectionist may use his Knowledge (nature) skill bonus in place of his Heal skill bonus.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a vivisectionist may use his Knowledge (nature) skill bonus in place of his Heal skill bonus.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Torturous Transformation
- **Description:** At 7th level, a vivisectionist adds anthropomorphic animal to his formula book as a 2nd-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 7, 2, 9, 3, 15, 5.
  - **Rules text to implement:** At 7th level, a vivisectionist adds anthropomorphic animal to his formula book as a 2nd-level extract. When he uses this extract, he injects it into an animal as part of a 2-hour surgical procedure. By using multiple doses of this extract as part of the surgery, he multiplies the duration by the number of extracts used. At 9th level, a vivisectionist adds awaken and baleful polymorph to his formula book as 3rd-level extracts. When he uses the awaken or baleful polymorph extract, he injects it into the target (not a plant) as part of a 24-hour surgical procedure. He can make anthropomorphic animal permanent on a creature by spending 7,500 gp. At 15th level, a vivisectionist adds regenerate to his formula book as a 5th-level extract.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bleeding Attack
- **Description:** A vivisectionist may select the bleeding attack rogue talent in place of a discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** A vivisectionist may select the bleeding attack rogue talent in place of a discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Crippling Strike
- **Description:** At 10th level or later, a vivisectionist may select the crippling strike rogue talent in place of a discovery.
- **Detailed mechanics:**
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level or later, a vivisectionist may select the crippling strike rogue talent in place of a discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the vivisectionist archetype: alchemical simulacrum, concentrate poison, doppelganger simulacrum, feral mutagen, parasitic twin, preserve organs, tentacle, tumor familiar, vestigial arm, and wings.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the vivisectionist archetype: alchemical simulacrum, concentrate poison, doppelganger simulacrum, feral mutagen, parasitic twin, preserve organs, tentacle, tumor familiar, vestigial arm, and wings.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Sneak Attack
- Torturer’s Eye
- Cruel Anatomist
- Torturous Transformation
- Bleeding Attack
- Crippling Strike
- Discoveries
