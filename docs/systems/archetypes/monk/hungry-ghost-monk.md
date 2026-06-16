# Monk - Hungry Ghost Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Hungry Ghost Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Hungry%20Ghost%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Punishing Kick (Ex); Steal Ki (Ex); Life Funnel (Su); Life from a Stone (Su); Sipping Demon (Su)
- **Replaced / altered class features:** Stunning Fist; purity of body; wholeness of body; diamond body

## Replacement details

### Replaces: Stunning Fist

- **Archetype feature:** Punishing Kick (Ex)
- **Description:** At 1st level, a hungry ghost monk gains Punishing Kick as a bonus feat, even if he does not meet the prerequisites.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 10, 15, 20.
  - Mechanics summary: At 1st level, a hungry ghost monk gains Punishing Kick as a bonus feat, even if he does not meet the prerequisites. At 10th level, and every five levels thereafter, the monk can push the target of his Punishing Kick an additional 5 feet (10 feet at 10th level, 15 feet at 15th level, and 20 feet at 20th level). At 15th level, he can instead choose to push the target 5 feet and knock the target prone with the same attack.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: purity of body

- **Archetype feature:** Steal Ki (Ex)
- **Description:** At 5th level, a hungry ghost monk can steal ki from other creatures, though this ability is controversial in some circles of monks, who see it as nothing less than a form of vampirism.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 11.
  - Mechanics summary: At 5th level, a hungry ghost monk can steal ki from other creatures, though this ability is controversial in some circles of monks, who see it as nothing less than a form of vampirism. If the monk scores a confirmed critical hit against a living enemy or reduces a living enemy to 0 or fewer hit points, he can steal some of that creature’s ki. He cannot exceed his ki pool’s maximum. At 11th level, each time the monk successfully steals ki, he can make an immediate saving throw against one disease he is suffering from. There is no penalty for failing this saving throw. The monk gains a bonus equal to his Wisdom modifier on the saving throw.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, ki/monk hook.

### Replaces: wholeness of body

- **Archetype feature:** Life Funnel (Su)
- **Description:** At 7th level, a hungry ghost monk can steal a creature’s life force to replenish his own.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a hungry ghost monk can steal a creature’s life force to replenish his own. If the monk has at least 1 ki point in his ki pool and scores a confirmed critical hit against a living enemy or reduces a living enemy to 0 or fewer hit points, he heals a number of hit points equal to his monk level. A monk with this ability cannot steal both ki and hit points at the same time.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: diamond body

- **Archetype feature:** Life from a Stone (Su)
- **Description:** At 11th level, a hungry ghost monk can steal ki or life force from any creature, not just living creatures.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a hungry ghost monk can steal ki or life force from any creature, not just living creatures. If the monk has at least 1 ki point in his pool, he gains the benefit of life funnel and steal ki when he confirms a critical hit against any creature or reduces any creature to 0 or fewer hit points.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Punishing Kick (Ex)
- Steal Ki (Ex)
- Life Funnel (Su)
- Life from a Stone (Su)
- Sipping Demon (Su)

