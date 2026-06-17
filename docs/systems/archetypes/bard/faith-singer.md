# Bard - Faith Singer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Faith Singer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Faith%20Singer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Faithful; Devout Spell Knowledge (Su)
- **Replaced / altered class features:** versatile performance

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Faithful
- **Description:** Like a cleric, a faith singer must worship a deity, and his alignment must be within one step of his deity’s alignment.
- **Detailed mechanics:**
  - **Rules text to implement:** Like a cleric, a faith singer must worship a deity, and his alignment must be within one step of his deity’s alignment.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: versatile performance

- **Archetype feature:** Devout Spell Knowledge (Su)
- **Description:** At 2nd level, a faith singer can select one domain from among those belonging to his deity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 1, 6, 5.
  - **Rules text to implement:** At 2nd level, a faith singer can select one domain from among those belonging to his deity. Once per day as a spell-like ability using his bard level as his caster level, he can cast the 1st-level domain spell while giving a bardic performance. At 6th level, and every 4 bard levels thereafter, he can similarly cast the next-higher domain spell as a spell-like ability (to a maximum of the 5th-level domain spell at bard level 18th). He can use each spell-like ability only once per day.
- **Implementation flags:**
  - domain system.
  - bardic performance subsystem.
  - spell-like ability support.

## Parsed source feature headings

- Faithful
- Devout Spell Knowledge (Su)
