# Druid - Road Keeper

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Road Keeper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Road%20Keeper
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** One with the Road (Su); Road Bond (Ex); Take the High Road (Ex); Trodden Path (Ex); Road Less Traveled (Su)
- **Replaced / altered class features:** Spontaneous Casting; Nature Bond; Wild Empathy; Woodland Stride; Resist Nature’s Lure; Wild Shape

## Replacement details

### Replaces: spontaneous casting

- **Archetype feature:** One with the Road (Su)
- **Description:** A road keeper casts the following spells as though her caster level were 1 higher: 1st— longstrider , 2nd— scent trail , 3rd— nature’s exile , 4th— freedom of movement , 5th— tree stride , 6th— find the path , 7th— wind walk , 8th— word of recall , 9th— world wave.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9.
  - Mechanics summary: A road keeper casts the following spells as though her caster level were 1 higher: 1st— longstrider , 2nd— scent trail , 3rd— nature’s exile , 4th— freedom of movement , 5th— tree stride , 6th— find the path , 7th— wind walk , 8th— word of recall , 9th— world wave . At 9th level, the bonus to her caster level for these spells increases to +2.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Alters: nature bond and replaces wild empathy

- **Archetype feature:** Road Bond (Ex)
- **Description:** If the road keeper chooses a cleric domain as her nature bond, she must choose from the Community, Liberation, Protection, Travel, or Weather domains.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: If the road keeper chooses a cleric domain as her nature bond, she must choose from the Community, Liberation, Protection, Travel, or Weather domains. The road keeper can also choose any subdomain associated with these domains.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: woodland stride

- **Archetype feature:** Take the High Road (Ex)
- **Description:** At 2nd level, a road keeper travels over roads and paths at an accelerated rate.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a road keeper travels over roads and paths at an accelerated rate. She and her allies can hustle for 2 hours without taking nonlethal damage, instead of 1, provided they travel along a road or path. Allies must remain within 30 feet of the road keeper to benefit from this ability.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Trodden Path (Ex)
- **Description:** At 4th level, a road keeper gains a +4 bonus on Survival checks to follow or identify tracks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a road keeper gains a +4 bonus on Survival checks to follow or identify tracks. She also gains this bonus on saving throws against severe weather effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: wild shape

- **Archetype feature:** Road Less Traveled (Su)
- **Description:** At 4th level, a road keeper can discourage creatures from entering or exiting the wild.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 6, 20.
  - Mechanics summary: At 4th level, a road keeper can discourage creatures from entering or exiting the wild. Once per day as a standard action, she can target a creature within 30 feet and curse it with clumsiness and disorientation. If her target is entering the wild, it treats every square of wilderness not on a road or in a building as difficult terrain. If her target is exiting the wild, it treats every square on a road or inside a building as difficult terrain. In either case, the ground feels uneven and the target suffers extreme vertigo during movement. The victim of this curse can attempt a Will saving throw (DC = 10 + half the road keeper’s level + her Wisdom modifier) at the beginning of its turn each round to end the effect.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, rage/rage-power hook, wild shape hook.

## Parsed source feature headings

- One with the Road (Su)
- Road Bond (Ex)
- Take the High Road (Ex)
- Trodden Path (Ex)
- Road Less Traveled (Su)

