# Ranger - Yokai Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Yokai Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Yokai%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Favored Yokai (Su); Yokai Sense (Su); Resist Yokai (Su)
- **Replaced / altered class features:** favored enemy; woodland stride; camouflage

## Implementation details

### Replaces: favored enemy

- **Archetype feature:** Favored Yokai (Su)
- **Description:** A yokai hunter possesses a supernatural ability to sense beings connected to the spirit world, such as kami, oni, and ghosts, and is formidable at fighting them.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 5.
  - **Rules text to implement:** A yokai hunter possesses a supernatural ability to sense beings connected to the spirit world, such as kami, oni, and ghosts, and is formidable at fighting them. At 1st level, a yokai hunter gains a +2 bonus on weapon attacks and damage rolls against one of the following creature types (and subtypes, if applicable), which are considered yokai for the purposes of this archetype: aberration, dragon, fey, magical beast, outsider (native), and undead (incorporeal). (A GM may choose to alter this list for the purposes of her campaign.) At 5th level and every five levels thereafter, a yokai hunter may select another favored yokai from this list, gaining a +2 bonus on weapon attacks and damage rolls against that yokai. In addition, whenever a yokai hunter sees a favored yokai that is disguised or has not made its otherworldly essence known, he gains an automatic check to identify the creature as such. To make this check, a yokai hunter rolls 1d20 and adds his yokai hunter level and Charisma modifier (DC 10 + 1/2 the yokai’s Hit Dice + the yokai’s Cha modifier). A successful check means that the yokai hunter recognizes the creature’s ties to the spiritual world. Regardless of whether the check is successful, a yokai hunter gains the bonus on weapon attacks and damage rolls against favored yokai. Ranger abilities that rely on a favored enemy instead rely on this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: woodland stride

- **Archetype feature:** Yokai Sense (Su)
- **Description:** At 7th level, a yokai hunter can sense yokai he has identified with his favored yokai ability as though he had blindsense out to a range of 60 feet.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a yokai hunter can sense yokai he has identified with his favored yokai ability as though he had blindsense out to a range of 60 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: camouflage

- **Archetype feature:** Resist Yokai (Su)
- **Description:** At 12th level, a yokai hunter can attempt to shrug off the magical energies of a yokai.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a yokai hunter can attempt to shrug off the magical energies of a yokai. He gains a +4 insight bonus on saving throws to resist the spells, spell-like abilities, and supernatural abilities of favored yokai. In addition, once per day as a standard action, a yokai hunter can shed an effect placed on him by a yokai as break enchantment, using his yokai hunter level as his caster level.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Favored Yokai (Su)
- Yokai Sense (Su)
- Resist Yokai (Su)
