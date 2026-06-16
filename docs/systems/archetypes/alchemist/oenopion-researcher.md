# Alchemist - Oenopion Researcher

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Oenopion Researcher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Oenopion%20Researcher
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Discoveries; Experimental Mutagen (Su); Acid Resistance (Ex)
- **Replaced / altered class features:** poison use; swift alchemy

## Replacement details

### Replaces: poison use

- **Archetype feature:** Experimental Mutagen (Su)
- **Description:** At 2nd level, an Oenopion researcher learns how to create an experimental mutagen that benefits others, though not as well as his normal mutagen.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an Oenopion researcher learns how to create an experimental mutagen that benefits others, though not as well as his normal mutagen. The experimental mutagen works just like a standard mutagen, except the natural armor bonus and the alchemical bonus to the ability score are half normal (+1 natural armor bonus and +2 to one ability score). The researcher decides when he creates the mutagen if it is a standard mutagen (which gives no benefit if another creature drinks it) or an experimental mutagen (which does); there is no difference in the cost, time to create, or any other aspect of the mutagen. If the researcher has discoveries or other abilities that alter or increase the benefits of the mutagen, these apply to the experimental mutagen (though the drinker only gets half the numerical bonus of the mutagen).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, mutagen hook, AC/natural armor bonus.

### Replaces: swift alchemy

- **Archetype feature:** Acid Resistance (Ex)
- **Description:** At 3rd level, an Oenopion researcher gains acid resistance 5.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an Oenopion researcher gains acid resistance 5.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Discoveries
- Experimental Mutagen (Su)
- Acid Resistance (Ex)

