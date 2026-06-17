# Berserker - Mounted Fury

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Mounted Fury
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Mounted%20Fury
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Fast Rider (Ex); Bestial Mount (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge and improved uncanny dodge

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Fast Rider (Ex)
- **Description:** The speed of any mount the barbarian rides is increased by 10 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The speed of any mount the barbarian rides is increased by 10 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Bestial Mount (Ex)
- **Description:** At 5th level, the mounted fury gains the service of a feral mount.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 8.
  - **Rules text to implement:** At 5th level, the mounted fury gains the service of a feral mount. This ability functions as a druid’s animal companion, using the barbarian’s level –4 as her effective druid level. This companion must be one that she is capable of riding and is suitable as a mount. A Medium barbarian can select a camel or a horse. A Small barbarian can select a pony or a wolf, but can also select a boar or a dog if she is at least 8th level. Whenever a barbarian is raging while mounted on her bestial mount, the mount gains a +2 morale bonus to its Strength.
- **Implementation flags:**
  - animal companion progression.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the mounted fury archetype: ferocious mount, ferocious trample, greater ferocious mount, greater ferocious trample, and spirit steed.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the mounted fury archetype: ferocious mount, ferocious trample, greater ferocious mount, greater ferocious trample, and spirit steed.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Fast Rider (Ex)
- Bestial Mount (Ex)
- Rage Powers
