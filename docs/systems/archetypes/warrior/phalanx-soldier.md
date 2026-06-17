# Warrior - Phalanx Soldier

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Phalanx Soldier
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Phalanx%20Soldier
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Stand Firm (Ex); Phalanx Fighting (Ex); Ready Pike (Ex); Deft Shield (Ex); Shield Ally (Ex); Irresistible Advance (Ex); Shielded Fortress (Ex)
- **Replaced / altered class features:** bravery; armor training 1; weapon training 1; armor training 2 and 3; weapon training 2, 3, and 4; armor training 4; weapon mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Stand Firm (Ex)
- **Description:** At 2nd level, a phalanx soldier gains a +1 bonus to CMD against bull rush, drag, overrun, and trip attempts.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a phalanx soldier gains a +1 bonus to CMD against bull rush, drag, overrun, and trip attempts. This bonus also applies on saves against trample attacks. The bonus increases by +1 for every four levels beyond 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1

- **Archetype feature:** Phalanx Fighting (Ex)
- **Description:** At 3rd level, when a phalanx soldier wields a shield, he can use any polearm or spear of his size as a one-handed weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a phalanx soldier wields a shield, he can use any polearm or spear of his size as a one-handed weapon.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Ready Pike (Ex)
- **Description:** At 5th level, a phalanx soldier can, once per day, ready a weapon with the brace property as an immediate action, gaining a +1 bonus on attack and damage rolls.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a phalanx soldier can, once per day, ready a weapon with the brace property as an immediate action, gaining a +1 bonus on attack and damage rolls. For every four levels beyond 5th, this bonus increases by +1, and he can use the ability one additional time per day. He cannot use this ability when flat-footed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2 and 3

- **Archetype feature:** Deft Shield (Ex)
- **Description:** At 7th level, the armor check penalty from a shield and the attack roll penalty are reduced by –1 for a phalanx soldier using a tower shield.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7, 11.
  - **Rules text to implement:** At 7th level, the armor check penalty from a shield and the attack roll penalty are reduced by –1 for a phalanx soldier using a tower shield. At 11th level, these penalties are reduced by –2.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2, 3, and 4

- **Archetype feature:** Shield Ally (Ex)
- **Description:** At 9th level, when a phalanx fighter is using a heavy or tower shield, he can, as a move action, provide partial cover (+2 cover bonus to AC, +1 bonus on Reflex saves) to himself and all adjacent allies until the beginning of his next turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 13, 17.
  - **Rules text to implement:** At 9th level, when a phalanx fighter is using a heavy or tower shield, he can, as a move action, provide partial cover (+2 cover bonus to AC, +1 bonus on Reflex saves) to himself and all adjacent allies until the beginning of his next turn. At 13th level, he can instead provide cover (+4 cover bonus to AC, +2 bonus on Reflex saves) and evasion (as a rogue) to one adjacent ally until the beginning of his next turn. This cover does not allow Stealth checks. At 17th level, he can provide cover to himself and all adjacent allies, or he can provide improved cover (+8 cover bonus to AC, +4 bonus on Reflex saves, improved evasion) to a single adjacent ally.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 4

- **Archetype feature:** Irresistible Advance (Ex)
- **Description:** At 15th level, a phalanx fighter gains a bonus on bull rush and overrun CMB checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a phalanx fighter gains a bonus on bull rush and overrun CMB checks. This bonus depends on the type of shield used: +1 with a buckler, +2 with a light shield, +3 with a heavy shield, or +4 with a tower shield.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon mastery

- **Archetype feature:** Shielded Fortress (Ex)
- **Description:** At 20th level, a phalanx fighter’s shield cannot be disarmed or sundered.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a phalanx fighter’s shield cannot be disarmed or sundered. He gains evasion (as a rogue) when using a shield (improved evasion when using a tower shield). As a move action, a phalanx fighter can provide evasion to all adjacent allies until the beginning of his next turn. As an immediate action, he can provide improved evasion to an adjacent ally against one attack.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Stand Firm (Ex)
- Phalanx Fighting (Ex)
- Ready Pike (Ex)
- Deft Shield (Ex)
- Shield Ally (Ex)
- Irresistible Advance (Ex)
- Shielded Fortress (Ex)
