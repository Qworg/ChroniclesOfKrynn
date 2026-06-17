# Warrior - Crossbowman

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Crossbowman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Crossbowman
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Deadshot (Ex); Crossbow Expert (Ex); Improved Deadshot (Ex); Quick Sniper (Ex); Greater Deadshot (Ex); Safe Shot (Ex); Pinpoint Targeting; Meteor Shot (Ex); Penetrating Shot (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** armor training 1; weapon training 1; armor training 2; weapon training 2; armor training 3; weapon training 3; armor training 4; weapon training 4; armor mastery

## Implementation details

### Replaces: armor training 1

- **Archetype feature:** Deadshot (Ex)
- **Description:** At 3rd level, when a crossbowman attacks with a crossbow as a readied action, he may add 1/2 his Dexterity bonus (minimum +1) on his damage roll.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a crossbowman attacks with a crossbow as a readied action, he may add 1/2 his Dexterity bonus (minimum +1) on his damage roll.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Crossbow Expert (Ex)
- **Description:** At 5th level, a crossbowman gains a +1 bonus on attack and damage rolls with crossbows.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a crossbowman gains a +1 bonus on attack and damage rolls with crossbows. This bonus increases by +1 per four levels after 5th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2

- **Archetype feature:** Improved Deadshot (Ex)
- **Description:** At 7th level, when a crossbowman attacks with a crossbow as a readied action, his target is denied its Dexterity bonus to its AC.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, when a crossbowman attacks with a crossbow as a readied action, his target is denied its Dexterity bonus to its AC.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Quick Sniper (Ex)
- **Description:** At 9th level, a crossbowman gains a bonus equal to 1/2 his fighter level on Stealth checks when sniping.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a crossbowman gains a bonus equal to 1/2 his fighter level on Stealth checks when sniping. When he is hit with a ranged attack, he can shoot his crossbow at his attacker as an immediate action if it is loaded.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 3

- **Archetype feature:** Greater Deadshot (Ex)
- **Description:** At 11th level, when a crossbowman attacks with a crossbow as a readied action, he may add his Dexterity bonus (minimum +1) on his damage roll.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when a crossbowman attacks with a crossbow as a readied action, he may add his Dexterity bonus (minimum +1) on his damage roll.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Safe Shot (Ex)
- **Description:** At 13th level, a crossbowman does not provoke attacks of opportunity when making ranged attacks with a crossbow.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a crossbowman does not provoke attacks of opportunity when making ranged attacks with a crossbow.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor training 4

- **Archetype feature:** Pinpoint Targeting
- **Description:** At 15th level, a crossbowman gains Pinpoint Targeting as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a crossbowman gains Pinpoint Targeting as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 4

- **Archetype feature:** Meteor Shot (Ex)
- **Description:** At 17th level, as a standard action, a crossbowman can make one attack with a crossbow at a –4 penalty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, as a standard action, a crossbowman can make one attack with a crossbow at a –4 penalty. If the attack hits, it inflicts damage normally and the target is subject to a bull rush or a trip maneuver using the attack roll as the combat maneuver check. The crossbowman must decide which maneuver to attempt before making his attack roll.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor mastery

- **Archetype feature:** Penetrating Shot (Ex)
- **Description:** At 19th level, when a crossbowman confirms a critical hit with a crossbow, the bolt pierces the target and can strike another creature in line behind it.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, when a crossbowman confirms a critical hit with a crossbow, the bolt pierces the target and can strike another creature in line behind it. The crossbowman must be able to trace a line starting at his space and passing through both targets to make this additional attack. The secondary attack is made at a –4 penalty, in addition to any modifiers for added range. If this attack is also a critical hit, the bolt can continue to hit another target, but the penalties stack.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Mastery (Ex)
- **Description:** A crossbowman must choose a type of crossbow.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A crossbowman must choose a type of crossbow.
- **Implementation flags:**
  - feat grant/prerequisite handling.

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
