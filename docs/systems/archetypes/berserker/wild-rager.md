# Berserker - Wild Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Wild Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Wild%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Uncontrolled Rage (Ex); Wild Fighting (Ex); Rage Conversion (Ex); Rage Powers
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Uncontrolled Rage (Ex)
- **Description:** A wild rager’s rage functions as normal, except that when she reduces a creature to 0 or fewer hit points, she must attempt a Will save (DC 10 + 1/2 the barbarian’s level + the barbarian’s Constitution modifier) or become confused.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A wild rager’s rage functions as normal, except that when she reduces a creature to 0 or fewer hit points, she must attempt a Will save (DC 10 + 1/2 the barbarian’s level + the barbarian’s Constitution modifier) or become confused. For the remainder of her current turn, she attacks the nearest creature other than herself. On the following round, refer to the confusion spell to determine her actions. At the end of this round, and each round thereafter, she can attempt a new saving throw to end the confusion effect. The rounds during which she is confused do not count against the rounds she has spent raging that day, but she cannot end her rage voluntarily, nor can she use rage powers while confused.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: uncanny dodge

- **Archetype feature:** Wild Fighting (Ex)
- **Description:** At 2nd level, even when not raging, wild ragers often fight with reckless, savage abandon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, even when not raging, wild ragers often fight with reckless, savage abandon. A wild rager using the full-attack action can make one extra attack per round at her highest base attack bonus. Until the beginning of her next turn, however, she takes a –2 penalty on attack rolls and –4 penalty to AC.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Rage Conversion (Ex)
- **Description:** At 5th level, a wild rager who fails a saving throw against any mind-affecting effect can attempt a new saving throw at the beginning of her next turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a wild rager who fails a saving throw against any mind-affecting effect can attempt a new saving throw at the beginning of her next turn. If the save succeeds, that effect ends and she instead rages and becomes confused as noted above.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the wild rager archetype: animal fury, bloody blow, body bludgeon, brawler, crippling blow, greater brawler, intimidating glare, mighty swing, no escape, powerful blow, and quick reflexes.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the wild rager archetype: animal fury, bloody blow, body bludgeon, brawler, crippling blow, greater brawler, intimidating glare, mighty swing, no escape, powerful blow, and quick reflexes.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Uncontrolled Rage (Ex)
- Wild Fighting (Ex)
- Rage Conversion (Ex)
- Rage Powers
