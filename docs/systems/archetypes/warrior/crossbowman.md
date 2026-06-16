# Warrior - Crossbowman

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Crossbowman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Crossbowman
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Deadshot (Ex); Crossbow Expert (Ex); Improved Deadshot (Ex); Quick Sniper (Ex); Greater Deadshot (Ex); Safe Shot (Ex); Pinpoint Targeting; Meteor Shot (Ex); Penetrating Shot (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** armor training 1; weapon training 1; armor training 2; weapon training 2; armor training 3; weapon training 3; armor training 4; weapon training 4; armor mastery

## Replacement details

### Replaces: armor training 1

- **Archetype feature:** Deadshot (Ex)
- **Description:** At 3rd level, when a crossbowman attacks with a crossbow as a readied action, he may add 1/2 his Dexterity bonus (minimum +1) on his damage roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when a crossbowman attacks with a crossbow as a readied action, he may add 1/2 his Dexterity bonus (minimum +1) on his damage roll.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Crossbow Expert (Ex)
- **Description:** At 5th level, a crossbowman gains a +1 bonus on attack and damage rolls with crossbows.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a crossbowman gains a +1 bonus on attack and damage rolls with crossbows. This bonus increases by +1 per four levels after 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 2

- **Archetype feature:** Improved Deadshot (Ex)
- **Description:** At 7th level, when a crossbowman attacks with a crossbow as a readied action, his target is denied its Dexterity bonus to its AC.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, when a crossbowman attacks with a crossbow as a readied action, his target is denied its Dexterity bonus to its AC.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Quick Sniper (Ex)
- **Description:** At 9th level, a crossbowman gains a bonus equal to 1/2 his fighter level on Stealth checks when sniping.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a crossbowman gains a bonus equal to 1/2 his fighter level on Stealth checks when sniping. When he is hit with a ranged attack, he can shoot his crossbow at his attacker as an immediate action if it is loaded.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 3

- **Archetype feature:** Greater Deadshot (Ex)
- **Description:** At 11th level, when a crossbowman attacks with a crossbow as a readied action, he may add his Dexterity bonus (minimum +1) on his damage roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, when a crossbowman attacks with a crossbow as a readied action, he may add his Dexterity bonus (minimum +1) on his damage roll.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 3

- **Archetype feature:** Safe Shot (Ex)
- **Description:** At 13th level, a crossbowman does not provoke attacks of opportunity when making ranged attacks with a crossbow.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a crossbowman does not provoke attacks of opportunity when making ranged attacks with a crossbow.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: armor training 4

- **Archetype feature:** Pinpoint Targeting
- **Description:** At 15th level, a crossbowman gains Pinpoint Targeting as a bonus feat.
- **Mechanics:**
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a crossbowman gains Pinpoint Targeting as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: weapon training 4

- **Archetype feature:** Meteor Shot (Ex)
- **Description:** At 17th level, as a standard action, a crossbowman can make one attack with a crossbow at a –4 penalty.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, as a standard action, a crossbowman can make one attack with a crossbow at a –4 penalty. If the attack hits, it inflicts damage normally and the target is subject to a bull rush or a trip maneuver using the attack roll as the combat maneuver check. The crossbowman must decide which maneuver to attempt before making his attack roll.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, ki/monk hook.

### Replaces: armor mastery

- **Archetype feature:** Penetrating Shot (Ex)
- **Description:** At 19th level, when a crossbowman confirms a critical hit with a crossbow, the bolt pierces the target and can strike another creature in line behind it.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, when a crossbowman confirms a critical hit with a crossbow, the bolt pierces the target and can strike another creature in line behind it. The crossbowman must be able to trace a line starting at his space and passing through both targets to make this additional attack. The secondary attack is made at a –4 penalty, in addition to any modifiers for added range. If this attack is also a critical hit, the bolt can continue to hit another target, but the penalties stack.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

## Parsed source feature headings

- Deadshot (Ex)
- Crossbow Expert (Ex)
- Improved Deadshot (Ex)
- Quick Sniper (Ex)
- Greater Deadshot (Ex)
- Safe Shot (Ex)
- Pinpoint Targeting
- Meteor Shot (Ex)
- Penetrating Shot (Ex)
- Weapon Mastery (Ex)

