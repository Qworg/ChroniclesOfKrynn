# Bard - Ringleader (UI)

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Ringleader (UI)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Ringleader%20%28UI%29
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Inspired Plan (Su); Hidden Plans (Ex); Prepared (Ex)
- **Replaced / altered class features:** versatile performance; well-versed; lore master

## Replacement details

### Alters: inspire competence and replaces dirge of doom and frightening tune

- **Archetype feature:** Bardic Performance
- **Description:** A ringleader gains an altered version of inspire competence that grants greater effects at higher levels.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 8, 14.
  - Mechanics summary: A ringleader gains an altered version of inspire competence that grants greater effects at higher levels. Inspire Competence (Su) : At 3rd level, a ringleader can use his performance to help an ally succeed at a task. At 8th level, the ringleader’s ally gains a competence bonus on an additional skill (for a total of two skills). In addition, he can end the effect to reroll a check with one of the affected skills (the reroll still applies the bonus from inspire competence). Each ally can only use this latter ability once per day, regardless of the number of skills affected and the number of times they are affected by inspire competence. At 14th level, the ringleader’s ally gains a competence bonus on an additional skill (for a total of three skills).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, bardic performance hook, ki/monk hook.

### Replaces: versatile performance

- **Archetype feature:** Inspired Plan (Su)
- **Description:** At 2nd level, a ringleader can alter his performance so it affects a single ally at a later time.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a ringleader can alter his performance so it affects a single ally at a later time. The ringleader must explain his plan to that ally for a number of minutes equal to the number of bardic performance rounds he expends on the effect, and use audible and/or visual components according to the performance altered. This costs the ringleader the chosen number of rounds of bardic performance. At any time before the ringleader recovers bardic performance rounds for the day, the inspired character can activate the performance as a standard action wherever she is. If the performance could normally affect any number of allies, its effects last 2 rounds for each round the ringleader spent on the performance. Otherwise, the effects last 1 round for each round the ringleader spent on the performance.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, bardic performance hook.

### Replaces: well-versed

- **Archetype feature:** Hidden Plans (Ex)
- **Description:** At 2nd level, a ringleader becomes a master of discretion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a ringleader becomes a master of discretion. The ringleader gains a +4 bonus on saving throws against effects that would read his thoughts or compel him to tell the truth.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: lore master

- **Archetype feature:** Prepared (Ex)
- **Description:** At 5th level, a ringleader expects the unexpected.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a ringleader expects the unexpected. When the ringleader is in a situation where he could use a particular piece of nonmagical gear, the ringleader can attempt a Knowledge check appropriate to his current situation to have purchased that item in advance. The DC of the check is equal to the item’s cost in gp. He cannot use this ability to retroactively gain an item that would change his encumbrance to a different load category, though in this case, he can attempt to retrieve such objects from a pack mule, extradimensional storage space, or other location that would not affect his encumbrance. He can use this ability once per day at 5th level, plus one additional time per day for every 5 bard levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, rage/rage-power hook.

## Parsed source feature headings

- Bardic Performance
- Inspired Plan (Su)
- Hidden Plans (Ex)
- Prepared (Ex)

