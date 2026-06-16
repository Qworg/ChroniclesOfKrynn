# Alchemist - First World Innovator

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** First World Innovator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20First%20World%20Innovator
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Primal Reagents (Su); Limited Bombs (Su); Refined Reagents (Su)
- **Replaced / altered class features:** the Brew Potion, poison use, swift poisoning, and poison immunity class features; poison resistance

## Replacement details

### Replaces: the Brew Potion, poison use, swift poisoning, and poison immunity class features

- **Archetype feature:** Primal Reagents (Su)
- **Description:** By spending 10 minutes patrolling his surroundings after recovering his daily extract slots, a First World innovator can gather a number of doses of primal reagents equal to half his alchemist level + his Intelligence modifier.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10.
  - Mechanics summary: By spending 10 minutes patrolling his surroundings after recovering his daily extract slots, a First World innovator can gather a number of doses of primal reagents equal to half his alchemist level + his Intelligence modifier. Primal reagents retain their potency until the next time the First World innovator regains his extract slots. As part of the same action used to consume an extract, imbibe a potion, throw a bomb, or drink his mutagen, the First World innovator can expend 1 dose of primal reagents for additional effects as described below. Bomb : Expending 1 dose can change either the bomb’s damage type or its damage dealt. When changing the damage type, the bomb deals acid, cold, electricity, or fire damage (determine the type randomly) instead of its normal damage. When changing the bomb’s damage dealt, the bomb’s die size increases by one step (for example, increasing 1d6 to 1d8), but it deals 1 less point of damage per die rolled.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, alchemist bomb hook, mutagen hook, alchemist discovery hook, AC/natural armor bonus.

### Alters: the bombs class feature

- **Archetype feature:** Limited Bombs (Su)
- **Description:** A First World innovator can use a number of bombs per day equal to half his class level + his Intelligence modifier (minimum 1) per day.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A First World innovator can use a number of bombs per day equal to half his class level + his Intelligence modifier (minimum 1) per day.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, alchemist bomb hook.

### Replaces: poison resistance

- **Archetype feature:** Refined Reagents (Su)
- **Description:** At 2nd level, whenever the First World innovator expends a dose of primal reagents to roll a die to apply a randomized outcome to his bombs or mutagen, he can expend 1 additional dose to ignore the result and roll again; he must take the second result.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, whenever the First World innovator expends a dose of primal reagents to roll a die to apply a randomized outcome to his bombs or mutagen, he can expend 1 additional dose to ignore the result and roll again; he must take the second result.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, mutagen hook.

## Parsed source feature headings

- Primal Reagents (Su)
- Limited Bombs (Su)
- Refined Reagents (Su)

