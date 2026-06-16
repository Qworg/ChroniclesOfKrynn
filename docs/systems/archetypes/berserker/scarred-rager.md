# Berserker - Scarred Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Scarred Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Scarred%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Terrifying Visage (Ex); Tolerance (Ex); Scarification (Ex); Improved Tolerance (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Terrifying Visage (Ex)
- **Description:** A scarred rager adds 1/2 her barbarian level on Intimidate checks against humanoids who are not members of barbarian tribes.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A scarred rager adds 1/2 her barbarian level on Intimidate checks against humanoids who are not members of barbarian tribes. When dealing with barbarians, the scarred rager may choose to add this bonus on Diplomacy checks instead. The DC of any fear effect created by the scarred rager also increases by 1.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, rage/rage-power hook.

### Replaces: uncanny dodge

- **Archetype feature:** Tolerance (Ex)
- **Description:** At 2nd level, a scarred rager who fails a save against an effect that causes her to become nauseated, sickened, fatigued, or exhausted can make a second save to negate the effect on the start of her next turn.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a scarred rager who fails a save against an effect that causes her to become nauseated, sickened, fatigued, or exhausted can make a second save to negate the effect on the start of her next turn. Only one additional save is allowed. If the effect does not allow a saving throw, its duration is halved instead (minimum of 1 round).
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, rage/rage-power hook.

### Replaces: trap sense

- **Archetype feature:** Scarification (Ex)
- **Description:** At 3rd level, a scarred rager can ignore 1 point of bleed damage per round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 15.
  - Mechanics summary: At 3rd level, a scarred rager can ignore 1 point of bleed damage per round. This amount increases by 1 every three levels beyond 3rd. At 15th level, a scarred rager can ignore 1 bleed effect each round.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Improved Tolerance (Ex)
- **Description:** At 5th level, a scarred rager’s tolerance ability also applies to effects that would cause her to become dazed, frightened, shaken, or stunned.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a scarred rager’s tolerance ability also applies to effects that would cause her to become dazed, frightened, shaken, or stunned.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Terrifying Visage (Ex)
- Tolerance (Ex)
- Scarification (Ex)
- Improved Tolerance (Ex)
- Rage Powers

