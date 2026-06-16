# Druid - Urushiol

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Urushiol
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Urushiol
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Toxic Secretions (Su); Venom Immunity (Ex)
- **Replaced / altered class features:** nature bond and resist nature’s lure

## Replacement details

### Replaces: nature bond and resist nature’s lure

- **Archetype feature:** Toxic Secretions (Su)
- **Description:** At 1st level, an urushiol’s body becomes capable of producing a single dose of poison per day.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 19, 4, 7, 11, 14.
  - Mechanics summary: At 1st level, an urushiol’s body becomes capable of producing a single dose of poison per day. At 3rd level and every 2 druid levels thereafter, the number of daily doses increases by 1, to a maximum of 10 doses at 19th level. The urushiol’s daily doses are replenished when he regains his spells, but any of his weapons that are still poisoned with urushiol venom count against his daily limit. The urushiol is immune to his own poison and cannot accidentally poison himself when applying his own poison or attacking with a weapon coated with it. Urushiol Venom : type poison (varies); save Fortitude negates; frequency 1/round for 2 rounds; effect 1d3 Strength damage; cure 1 save. The save DC is equal to 10 + 1/2 the urushiol’s level + his Wisdom modifier.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook, ki/monk hook.

### Alters: venom immunity

- **Archetype feature:** Venom Immunity (Ex)
- **Description:** An urushiol gains venom immunity at 4th level instead of 9th level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 9.
  - Mechanics summary: An urushiol gains venom immunity at 4th level instead of 9th level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Toxic Secretions (Su)
- Venom Immunity (Ex)

