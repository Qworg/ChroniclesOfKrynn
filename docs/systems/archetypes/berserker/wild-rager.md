# Berserker - Wild Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Wild Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Wild%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Uncontrolled Rage (Ex); Wild Fighting (Ex); Rage Conversion (Ex); Rage Powers
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Wild Fighting (Ex)
- **Description:** At 2nd level, even when not raging, wild ragers often fight with reckless, savage abandon.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, even when not raging, wild ragers often fight with reckless, savage abandon. A wild rager using the full-attack action can make one extra attack per round at her highest base attack bonus. Until the beginning of her next turn, however, she takes a –2 penalty on attack rolls and –4 penalty to AC.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, rage/rage-power hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Rage Conversion (Ex)
- **Description:** At 5th level, a wild rager who fails a saving throw against any mind-affecting effect can attempt a new saving throw at the beginning of her next turn.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a wild rager who fails a saving throw against any mind-affecting effect can attempt a new saving throw at the beginning of her next turn. If the save succeeds, that effect ends and she instead rages and becomes confused as noted above.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, rage/rage-power hook.

## Parsed source feature headings

- Uncontrolled Rage (Ex)
- Wild Fighting (Ex)
- Rage Conversion (Ex)
- Rage Powers

