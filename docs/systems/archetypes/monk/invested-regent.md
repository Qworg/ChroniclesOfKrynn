# Monk - Invested Regent

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Invested Regent
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Invested%20Regent
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Investiture (Su); Vested Power (Ex or Sp); Vested Powers; 2nd-Level Vested Powers; 6th-Level Vested Powers; 10th-Level Vested Powers; 14th-Level Vested Powers; 18th-Level Vested Powers
- **Replaced / altered class features:** the bonus feat gained at 1st level

## Replacement details

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Investiture (Su)
- **Description:** An invested regent gains a pool of investiture points, supernatural energy he can use to call upon amazing abilities and divine protection.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: An invested regent gains a pool of investiture points, supernatural energy he can use to call upon amazing abilities and divine protection. The number of points in the invested regent’s investiture pool is equal to 1/2 his monk level + his Charisma modifier. As long as he has at least 1 point in his investiture pool, the invested regent can select one of his saving throws as a swift action and gain a +1 sacred bonus on saving throws of that type for 1 round. If he spends 1 point from his investiture pool during this swift action, he instead gains a sacred bonus equal to his Charisma modifier on the saving throw selected. A character with this feature and the ki pool class feature tracks investiture points and ki points separately.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the bonus feat the invested regent gives up for the vested power

- **Archetype feature:** Vested Power (Ex or Sp)
- **Description:** At 2nd level and every 4 monk levels thereafter, an invested regent can select a vested power (see the Vested Powers section below) for which he qualifies in place of selecting a monk bonus feat.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level and every 4 monk levels thereafter, an invested regent can select a vested power (see the Vested Powers section below) for which he qualifies in place of selecting a monk bonus feat. The invested regent need not do so and can instead take the bonus feat, but once the decision to take a bonus feat or a vested power is made, he can’t change it.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Investiture (Su)
- Vested Power (Ex or Sp)
- Vested Powers
- 2nd-Level Vested Powers
- 6th-Level Vested Powers
- 10th-Level Vested Powers
- 14th-Level Vested Powers
- 18th-Level Vested Powers

