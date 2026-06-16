# Summoner - Counter-Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Counter-Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Counter-Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Counter-Summon (Su); Detect Summons (Su); Weaken Summons (Su); Improved Weaken Summons (Su)
- **Replaced / altered class features:** bond senses; aspect; greater aspect

## Replacement details

### Replaces: summon monster

- **Archetype feature:** Counter-Summon (Su)
- **Description:** At 1st level, a counter-summoner can attempt to counter a conjuration spell cast by another creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a counter-summoner can attempt to counter a conjuration spell cast by another creature. He must identify the spell being cast as normal for counterspelling. If he does so, he can attempt to counter the spell as a swift or immediate action. To counter the spell, the counter-summoner must attempt a dispel check as if using dispel magic . If the spell being countered is a summon monster or summon nature’s ally spell, the counter-summoner gains a +5 bonus on the dispel check. The counter-summoner can use this ability a number of times per day equal to 3 + his Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: bond senses

- **Archetype feature:** Detect Summons (Su)
- **Description:** At 2nd level, as a swift action, a counter-summoner can target a single creature he can see and determine if it has been summoned to its current plane from another.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, as a swift action, a counter-summoner can target a single creature he can see and determine if it has been summoned to its current plane from another. This ability reveals whether the target has been conjured by a conjuration (summoning) or (calling) spell, and allows the counter-summoner to attempt a Spellcraft check to identify the spell that conjured it (using the same DC as if the counter-summoner had witnessed the spell being cast).
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.

### Replaces: aspect

- **Archetype feature:** Weaken Summons (Su)
- **Description:** At 10th level, as a standard action, a counter-summoner can attempt to weaken a summoned or called creature within 60 feet.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, as a standard action, a counter-summoner can attempt to weaken a summoned or called creature within 60 feet. The targeted creature takes a –2 penalty on attack and damage rolls and to Armor Class for 1 minute per summoner level. A successful Will save (DC = 10 + 1/2 the counter-summoner’s class level + his Charisma modifier) negates this effect. A given summoned creature can’t be targeted by this ability more than once per 24-hour period.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, saving throw hook, save DC calculation.

### Replaces: greater aspect

- **Archetype feature:** Improved Weaken Summons (Su)
- **Description:** At 18th level, the penalty for the counter-summoner’s weaken summons ability changes to –4.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 18.
  - Mechanics summary: At 18th level, the penalty for the counter-summoner’s weaken summons ability changes to –4.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

## Parsed source feature headings

- Counter-Summon (Su)
- Detect Summons (Su)
- Weaken Summons (Su)
- Improved Weaken Summons (Su)

