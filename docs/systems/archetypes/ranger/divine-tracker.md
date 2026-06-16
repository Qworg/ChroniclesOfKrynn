# Ranger - Divine Tracker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Divine Tracker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Divine%20Tracker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Favored Weapon; Blessings (Su)
- **Replaced / altered class features:** wild empathy; hunter’s bond

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Favored Weapon
- **Description:** At 1st level, a divine tracker becomes proficient with the favored weapon of his deity.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a divine tracker becomes proficient with the favored weapon of his deity. If his deity’s favored weapon is unarmed strike, he instead gains Improved Unarmed Strike as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: hunter’s bond

- **Archetype feature:** Blessings (Su)
- **Description:** At 4th level, a divine tracker forms a close bond with his deity’s ethos.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 13.
  - Mechanics summary: At 4th level, a divine tracker forms a close bond with his deity’s ethos. He selects two warpriest domains from among the domains granted by his deity, and gains the minor blessings of those domains. A divine tracker can select an alignment domain (Chaos, Evil, Good, or Law) only if his alignment matches that domain. A divine tracker uses his ranger level as his warpriest level to determine the effect of the blessing. At 13th level, a divine tracker gains the major blessing from both of his domains.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

## Parsed source feature headings

- Favored Weapon
- Blessings (Su)

