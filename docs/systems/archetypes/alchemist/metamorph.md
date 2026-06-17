# Alchemist - Metamorph

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Metamorph
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Metamorph
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Shapechanger (Su); Mutagen (Ex); Adaptive Physiology (Ex)
- **Replaced / altered class features:** alchemy (which also includes bombs, extracts, and mutagen) and Throw Anything; swift alchemy, swift poisoning, and instant alchemy

## Implementation details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** A metamorph adds Disguise to her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A metamorph adds Disguise to her list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: alchemy (which also includes bombs, extracts, and mutagen) and Throw Anything

- **Archetype feature:** Shapechanger (Su)
- **Description:** At 1st level, a metamorph gains the ability to transform herself into another form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 4, 18, 20, 5, 9, 11, 13, 15.
  - **Rules text to implement:** At 1st level, a metamorph gains the ability to transform herself into another form. This ability functions like alter self, except as noted here. The effect lasts for 1 hour per metamorph’s alchemist level, or until she changes back. Changing form (to another form or back) is a standard action that doesn’t provoke attacks of opportunity. The metamorph is fatigued for 1 round each time she changes shape. A metamorph can use this ability once per day at 1st level, and an additional time per day at 4th level, and every 2 alchemist levels thereafter, for a total of nine times at 18th level. At 20th level, a metamorph can use shapechanger as a free action once per round, either before or after all her other actions, with no daily limit. This ability can also function as monstrous physique I at 5th level, as monstrous physique II at 9th level, as monstrous physique III at 11th level, as monstrous physique IV or giant form I at 13th level, and as giant form II at 15th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Mutagen (Ex)
- **Description:** At 1st level, a metamorph gains mutagen as a normal alchemist.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a metamorph gains mutagen as a normal alchemist. She can take mutagen and cognatogen discoveries despite not possessing the alchemy class feature that normally grants mutagen.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: swift alchemy, swift poisoning, and instant alchemy

- **Archetype feature:** Adaptive Physiology (Ex)
- **Description:** At 3rd level, a metamorph gains a 25% chance to negate critical hits and precision damage, similar to the preserve organs discovery.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6, 18.
  - **Rules text to implement:** At 3rd level, a metamorph gains a 25% chance to negate critical hits and precision damage, similar to the preserve organs discovery. This chance increases to 50% at 6th level, and to 75% at 18th level.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Class Skills
- Shapechanger (Su)
- Mutagen (Ex)
- Adaptive Physiology (Ex)
