# Alchemist - Blightseeker

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Blightseeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Blightseeker
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Spore Bomb (Su); Blights (Ex); Blight Engineering (Ex)
- **Replaced / altered class features:** the discoveries gained at 6th, 12th, and 18th levels; persistent mutagen

## Implementation details

### Alters: bombs

- **Archetype feature:** Spore Bomb (Su)
- **Description:** At 1st level, a blightseeker creates a special kind of alchemist bomb that delivers a payload of alchemically engineered fungal spores.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a blightseeker creates a special kind of alchemist bomb that delivers a payload of alchemically engineered fungal spores. These bombs infest their target with a virulent blight (see below). The blightseeker’s bombs deal 1d4 points of damage (instead of 1d6), plus 1d4 points of damage for every 2 alchemist levels beyond 1st. A creature that takes a direct hit from a spore bomb must succeed at a Fortitude save (DC = 10 + half the blightseeker’s level + his Intelligence modifier) or suffer the associated blight effects. Creatures that take splash damage from the bomb are not affected by the blight.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the discoveries gained at 6th, 12th, and 18th levels

- **Archetype feature:** Blights (Ex)
- **Description:** At 1st level, a blightseeker gains the blights from the list below.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 6, 12, 18.
  - **Rules text to implement:** At 1st level, a blightseeker gains the blights from the list below. When he prepares bombs at the start of the day, a blightseeker chooses which blight to apply to each bomb. If a blight has no duration listed, it lasts a number of rounds equal to the blightseeker’s Intelligence modifier. At 1st level, a blightseeker gains the following blights. Impairing : The target’s base land speed decreases by 10 feet, to a minimum of 10 feet. This effect doesn’t stack with itself. Minor Sickening : The target is sickened, but it takes only a –1 penalty on affected rolls. At 6th level, a blightseeker adds the following blights to the list of those that can be applied to his bombs. Fatiguing : The target is fatigued. Fear-Inducing : The target is shaken. Sickening : The target is sickened. At 12th level, a blightseeker adds the following blights to the list of those blights that can be applied to his bombs. Confusing : The target is confused. Exhausting : The target is exhausted. Nauseating : The target is nauseated for 1 round. Staggering : The target becomes staggered for 1 round. At 18th level, a blightseeker adds the following blights to the list of those that can be selected. Blinding : The target is blinded. Deafening : The target is deafened. Stunning : The target is stunned for 1 round.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: persistent mutagen

- **Archetype feature:** Blight Engineering (Ex)
- **Description:** At 14th level, a blightseeker can apply two blights that he knows to each spore bomb he creates.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a blightseeker can apply two blights that he knows to each spore bomb he creates.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Spore Bomb (Su)
- Blights (Ex)
- Blight Engineering (Ex)
