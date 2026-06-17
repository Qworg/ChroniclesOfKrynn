# Berserker - Titan Mauler

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Titan Mauler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Titan%20Mauler
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Errata; Big Game Hunter (Ex); Jotungrip (Ex); Massive Weapons (Ex); Evade Reach (Ex); Titanic Rage (Su); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge; indomitable will

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Errata
- **Description:** Link In lands overrun by giants, dragons, and other hulking beasts, entire fellowships of barbarians hone tactics and traditions with one purpose—to bring low these massive foes.
- **Detailed mechanics:**
  - **Rules text to implement:** Link In lands overrun by giants, dragons, and other hulking beasts, entire fellowships of barbarians hone tactics and traditions with one purpose—to bring low these massive foes. While her enemies’ size makes the creatures strong, the titan mauler is even stronger, taking up weapons from her fallen foes that no lesser warrior can lift, and using them when she beseeches the spirits to grant her increased size and greater ferocity against her titanic foes.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: fast movement

- **Archetype feature:** Big Game Hunter (Ex)
- **Description:** A titan mauler gains a +1 bonus on attack rolls and a +1 dodge bonus to AC in melee with creatures larger than themselves.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A titan mauler gains a +1 bonus on attack rolls and a +1 dodge bonus to AC in melee with creatures larger than themselves.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** Jotungrip (Ex)
- **Description:** At 2nd level, a titan mauler may choose to wield a two-handed melee weapon in one hand with a –2 penalty on attack rolls while doing so.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a titan mauler may choose to wield a two-handed melee weapon in one hand with a –2 penalty on attack rolls while doing so. The weapon must be appropriately sized for her, and it is treated as one-handed when determining the effect of Power Attack, Strength bonus to damage, and the like.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Massive Weapons (Ex)
- **Description:** At 3rd level, a titan mauler becomes skilled in the use of massive weapons looted from her titanic foes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a titan mauler becomes skilled in the use of massive weapons looted from her titanic foes. She can use two-handed weapons meant for creatures one size category larger, but the penalty for doing so is increased by 4. However, the attack roll penalty for using weapons too large for her size is reduced by 1, and this reduction increases by 1 for every three levels beyond 3rd (to a minimum of 0).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: improved uncanny dodge

- **Archetype feature:** Evade Reach (Ex)
- **Description:** At 5th level, as a swift action, a titan mauler may choose one creature within her line of sight.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, as a swift action, a titan mauler may choose one creature within her line of sight. Until the end of her turn, that target’s reach is treated as if it were 5 feet shorter with respect to reaching the titan mauler, and this reduction increases by 5 feet for every five levels beyond 5th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: indomitable will

- **Archetype feature:** Titanic Rage (Su)
- **Description:** At 14th level, a titan mauler may choose to gain the benefits of enlarge person when she enters a rage.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a titan mauler may choose to gain the benefits of enlarge person when she enters a rage. While using titanic rage, she must spend 2 rounds of rage per round, and she becomes exhausted rather than fatigued when the rage ends.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the titan mauler archetype: body bludgeon, greater ground breaker, ground breaker, knockback, mighty swing, powerful blow, smasher, and strength surge.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the titan mauler archetype: body bludgeon, greater ground breaker, ground breaker, knockback, mighty swing, powerful blow, smasher, and strength surge.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Errata
- Big Game Hunter (Ex)
- Jotungrip (Ex)
- Massive Weapons (Ex)
- Evade Reach (Ex)
- Titanic Rage (Su)
- Rage Powers
