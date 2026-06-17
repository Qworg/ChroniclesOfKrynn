# Druid - Toxicologist

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Toxicologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Toxicologist
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Expanded Repertoire (Ex); Natural Poison Lore (Ex); Expert Poisoner (Su); Toxic Shaper (Su)
- **Replaced / altered class features:** wild empathy and woodland stride; trackless step and resist nature’s lure

## Implementation details

### Alters: spells and replaces spontaneous casting

- **Archetype feature:** Expanded Repertoire (Ex)
- **Description:** A toxicologist adds the following extracts and spells to her druid spell list as druid spells of the listed spell level: poisoned egg (1st level, Pathfinder Campaign Setting: Inner Sea Gods 238 ), transmute potion to poison APG (2nd level), stinking cloud (3rd level), toxic gift UM (4th level), and cloudkill (5th level).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 2, 3, 4, 5.
  - **Rules text to implement:** A toxicologist adds the following extracts and spells to her druid spell list as druid spells of the listed spell level: poisoned egg (1st level, Pathfinder Campaign Setting: Inner Sea Gods 238 ), transmute potion to poison APG (2nd level), stinking cloud (3rd level), toxic gift UM (4th level), and cloudkill (5th level). A toxicologist can channel stored spell energy only into summoning spells she has prepared ahead of time.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - summoning subsystem.
  - archetype spell-list override.

### Replaces: wild empathy and woodland stride

- **Archetype feature:** Natural Poison Lore (Ex)
- **Description:** A toxicologist has a deep understanding of and appreciation for poisons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A toxicologist has a deep understanding of and appreciation for poisons. At 2nd level, she cannot accidentally poison herself when applying poison to a weapon and cannot accidentally poison an animal companion or summoned creature when applying poison to its claws (though poison obviously should not be applied to a creature’s bite).
- **Implementation flags:**
  - animal companion progression.
  - poison subsystem.
  - summoning subsystem.

### Replaces: trackless step and resist nature’s lure

- **Archetype feature:** Expert Poisoner (Su)
- **Description:** At 4th level, a toxicologist increases the DCs of any spells she casts with the poison descriptor by 1.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a toxicologist increases the DCs of any spells she casts with the poison descriptor by 1.
- **Implementation flags:**
  - poison subsystem.

### Alters: wild shape

- **Archetype feature:** Toxic Shaper (Su)
- **Description:** A toxicologist never gains the ability to use wild shape to transform into an elemental or plant.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 10.
  - **Rules text to implement:** A toxicologist never gains the ability to use wild shape to transform into an elemental or plant. At 8th level, a toxicologist can transform into a Small or Medium vermin. When she takes this form, her wild shape functions as vermin shape I UM. At 10th level, a toxicologist can transform into a tiny or large vermin. When she takes this form, her wild shape functions as vermin shape II UM.
- **Implementation flags:**
  - wild shape subsystem.

## Parsed source feature headings

- Expanded Repertoire (Ex)
- Natural Poison Lore (Ex)
- Expert Poisoner (Su)
- Toxic Shaper (Su)
