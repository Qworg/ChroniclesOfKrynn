# Warrior - Taldor: Rondelero Duelist

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Taldor: Rondelero Duelist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Taldor%20%20Rondelero%20Duelist
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Suggested Feats; Buckler Bash (Ex); Buckler Catch (Ex); Strong Swing (Ex); Armor Training (Ex); Chopping Blow (Ex)
- **Replaced / altered class features:** Armor Training 1-3, Bravery, Weapon Training 1

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Suggested Feats
- **Description:** Exotic Weapon Proficiency (falcata), Improved Shield Bash, Improved Two-Weapon Fighting, Power Attack, Shield Slam, Shield Master, Taldan Duelist (see World Guide: The Inner Sea ), Two-Weapon Fighting, Weapon Focus (falcata), Weapon Specialization (falcata).
- **Detailed mechanics:**
  - **Rules text to implement:** Exotic Weapon Proficiency (falcata), Improved Shield Bash, Improved Two-Weapon Fighting, Power Attack, Shield Slam, Shield Master, Taldan Duelist (see World Guide: The Inner Sea ), Two-Weapon Fighting, Weapon Focus (falcata), Weapon Specialization (falcata).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Buckler Bash (Ex)
- **Description:** At 2nd level, a rondelero can perform a shield bash with a buckler (use the same damage and critical modifier as for a light shield).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a rondelero can perform a shield bash with a buckler (use the same damage and critical modifier as for a light shield).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 1

- **Archetype feature:** Buckler Catch (Ex)
- **Description:** At 3rd level, a rondelero can catch his opponent’s weapon between his buckler and his forearm, effectively wedging the hafts of polearms and hammers or the flats of blades.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a rondelero can catch his opponent’s weapon between his buckler and his forearm, effectively wedging the hafts of polearms and hammers or the flats of blades. This functions as a disarm combat maneuver, and the rondelero gains a +4 bonus on the roll. If the rondelero’s attack fails by 10 or more, he suffers a –2 penalty to his AC until the start of his next turn.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Strong Swing (Ex)
- **Description:** At 5th level, a rondelero gains a +1 bonus on attack and damage rolls when wielding a falcata and buckler that applies to attacks made by either hand.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a rondelero gains a +1 bonus on attack and damage rolls when wielding a falcata and buckler that applies to attacks made by either hand. These bonuses increase by +1 for every four levels beyond 5th. With a full-attack action, a rondelero may alternate between using his falcata or his buckler for each attack. This does not grant additional attacks or incur penalties as two-weapon fighting does.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2

- **Archetype feature:** Armor Training (Ex)
- **Description:** At 7th level, a rondelero gains armor training 1, and can move at his normal speed in medium armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7, 15.
  - **Rules text to implement:** At 7th level, a rondelero gains armor training 1, and can move at his normal speed in medium armor. At 15th level, the rondelero gains armor training 2, and can move at his normal speed in heavy armor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 3

- **Archetype feature:** Chopping Blow (Ex)
- **Description:** At 11th level, as a standard action, a rondelero can make a single melee attack with a falcata.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, as a standard action, a rondelero can make a single melee attack with a falcata. If the attack hits, he may make a sunder combat maneuver against the target of his attack as a free action that does not provoke an attack of opportunity.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Suggested Feats
- Buckler Bash (Ex)
- Buckler Catch (Ex)
- Strong Swing (Ex)
- Armor Training (Ex)
- Chopping Blow (Ex)
