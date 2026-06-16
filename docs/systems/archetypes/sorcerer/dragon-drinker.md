# Sorcerer - Dragon Drinker

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Dragon Drinker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Dragon%20Drinker
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bloodline; Bleeding Spells (Su); Blood Drinking (Su); Energy Assimilation (Su); Breath Mimicry (Su); Blood Siphon (Su)
- **Replaced / altered class features:** the bloodline arcana ability; the claws bloodline power; the 7th-level bloodline feat; the 13th-level bloodline feat; the 19th-level bloodline feat

## Replacement details

### Replaces: the bloodline arcana ability

- **Archetype feature:** Bleeding Spells (Su)
- **Description:** Whenever a dragon drinker casts a spell that deals damage, the spell deals 1 point of bleed damage per spell level to any creatures of the dragon type damaged.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: Whenever a dragon drinker casts a spell that deals damage, the spell deals 1 point of bleed damage per spell level to any creatures of the dragon type damaged.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the claws bloodline power

- **Archetype feature:** Blood Drinking (Su)
- **Description:** Starting at first level, a dragon drinker gains the ability to drink dragon blood to alter or augment her spellcasting abilities.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 7, 11.
  - Mechanics summary: Starting at first level, a dragon drinker gains the ability to drink dragon blood to alter or augment her spellcasting abilities. See page 18 for information on dragon’s blood. For the purposes of harvesting dragon’s blood, treat the dragon drinker as though she has Dragoncrafting feat. At 5th level, drinking a vial of dragon’s blood is a standard action that provides the dragon drinker with the normal benef its of the item, as well as a +1 bonus to her caster level for purposes of level-dependent spell effects on a single spell cast within 1 minute. At 7th level, a consumed vial of dragon blood also heals 1d8 points of damage instead of the standard 1d4. At 11th level, the alchemical bonus on Fortitude and Reflex saves granted by the blood increases to +2.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, sorcerer bloodline hook, ki/monk hook.

### Replaces: the 7th-level bloodline feat

- **Archetype feature:** Energy Assimilation (Su)
- **Description:** At 7th level, when the dragon drinker drinks true dragon’s blood from a dragon with a breath weapon that deals a different type of energy damage than her chosen energy type, she may adopt the energy resistance of the blood’s source dragon as if it were her selected bloodline.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, when the dragon drinker drinks true dragon’s blood from a dragon with a breath weapon that deals a different type of energy damage than her chosen energy type, she may adopt the energy resistance of the blood’s source dragon as if it were her selected bloodline. This effect lasts for 1 minute per dose of dragon’s blood, after which the dragon drinker’s energy resistance reverts back to her normal energy type.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sorcerer bloodline hook.

### Replaces: the 13th-level bloodline feat

- **Archetype feature:** Breath Mimicry (Su)
- **Description:** At 13th level, when the dragon drinker drinks true dragon’s blood from a dragon with a breath weapon of a shape or energy type different from her own, she may use the shape and energy type of the blood’s source dragon when she next uses her breath weapon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, when the dragon drinker drinks true dragon’s blood from a dragon with a breath weapon of a shape or energy type different from her own, she may use the shape and energy type of the blood’s source dragon when she next uses her breath weapon.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sorcerer bloodline hook.

### Replaces: the 19th-level bloodline feat

- **Archetype feature:** Blood Siphon (Su)
- **Description:** At 19th level, when the dragon drinker is within 60 feet of a creature of the dragon type that is suffering bleed damage, she can, as a swift action, draw a dose of its blood into herself as though she had consumed it from a vial.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, when the dragon drinker is within 60 feet of a creature of the dragon type that is suffering bleed damage, she can, as a swift action, draw a dose of its blood into herself as though she had consumed it from a vial. Additionally, when she consumes dragon’s blood, it heals 3d8 points of damage and provides a +3 resistance bonus on Fortitude and Will saves for 1 minute in place of its normal effects.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, sorcerer bloodline hook.

## Parsed source feature headings

- Bloodline
- Bleeding Spells (Su)
- Blood Drinking (Su)
- Energy Assimilation (Su)
- Breath Mimicry (Su)
- Blood Siphon (Su)

