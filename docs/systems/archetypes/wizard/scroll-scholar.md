# Wizard - Scroll Scholar

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Scroll Scholar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Scroll%20Scholar
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Diligent Student (Ex); Secrets Revealed (Sp); Flash of Insight (Su)
- **Replaced / altered class features:** one of the 1st-level granted powers from her domains—the character gets to choose which of her two 1st-level granted powers it replaces; diviner’s fortune (if a diviner) or hand of the apprentice (if a universalist); the increase to her channel energy damage normally gained at 5th level—her channel energy damage increases to 3d6 at 7th level instead, and for the rest of her career as a cleric lags 1d6 behind normal; her bonus feat for 5th level; the normal addition of a new 4th-level spell slot to the character’s spells per day— from this point on, the cleric or wizard has one fewer 4thlevel spell slot than other clerics or wizards

## Replacement details

### Replaces: a domain power or school power and one early bonus feature

- **Archetype feature:** Diligent Student (Ex)
- **Description:** The scholar steadily expands a personalized suite of Knowledge skills that scale with class level.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 5, 10, 15, 20
  - Action/timing: Passive skill bonus
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - At 1st level, choose one Knowledge skill and make it a class skill.
    - Add half class level, minimum 1, on checks with that chosen Knowledge skill.
    - At 5th level and every 5 levels thereafter, choose another Knowledge skill to gain the same treatment.
  - Scaling: Additional Knowledge skills are added at 5th, 10th, 15th, and 20th level.
  - Interactions: The half-level bonus stacks with other bonuses unless another rule prevents stacking.
  - Edge cases: Only Knowledge skills qualify for selection.
  - Implementation flags:
    - Likely existing hooks: half-level bonus to selected Knowledge skills, class-skill addition.

### Replaces: a channel energy progression milestone and a bonus feat

- **Archetype feature:** Secrets Revealed (Sp)
- **Description:** The scholar gradually turns comprehend languages and identify into always-available magic.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 5, 7, 9, 11, 13
  - Action/timing: Standard action or normal spell-like activation timing
  - Duration: Per each copied spell's normal duration
  - Uses: 1/day each at 5th level; 2/day each at 7th; 3/day each at 9th; one becomes constant at 11th and the other at 13th
  - Core function:
    - At 5th level, gain comprehend languages and identify as spell-like abilities usable once per day each.
    - Increase both abilities to 2/day at 7th level and 3/day at 9th level.
    - At 11th level, choose one of the two abilities to become constant.
    - At 13th level, the remaining ability also becomes constant.
    - Use character level as caster level for both spell-like abilities.
  - Scaling: Uses per day increase at 7th and 9th level, then convert to constant effects at 11th and 13th.
  - Interactions: The constant effects coexist with normal spellcasting and do not consume slots.
  - Edge cases: The wizard chooses which effect becomes constant first at 11th level.
  - Implementation flags:
    - Likely existing hooks: spell-like ability grant with scaling uses per day, constant SLA conversion at milestone levels.

### Replaces: a 4th-level spell slot permanently

- **Archetype feature:** Flash of Insight (Su)
- **Description:** The scholar gives up a spell slot progression benefit for a powerful post-roll bonus a few times per day.
- **Mechanics:**
  - Type: Su
  - Level hooks: 10, 15, 20
  - Action/timing: Immediate action declared after the die is rolled but before the result is known
  - Duration: Applies to the triggering roll only
  - Uses: 1/day at 10th level; 2/day at 15th; 3/day at 20th
  - Core function:
    - Gain a +5 bonus on one attack roll, caster-level check, or saving throw.
    - Apply the bonus to a roll that has already been made, as long as the outcome has not been revealed yet.
  - Scaling: Daily uses increase at 15th and 20th level.
  - Interactions: The bonus applies to the existing roll instead of granting a reroll.
  - Edge cases: The ability cannot be used after the GM or engine announces success or failure.
  - Implementation flags:
    - Likely existing hooks: immediate-action bonus during the post-roll, pre-result window, uses-per-day scaling.

## Parsed source feature headings

- Diligent Student (Ex)
- Secrets Revealed (Sp)
- Flash of Insight (Su)
