# Alchemist - Mad Scientist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Mad Scientist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Mad%20Scientist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mad Genius (Su); Mad Mutagen (Su); 2nd-Level Alchemist Formulae; 3rd-Level Alchemist Formulae; 4th-Level Alchemist Formulae; 5th-Level Alchemist Formulae; 6th-Level Alchemist Formulae
- **Replaced / altered class features:** Alchemy, 2nd, 4th-level Discovery; Mutagen

## Replacement details

### Alters: alchemy and replaces the discovery gained at 2nd level

- **Archetype feature:** Mad Genius (Su)
- **Description:** At 2nd level, a mad scientist can deal 1d3 points of Wisdom damage to herself (or 1d6 points of sanity damage if employing the sanity rules found on page 12) to create a genius extract as one of her daily 1st-, 2nd-, 3rd-, 4th-, or 5th-level extracts.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 5, 3, 1, 4, 6.
  - Mechanics summary: At 2nd level, a mad scientist can deal 1d3 points of Wisdom damage to herself (or 1d6 points of sanity damage if employing the sanity rules found on page 12) to create a genius extract as one of her daily 1st-, 2nd-, 3rd-, 4th-, or 5th-level extracts. This otherwise takes the same amount of time and effort as creating a normal extract of its level, but instead of her choosing a formula she knows for it to grant, a genius extract has an unpredictable result. When the alchemist (or an ally, if she has the infusion discovery) drinks the extract, it produces a random effect from the list of alchemist formulae on page 32 of the Advanced Player’s Guide of 1 spell level higher than the extract’s spell level. For instance, if she creates a genius extract using a 2nd-level extract, it would produce the effect of a random 3rd-level alchemist formula. A genius extract’s minimum caster level is equal to the minimum caster level of the extract used, not the effect produced. So, for instance, a genius extract that produced a fox’s cunning effect would have a minimum caster level of 1 (for the 1st-level extract used) rather than 4 (for the 2nd-level effect).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, alchemist discovery hook, ki/monk hook.

### Alters: the alchemist’s mutagen and replaces the discovery gained at 4th level

- **Archetype feature:** Mad Mutagen (Su)
- **Description:** At 4th level, a mad scientist can brew a mad mutagen in place of a normal mutagen.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a mad scientist can brew a mad mutagen in place of a normal mutagen. If she does so, she need not make any decisions about the mutagen (including whether to make it a cognatogen or another variant mutagen if she has the appropriate discoveries) when she brews it. When the mad scientist drinks her mad mutagen, she makes those decisions on the fly, but she also takes 1d4 points of Wisdom damage (or 1d8 points of sanity damage if using the sanity rules on page 12). If anyone else, even another alchemist, drinks a mad mutagen, that person must succeed at a Will save (with the same DC as for the Fortitude save against nausea) or she becomes confused for 1 hour.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, mutagen hook, alchemist discovery hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Alchemy, 2nd, 4th-level Discovery

## Parsed source feature headings

- Mad Genius (Su)
- Mad Mutagen (Su)
- 2nd-Level Alchemist Formulae
- 3rd-Level Alchemist Formulae
- 4th-Level Alchemist Formulae
- 5th-Level Alchemist Formulae
- 6th-Level Alchemist Formulae

