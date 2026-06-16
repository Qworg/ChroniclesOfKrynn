# Summoner - Evolutionist

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Evolutionist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Evolutionist
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mutate Eidolon (Su); Evolve Base Form (Su); Transmogrify (Sp)
- **Replaced / altered class features:** maker’s call; transposition; greater shield ally

## Replacement details

### Replaces: maker’s call

- **Archetype feature:** Mutate Eidolon (Su)
- **Description:** At 6th level, an evolutionist can change his eidolon’s evolutions as if he had gained a level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, an evolutionist can change his eidolon’s evolutions as if he had gained a level. To mutate his eidolon, the evolutionist must perform an arcane ritual that requires 24 hours of uninterrupted concentration and costs 200 gp per summoner level in material components.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook.

### Replaces: transposition

- **Archetype feature:** Evolve Base Form (Su)
- **Description:** Starting at 8th level, whenever he gains a level, the evolutionist can change his eidolon’s base form to a new base form.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: Starting at 8th level, whenever he gains a level, the evolutionist can change his eidolon’s base form to a new base form. Once chosen, this base form is set until the evolutionist gains another summoner level.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook.

### Replaces: greater shield ally

- **Archetype feature:** Transmogrify (Sp)
- **Description:** At 12th level, the evolutionist can cast transmogrify as a spell-like ability once per day without the need for a material component.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, the evolutionist can cast transmogrify as a spell-like ability once per day without the need for a material component. This ability has a casting time of 1 minute.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, eidolon evolution hook.

## Parsed source feature headings

- Mutate Eidolon (Su)
- Evolve Base Form (Su)
- Transmogrify (Sp)

