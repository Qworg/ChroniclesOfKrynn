# Bard - Demagogue

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Demagogue
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Demagogue
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Famous; Bardic Performance
- **Replaced / altered class features:** inspire courage +1; lore master; suggestion; mass suggestion

## Replacement details

### Replaces: inspire courage +1

- **Archetype feature:** Famous
- **Description:** At 1st level, a demagogue is famous in a particular region.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a demagogue is famous in a particular region. This works like the famous ability of the celebrity bard archetype , except the demagogue’s skill bonuses apply to Bluff and Intimidate instead of Diplomacy and Intimidate.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, rage/rage-power hook, ki/monk hook.

### Replaces: lore master

- **Archetype feature:** Bardic Performance
- **Description:** A demagogue gains the following type of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 6, 18.
  - Mechanics summary: A demagogue gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the demagogue gains the ability to quickly gather a crowd. Incite Violence (Ex) : At 6th level, the demagogue can use his performance to fan the fury of a crowd of people he has fascinated. Using this ability does not disrupt the fascinate effect, but does require a standard action to activate (in addition to the free action to continue the fascinate effect). The bard selects a number of targets equal to his level, who must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) or be affected by rage for a number of rounds equal to the bard’s level. The bard indicates who is the intended target of violence (either after using this ability or as part of the performance leading to it) and the enraged members of the crowd immediately attack the target if possible.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A demagogue gains the following type of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 6, 18.
  - Mechanics summary: A demagogue gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the demagogue gains the ability to quickly gather a crowd. Incite Violence (Ex) : At 6th level, the demagogue can use his performance to fan the fury of a crowd of people he has fascinated. Using this ability does not disrupt the fascinate effect, but does require a standard action to activate (in addition to the free action to continue the fascinate effect). The bard selects a number of targets equal to his level, who must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) or be affected by rage for a number of rounds equal to the bard’s level. The bard indicates who is the intended target of violence (either after using this ability or as part of the performance leading to it) and the enraged members of the crowd immediately attack the target if possible.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A demagogue gains the following type of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 6, 18.
  - Mechanics summary: A demagogue gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the demagogue gains the ability to quickly gather a crowd. Incite Violence (Ex) : At 6th level, the demagogue can use his performance to fan the fury of a crowd of people he has fascinated. Using this ability does not disrupt the fascinate effect, but does require a standard action to activate (in addition to the free action to continue the fascinate effect). The bard selects a number of targets equal to his level, who must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) or be affected by rage for a number of rounds equal to the bard’s level. The bard indicates who is the intended target of violence (either after using this ability or as part of the performance leading to it) and the enraged members of the crowd immediately attack the target if possible.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook, ki/monk hook.

## Parsed source feature headings

- Famous
- Bardic Performance

