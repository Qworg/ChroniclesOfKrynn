# Alchemist - Dimensional Excavator

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Dimensional Excavator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Dimensional%20Excavator
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Extradimensional Extract (Su); Precipitous Discoveries (Su)
- **Replaced / altered class features:** 4th-level Discovery

## Replacement details

### Alters: the discovery ability, and replaces the discovery gained at 4th level

- **Archetype feature:** Extradimensional Extract (Su)
- **Description:** The intense study a dimensional excavator applies to dimensional forces causes him to treat his class level as 2 lower when qualifying for alchemist discoveries other than those granted by Precipitous Discoveries (see below).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 2.
  - Mechanics summary: The intense study a dimensional excavator applies to dimensional forces causes him to treat his class level as 2 lower when qualifying for alchemist discoveries other than those granted by Precipitous Discoveries (see below). At 4th level, the dimensional excavator adds create pit to his list of extracts known, treating it as a 2nd-level alchemist extract. He can create an extract of this spell, which can then be thrown as a ranged attack, targeting a creature or square. If a creature is struck, the pit manifests in the creature’s location, and the struck creature must succeed at a Reflex save with a –2 penalty or fall into the pit.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, saving throw hook, spellcasting/spell-list hook, alchemist discovery hook.

### Alters: the discovery ability

- **Archetype feature:** Precipitous Discoveries (Su)
- **Description:** At 6th level, a dimensional excavator can choose to learn an additional pit spell in place of learning a new discovery.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 3, 4, 5.
  - Mechanics summary: At 6th level, a dimensional excavator can choose to learn an additional pit spell in place of learning a new discovery. The alchemist must be able to use an extract of the appropriate level to select a pit spell as an extract. He can add the following spells to his extracts known, and use them as per the extradimensional extract ability: spiked pit (3rd-level extract), acid pit (4th-level extract), hungry pit (5th-level extract).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, alchemist discovery hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 4th-level Discovery

## Parsed source feature headings

- Extradimensional Extract (Su)
- Precipitous Discoveries (Su)

