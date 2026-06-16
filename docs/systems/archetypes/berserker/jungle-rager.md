# Berserker - Jungle Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Jungle Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Jungle%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Home Ground Advantage (Ex); Jungle Endurance (Ex); Home Ground Supremacy (Ex); Damage Reduction (Ex); Rage Powers
- **Replaced / altered class features:** uncanny dodge; trap sense; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Home Ground Advantage (Ex)
- **Description:** At 2nd level, a jungle rager learns how to make optimal use of the natural cover of her homeland.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a jungle rager learns how to make optimal use of the natural cover of her homeland. She chooses a specific terrain type from the ranger list of favored terrains. When in this terrain, she increases her bonus to AC and on Reflex saving throws gained from cover, partial cover, and improved cover (but not soft cover) by 1. In this terrain, she also increases the miss chance caused by concealment for attacks against her by 5%.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, favored terrain hook.

### Replaces: trap sense

- **Archetype feature:** Jungle Endurance (Ex)
- **Description:** At 3rd level, a jungle rager gains a +1 bonus on Fortitude saves to resist the effects of hot weather and diseases.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a jungle rager gains a +1 bonus on Fortitude saves to resist the effects of hot weather and diseases. This bonus increases by +1 every 3 barbarian levels after 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, rage/rage-power hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Home Ground Supremacy (Ex)
- **Description:** At 5th level, a jungle rager becomes even more capable when navigating and fighting in her preferred terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a jungle rager becomes even more capable when navigating and fighting in her preferred terrain. She gains the woodland stride ranger ability, though this ability works only in the terrain she selected for the home ground advantage ability. In this terrain, she gains an additional +1 bonus to AC when benefiting from cover or improved cover (but not soft cover).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

## Parsed source feature headings

- Home Ground Advantage (Ex)
- Jungle Endurance (Ex)
- Home Ground Supremacy (Ex)
- Damage Reduction (Ex)
- Rage Powers

