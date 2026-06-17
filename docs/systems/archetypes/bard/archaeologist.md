# Bard - Archaeologist

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Archaeologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Archaeologist
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Archaeologist’s Luck (Ex); Clever Explorer (Ex); Uncanny Dodge (Ex); Trap Sense (Ex); Rogue Talents; Evasion (Ex); Advanced Talent
- **Replaced / altered class features:** the versatile performance ability; well-versed

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** Archaeologists do not gain the bardic performance ability or any of its performance types.
- **Detailed mechanics:**
  - **Rules text to implement:** Archaeologists do not gain the bardic performance ability or any of its performance types.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Archaeologist’s Luck (Ex)
- **Description:** Fortune favors the archaeologist.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 11, 17.
  - **Rules text to implement:** Fortune favors the archaeologist. As a swift action, an archaeologist can call on fortune’s favor, giving him a +1 luck bonus on attack rolls, saving throws, skill checks, and weapon damage rolls. He can use this ability for a number of rounds per day equal to 4 + his Charisma modifier. Maintaining this bonus is a free action, but it ends immediately if the archaeologist is killed, paralyzed, stunned, knocked unconscious, or otherwise prevented from taking a free action to maintain it each round. Archaeologist’s luck is treated as bardic performance for the purposes of feats, abilities, effects, and the like that affect bardic performance. Like bardic performance, it cannot be maintained at the same time as other performance abilities. This bonus increases to +2 at 5th level, +3 at 11th level, and +4 at 17th level.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the versatile performance ability

- **Archetype feature:** Clever Explorer (Ex)
- **Description:** At 2nd level, an archaeologist gains a bonus equal to half his class level on Disable Device and Perception checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, an archaeologist gains a bonus equal to half his class level on Disable Device and Perception checks. He can disable intricate and complex devices in half the normal amount of time (minimum 1 round) and open a lock as a standard action. At 6th level, an archaeologist can take 10 on Disable Device checks, even if distracted or endangered, and can disarm magical traps.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: well-versed

- **Archetype feature:** Uncanny Dodge (Ex)
- **Description:** At 2nd level, an archaeologist gains uncanny dodge, as the rogue class feature of the same name.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an archaeologist gains uncanny dodge, as the rogue class feature of the same name.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Trap Sense (Ex)
- **Description:** At 3rd level, an archaeologist gains trap sense +1, as the rogue class feature of the same name.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, an archaeologist gains trap sense +1, as the rogue class feature of the same name. This bonus improves by +1 for every three levels gained after 3rd, to a maximum of +6 at 18th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** At 4th level, an archaeologist gains a rogue talent.
- **Detailed mechanics:**
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an archaeologist gains a rogue talent. He gains an additional rogue talent for every four levels of archaeologist gained after 4th level. Otherwise, this works as the rogue’s rogue talent ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Evasion (Ex)
- **Description:** At 6th level, an archaeologist gains evasion, as the rogue ability of the same name.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, an archaeologist gains evasion, as the rogue ability of the same name.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talent
- **Description:** At 12th level, and every four levels thereafter, an archaeologist can choose an advanced rogue talent in place of a rogue talent.
- **Detailed mechanics:**
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, and every four levels thereafter, an archaeologist can choose an advanced rogue talent in place of a rogue talent.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bardic Performance
- Archaeologist’s Luck (Ex)
- Clever Explorer (Ex)
- Uncanny Dodge (Ex)
- Trap Sense (Ex)
- Rogue Talents
- Evasion (Ex)
- Advanced Talent
