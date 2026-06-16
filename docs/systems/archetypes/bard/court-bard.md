# Bard - Court Bard

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Court Bard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Court%20Bard
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Heraldic Expertise (Ex); Wide Audience (Su)
- **Replaced / altered class features:** bardic knowledge; lore master and jack of all trades

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Heraldic Expertise (Ex)
- **Description:** A court bard gains a bonus equal to half his bard level on Diplomacy, Knowledge (history), Knowledge (local), and Knowledge (nobility) checks (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: A court bard gains a bonus equal to half his bard level on Diplomacy, Knowledge (history), Knowledge (local), and Knowledge (nobility) checks (minimum +1). Once per day, the court bard can also reroll a check against one of these skills, though he must take the result of the second roll even if it is worse. He can reroll one additional time per day at 5th level and every five levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: lore master and jack of all trades

- **Archetype feature:** Wide Audience (Su)
- **Description:** At 5th level, a court bard can choose to affect a 60-foot cone instead of a 30-foot radius with bardic performances that affect an area.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a court bard can choose to affect a 60-foot cone instead of a 30-foot radius with bardic performances that affect an area. In addition, for every five levels beyond 5th, the area of such powers is increased by 10 feet (radius) or 20 feet (cone). If the power instead affects multiple creatures, it affects one additional creature than normal for every five levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: bardic performance hook.

## Parsed source feature headings

- Bardic Performance
- Heraldic Expertise (Ex)
- Wide Audience (Su)

