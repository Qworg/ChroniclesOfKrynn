# Alchemist - Preservationist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Preservationist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Preservationist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bottled Ally I; Bottled Ally II; Bottled Ally III; Bottled Ally IV; Bottled Ally V; Bottled Ally VI; Discoveries
- **Replaced / altered class features:** poison use; poison resistance +4; poison resistance +6; poison immunity; persistent mutagen; his 18th-level discovery

## Implementation details

### Replaces: poison use

- **Archetype feature:** Bottled Ally I
- **Description:** At 2nd level, a preservationist adds Handle Animal to his list of class skills.
- **Detailed mechanics:**
  - **Level hooks:** 2, 1.
  - **Rules text to implement:** At 2nd level, a preservationist adds Handle Animal to his list of class skills. He adds summon nature's ally I to his formula book as a 1st-level extract. When he prepares that extract, he actually prepares a tiny, preserved specimen in a bottle (as with a caster casting the spell, the preservationist doesn’t have to choose the creature until he uses the extract). When the alchemist opens the bottle, the specimen animates and grows to normal size, serving the preservationist as per the spell and otherwise being treated as a summoned creature. When the duration expires, the preserved creature decays into powder. If the preservationist has the infusion discovery, another character can use the infused specimen. The Augment Summoning feat can be applied to these specimens.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: poison resistance +4

- **Archetype feature:** Bottled Ally II
- **Description:** At 5th level, a preservationist adds summon nature's ally II to his formula book as a 2nd-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 5, 2.
  - **Rules text to implement:** At 5th level, a preservationist adds summon nature's ally II to his formula book as a 2nd-level extract.
- **Implementation flags:**
  - poison subsystem.
  - summoning subsystem.

### Replaces: poison resistance +6

- **Archetype feature:** Bottled Ally III
- **Description:** At 8th level, a preservationist adds summon nature's ally IV to his formula book as a 3rd-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 8, 3.
  - **Rules text to implement:** At 8th level, a preservationist adds summon nature's ally IV to his formula book as a 3rd-level extract.
- **Implementation flags:**
  - poison subsystem.
  - summoning subsystem.

### Replaces: poison immunity

- **Archetype feature:** Bottled Ally IV
- **Description:** At 10th level, a preservationist adds summon nature's ally V to his formula book as a 4th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 10, 4.
  - **Rules text to implement:** At 10th level, a preservationist adds summon nature's ally V to his formula book as a 4th-level extract.
- **Implementation flags:**
  - poison subsystem.
  - summoning subsystem.

### Replaces: persistent mutagen

- **Archetype feature:** Bottled Ally V
- **Description:** At 14th level, a preservationist adds summon nature's ally VII to his formula book as a 5th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 14, 5.
  - **Rules text to implement:** At 14th level, a preservationist adds summon nature's ally VII to his formula book as a 5th-level extract.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: his 18th-level discovery

- **Archetype feature:** Bottled Ally VI
- **Description:** At 18 level, a preservationist adds summon nature's ally IX to his formula book as a 6th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 18, 6.
  - **Rules text to implement:** At 18 level, a preservationist adds summon nature's ally IX to his formula book as a 6th-level extract.
- **Implementation flags:**
  - summoning subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the preservationist archetype: bottled ooze, preserve organs, tentacle, vestigial arm, and wings.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the preservationist archetype: bottled ooze, preserve organs, tentacle, vestigial arm, and wings.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bottled Ally I
- Bottled Ally II
- Bottled Ally III
- Bottled Ally IV
- Bottled Ally V
- Bottled Ally VI
- Discoveries
