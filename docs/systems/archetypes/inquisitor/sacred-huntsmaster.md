# Inquisitor - Sacred Huntsmaster

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Sacred Huntsmaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Sacred%20Huntsmaster
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Animal Companion (Ex); Hunter Tactics (Ex); Animal Focus (Su); Improved Empathic Link (Su); Raise Animal Companion (Sp); Second Animal Focus (Ex); Greater Empathic Link (Su)
- **Replaced / altered class features:** judgment 1/day; solo tactics; later iterations of the judgment ability; second judgment; third judgment; slayer; true judgment

## Implementation details

### Replaces: judgment 1/day

- **Archetype feature:** Animal Companion (Ex)
- **Description:** At 1st level, a sacred huntsmaster forms a bond with an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a sacred huntsmaster forms a bond with an animal companion. This ability works as the hunter class feature of the same name, using her inquisitor level as her hunter level.
- **Implementation flags:**
  - animal companion progression.
  - judgment subsystem.
  - feat grant/prerequisite handling.

### Replaces: solo tactics

- **Archetype feature:** Hunter Tactics (Ex)
- **Description:** At 3rd level, a sacred huntsmaster automatically grants her teamwork feats to her animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a sacred huntsmaster automatically grants her teamwork feats to her animal companion. The companion doesn’t need to meet the prerequisites of these teamwork feats.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Replaces: later iterations of the judgment ability

- **Archetype feature:** Animal Focus (Su)
- **Description:** At 4th level, a sacred huntsmaster can take on the aspects of an animal as a swift action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a sacred huntsmaster can take on the aspects of an animal as a swift action. This ability works as the hunter’s animal focus class feature, with her inquisitor level serving as her hunter level.
- **Implementation flags:**
  - judgment subsystem.
  - feat grant/prerequisite handling.

### Replaces: second judgment

- **Archetype feature:** Improved Empathic Link (Su)
- **Description:** At 8th level, the sacred huntsmaster gains an empathic link with her animal companion.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, the sacred huntsmaster gains an empathic link with her animal companion. This functions like an empathic link with a familiar, except the sacred huntsmaster can also see through a companion’s eyes as a swift action, maintaining this connection as long as she likes (as long as the companion is within 1 mile) and ending it as a free action. The sacred huntsmaster is blinded while maintaining this connection.
- **Implementation flags:**
  - animal companion progression.
  - judgment subsystem.

### Replaces: third judgment

- **Archetype feature:** Raise Animal Companion (Sp)
- **Description:** At 16th level, a sacred huntsmaster gains raise animal companion UM as a spell-like ability (not restricted to her own animal companion).
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 16.
  - **Rules text to implement:** At 16th level, a sacred huntsmaster gains raise animal companion UM as a spell-like ability (not restricted to her own animal companion). Using this ability gives the sacred huntsmaster a negative level that cannot be overcome in any way (including by restoration ), but automatically ends after 24 hours. At 16th level, this functions as resurrection instead of raise dead, but otherwise operates as normal.
- **Implementation flags:**
  - animal companion progression.
  - judgment subsystem.
  - spell-like ability support.

### Replaces: slayer

- **Archetype feature:** Second Animal Focus (Ex)
- **Description:** At 17th level, whenever a sacred huntsmaster uses her animal focus ability, she selects two different animal aspects for herself instead of one, and can assign two aspects to her companion instead of one.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, whenever a sacred huntsmaster uses her animal focus ability, she selects two different animal aspects for herself instead of one, and can assign two aspects to her companion instead of one. As with the companion’s previous aspect, the second one does not count against the minutes per day a sacred huntsmaster can take on an aspect. If her animal companion is dead and the sacred huntsmaster has applied that aspect to herself, that aspect counts toward her maximum of two aspects at once. The sacred huntsmaster can still only apply one of her dead companion’s to herself, not both.
- **Implementation flags:**
  - animal companion progression.

### Replaces: true judgment

- **Archetype feature:** Greater Empathic Link (Su)
- **Description:** At 20th level, the range of a sacred huntsmaster’s empathic link with her animal companion increases to 10 miles.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, the range of a sacred huntsmaster’s empathic link with her animal companion increases to 10 miles. If the animal companion is within 1 mile, it and the sacred huntsmaster can communicate telepathically.
- **Implementation flags:**
  - animal companion progression.
  - judgment subsystem.

## Parsed source feature headings

- Animal Companion (Ex)
- Hunter Tactics (Ex)
- Animal Focus (Su)
- Improved Empathic Link (Su)
- Raise Animal Companion (Sp)
- Second Animal Focus (Ex)
- Greater Empathic Link (Su)
