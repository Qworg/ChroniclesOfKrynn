# Ranger - Divine Tracker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Divine Tracker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Divine%20Tracker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Favored Weapon; Blessings (Su)
- **Replaced / altered class features:** wild empathy; hunter’s bond

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Alignment
- **Description:** A divine tracker’s alignment must be within one step of his deity’s, along either the law/chaos axis or the good/evil axis.
- **Detailed mechanics:**
  - **Rules text to implement:** A divine tracker’s alignment must be within one step of his deity’s, along either the law/chaos axis or the good/evil axis.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: wild empathy

- **Archetype feature:** Favored Weapon
- **Description:** At 1st level, a divine tracker becomes proficient with the favored weapon of his deity.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a divine tracker becomes proficient with the favored weapon of his deity. If his deity’s favored weapon is unarmed strike, he instead gains Improved Unarmed Strike as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: hunter’s bond

- **Archetype feature:** Blessings (Su)
- **Description:** At 4th level, a divine tracker forms a close bond with his deity’s ethos.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 13.
  - **Rules text to implement:** At 4th level, a divine tracker forms a close bond with his deity’s ethos. He selects two warpriest domains from among the domains granted by his deity, and gains the minor blessings of those domains. A divine tracker can select an alignment domain (Chaos, Evil, Good, or Law) only if his alignment matches that domain. If a divine tracker isn’t devoted to a particular deity, he still selects two blessings to represent his spiritual inclinations and abilities, subject to GM approval. The restriction on alignment domains still applies. A divine tracker uses his ranger level as his warpriest level to determine the effect of the blessing. At 13th level, a divine tracker gains the major blessing from both of his domains.
- **Implementation flags:**
  - domain system.

## Parsed source feature headings

- Alignment
- Favored Weapon
- Blessings (Su)
