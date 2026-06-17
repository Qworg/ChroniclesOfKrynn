# Warrior - Weapon Master

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Weapon Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Weapon%20Master
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon Guard (Ex); Weapon Training (Ex); Reliable Strike (Ex); Mirror Move (Ex); Deadly Critical (Ex); Critical Specialist (Ex); Unstoppable Strike (Ex)
- **Replaced / altered class features:** bravery; armor training 1, 2, 3, and 4; weapon training 1; weapon training 2; weapon training 3; weapon training 4; armor mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Weapon Guard (Ex)
- **Description:** At 2nd level, a weapon master gains a +1 bonus to CMD against disarm and sunder attempts while wielding his chosen weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a weapon master gains a +1 bonus to CMD against disarm and sunder attempts while wielding his chosen weapon. This bonus also applies on saves against any effect that targets his chosen weapon (for example, grease, heat metal, shatter, warp wood). The bonus increases by +1 for every four levels beyond 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1, 2, 3, and 4

- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 3rd level, a weapon master gains a +1 bonus on attack and damage rolls with his chosen weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a weapon master gains a +1 bonus on attack and damage rolls with his chosen weapon. The bonus improves by +1 for every four levels beyond 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Reliable Strike (Ex)
- **Description:** At 5th level, a weapon master may reroll an attack roll, critical hit confirmation roll, miss chance check, or damage roll as an immediate action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a weapon master may reroll an attack roll, critical hit confirmation roll, miss chance check, or damage roll as an immediate action. He must accept the second roll even if it is worse. He can use this ability once per day at 5th level, plus one additional time per day for every five levels beyond 5th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Mirror Move (Ex)
- **Description:** At 9th level, a weapon master gains his weapon training bonus as an insight bonus to AC when attacked by his chosen weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a weapon master gains his weapon training bonus as an insight bonus to AC when attacked by his chosen weapon.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Deadly Critical (Ex)
- **Description:** At 13th level, when a weapon master confirms a critical hit with his chosen weapon, he can increase the weapon’s damage multiplier by +1 as an immediate action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, when a weapon master confirms a critical hit with his chosen weapon, he can increase the weapon’s damage multiplier by +1 as an immediate action. He can use this ability once per day at 13th level, plus one additional time per day for every three levels above 13th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 4

- **Archetype feature:** Critical Specialist (Ex)
- **Description:** At 17th level, the save DCs of any effects caused by a critical hit with a weapon master’s chosen weapon increase by +4.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, the save DCs of any effects caused by a critical hit with a weapon master’s chosen weapon increase by +4.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor mastery

- **Archetype feature:** Unstoppable Strike (Ex)
- **Description:** At 19th level, a weapon master can take a standard action to make one attack with his chosen weapon as a touch attack that ignores damage reduction (or hardness, if attacking an object).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a weapon master can take a standard action to make one attack with his chosen weapon as a touch attack that ignores damage reduction (or hardness, if attacking an object).
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Weapon Guard (Ex)
- Weapon Training (Ex)
- Reliable Strike (Ex)
- Mirror Move (Ex)
- Deadly Critical (Ex)
- Critical Specialist (Ex)
- Unstoppable Strike (Ex)
