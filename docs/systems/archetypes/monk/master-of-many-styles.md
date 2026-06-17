# Monk - Master of Many Styles

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Master of Many Styles
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Master%20of%20Many%20Styles
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonus Feat; Fuse Style (Ex); Perfect Style (Ex)
- **Replaced / altered class features:** a monk’s standard bonus feats; flurry of blows; perfect self

## Implementation details

### Replaces: a monk’s standard bonus feats

- **Archetype feature:** Bonus Feat
- **Description:** At 1st level, 2nd level, and every four levels thereafter, a master of many styles may select a bonus style feat or the Elemental Fist feat ( Advanced Player’s Guide 158).
- **Detailed mechanics:**
  - **Level hooks:** 1, 2, 6.
  - **Rules text to implement:** At 1st level, 2nd level, and every four levels thereafter, a master of many styles may select a bonus style feat or the Elemental Fist feat ( Advanced Player’s Guide 158). He does not need to meet the prerequisites of that feat, except the Elemental Fist feat. Starting at 6th level, a master of many styles can choose to instead gain a wildcard style slot. Whenever he enters one or more styles, he can spend his wildcard style slots to gain feats in those styles’ feat paths (such as Earth Child Topple) as long as he meets the prerequisites. Each time he changes styles, he can also change these wildcard style slots.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: flurry of blows

- **Archetype feature:** Fuse Style (Ex)
- **Description:** At 1st level, a master of many styles can fuse two of the styles he knows into a more perfect style.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 8, 15.
  - **Rules text to implement:** At 1st level, a master of many styles can fuse two of the styles he knows into a more perfect style. The master of many styles can have two style feat stances active at once. Starting a stance provided by a style feat is still a swift action, but when the master of many styles switches to another style feat, he can choose one style whose stance is already active to persist. He may only have two style feat stances active at a time. At 8th level, the master of many styles can fuse three styles at once. He can have the stances of three style feats active at the same time. He gains a bonus on attack rolls equal to the number of styles whose stances he currently has active. Furthermore, he can enter up to three stances as a swift action. At 15th level, the master of many styles can fuse four styles at once. He can have the stances of four style feats active at the same time. Furthermore, he can enter up to four stances as a free action by spending 1 point from his ki pool.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: perfect self

- **Archetype feature:** Perfect Style (Ex)
- **Description:** At 20th level, a master of many styles can have the stances of five style feats active at once, and can change those stances as a free action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a master of many styles can have the stances of five style feats active at once, and can change those stances as a free action.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bonus Feat
- Fuse Style (Ex)
- Perfect Style (Ex)
