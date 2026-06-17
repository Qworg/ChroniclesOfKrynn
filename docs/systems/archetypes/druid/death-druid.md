# Druid - Death Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Death Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Death%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Phantom; Soul Magic; Resist Death's Call (Ex); Negative Immunity (Su)
- **Replaced / altered class features:** nature bond and wild shape; nature sense and wild empathy; resist nature’s lure; venom immunity

## Implementation details

### Replaces: nature bond and wild shape

- **Archetype feature:** Phantom
- **Description:** A death druid attracts phantoms like a spiritualist ( Pathfinder RPG Occult Adventures 72 ), though she focuses her efforts on putting those phantoms to rest.
- **Detailed mechanics:**
  - **Level hooks:** 1, 4, 14.
  - **Rules text to implement:** A death druid attracts phantoms like a spiritualist ( Pathfinder RPG Occult Adventures 72 ), though she focuses her efforts on putting those phantoms to rest. A death druid is continually attempting to figure out how to send her phantom to the afterlife (usually by completing the phantom’s unfinished business as determined by the GM). If she is able to do so, she gains a new phantom with no additional effort on her part, sometime during the next week. At 1st level, she gains the spiritualist’s phantom and etheric tether class features; at 4th level, she gains the bonded manifestation class feature; and at 14th level, she gains the spiritual bond class feature. She does not gain any of the other spiritualist abilities related to phantoms. The death druid treats her druid level as her spiritualist level for these abilities.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: nature sense and wild empathy

- **Archetype feature:** Soul Magic
- **Description:** A death druid adds the following spells to her druid spell list at the given spell levels: 0— grave words OA ; 1st— sanctify corpse UM ; 2nd— calm spirit OA, false life, ghostbane dirge APG, spiritual weapon ; 3rd— speak with dead ; 4th— speak with haunt ACG, spiritual ally APG ; 5th— breath of life, call spirit OA, mass ghostbane dirge APG ; 6th— circle of death, undeath to death.
- **Detailed mechanics:**
  - **Rules text to implement:** A death druid adds the following spells to her druid spell list at the given spell levels: 0— grave words OA ; 1st— sanctify corpse UM ; 2nd— calm spirit OA, false life, ghostbane dirge APG, spiritual weapon ; 3rd— speak with dead ; 4th— speak with haunt ACG, spiritual ally APG ; 5th— breath of life, call spirit OA, mass ghostbane dirge APG ; 6th— circle of death, undeath to death.
- **Implementation flags:**
  - haunt subsystem.
  - archetype spell-list override.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Death's Call (Ex)
- **Description:** At 4th level, a death druid gains a +4 bonus on saving throws against death effects, negative energy, and energy drain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a death druid gains a +4 bonus on saving throws against death effects, negative energy, and energy drain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: venom immunity

- **Archetype feature:** Negative Immunity (Su)
- **Description:** At 9th level, a death druid is immune to negative energy and energy drain.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a death druid is immune to negative energy and energy drain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Phantom
- Soul Magic
- Resist Death's Call (Ex)
- Negative Immunity (Su)
