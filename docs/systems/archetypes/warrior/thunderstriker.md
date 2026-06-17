# Warrior - Thunderstriker

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Thunderstriker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Thunderstriker
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Strapped Shield (Ex); Hardbuckler (Ex); Knockback Smash (Ex); Hammer and Anvil (Ex); Buckler Defense (Ex); Balanced Bashing (Ex); Improved Buckler Defense (Ex)
- **Replaced / altered class features:** armor training 1; armor training 2; armor training 3; weapon training 3; armor training 4; weapon training 4; armor mastery

## Implementation details

### Replaces: armor training 1

- **Archetype feature:** Strapped Shield (Ex)
- **Description:** At 3rd level, a thunderstriker takes no penalty on attack rolls when using a weapon in two hands while wearing a buckler.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a thunderstriker takes no penalty on attack rolls when using a weapon in two hands while wearing a buckler.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2

- **Archetype feature:** Hardbuckler (Ex)
- **Description:** At 7th level, a thunderstriker may make shield bash attacks with a buckler as if it were a light shield.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a thunderstriker may make shield bash attacks with a buckler as if it were a light shield.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 3

- **Archetype feature:** Knockback Smash (Ex)
- **Description:** At 11th level, when a thunderstriker uses his buckler to attack, he gains a bonus equal to the enhancement bonus of the buckler on both attack and damage rolls.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when a thunderstriker uses his buckler to attack, he gains a bonus equal to the enhancement bonus of the buckler on both attack and damage rolls.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Hammer and Anvil (Ex)
- **Description:** At 13th level, a thunderstriker suffers only half the normal penalties for two-weapon fighting when using a buckler as his off-hand weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a thunderstriker suffers only half the normal penalties for two-weapon fighting when using a buckler as his off-hand weapon.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 4

- **Archetype feature:** Buckler Defense (Ex)
- **Description:** At 15th level, a thunderstriker retains partial use of his buckler even when using a weapon in both hands or in each hand (rather than losing his shield bonus until the beginning of his next turn).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a thunderstriker retains partial use of his buckler even when using a weapon in both hands or in each hand (rather than losing his shield bonus until the beginning of his next turn). He gains a +1 shield bonus to AC and may apply the benefits of any feats he knows that require the use of a shield, but does not benefit from any magical properties his shield may possess.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 4

- **Archetype feature:** Balanced Bashing (Ex)
- **Description:** At 17th level, a thunderstriker no longer suffers two-weapon fighting penalties when using a buckler as his off-hand weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a thunderstriker no longer suffers two-weapon fighting penalties when using a buckler as his off-hand weapon.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor mastery

- **Archetype feature:** Improved Buckler Defense (Ex)
- **Description:** At 19th level, a thunderstriker does not forfeit his shield bonus to AC from a buckler when fighting two-handed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a thunderstriker does not forfeit his shield bonus to AC from a buckler when fighting two-handed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Strapped Shield (Ex)
- Hardbuckler (Ex)
- Knockback Smash (Ex)
- Hammer and Anvil (Ex)
- Buckler Defense (Ex)
- Balanced Bashing (Ex)
- Improved Buckler Defense (Ex)
