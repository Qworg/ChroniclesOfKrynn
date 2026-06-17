# Bard - Dirge Bard

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dirge Bard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dirge%20Bard
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Haunted Eyes (Ex); Secrets of the Grave (Ex); Haunting Refrain (Su)
- **Replaced / altered class features:** well-versed; versatile performance; lore master

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A dirge bard gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** A dirge bard gains the following type of bardic performance. Dance of the Dead (Su) : At 10th level, a dirge bard can use his bardic performance to cause dead bones or bodies to rise up and move or fight at his command. This ability functions like animate dead, but the created skeletons or zombies remain fully animate only as long as the dirge bard continues the performance. Once it stops, any created undead collapse into carrion. Bodies or bones cannot be animated more than once using this ability. Unlike animate dead, dance of the dead requires no components and does not have the evil descriptor. This performance replaces jack-of-all-trades.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Replaces: well-versed

- **Archetype feature:** Haunted Eyes (Ex)
- **Description:** At 2nd level, a dirge bard gains a +4 bonus on saves against fear, energy drain, death effects, and necromantic effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a dirge bard gains a +4 bonus on saves against fear, energy drain, death effects, and necromantic effects.
- **Implementation flags:**
  - haunt subsystem.

### Replaces: versatile performance

- **Archetype feature:** Secrets of the Grave (Ex)
- **Description:** At 2nd level, a dirge bard gains a bonus equal to half his bard level on Knowledge (religion) checks made to identify undead creatures and their abilities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a dirge bard gains a bonus equal to half his bard level on Knowledge (religion) checks made to identify undead creatures and their abilities. A dirge bard may use mind-affecting spells to affect undead as if they were living creatures, even if they are mindless (though spells that affect only humanoids do not affect them, even if they were humanoids in life). In addition, he may add one necromancy spell from the spell list of any arcane spellcasting class to his list of spells known at 2nd level and every four levels thereafter.
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: lore master

- **Archetype feature:** Haunting Refrain (Su)
- **Description:** At 5th level, a dirge bard is able to stir primal terrors in the hearts of listeners.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a dirge bard is able to stir primal terrors in the hearts of listeners. He can use a Perform (keyboard) or Perform (percussion) check in place of an Intimidate check to demoralize an opponent, with a bonus equal to half his bard level. In addition, saving throws against any fear effect he creates are made with a –2 penalty, and this penalty increases by –1 every 5 levels beyond 5th.
- **Implementation flags:**
  - haunt subsystem.

## Parsed source feature headings

- Bardic Performance
- Haunted Eyes (Ex)
- Secrets of the Grave (Ex)
- Haunting Refrain (Su)
