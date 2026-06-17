# Rogue - Sharper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sharper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sharper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Scam Artist (Ex); Sticky Fingers (Ex); Lucky Save (Su); Audacious Overconfidence (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the rogue talents gained at 2nd, 6th, and 8th levels; trap sense; the rogue talents gained at 4th, 10th, and 16th levels

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Scam Artist (Ex)
- **Description:** A sharper gains a bonus equal to half her rogue level (minimum +1) on all Bluff and Sleight of Hand checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sharper gains a bonus equal to half her rogue level (minimum +1) on all Bluff and Sleight of Hand checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talents gained at 2nd, 6th, and 8th levels

- **Archetype feature:** Sticky Fingers (Ex)
- **Description:** At 2nd level, a sharper receives Improved Steal APG as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 8.
  - **Rules text to implement:** At 2nd level, a sharper receives Improved Steal APG as a bonus feat. At 6th level, she receives Greater Steal APG as a bonus feat, and at 8th level, she receives Quick Steal APG as a bonus feat. The sharper gains these feats even if she doesn’t meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Lucky Save (Su)
- **Description:** At 3rd level, when a sharper’s wits aren’t enough to pull her out of a bad situation, her luck still just might save her.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 9, 15.
  - **Rules text to implement:** At 3rd level, when a sharper’s wits aren’t enough to pull her out of a bad situation, her luck still just might save her. She gains a +1 luck bonus on all saving throws. This bonus increases to +2 at 9th level and to +3 at 15th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talents gained at 4th, 10th, and 16th levels

- **Archetype feature:** Audacious Overconfidence (Ex)
- **Description:** At 4th level, after failing an attack roll, skill check, or saving throw, a sharper can reduce her saving throw bonus from lucky save by 1 for 24 hours in order to reroll the failed roll.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 10, 16.
  - **Rules text to implement:** At 4th level, after failing an attack roll, skill check, or saving throw, a sharper can reduce her saving throw bonus from lucky save by 1 for 24 hours in order to reroll the failed roll. She can use this ability once per day at 4th level, plus an additional time per day at 10th level and again at 16th level. The decreases to her bonus from lucky save stack with each other.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the sharper archetype: charmer APG, convincing lie UC, deft palm UC, false friend ARG, fast fingers, follow along, honeyed words APG, obfuscate story ARG, shades of gray, and steal the story ARG (as well as certainty for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the sharper archetype: charmer APG, convincing lie UC, deft palm UC, false friend ARG, fast fingers, follow along, honeyed words APG, obfuscate story ARG, shades of gray, and steal the story ARG (as well as certainty for an unchained rogue).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced talents complement the sharper archetype: another day APG, defensive roll, hidden mind, improved evasion, redirect attack APG, and skill mastery (as well as cutting edge for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced talents complement the sharper archetype: another day APG, defensive roll, hidden mind, improved evasion, redirect attack APG, and skill mastery (as well as cutting edge for an unchained rogue).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Scam Artist (Ex)
- Sticky Fingers (Ex)
- Lucky Save (Su)
- Audacious Overconfidence (Ex)
- Rogue Talents
- Advanced Talents
