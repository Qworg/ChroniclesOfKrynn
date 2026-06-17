# Inquisitor - Spellbreaker

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Spellbreaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Spellbreaker
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Strong-Willed (Ex); Defense against Magic (Ex); Foil Casting (Su); Impervious (Ex)
- **Replaced / altered class features:** monster lore; all bonus teamwork feats; solo tactics; final judgment

## Implementation details

### Replaces: monster lore

- **Archetype feature:** Strong-Willed (Ex)
- **Description:** At 1st level, a spellbreaker is able to stand strong against magical effects that seek to control, compel, or persuade her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a spellbreaker is able to stand strong against magical effects that seek to control, compel, or persuade her. The spellbreaker rolls twice and takes the best result when making a Will saving throw against a mind-affecting effect.
- **Implementation flags:**
  - ki subsystem.

### Replaces: all bonus teamwork feats

- **Archetype feature:** Defense against Magic (Ex)
- **Description:** At 3rd level, a spellbreaker picks a single wizard school.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 19.
  - **Rules text to implement:** At 3rd level, a spellbreaker picks a single wizard school. She gains a +1 bonus on saving throws against arcane spells of that school. Every four levels beyond 3rd, the spellbreaker picks a new school and gains this bonus against arcane spells of that school (to a maximum of five schools of magic at 19th level). Furthermore, each time the spellbreaker picks a new school, the bonuses for the schools she has already chosen increase by 1.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: solo tactics

- **Archetype feature:** Foil Casting (Su)
- **Description:** At 3rd level, when an opponent tries to cast an arcane spell within a spellbreaker’s threatened area, the DC for that caster to cast defensively increases by 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when an opponent tries to cast an arcane spell within a spellbreaker’s threatened area, the DC for that caster to cast defensively increases by 2. This increase stacks with the effects of the Disruptive feat. Furthermore, the spellbreaker knows where to hit foes to foil casting from a distance. Each time she hits an arcane spellcaster or a creature that uses spell-like abilities with a ranged weapon attack, the DC of any Concentration checks the caster makes increases by 2 for 1 round.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Replaces: final judgment

- **Archetype feature:** Impervious (Ex)
- **Description:** At 20th level, a spellbreaker becomes immune to the effects of a single school of arcane magic.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a spellbreaker becomes immune to the effects of a single school of arcane magic. That school of magic must be the first one she picked for defense against magic (see above). Neither harmful nor helpful arcane spells of that school have an effect on the spellbreaker. If a spell of that school is an area of effect spell, the spell goes off as normal, but the spellbreaker is untouched by its effects. Once per day, as a swift action, the spellbreaker can grant this imperviousness to all allies in a 60-foot burst for 1 minute.
- **Implementation flags:**
  - judgment subsystem.

## Parsed source feature headings

- Strong-Willed (Ex)
- Defense against Magic (Ex)
- Foil Casting (Su)
- Impervious (Ex)
