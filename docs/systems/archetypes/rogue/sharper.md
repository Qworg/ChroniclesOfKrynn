# Rogue - Sharper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sharper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sharper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Scam Artist (Ex); Sticky Fingers (Ex); Lucky Save (Su); Audacious Overconfidence (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the rogue talents gained at 2nd, 6th, and 8th levels; trap sense; the rogue talents gained at 4th, 10th, and 16th levels

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Scam Artist (Ex)
- **Description:** A sharper gains a bonus equal to half her rogue level (minimum +1) on all Bluff and Sleight of Hand checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sharper gains a bonus equal to half her rogue level (minimum +1) on all Bluff and Sleight of Hand checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rogue talents gained at 2nd, 6th
- **Archetype feature:** Sticky Fingers (Ex)
- **Description:** At 2nd level, a sharper receives Improved Steal APG as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6, 8.
  - Mechanics summary: At 2nd level, a sharper receives Improved Steal APG as a bonus feat. At 6th level, she receives Greater Steal APG as a bonus feat, and at 8th level, she receives Quick Steal APG as a bonus feat. The sharper gains these feats even if she doesn’t meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: 8th levels

- **Archetype feature:** Sticky Fingers (Ex)
- **Description:** At 2nd level, a sharper receives Improved Steal APG as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6, 8.
  - Mechanics summary: At 2nd level, a sharper receives Improved Steal APG as a bonus feat. At 6th level, she receives Greater Steal APG as a bonus feat, and at 8th level, she receives Quick Steal APG as a bonus feat. The sharper gains these feats even if she doesn’t meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: trap sense

- **Archetype feature:** Lucky Save (Su)
- **Description:** At 3rd level, when a sharper’s wits aren’t enough to pull her out of a bad situation, her luck still just might save her.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 9, 15.
  - Mechanics summary: At 3rd level, when a sharper’s wits aren’t enough to pull her out of a bad situation, her luck still just might save her. She gains a +1 luck bonus on all saving throws. This bonus increases to +2 at 9th level and to +3 at 15th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: the rogue talents gained at 4th, 10th
- **Archetype feature:** Audacious Overconfidence (Ex)
- **Description:** At 4th level, after failing an attack roll, skill check, or saving throw, a sharper can reduce her saving throw bonus from lucky save by 1 for 24 hours in order to reroll the failed roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 10, 16.
  - Mechanics summary: At 4th level, after failing an attack roll, skill check, or saving throw, a sharper can reduce her saving throw bonus from lucky save by 1 for 24 hours in order to reroll the failed roll. She can use this ability once per day at 4th level, plus an additional time per day at 10th level and again at 16th level. The decreases to her bonus from lucky save stack with each other.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, ki/monk hook.

### Replaces: 16th levels

- **Archetype feature:** Audacious Overconfidence (Ex)
- **Description:** At 4th level, after failing an attack roll, skill check, or saving throw, a sharper can reduce her saving throw bonus from lucky save by 1 for 24 hours in order to reroll the failed roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 10, 16.
  - Mechanics summary: At 4th level, after failing an attack roll, skill check, or saving throw, a sharper can reduce her saving throw bonus from lucky save by 1 for 24 hours in order to reroll the failed roll. She can use this ability once per day at 4th level, plus an additional time per day at 10th level and again at 16th level. The decreases to her bonus from lucky save stack with each other.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, ki/monk hook.

## Parsed source feature headings

- Scam Artist (Ex)
- Sticky Fingers (Ex)
- Lucky Save (Su)
- Audacious Overconfidence (Ex)
- Rogue Talents
- Advanced Talents

