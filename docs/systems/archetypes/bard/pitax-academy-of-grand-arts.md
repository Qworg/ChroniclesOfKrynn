# Bard - Pitax: Academy of Grand Arts

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Pitax: Academy of Grand Arts
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Pitax%20%20Academy%20of%20Grand%20Arts
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Focused Performance (Ex)
- **Replaced / altered class features:** Versatile Performance

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Focused Performance (Ex)
- **Description:** At 2nd level, a bard must choose one type of Perform skill.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 8.
  - **Rules text to implement:** At 2nd level, a bard must choose one type of Perform skill. The bard gains Extra Performance as a bonus feat, usable only with the chosen category of the Perform skill. At 8th level, and every 6 levels thereafter, the bard gains Extra Performance as an additional bonus feat. The additional uses of bardic performance gained from these feats cannot be used with any category of the Performance skill other than the one chosen at 2nd level.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Focused Performance (Ex)
