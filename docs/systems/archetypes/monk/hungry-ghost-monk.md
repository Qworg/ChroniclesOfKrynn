# Monk - Hungry Ghost Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Hungry Ghost Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Hungry%20Ghost%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Punishing Kick (Ex); Steal Ki (Ex); Life Funnel (Su); Life from a Stone (Su); Sipping Demon (Su)
- **Replaced / altered class features:** Stunning Fist; purity of body; wholeness of body; diamond body

## Implementation details

### Replaces: Stunning Fist

- **Archetype feature:** Punishing Kick (Ex)
- **Description:** At 1st level, a hungry ghost monk gains Punishing Kick as a bonus feat, even if he does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 10, 15, 20.
  - **Rules text to implement:** At 1st level, a hungry ghost monk gains Punishing Kick as a bonus feat, even if he does not meet the prerequisites. At 10th level, and every five levels thereafter, the monk can push the target of his Punishing Kick an additional 5 feet (10 feet at 10th level, 15 feet at 15th level, and 20 feet at 20th level). At 15th level, he can instead choose to push the target 5 feet and knock the target prone with the same attack. The target still gets a saving throw to avoid being knocked prone.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: purity of body

- **Archetype feature:** Steal Ki (Ex)
- **Description:** At 5th level, a hungry ghost monk can steal ki from other creatures, though this ability is controversial in some circles of monks, who see it as nothing less than a form of vampirism.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 11.
  - **Rules text to implement:** At 5th level, a hungry ghost monk can steal ki from other creatures, though this ability is controversial in some circles of monks, who see it as nothing less than a form of vampirism. If the monk scores a confirmed critical hit against a living enemy or reduces a living enemy to 0 or fewer hit points, he can steal some of that creature’s ki. This ability replenishes 1 spent ki point to the monk’s ki pool, as long as the monk has at least 1 ki point in his pool. He cannot exceed his ki pool’s maximum. At 11th level, each time the monk successfully steals ki, he can make an immediate saving throw against one disease he is suffering from. There is no penalty for failing this saving throw. The monk gains a bonus equal to his Wisdom modifier on the saving throw.
- **Implementation flags:**
  - ki subsystem.

### Replaces: wholeness of body

- **Archetype feature:** Life Funnel (Su)
- **Description:** At 7th level, a hungry ghost monk can steal a creature’s life force to replenish his own.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a hungry ghost monk can steal a creature’s life force to replenish his own. If the monk has at least 1 ki point in his ki pool and scores a confirmed critical hit against a living enemy or reduces a living enemy to 0 or fewer hit points, he heals a number of hit points equal to his monk level. As with steal ki, some monks believe that life funnel is an unsavory act, no better than what the undead do to the living. A monk with this ability cannot steal both ki and hit points at the same time.
- **Implementation flags:**
  - ki subsystem.

### Replaces: diamond body

- **Archetype feature:** Life from a Stone (Su)
- **Description:** At 11th level, a hungry ghost monk can steal ki or life force from any creature, not just living creatures.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a hungry ghost monk can steal ki or life force from any creature, not just living creatures. If the monk has at least 1 ki point in his pool, he gains the benefit of life funnel and steal ki when he confirms a critical hit against any creature or reduces any creature to 0 or fewer hit points.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sipping Demon (Su)
- **Description:** A 13th level, a hungry ghost monk gains 1 temporary hit point each time he hits an enemy with a melee attack.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** A 13th level, a hungry ghost monk gains 1 temporary hit point each time he hits an enemy with a melee attack. The monk gains a number of temporary hit points equal to his Wisdom modifier when he scores a critical hit. The maximum number of temporary hit points the monk can have is equal to his monk level. The temporary hit points disappear 1 hour later. The monk can only use this ability when he has at least 1 ki point in his ki pool. This ability is a proscribed manipulation of ki considered by many good monks to be a corruption. The ability replaces diamond soul.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Punishing Kick (Ex)
- Steal Ki (Ex)
- Life Funnel (Su)
- Life from a Stone (Su)
- Sipping Demon (Su)
