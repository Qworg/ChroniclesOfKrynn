# Berserker - Titan Mauler

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Titan Mauler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Titan%20Mauler
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Errata; Big Game Hunter (Ex); Jotungrip (Ex); Massive Weapons (Ex); Evade Reach (Ex); Titanic Rage (Su); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge; indomitable will

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Big Game Hunter (Ex)
- **Description:** A titan mauler gains a +1 bonus on attack rolls and a +1 dodge bonus to AC in melee with creatures larger than themselves.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A titan mauler gains a +1 bonus on attack rolls and a +1 dodge bonus to AC in melee with creatures larger than themselves.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: uncanny dodge

- **Archetype feature:** Jotungrip (Ex)
- **Description:** At 2nd level, a titan mauler may choose to wield a two-handed melee weapon in one hand with a –2 penalty on attack rolls while doing so.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a titan mauler may choose to wield a two-handed melee weapon in one hand with a –2 penalty on attack rolls while doing so. The weapon must be appropriately sized for her, and it is treated as one-handed when determining the effect of Power Attack, Strength bonus to damage, and the like.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Replaces: trap sense

- **Archetype feature:** Massive Weapons (Ex)
- **Description:** At 3rd level, a titan mauler becomes skilled in the use of massive weapons looted from her titanic foes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a titan mauler becomes skilled in the use of massive weapons looted from her titanic foes. She can use two-handed weapons meant for creatures one size category larger, but the penalty for doing so is increased by 4. However, the attack roll penalty for using weapons too large for her size is reduced by 1, and this reduction increases by 1 for every three levels beyond 3rd (to a minimum of 0).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, ki/monk hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Evade Reach (Ex)
- **Description:** At 5th level, as a swift action, a titan mauler may choose one creature within her line of sight.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, as a swift action, a titan mauler may choose one creature within her line of sight. Until the end of her turn, that target’s reach is treated as if it were 5 feet shorter with respect to reaching the titan mauler, and this reduction increases by 5 feet for every five levels beyond 5th.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: indomitable will

- **Archetype feature:** Titanic Rage (Su)
- **Description:** At 14th level, a titan mauler may choose to gain the benefits of enlarge person when she enters a rage.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a titan mauler may choose to gain the benefits of enlarge person when she enters a rage. While using titanic rage, she must spend 2 rounds of rage per round, and she becomes exhausted rather than fatigued when the rage ends.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Errata
- Big Game Hunter (Ex)
- Jotungrip (Ex)
- Massive Weapons (Ex)
- Evade Reach (Ex)
- Titanic Rage (Su)
- Rage Powers

