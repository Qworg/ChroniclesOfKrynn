# Berserker - Hateful Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Hateful Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Hateful%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Reduced Rage (Ex); Favored Enemy (Ex); Feed the Rage (Ex); Amplified by Hate (Ex); Rage Powers
- **Replaced / altered class features:** the barbarian’s rage power gained at 2nd level; improved uncanny dodge; trap sense +3

## Replacement details

### Replaces: the barbarian’s rage power gained at 2nd level

- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 2nd level, a hateful rager selects a favored enemy.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 20.
  - Mechanics summary: At 2nd level, a hateful rager selects a favored enemy. This ability works identically to the ranger ability of the same name . At 8th, 14th, and 20th level, the hateful rager selects another favored enemy and increases her bonus against one favored enemy type, as described in the ranger class. If aware of the presence of a favored enemy, the hateful rager must make a DC 20 Will save each round to attack another creature; failure means the barbarian must attack the favored enemy or move closer to that enemy. She may freely attack creatures preventing her from reaching that favored enemy (regardless of whether they are actively trying to prevent her attacks or merely in the way). She can avoid harmful obstacles normally in her attempts to reach the target and is not forced to take the shortest route.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, rage/rage-power hook, favored enemy hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Feed the Rage (Ex)
- **Description:** At 5th level, a hateful rager gains 1 additional round of rage for each favored enemy she knocks unconscious or kills in combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a hateful rager gains 1 additional round of rage for each favored enemy she knocks unconscious or kills in combat. These current rounds of rage can only be used to add to the duration of her rage, and disappear when the rage ends.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, favored enemy hook, ki/monk hook.

### Replaces: trap sense +3

- **Archetype feature:** Amplified by Hate (Ex)
- **Description:** At 9th level, a hateful rager adds half her favored enemy bonus to the DC of any rage power she uses against a favored enemy.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a hateful rager adds half her favored enemy bonus to the DC of any rage power she uses against a favored enemy.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, rage/rage-power hook, favored enemy hook.

## Parsed source feature headings

- Reduced Rage (Ex)
- Favored Enemy (Ex)
- Feed the Rage (Ex)
- Amplified by Hate (Ex)
- Rage Powers

