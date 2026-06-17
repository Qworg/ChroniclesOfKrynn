# Bard - Dragon Yapper

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dragon Yapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dragon%20Yapper
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Versatile Performance (Ex)
- **Replaced / altered class features:** Fascinate; Dirge of Doom; Versatile Performance

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A dragon yapper gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 8.
  - **Rules text to implement:** A dragon yapper gains the following types of bardic performance. Yapping Song (Su) : A dragon yapper can use performance to annoy those that hear it, causing them to take a –1 penalty on attack and damage rolls (minimum 1) and a –1 penalty on saves against fear effects and charm effects as long as the dragon yapper continues performing. This penalty increases by 1 at 5th level and every 6 levels thereafter. Yapping song is a mind-affecting ability that uses audible components, but is not language-dependent. This performance replaces fascinate. Frightful Song (Su) : A dragon yapper of 8th level or higher can amplify his voice to sound like an actual dragon. Enemies within 30 feet become shaken unless they succeed at a Will save (DC 10 +1/2 the dragon yapper’s level + the dragon yapper’s Charisma modifier). A successful save renders targets immune to this ability for 24 hours. Frightful song is a mind-affecting ability, and a fear effect that uses audible components. This performance replaces dirge of doom.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Versatile Performance (Ex)
- **Description:** A dragon yapper must choose sing at 2nd level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A dragon yapper must choose sing at 2nd level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bardic Performance
- Versatile Performance (Ex)
