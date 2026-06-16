# Monk - Maneuver Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Maneuver Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Maneuver%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonus Feat; Flurry of Maneuvers (Ex); Maneuver Defense (Ex); Reliable Maneuver (Ex); Meditative Maneuver (Ex); Sweeping Maneuver (Ex); Whirlwind Maneuver (Ex)
- **Replaced / altered class features:** flurry of blows; still mind; slow fall; purity of body; diamond body; quivering palm

## Replacement details

### Replaces: flurry of blows

- **Archetype feature:** Flurry of Maneuvers (Ex)
- **Description:** At 1st level, as part of a full-attack action, a maneuver master can make one additional combat maneuver, regardless of whether the maneuver normally replaces a melee attack or requires a standard action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 8, 15.
  - Mechanics summary: At 1st level, as part of a full-attack action, a maneuver master can make one additional combat maneuver, regardless of whether the maneuver normally replaces a melee attack or requires a standard action. The maneuver master uses his monk level in place of his base attack bonus to determine his CMB for the bonus maneuvers, though all combat maneuver checks suffer a –2 penalty when using a flurry. At 8th level, a maneuver master may attempt a second additional combat maneuver, with an additional –3 penalty on combat maneuver checks. At 15th level, a maneuver master may attempt a third additional combat maneuver, with an additional –7 penalty on combat maneuver checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Replaces: still mind

- **Archetype feature:** Maneuver Defense (Ex)
- **Description:** At 3rd level, if a maneuver master has an Improved combat maneuver feat, any creature attempting that maneuver against the maneuver master provokes an attack of opportunity, even if it would not normally do so.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, if a maneuver master has an Improved combat maneuver feat, any creature attempting that maneuver against the maneuver master provokes an attack of opportunity, even if it would not normally do so.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: slow fall

- **Archetype feature:** Reliable Maneuver (Ex)
- **Description:** At 4th level, as a swift action, a maneuver master may spend 1 point from his ki pool before attempting a combat maneuver.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, as a swift action, a maneuver master may spend 1 point from his ki pool before attempting a combat maneuver. He can roll his combat maneuver check for that maneuver twice and use the better result.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: purity of body

- **Archetype feature:** Meditative Maneuver (Ex)
- **Description:** At 5th level, as a swift action, a maneuver master can add his Wisdom modifier on any combat maneuver check he makes before the beginning of his next turn.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, as a swift action, a maneuver master can add his Wisdom modifier on any combat maneuver check he makes before the beginning of his next turn. He must choose which combat maneuver check to grant the bonus to before making the combat maneuver check.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: diamond body

- **Archetype feature:** Sweeping Maneuver (Ex)
- **Description:** At 11th level, a maneuver master can make two combat maneuvers as a standard action, as long as neither maneuver requires the maneuver master to move.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a maneuver master can make two combat maneuvers as a standard action, as long as neither maneuver requires the maneuver master to move. He may perform two identical maneuvers against two adjacent enemies, or he may perform two different combat maneuvers against the same target.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: quivering palm

- **Archetype feature:** Whirlwind Maneuver (Ex)
- **Description:** At 15th level, once per day as a full-round action, a maneuver master can attempt a single combat maneuver against every opponent he threatens, as long as the combat maneuver does not require movement.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, once per day as a full-round action, a maneuver master can attempt a single combat maneuver against every opponent he threatens, as long as the combat maneuver does not require movement. He makes a single combat maneuver check, and it applies to all targets.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Bonus Feat
- Flurry of Maneuvers (Ex)
- Maneuver Defense (Ex)
- Reliable Maneuver (Ex)
- Meditative Maneuver (Ex)
- Sweeping Maneuver (Ex)
- Whirlwind Maneuver (Ex)

