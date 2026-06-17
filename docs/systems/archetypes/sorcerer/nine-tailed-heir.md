# Sorcerer - Nine-Tailed Heir

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Nine-Tailed Heir
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Nine-Tailed%20Heir
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Magical Tail
- **Replaced / altered class features:** the bloodline spell class feature

## Implementation details

### Replaces: the bloodline spell class feature

- **Archetype feature:** Magical Tail
- **Description:** At 3rd level and every 4 levels thereafter, a ninetailed heir gains Magical Tail ARG as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level and every 4 levels thereafter, a ninetailed heir gains Magical Tail ARG as a bonus feat. If the nine-tailed heir already has nine tails, each additional time the feat is taken, the sorcerer gains one additional daily use of the lowest level Magical Tail ability not already affected by this effect.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Magical Tail
