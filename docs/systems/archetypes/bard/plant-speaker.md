# Bard - Plant Speaker

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Plant Speaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Plant%20Speaker
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Plant Speech; Mystical Allegory (Su)
- **Replaced / altered class features:** Inspire Greatness; Bardic Knowledge; Well-Versed; Lore Master

## Implementation details

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** Plant speakers gain the following bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** Plant speakers gain the following bardic performance. Leshy Speaker (Su) : At 9th level, the plant speaker can speak to its disembodied brethren, the spirits of nature that become leshys. He performs for 10 minutes and spends 7 rounds of bardic performance to gain the effects of commune with nature.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: bardic knowledge and well-versed

- **Archetype feature:** Plant Speech
- **Description:** A plant speaker’s mind-affecting bard spells and class abilities also affect plants, ignoring plants’ immunity to mind-affecting effects.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** A plant speaker’s mind-affecting bard spells and class abilities also affect plants, ignoring plants’ immunity to mind-affecting effects. At 2nd level, a plant speaker’s racial plantspeech allows him to communicate with all plants, not just plants that match his alternate form.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: lore master

- **Archetype feature:** Mystical Allegory (Su)
- **Description:** At 5th level, the plant speaker can tell a story that matches some of the themes of the current situation in order to gain insight, gaining the effects of augury by performing for 1 minute and spending 4 rounds of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 11, 17.
  - **Rules text to implement:** At 5th level, the plant speaker can tell a story that matches some of the themes of the current situation in order to gain insight, gaining the effects of augury by performing for 1 minute and spending 4 rounds of bardic performance. At 11th level, he can perform for 10 minutes and spend 7 rounds of bardic performance to gain the effects of divination. At 17th level, he can perform for 1 hour and spend 10 rounds of bardic performance to gain the effects of legend lore, but the information is always vague and incomplete.
- **Implementation flags:**
  - bardic performance subsystem.

## Parsed source feature headings

- Bardic Performance
- Plant Speech
- Mystical Allegory (Su)
