# Cleric - Scroll Scholar

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Scroll Scholar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Scroll%20Scholar
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Diligent Student (Ex); Secrets Revealed (Sp); Flash of Insight (Su)
- **Replaced / altered class features:** one of the 1st-level granted powers from her domains—the character gets to choose which of her two 1st-level granted powers it replaces; diviner’s fortune (if a diviner) or hand of the apprentice (if a universalist); the increase to her channel energy damage normally gained at 5th level—her channel energy damage increases to 3d6 at 7th level instead, and for the rest of her career as a cleric lags 1d6 behind normal; her bonus feat for 5th level; the normal addition of a new 4th-level spell slot to the character’s spells per day— from this point on, the cleric or wizard has one fewer 4thlevel spell slot than other clerics or wizards

## Replacement details

### Replaces: one of the 1st-level granted powers from her domains—the character gets to choose which of her two 1st-level granted powers it replaces

- **Archetype feature:** Diligent Student (Ex)
- **Description:** At 1st level, a scroll scholar chooses one Knowledge skill.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5.
  - Mechanics summary: At 1st level, a scroll scholar chooses one Knowledge skill. This becomes a class skill if it is not already one. The scroll scholar adds half her class level to all Knowledge checks of this type (minimum 1). At 5th level and every five levels thereafter, a scroll scholar chooses 1 additional Knowledge skill to receive this bonus.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, cleric domain hook, ki/monk hook.

### Replaces: diviner’s fortune (if a diviner) or hand of the apprentice (if a universalist)

- **Archetype feature:** Diligent Student (Ex)
- **Description:** At 1st level, a scroll scholar chooses one Knowledge skill.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5.
  - Mechanics summary: At 1st level, a scroll scholar chooses one Knowledge skill. This becomes a class skill if it is not already one. The scroll scholar adds half her class level to all Knowledge checks of this type (minimum 1). At 5th level and every five levels thereafter, a scroll scholar chooses 1 additional Knowledge skill to receive this bonus.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, cleric domain hook, ki/monk hook.

### Replaces: the increase to her channel energy damage normally gained at 5th level—her channel energy damage increases to 3d6 at 7th level instead, and for the rest of her career as a cleric lags 1d6 behind normal

- **Archetype feature:** Secrets Revealed (Sp)
- **Description:** At 5th level, a scroll scholar gains the ability to cast comprehend languages and identify as spelllike abilities.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 5, 7, 9, 11, 13.
  - Mechanics summary: At 5th level, a scroll scholar gains the ability to cast comprehend languages and identify as spelllike abilities. Her caster level is equal to her character level in whatever class she took the scroll scholar archetype for. She can cast these spells once per day each at 5th level, twice per day each at 7th level, and three times per day each at 9th level. At 11th level, one of these spell-like abilities (scholar’s choice) becomes a constant spell-like ability, and at 13th level, the second one becomes a constant spell-like ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: her bonus feat for 5th level

- **Archetype feature:** Secrets Revealed (Sp)
- **Description:** At 5th level, a scroll scholar gains the ability to cast comprehend languages and identify as spelllike abilities.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 5, 7, 9, 11, 13.
  - Mechanics summary: At 5th level, a scroll scholar gains the ability to cast comprehend languages and identify as spelllike abilities. Her caster level is equal to her character level in whatever class she took the scroll scholar archetype for. She can cast these spells once per day each at 5th level, twice per day each at 7th level, and three times per day each at 9th level. At 11th level, one of these spell-like abilities (scholar’s choice) becomes a constant spell-like ability, and at 13th level, the second one becomes a constant spell-like ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the normal addition of a new 4th-level spell slot to the character’s spells per day— from this point on, the cleric or wizard has one fewer 4thlevel spell slot than other clerics or wizards

- **Archetype feature:** Flash of Insight (Su)
- **Description:** At 10th level, once per day, a scroll scholar can gain a +5 bonus on a single attack roll, caster level check, or saving throw as an immediate action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10, 15, 20, 4.
  - Mechanics summary: At 10th level, once per day, a scroll scholar can gain a +5 bonus on a single attack roll, caster level check, or saving throw as an immediate action. This decision must be made before the results of the roll are known, but can be made after the die is rolled. This ability can be used twice per day at 15th level, and 3 times per day at 20th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Diligent Student (Ex)
- Secrets Revealed (Sp)
- Flash of Insight (Su)

