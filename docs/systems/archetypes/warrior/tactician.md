# Warrior - Tactician

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Tactician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Tactician
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Strategic Training (Ex); Bonus Feats; Tactical Awareness (Ex); Tactician (Ex); Cooperative Combatant (Ex); Battle Insight (Ex)
- **Replaced / altered class features:** the bonus fighter combat feat gained at 1st level; bravery; weapon training 1; armor training 3; armor training 4

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A tactician is not proficient with heavy armor or tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A tactician is not proficient with heavy armor or tower shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus fighter combat feat gained at 1st level

- **Archetype feature:** Strategic Training (Ex)
- **Description:** A tactician gains 4 skill points + a number of skill points equal to his Intelligence modifier at each level, instead of the normal 2 skill points + Intelligence modifier at each level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** A tactician gains 4 skill points + a number of skill points equal to his Intelligence modifier at each level, instead of the normal 2 skill points + Intelligence modifier at each level. Furthermore, Diplomacy (Cha), Knowledge (geography) (Int), Knowledge (nobility) (Int), Linguistics (Int), and Sense Motive (Wis) are all class skills for the tactician.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A tactician may choose Skill Focus or any teamwork feat, in addition to combat feats, as bonus feats.
- **Detailed mechanics:**
  - **Rules text to implement:** A tactician may choose Skill Focus or any teamwork feat, in addition to combat feats, as bonus feats.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: bravery

- **Archetype feature:** Tactical Awareness (Ex)
- **Description:** At 2nd level, a tactician gains a +1 bonus on initiative checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 18.
  - **Rules text to implement:** At 2nd level, a tactician gains a +1 bonus on initiative checks. This bonus increases by +1 for every four levels after 2nd level (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Tactician (Ex)
- **Description:** At 5th level, a tactician gains this ability as the cavalier class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 20.
  - **Rules text to implement:** At 5th level, a tactician gains this ability as the cavalier class feature. He may use this ability once per day at 5th level, plus one additional time for every five levels after 5th (to a maximum of four times at 20th level). If the tactician also has cavalier levels, these levels stack for determining the number of uses per day, and he can take the better progression.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 3

- **Archetype feature:** Cooperative Combatant (Ex)
- **Description:** At 11th level, when a tactician uses the aid another special attack, he may affect one additional ally per point of Intelligence bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when a tactician uses the aid another special attack, he may affect one additional ally per point of Intelligence bonus. For each ally that a tactician aids, he can pick whether to grant that ally the +2 bonus on its next attack against the opponent or the +2 bonus to AC against the opponent’s next attack on that ally, and can grant different allies different bonuses.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 4

- **Archetype feature:** Battle Insight (Ex)
- **Description:** At 15th level, as a swift action, a tactician can grant his Intelligence modifier as an insight bonus on the attack rolls made by a single ally within line of sight that can both see and hear the tactician.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, as a swift action, a tactician can grant his Intelligence modifier as an insight bonus on the attack rolls made by a single ally within line of sight that can both see and hear the tactician. That ally gains the bonus until the end of the tactician’s next turn. The tactician can use this ability a number of times per day equal to 3 + his Intelligence modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Strategic Training (Ex)
- Bonus Feats
- Tactical Awareness (Ex)
- Tactician (Ex)
- Cooperative Combatant (Ex)
- Battle Insight (Ex)
