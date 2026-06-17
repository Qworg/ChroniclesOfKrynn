# Bard - Solacer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Solacer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Solacer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Learned Physician (Ex); Inspire Tenacity (Su); Creative Treatment (Su); Invigorating Artistry (Su)
- **Replaced / altered class features:** bardic knowledge and lore master; versatile performance; jack-of-all-trades

## Implementation details

### Alters: the bard’s class skills

- **Archetype feature:** Class Skills
- **Description:** A solacer adds Heal to his list of class skills instead of Appraise.
- **Detailed mechanics:**
  - **Rules text to implement:** A solacer adds Heal to his list of class skills instead of Appraise.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: bardic knowledge and lore master

- **Archetype feature:** Learned Physician (Ex)
- **Description:** A solacer adds 1/2 his class level (minimum 1) on Heal checks and can attempt Knowledge checks untrained.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** A solacer adds 1/2 his class level (minimum 1) on Heal checks and can attempt Knowledge checks untrained. At 5th level, a solacer can take 10 on checks with any Knowledge skill he has ranks in. The solacer can choose not to take 10 and can instead roll normally. In addition, once per day, the solacer can take 20 on any Heal check, though this does not affect the time it takes to perform the task attempted. He can use this ability one additional time per day for every 6 bard levels he has beyond 5th, to a maximum of three times per day at 17th level.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Inspire Tenacity (Su)
- **Description:** At 1st level, a solacer can use his bardic performances to bolster his allies’ mental endurance when they need it most.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a solacer can use his bardic performances to bolster his allies’ mental endurance when they need it most. All allies within 30 feet automatically stabilize if they are dying and gain a +2 morale bonus on saving throws against mind-affecting effects, poisons, and disease. This performance relies on audible components. This bardic performance replaces countersong.
- **Implementation flags:**
  - bardic performance subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: versatile performance

- **Archetype feature:** Creative Treatment (Su)
- **Description:** Beginning at 2nd level, once per day when a solacer attempts a Heal check and fails, he can immediately reroll the check and take the better result.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 6, 18.
  - **Rules text to implement:** Beginning at 2nd level, once per day when a solacer attempts a Heal check and fails, he can immediately reroll the check and take the better result. He can use this ability one additional time per day at 6th level and every 4 bard levels thereafter (to a maximum of five times per day at 18th level). Additionally, when acting as a confidante (or any other type of advisor) to reduce sanity damage with rest ( Pathfinder RPG Horror Adventures 13 ), the solacer can attempt a Charisma check instead of an Intelligence or Wisdom check and add his Charisma modifier to the amount of sanity damage removed instead of his Intelligence or Wisdom modifier. When acting as a confidante (or any other type of advisor) to reduce a madness’s DC with rest ( Horror Adventures 182 ), the solacer can attempt a Charisma check instead of an Intelligence or Wisdom check and reduce the madness’s DC by 1/2 his Charisma modifier instead of 1/2 his Intelligence or Wisdom modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: jack-of-all-trades

- **Archetype feature:** Invigorating Artistry (Su)
- **Description:** At 10th level, a solacer can use his performances to protect and heal a target’s soul.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10, 19.
  - **Rules text to implement:** At 10th level, a solacer can use his performances to protect and heal a target’s soul. The solacer can perform for 1 hour (this requires no skill check) and grant several benefits for 24 hours to the creatures that can hear or see his performance, or both, depending on whether the performance has audible or visual components. Affected creatures gain a +3 bonus on saving throws against curses, possession spells and effects (such as magic jar ), and domination and mind control spells and effects (such as dominate person ). If the target is suffering any or multiple such effects, it immediately can attempt a new saving throw against each; the effect ends if the saving throw is successful. Only one such extra saving throw can be granted against each condition in any 24-hour period. If a creature benefits from the daily performance between saving throws against a corruption ( Horror Adventures 14 ) progressing, it gains a +3 bonus on the next saving throw against that corruption. The amount of this bonus increases by 1 at 16th and 19th levels (maximum +5 at 19th level).
- **Implementation flags:**
  - ki subsystem.
  - curse subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Class Skills
- Learned Physician (Ex)
- Inspire Tenacity (Su)
- Creative Treatment (Su)
- Invigorating Artistry (Su)
