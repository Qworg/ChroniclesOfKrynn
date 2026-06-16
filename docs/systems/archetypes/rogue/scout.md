# Rogue - Scout

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Scout
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Scout
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Scout’s Charge (Ex); Skirmisher (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Scout’s Charge (Ex)
- **Description:** At 4th level, whenever a scout makes a charge, her attack deals sneak attack damage as if the target were flat-footed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, whenever a scout makes a charge, her attack deals sneak attack damage as if the target were flat-footed. Foes with uncanny dodge are immune to this ability.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Skirmisher (Ex)
- **Description:** At 8th level, whenever a scout moves more than 10 feet in a round and makes an attack action, the attack deals sneak attack damage as if the target was flat-footed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, whenever a scout moves more than 10 feet in a round and makes an attack action, the attack deals sneak attack damage as if the target was flat-footed. If the scout makes more than one attack this turn, this ability only applies to the first attack. Foes with uncanny dodge are immune to this ability.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook, ki/monk hook.

## Parsed source feature headings

- Scout’s Charge (Ex)
- Skirmisher (Ex)
- Rogue Talents
- Advanced Talents

