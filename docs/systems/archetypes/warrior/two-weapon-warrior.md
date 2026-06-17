# Warrior - Two-Weapon Warrior

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Two-Weapon Warrior
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Two-Weapon%20Warrior
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Defensive Flurry (Ex); Twin Blades (Ex); Doublestrike (Ex); Improved Balance (Ex); Equal Opportunity (Ex); Perfect Balance (Ex); Deft Doublestrike (Ex); Deadly Defense (Ex)
- **Replaced / altered class features:** armor training 1 and 2; weapon training 1; weapon training 2; armor training 3; weapon training 3; armor training 4; weapon training 4; armor mastery

## Implementation details

### Replaces: armor training 1 and 2

- **Archetype feature:** Defensive Flurry (Ex)
- **Description:** At 3rd level, when a two-weapon warrior makes a full attack with both weapons, he gains a +1 dodge bonus to AC against melee attacks until the beginning of his next turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a two-weapon warrior makes a full attack with both weapons, he gains a +1 dodge bonus to AC against melee attacks until the beginning of his next turn. This bonus increases by +1 every four levels after 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Twin Blades (Ex)
- **Description:** At 5th level, a two-weapon warrior gains a +1 bonus on attack and damage rolls when making a full attack with two weapons or a double weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a two-weapon warrior gains a +1 bonus on attack and damage rolls when making a full attack with two weapons or a double weapon. This bonus increases by +1 for every four levels after 5th.
- **Implementation flags:**
  - ki subsystem.

### Replaces: weapon training 2

- **Archetype feature:** Doublestrike (Ex)
- **Description:** At 9th level, a two-weapon warrior may, as a standard action, make one attack with both his primary and secondary weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a two-weapon warrior may, as a standard action, make one attack with both his primary and secondary weapons. The penalties for attacking with two weapons apply normally.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor training 3

- **Archetype feature:** Improved Balance (Ex)
- **Description:** At 11th level, the attack penalties for fighting with two weapons are reduced by –1 for a two-weapon warrior.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, the attack penalties for fighting with two weapons are reduced by –1 for a two-weapon warrior. Alternatively, he may use a one-handed weapon in his off-hand, treating it as if it were a light weapon with the normal light weapon penalties.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Equal Opportunity (Ex)
- **Description:** At 13th level, when a two-weapon warrior makes an attack of opportunity, he may attack once with both his primary and secondary weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, when a two-weapon warrior makes an attack of opportunity, he may attack once with both his primary and secondary weapons. The penalties for attacking with two weapons apply normally.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor training 4

- **Archetype feature:** Perfect Balance (Ex)
- **Description:** At 15th level, the penalties for fighting with two weapons are reduced by an additional –1 for a two-weapon warrior.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, the penalties for fighting with two weapons are reduced by an additional –1 for a two-weapon warrior. This benefit stacks with improved balance. If he is using a one-handed weapon in his off hand, treating it as a light weapon, he uses the normal light weapon penalties.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 4

- **Archetype feature:** Deft Doublestrike (Ex)
- **Description:** At 17th level, when a two-weapon warrior hits an opponent with both weapons, he can make a disarm or sunder attempt (or trip, if one or both weapons can be used to trip) against that opponent as an immediate action that does not provoke attacks of opportunity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, when a two-weapon warrior hits an opponent with both weapons, he can make a disarm or sunder attempt (or trip, if one or both weapons can be used to trip) against that opponent as an immediate action that does not provoke attacks of opportunity.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor mastery

- **Archetype feature:** Deadly Defense (Ex)
- **Description:** At 19th level, when a two-weapon warrior makes a full attack with both weapons, every creature that hits him with a melee attack before the beginning of his next turn provokes an attack of opportunity from the warrior.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, when a two-weapon warrior makes a full attack with both weapons, every creature that hits him with a melee attack before the beginning of his next turn provokes an attack of opportunity from the warrior.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Defensive Flurry (Ex)
- Twin Blades (Ex)
- Doublestrike (Ex)
- Improved Balance (Ex)
- Equal Opportunity (Ex)
- Perfect Balance (Ex)
- Deft Doublestrike (Ex)
- Deadly Defense (Ex)
