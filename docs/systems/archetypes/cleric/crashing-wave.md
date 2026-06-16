# Cleric - Crashing Wave

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Crashing Wave
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Crashing%20Wave
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Sworn to the Sea; Speech of the Sea; Balanced Channel (Su); Spontaneous Casting; Spell Level; Sponantious Spell
- **Replaced / altered class features:** channel energy

## Replacement details

### Alters: bonus languages

- **Archetype feature:** Speech of the Sea
- **Description:** A crashing wave’s bonus language options include Aquan in addition to the bonus languages available to the character from her race.
- **Mechanics:**
  - Mechanics summary: A crashing wave’s bonus language options include Aquan in addition to the bonus languages available to the character from her race. The crashing wave does not gain Abyssal, Celestial, or Infernal as bonus language options.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: channel energy

- **Archetype feature:** Balanced Channel (Su)
- **Description:** At 1st level, a crashing wave can channel the pure balance of the ocean—its wildness, its calm, its cruelty, and its gentleness.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a crashing wave can channel the pure balance of the ocean—its wildness, its calm, its cruelty, and its gentleness. This energy can be used to harm or heal creatures, as the crashing wave chooses. Channeling this energy causes a 30-foot-radius burst centered on the cleric. Using balanced channel is a standard action that does not provoke attacks of opportunity. A crashing wave can choose whether to include herself in the effect. The cleric must be able to present her holy symbol to use this ability, and she can channel energy a number of times equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

### Alters: spontaneous casting

- **Archetype feature:** Spontaneous Casting
- **Description:** A crashing wave does not gain the ability to spontaneously cast cure or inflict spells by sacrificing prepared spells.
- **Mechanics:**
  - Mechanics summary: A crashing wave does not gain the ability to spontaneously cast cure or inflict spells by sacrificing prepared spells. However, a crashing wave can spontaneously cast the following spells by sacrificing a prepared spell of the noted level or higher.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Sworn to the Sea
- Speech of the Sea
- Balanced Channel (Su)
- Spontaneous Casting
- Spell Level
- Sponantious Spell

