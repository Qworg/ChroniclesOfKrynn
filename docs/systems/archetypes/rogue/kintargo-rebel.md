# Rogue - Kintargo Rebel

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Kintargo Rebel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Kintargo%20Rebel
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Sophisticated Stealth (Ex); Misdirection (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trap sense; uncanny dodge

## Replacement details

### Replaces: trap sense

- **Archetype feature:** Sophisticated Stealth (Ex)
- **Description:** At 3rd level, a Kintargo rebel gains a +1 bonus on Knowledge (nobility) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a Kintargo rebel gains a +1 bonus on Knowledge (nobility) checks. In addition, she gains a +1 bonus on Bluff checks to convey a secret message and on Sense Motive checks to discern secret messages. These bonuses increase by 1 every 3 rogue levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: uncanny dodge

- **Archetype feature:** Misdirection (Sp)
- **Description:** At 4th level, a Kintargo rebel gains the ability to cast misdirection on herself once per day, though instead of choosing an object for the second target, she must choose a creature in range.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a Kintargo rebel gains the ability to cast misdirection on herself once per day, though instead of choosing an object for the second target, she must choose a creature in range. The caster level for this ability is equal to her class level, and the save DC for this spell is 12 + the Kintargo rebel’s Intelligence modifier. The save DC of this ability increases by 1 if the secondary target is lawful or evil.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Sophisticated Stealth (Ex)
- Misdirection (Sp)
- Rogue Talents
- Advanced Talents

