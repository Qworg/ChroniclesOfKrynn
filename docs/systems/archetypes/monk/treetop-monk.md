# Monk - Treetop Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Treetop Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Treetop%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Branch Runner (Ex); Wood Affinity (Su); Freedom of Movement (Su)
- **Replaced / altered class features:** still mind; purity of body; abundant step

## Replacement details

### Replaces: still mind

- **Archetype feature:** Branch Runner (Ex)
- **Description:** At 3rd level, a treetop monk adds half the base speed bonus from his fast movement ability to his racial climb speed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a treetop monk adds half the base speed bonus from his fast movement ability to his racial climb speed.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: purity of body

- **Archetype feature:** Wood Affinity (Su)
- **Description:** At 5th level, a treetop monk may expend 1 point from his ki pool as a free action to treat a wooden object as if it were not broken for 1 minute (this includes a weapon with a wooden haft such as an axe or spear).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 8.
  - Mechanics summary: At 5th level, a treetop monk may expend 1 point from his ki pool as a free action to treat a wooden object as if it were not broken for 1 minute (this includes a weapon with a wooden haft such as an axe or spear). At 8th level, as a free action, a treetop monk can expend 1 point from his ki pool to use the Lunge feat with any wooden or wood-hafted melee weapon.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.

### Replaces: abundant step

- **Archetype feature:** Freedom of Movement (Su)
- **Description:** At 12th level, a treetop may expend 1 point from his ki pool as a swift action to gain the effects of freedom of movement for 1 round.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a treetop may expend 1 point from his ki pool as a swift action to gain the effects of freedom of movement for 1 round.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Branch Runner (Ex)
- Wood Affinity (Su)
- Freedom of Movement (Su)

