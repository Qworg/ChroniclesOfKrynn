# Ranger - Corpse Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Corpse Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Corpse%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Spells; Undead Exterminator; Disrupt Control (Su); Graveyard Stride (Ex); Incorporeal Armament (Su)
- **Replaced / altered class features:** woodland stride; swift tracker

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Graveyard Stride (Ex)
- **Description:** At 7th level, a corpse hunter may move easily through difficult terrain in areas where corpses are interred, such as graveyards, catacombs, crypts, or necropolises.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a corpse hunter may move easily through difficult terrain in areas where corpses are interred, such as graveyards, catacombs, crypts, or necropolises. When in such an environment, the corpse hunter may move at his normal speed without taking damage or suffering any impairment, although any magical effects and enchantments that impair movement still affect him.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: swift tracker

- **Archetype feature:** Incorporeal Armament (Su)
- **Description:** At 8th level, a corpse hunter can channel his will into any weapon he wields, making it effective against incorporeal undead.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a corpse hunter can channel his will into any weapon he wields, making it effective against incorporeal undead. A corpse hunter may imbue a single wielded weapon with the ghost touch special ability as a swift action, causing it to deal damage normally against incorporeal creatures. The corpse hunter may use this ability for a number of rounds per day equal to half his ranger level; these rounds need not be consecutive. The corpse hunter can end this ability as a free action.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Class Skills
- Spells
- Undead Exterminator
- Disrupt Control (Su)
- Graveyard Stride (Ex)
- Incorporeal Armament (Su)

