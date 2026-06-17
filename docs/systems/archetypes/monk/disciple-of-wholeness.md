# Monk - Disciple of Wholeness

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Disciple of Wholeness
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Disciple%20of%20Wholeness
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Healing Ki (Su); Hone Body (Su); Greater Hone Body (Su); Hone Soul (Su)
- **Replaced / altered class features:** purity of body; the diamond body ability; the diamond soul ability

## Implementation details

### Alters: ki pool

- **Archetype feature:** Healing Ki (Su)
- **Description:** At 4th level, a disciple of wholeness can touch a creature as a swift action and spend 1 point from her ki pool to restore a number of hit points equal to 1d4 + 1/2 her monk level to that creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a disciple of wholeness can touch a creature as a swift action and spend 1 point from her ki pool to restore a number of hit points equal to 1d4 + 1/2 her monk level to that creature. If she has the wholeness of body class feature, she can spend 2 points to restore a number of hit points equal to 1d8 + her monk level to a touched creature. She does not gain the ability to spend ki to gain an extra attack during a flurry of blows.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: purity of body

- **Archetype feature:** Hone Body (Su)
- **Description:** At 5th level, a disciple of wholeness has immunity to supernatural and magical diseases as long as she is undamaged (she loses this immunity when she has hit point or ability score damage).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a disciple of wholeness has immunity to supernatural and magical diseases as long as she is undamaged (she loses this immunity when she has hit point or ability score damage). In addition, she can always touch a creature as a swift action and spend 1 point from her ki pool to render it immune to all diseases for 1 day. She cannot grant this immunity if the target is already afflicted with a disease.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the diamond body ability

- **Archetype feature:** Greater Hone Body (Su)
- **Description:** At 11th level, a disciple of wholeness is immune to poison while undamaged and can grant immunity to poison (lasting for 1 day).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a disciple of wholeness is immune to poison while undamaged and can grant immunity to poison (lasting for 1 day). This ability otherwise functions as per hone body.
- **Implementation flags:**
  - poison subsystem.

### Replaces: the diamond soul ability

- **Archetype feature:** Hone Soul (Su)
- **Description:** At 13th level, a disciple of wholeness can dispel a spell affecting a living creature by touching it as a standard action and spending 1 point from her ki pool.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a disciple of wholeness can dispel a spell affecting a living creature by touching it as a standard action and spending 1 point from her ki pool. This power functions like the targeted dispel option of greater dispel magic, with the caster level equal to the disciple of wholeness’s monk level.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Healing Ki (Su)
- Hone Body (Su)
- Greater Hone Body (Su)
- Hone Soul (Su)
