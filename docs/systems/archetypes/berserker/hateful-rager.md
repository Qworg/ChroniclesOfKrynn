# Berserker - Hateful Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Hateful Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Hateful%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Reduced Rage (Ex); Favored Enemy (Ex); Feed the Rage (Ex); Amplified by Hate (Ex); Rage Powers
- **Replaced / altered class features:** the barbarian’s rage power gained at 2nd level; improved uncanny dodge; trap sense +3

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Reduced Rage (Ex)
- **Description:** At 2nd level and every level thereafter, a hateful rager only gains 1 additional round of rage per day instead of the normal 2 additional rounds of rage per day.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level and every level thereafter, a hateful rager only gains 1 additional round of rage per day instead of the normal 2 additional rounds of rage per day.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: the barbarian’s rage power gained at 2nd level

- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 2nd level, a hateful rager selects a favored enemy.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 20.
  - **Rules text to implement:** At 2nd level, a hateful rager selects a favored enemy. This ability works identically to the ranger ability of the same name. At 8th, 14th, and 20th level, the hateful rager selects another favored enemy and increases her bonus against one favored enemy type, as described in the ranger class. While raging, the hateful rager makes every effort to fight a favored enemy rather than other opponents. If aware of the presence of a favored enemy, the hateful rager must make a DC 20 Will save each round to attack another creature; failure means the barbarian must attack the favored enemy or move closer to that enemy. She may freely attack creatures preventing her from reaching that favored enemy (regardless of whether they are actively trying to prevent her attacks or merely in the way). She can avoid harmful obstacles normally in her attempts to reach the target and is not forced to take the shortest route. At 8th, 14th, and 20th levels, in place of a rage power she gains another favored enemy and increases her bonus against one favored enemy type.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Feed the Rage (Ex)
- **Description:** At 5th level, a hateful rager gains 1 additional round of rage for each favored enemy she knocks unconscious or kills in combat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a hateful rager gains 1 additional round of rage for each favored enemy she knocks unconscious or kills in combat. These current rounds of rage can only be used to add to the duration of her rage, and disappear when the rage ends.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.

### Replaces: trap sense +3

- **Archetype feature:** Amplified by Hate (Ex)
- **Description:** At 9th level, a hateful rager adds half her favored enemy bonus to the DC of any rage power she uses against a favored enemy.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a hateful rager adds half her favored enemy bonus to the DC of any rage power she uses against a favored enemy.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the hateful rager archetype: intimidating glare, roused anger, terrifying howl; come and get me, inspire ferocity, overbearing advance, reckless abandon.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the hateful rager archetype: intimidating glare, roused anger, terrifying howl; come and get me, inspire ferocity, overbearing advance, reckless abandon.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Reduced Rage (Ex)
- Favored Enemy (Ex)
- Feed the Rage (Ex)
- Amplified by Hate (Ex)
- Rage Powers
