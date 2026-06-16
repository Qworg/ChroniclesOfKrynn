# Berserker - Mounted Fury

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Mounted Fury
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Mounted%20Fury
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fast Rider (Ex); Bestial Mount (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge and improved uncanny dodge

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Fast Rider (Ex)
- **Description:** The speed of any mount the barbarian rides is increased by 10 feet.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: The speed of any mount the barbarian rides is increased by 10 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Bestial Mount (Ex)
- **Description:** At 5th level, the mounted fury gains the service of a feral mount.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 8.
  - Mechanics summary: At 5th level, the mounted fury gains the service of a feral mount. This ability functions as a druid’s animal companion , using the barbarian’s level –4 as her effective druid level. This companion must be one that she is capable of riding and is suitable as a mount. A Medium barbarian can select a camel or a horse. A Small barbarian can select a pony or a wolf, but can also select a boar or a dog if she is at least 8th level. Whenever a barbarian is raging while mounted on her bestial mount, the mount gains a +2 morale bonus to its Strength.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, animal companion hook.

## Parsed source feature headings

- Fast Rider (Ex)
- Bestial Mount (Ex)
- Rage Powers

