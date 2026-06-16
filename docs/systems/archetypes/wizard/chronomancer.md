# Wizard - Chronomancer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Chronomancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Chronomancer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Temporal Pool (Su)
- **Replaced / altered class features:** arcane bond and the bonus feats gained at 10th, 15th, and 20th levels

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Temporal Pool (Su)
- **Description:** A chronomancer gains a reservoir of temporal energy to manipulate the time stream in a variety of ways listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: A chronomancer gains a reservoir of temporal energy to manipulate the time stream in a variety of ways listed below. This temporal pool has a number of points equal to half his class level + his Intelligence modifier (minimum 1). This pool refreshes once per day when the chronomancer prepares his spells. Forewarned : The chronomancer can expend 1 point from his temporal pool when he rolls initiative to allow himself or an ally within 30 feet to roll 1d4 and add it to that character’s initiative result. At 5th level, the chronomancer can expend 2 points from his temporal pool as an immediate action to apply this benefit to a saving throw he has just rolled (but before the result is revealed). At 10th level, the die size increases to 1d6.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: the bonus feats gained at 10th, 15th
- **Archetype feature:** Temporal Pool (Su)
- **Description:** A chronomancer gains a reservoir of temporal energy to manipulate the time stream in a variety of ways listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: A chronomancer gains a reservoir of temporal energy to manipulate the time stream in a variety of ways listed below. This temporal pool has a number of points equal to half his class level + his Intelligence modifier (minimum 1). This pool refreshes once per day when the chronomancer prepares his spells. Forewarned : The chronomancer can expend 1 point from his temporal pool when he rolls initiative to allow himself or an ally within 30 feet to roll 1d4 and add it to that character’s initiative result. At 5th level, the chronomancer can expend 2 points from his temporal pool as an immediate action to apply this benefit to a saving throw he has just rolled (but before the result is revealed). At 10th level, the die size increases to 1d6.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: 20th levels

- **Archetype feature:** Temporal Pool (Su)
- **Description:** A chronomancer gains a reservoir of temporal energy to manipulate the time stream in a variety of ways listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: A chronomancer gains a reservoir of temporal energy to manipulate the time stream in a variety of ways listed below. This temporal pool has a number of points equal to half his class level + his Intelligence modifier (minimum 1). This pool refreshes once per day when the chronomancer prepares his spells. Forewarned : The chronomancer can expend 1 point from his temporal pool when he rolls initiative to allow himself or an ally within 30 feet to roll 1d4 and add it to that character’s initiative result. At 5th level, the chronomancer can expend 2 points from his temporal pool as an immediate action to apply this benefit to a saving throw he has just rolled (but before the result is revealed). At 10th level, the die size increases to 1d6.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Temporal Pool (Su)

