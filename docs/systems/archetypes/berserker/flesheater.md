# Berserker - Flesheater

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Flesheater
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Flesheater
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Rage; One Flesh (Su); Unbound Rage (Su); Feast (Su); Unbound Form (Su); Rage Powers
- **Replaced / altered class features:** uncanny dodge, improved uncanny dodge, and the 2nd- and 8th-level rage powers; greater rage; the 14th-level rage power; mighty rage

## Replacement details

### Alters: the rage ability

- **Archetype feature:** Rage
- **Description:** In additional to the standard bonuses and penalties of rage, a flesheater takes a –2 penalty to Intelligence while raging.
- **Mechanics:**
  - Mechanics summary: In additional to the standard bonuses and penalties of rage, a flesheater takes a –2 penalty to Intelligence while raging. The additional benefits and penalties from a flesheater’s abilities last only as long as her rage does, and she cannot use these abilities if they would bring the total penalty to Intelligence to an amount equal to or greater than her Intelligence score.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, rage/rage-power hook.

### Replaces: uncanny dodge, improved uncanny dodge
- **Archetype feature:** One Flesh (Su)
- **Description:** At 2nd level when entering a rage, a flesheater can spend an additional round of rage and take an additional –2 penalty to Intelligence to take on a single ability of the valid consumed creature whose flesh she ate most recently.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 5, 8.
  - Mechanics summary: At 2nd level when entering a rage, a flesheater can spend an additional round of rage and take an additional –2 penalty to Intelligence to take on a single ability of the valid consumed creature whose flesh she ate most recently. For the purpose of this ability, a valid consumed creature is any dead animal, dragon, humanoid, or magical beast that died and was consumed by the flesheater within the past 24 hours. She can choose any ability listed under beast shape I , as long as the creature possessed that ability. At 5th level, the flesheater can take on any number of the creature’s abilities that are listed under beast shape I . At 8th level, the flesheater can instead take on one of the creature’s abilities listed under beast shape II .
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, rage/rage-power hook.

### Replaces: the 2nd-

- **Archetype feature:** One Flesh (Su)
- **Description:** At 2nd level when entering a rage, a flesheater can spend an additional round of rage and take an additional –2 penalty to Intelligence to take on a single ability of the valid consumed creature whose flesh she ate most recently.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 5, 8.
  - Mechanics summary: At 2nd level when entering a rage, a flesheater can spend an additional round of rage and take an additional –2 penalty to Intelligence to take on a single ability of the valid consumed creature whose flesh she ate most recently. For the purpose of this ability, a valid consumed creature is any dead animal, dragon, humanoid, or magical beast that died and was consumed by the flesheater within the past 24 hours. She can choose any ability listed under beast shape I , as long as the creature possessed that ability. At 5th level, the flesheater can take on any number of the creature’s abilities that are listed under beast shape I . At 8th level, the flesheater can instead take on one of the creature’s abilities listed under beast shape II .
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, rage/rage-power hook.

### Replaces: 8th-level rage powers

- **Archetype feature:** One Flesh (Su)
- **Description:** At 2nd level when entering a rage, a flesheater can spend an additional round of rage and take an additional –2 penalty to Intelligence to take on a single ability of the valid consumed creature whose flesh she ate most recently.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 5, 8.
  - Mechanics summary: At 2nd level when entering a rage, a flesheater can spend an additional round of rage and take an additional –2 penalty to Intelligence to take on a single ability of the valid consumed creature whose flesh she ate most recently. For the purpose of this ability, a valid consumed creature is any dead animal, dragon, humanoid, or magical beast that died and was consumed by the flesheater within the past 24 hours. She can choose any ability listed under beast shape I , as long as the creature possessed that ability. At 5th level, the flesheater can take on any number of the creature’s abilities that are listed under beast shape I . At 8th level, the flesheater can instead take on one of the creature’s abilities listed under beast shape II .
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, rage/rage-power hook.

### Replaces: greater rage

- **Archetype feature:** Unbound Rage (Su)
- **Description:** At 11th level, a flesheater can draw in mass from the Ethereal Plane to enlarge herself when she enters a rage, as long as the creature whose flesh she last consumed was at least one size category larger than her base size.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a flesheater can draw in mass from the Ethereal Plane to enlarge herself when she enters a rage, as long as the creature whose flesh she last consumed was at least one size category larger than her base size. Unbound rage affects her as enlarge person , except she receives a +4 size bonus to Strength and an additional –2 penalty to Intelligence.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, rage/rage-power hook.

### Replaces: the 14th-level rage power

- **Archetype feature:** Feast (Su)
- **Description:** At 14th level, a flesheater can use her one flesh and unbound rage abilities to emulate any one valid consumed creature of her choice, rather than only the one she consumed most recently.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a flesheater can use her one flesh and unbound rage abilities to emulate any one valid consumed creature of her choice, rather than only the one she consumed most recently.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: mighty rage

- **Archetype feature:** Unbound Form (Su)
- **Description:** At 20th level, a flesheater can use her one flesh ability to assume the shape of a valid consumed creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a flesheater can use her one flesh ability to assume the shape of a valid consumed creature. This ability functions as alter self , beast shape IV , form of the dragon III , or giant form II , as appropriate.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Rage
- One Flesh (Su)
- Unbound Rage (Su)
- Feast (Su)
- Unbound Form (Su)
- Rage Powers

