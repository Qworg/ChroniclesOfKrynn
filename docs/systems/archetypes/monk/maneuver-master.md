# Monk - Maneuver Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Maneuver Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Maneuver%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonus Feat; Flurry of Maneuvers (Ex); Maneuver Defense (Ex); Reliable Maneuver (Ex); Meditative Maneuver (Ex); Sweeping Maneuver (Ex); Whirlwind Maneuver (Ex)
- **Replaced / altered class features:** flurry of blows; still mind; slow fall; purity of body; diamond body; quivering palm

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** In addition to normal monk bonus feats, a maneuver master may select any Improved combat maneuver feat (such as Improved Overrun) as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 6, 10.
  - **Rules text to implement:** In addition to normal monk bonus feats, a maneuver master may select any Improved combat maneuver feat (such as Improved Overrun) as a bonus feat. At 6th level and above, he may select any Greater combat maneuver feat (such as Greater Grapple) as a bonus feat. At 10th level and above, he may select any maneuver Strike feat (such as Tripping Strike) as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: flurry of blows

- **Archetype feature:** Flurry of Maneuvers (Ex)
- **Description:** At 1st level, as part of a full-attack action, a maneuver master can make one additional combat maneuver, regardless of whether the maneuver normally replaces a melee attack or requires a standard action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 8, 15.
  - **Rules text to implement:** At 1st level, as part of a full-attack action, a maneuver master can make one additional combat maneuver, regardless of whether the maneuver normally replaces a melee attack or requires a standard action. The maneuver master uses his monk level in place of his base attack bonus to determine his CMB for the bonus maneuvers, though all combat maneuver checks suffer a –2 penalty when using a flurry. At 8th level, a maneuver master may attempt a second additional combat maneuver, with an additional –3 penalty on combat maneuver checks. At 15th level, a maneuver master may attempt a third additional combat maneuver, with an additional –7 penalty on combat maneuver checks. A maneuver master loses this ability when wearing armor, using a shield, or carrying a medium or heavy load.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: still mind

- **Archetype feature:** Maneuver Defense (Ex)
- **Description:** At 3rd level, if a maneuver master has an Improved combat maneuver feat, any creature attempting that maneuver against the maneuver master provokes an attack of opportunity, even if it would not normally do so.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, if a maneuver master has an Improved combat maneuver feat, any creature attempting that maneuver against the maneuver master provokes an attack of opportunity, even if it would not normally do so.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: slow fall

- **Archetype feature:** Reliable Maneuver (Ex)
- **Description:** At 4th level, as a swift action, a maneuver master may spend 1 point from his ki pool before attempting a combat maneuver.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, as a swift action, a maneuver master may spend 1 point from his ki pool before attempting a combat maneuver. He can roll his combat maneuver check for that maneuver twice and use the better result.
- **Implementation flags:**
  - ki subsystem.

### Replaces: purity of body

- **Archetype feature:** Meditative Maneuver (Ex)
- **Description:** At 5th level, as a swift action, a maneuver master can add his Wisdom modifier on any combat maneuver check he makes before the beginning of his next turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, as a swift action, a maneuver master can add his Wisdom modifier on any combat maneuver check he makes before the beginning of his next turn. He must choose which combat maneuver check to grant the bonus to before making the combat maneuver check.
- **Implementation flags:**
  - ki subsystem.

### Replaces: diamond body

- **Archetype feature:** Sweeping Maneuver (Ex)
- **Description:** At 11th level, a maneuver master can make two combat maneuvers as a standard action, as long as neither maneuver requires the maneuver master to move.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a maneuver master can make two combat maneuvers as a standard action, as long as neither maneuver requires the maneuver master to move. He may perform two identical maneuvers against two adjacent enemies, or he may perform two different combat maneuvers against the same target.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: quivering palm

- **Archetype feature:** Whirlwind Maneuver (Ex)
- **Description:** At 15th level, once per day as a full-round action, a maneuver master can attempt a single combat maneuver against every opponent he threatens, as long as the combat maneuver does not require movement.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, once per day as a full-round action, a maneuver master can attempt a single combat maneuver against every opponent he threatens, as long as the combat maneuver does not require movement. He makes a single combat maneuver check, and it applies to all targets.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Bonus Feat
- Flurry of Maneuvers (Ex)
- Maneuver Defense (Ex)
- Reliable Maneuver (Ex)
- Meditative Maneuver (Ex)
- Sweeping Maneuver (Ex)
- Whirlwind Maneuver (Ex)
