# Rogue - Acrobat

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Acrobat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Acrobat
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Expert Acrobat (Ex); Second Chance (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Expert Acrobat (Ex)
- **Description:** At 1st level, an acrobat does not suffer any armor check penalties on Acrobatics, Climb, Fly, Sleight of Hand, or Stealth skill checks while wearing light armor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an acrobat does not suffer any armor check penalties on Acrobatics, Climb, Fly, Sleight of Hand, or Stealth skill checks while wearing light armor. When she is not wearing armor, she gains a +2 competency bonus on Acrobatics and Fly skill checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Second Chance (Ex)
- **Description:** At 3rd level, an acrobat can reroll any Acrobatics, Climb, or Fly skill check she has just made.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an acrobat can reroll any Acrobatics, Climb, or Fly skill check she has just made. This reroll is made at a –5 penalty. She must take the second result, even if it is worse. An acrobat can use this ability only once on any given skill check. She can use this ability once per day at 3rd level, plus one additional time per day for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, ki/monk hook.

## Parsed source feature headings

- Expert Acrobat (Ex)
- Second Chance (Ex)
- Rogue Talents
- Advanced Talents

