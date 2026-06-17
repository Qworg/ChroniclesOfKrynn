# Inquisitor - Sworn of the Eldest

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Sworn of the Eldest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Sworn%20of%20the%20Eldest
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Whimsical Worship (Ex); Deity; Disarming Discernment (Ex); Feytongue (Ex); Feywatcher (Ex); Magic of the Eldest
- **Replaced / altered class features:** Deity; Domain; Monster Lore; Stern Gaze; Solo Tactics; Teamwork Feats

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Whimsical Worship (Ex)
- **Description:** A sworn of the Eldest uses her Charisma modifier, rather than her Wisdom modifier, to determine all class features and effects relating to her inquisitor class, including her spells, cunning initiative, and true judgment abilities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sworn of the Eldest uses her Charisma modifier, rather than her Wisdom modifier, to determine all class features and effects relating to her inquisitor class, including her spells, cunning initiative, and true judgment abilities.
- **Implementation flags:**
  - judgment subsystem.
  - feat grant/prerequisite handling.

### Alters: domain

- **Archetype feature:** Deity
- **Description:** A sworn of the Eldest must select one of the Eldest as a deity and must select a domain or subdomain of that Eldest for her domain ability; she cannot be devoted to an ideal or philosophy.
- **Detailed mechanics:**
  - **Rules text to implement:** A sworn of the Eldest must select one of the Eldest as a deity and must select a domain or subdomain of that Eldest for her domain ability; she cannot be devoted to an ideal or philosophy.
- **Implementation flags:**
  - domain system.

### Replaces: monster lore

- **Archetype feature:** Disarming Discernment (Ex)
- **Description:** A sworn of the Eldest adds her Charisma modifier on Sense Motive skill checks, in addition to her Wisdom modifier.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sworn of the Eldest adds her Charisma modifier on Sense Motive skill checks, in addition to her Wisdom modifier.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: stern gaze

- **Archetype feature:** Feytongue (Ex)
- **Description:** A sworn of the Eldest receives a morale bonus equal to half her inquisitor level (minimum +1) on Bluff and Diplomacy checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sworn of the Eldest receives a morale bonus equal to half her inquisitor level (minimum +1) on Bluff and Diplomacy checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: solo tactics

- **Archetype feature:** Feywatcher (Ex)
- **Description:** Resistant to the tricky ways of other fey, a sworn of the Eldest gains the resist nature’s lure druid class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Resistant to the tricky ways of other fey, a sworn of the Eldest gains the resist nature’s lure druid class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: all teamwork feats

- **Archetype feature:** Magic of the Eldest
- **Description:** At 3rd level and every 3 levels thereafter, a sworn of the Eldest gains a bonus spell slot of the highest spell level she can cast, and she learns the corresponding spell listed for her domain as a bonus spell known.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level and every 3 levels thereafter, a sworn of the Eldest gains a bonus spell slot of the highest spell level she can cast, and she learns the corresponding spell listed for her domain as a bonus spell known. She can use this bonus spell slot only to cast the domain spell of that level.
- **Implementation flags:**
  - domain system.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Whimsical Worship (Ex)
- Deity
- Disarming Discernment (Ex)
- Feytongue (Ex)
- Feywatcher (Ex)
- Magic of the Eldest
