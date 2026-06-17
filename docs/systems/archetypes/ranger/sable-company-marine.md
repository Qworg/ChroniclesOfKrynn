# Ranger - Sable Company Marine

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Sable Company Marine
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Sable%20Company%20Marine
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hippogriff Companion
- **Replaced / altered class features:** Hunter’s Bond

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Hippogriff Companion
- **Description:** At 2nd level, a Sable Company marine adds Monstrous Mount (see page 14) to the list of bonus feats made available to him by his chosen combat style, regardless of the style chosen.
- **Detailed mechanics:**
  - **Level hooks:** 2, 4, 6, 8.
  - **Rules text to implement:** At 2nd level, a Sable Company marine adds Monstrous Mount (see page 14) to the list of bonus feats made available to him by his chosen combat style, regardless of the style chosen. He can only use this feat to select a hippogriff mount (see page 14). If he does so, he treats his ranger level – 1 as his effective druid level. A marine who takes this option does not gain the hunter’s bond class feature at 4th level. At 6th level, a Sable Company marine adds Monstrous Mount Mastery (see page 14) to the list of available bonus feats granted by his chosen combat style. If he takes this feat as his 6th-level combat style bonus feat, note that he must wait until 8th level before he meets the effective druid level prerequisite to utilize his mount’s mastery abilities.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Hippogriff Companion
