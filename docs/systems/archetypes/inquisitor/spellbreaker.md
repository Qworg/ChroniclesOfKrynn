# Inquisitor - Spellbreaker

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Spellbreaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Spellbreaker
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Strong-Willed (Ex); Defense against Magic (Ex); Foil Casting (Su); Impervious (Ex)
- **Replaced / altered class features:** monster lore; all bonus teamwork feats; solo tactics; final judgment

## Replacement details

### Replaces: monster lore

- **Archetype feature:** Strong-Willed (Ex)
- **Description:** At 1st level, a spellbreaker is able to stand strong against magical effects that seek to control, compel, or persuade her.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a spellbreaker is able to stand strong against magical effects that seek to control, compel, or persuade her. The spellbreaker rolls twice and takes the best result when making a Will saving throw against a mind-affecting effect.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: all bonus teamwork feats

- **Archetype feature:** Defense against Magic (Ex)
- **Description:** At 3rd level, a spellbreaker picks a single wizard school.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a spellbreaker picks a single wizard school. She gains a +1 bonus on saving throws against arcane spells of that school. Every four levels beyond 3rd, the spellbreaker picks a new school and gains this bonus against arcane spells of that school (to a maximum of five schools of magic at 19th level). Furthermore, each time the spellbreaker picks a new school, the bonuses for the schools she has already chosen increase by 1.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: solo tactics

- **Archetype feature:** Foil Casting (Su)
- **Description:** At 3rd level, when an opponent tries to cast an arcane spell within a spellbreaker’s threatened area, the DC for that caster to cast defensively increases by 2.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when an opponent tries to cast an arcane spell within a spellbreaker’s threatened area, the DC for that caster to cast defensively increases by 2. This increase stacks with the effects of the Disruptive feat. Furthermore, the spellbreaker knows where to hit foes to foil casting from a distance. Each time she hits an arcane spellcaster or a creature that uses spell-like abilities with a ranged weapon attack, the DC of any Concentration checks the caster makes increases by 2 for 1 round.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, spellcasting/spell-list hook.

### Replaces: final judgment

- **Archetype feature:** Impervious (Ex)
- **Description:** At 20th level, a spellbreaker becomes immune to the effects of a single school of arcane magic.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a spellbreaker becomes immune to the effects of a single school of arcane magic. That school of magic must be the first one she picked for defense against magic (see above). Neither harmful nor helpful arcane spells of that school have an effect on the spellbreaker. If a spell of that school is an area of effect spell, the spell goes off as normal, but the spellbreaker is untouched by its effects. Once per day, as a swift action, the spellbreaker can grant this imperviousness to all allies in a 60-foot burst for 1 minute.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Strong-Willed (Ex)
- Defense against Magic (Ex)
- Foil Casting (Su)
- Impervious (Ex)

