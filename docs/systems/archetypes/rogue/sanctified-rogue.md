# Rogue - Sanctified Rogue

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sanctified Rogue
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sanctified%20Rogue
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Divine Purpose (Su); Divine Epiphany (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Divine Purpose (Su)
- **Description:** At 4th level, the favor of a deity or religious institution grants a special blessing on a sanctified rogue, shoring up some of her weaknesses.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the favor of a deity or religious institution grants a special blessing on a sanctified rogue, shoring up some of her weaknesses. She gains a +1 sacred bonus on Fortitude and Will saving throws.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Divine Epiphany (Su)
- **Description:** At 8th level, once per day, a sanctified rogue can peer into the immediate future and predict the results of a specific action as if she had cast an augury spell.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, once per day, a sanctified rogue can peer into the immediate future and predict the results of a specific action as if she had cast an augury spell. The caster level of this spell is equal to the sanctified rogue’s rogue class level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Divine Purpose (Su)
- Divine Epiphany (Su)
- Rogue Talents
- Advanced Talents

