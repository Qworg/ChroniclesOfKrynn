# Ranger - Galvanic Saboteur

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Galvanic Saboteur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Galvanic%20Saboteur
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Favored Enemy (Ex); Reprogram (Ex); Lucky Dodge (Ex); Technological Trapsmith (Ex); Static Strike (Ex); Sensor Evasion (Su)
- **Replaced / altered class features:** wild empathy; favored terrain; woodland stride; swift tracker and camouflage; hide in plain sight

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A galvanic saboteur adds Disable Device and Knowledge (arcana) to his list of class skills and removes Handle Animal and Knowledge (dungeoneering) from his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A galvanic saboteur adds Disable Device and Knowledge (arcana) to his list of class skills and removes Handle Animal and Knowledge (dungeoneering) from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: favored enemy

- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 1st level, a galvanic saboteur must select construct creatures as his first favored enemy.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a galvanic saboteur must select construct creatures as his first favored enemy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: wild empathy

- **Archetype feature:** Reprogram (Ex)
- **Description:** At 1st level, a galvanic saboteur can improve the initial attitude of a mindless construct.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a galvanic saboteur can improve the initial attitude of a mindless construct. This ability functions as wild empathy, except only against mindless constructs. The ranger can use this ability against constructs with an Intelligence score, but he takes a –4 penalty on the check.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: favored terrain

- **Archetype feature:** Lucky Dodge (Ex)
- **Description:** At 3rd level, a galvanic saboteur can dodge the precise attacks of even the most technologically advanced foes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a galvanic saboteur can dodge the precise attacks of even the most technologically advanced foes. The ranger gains a luck bonus to AC against attacks that target his touch AC as long as his opponent’s type matches that of his first favored enemy. This luck bonus is equal to 1/2 the ranger’s favored enemy bonus against that creature type. At 8th, 13th, and 18th levels, the ranger gains this luck bonus to AC against attacks that target touch his AC as long as his opponent’s type matches his second, third, and fourth favored enemy, respectively. A galvanic saboteur’s animal companion (if he chose one for his hunter’s bond) also gains this luck bonus.
- **Implementation flags:**
  - animal companion progression.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Technological Trapsmith (Ex)
- **Description:** At 7th level, a galvanic saboteur can rig technological traps using the remains of destroyed constructs with the clockwork or robot subtype.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a galvanic saboteur can rig technological traps using the remains of destroyed constructs with the clockwork or robot subtype. To successfully rig such a trap, the ranger must spend 1 minute working on the destroyed construct and succeed at a Disable Device check (DC = 10 + the construct’s HD). On a failure, the trap doesn’t function and the construct’s remains are ruined. On a success, the ranger creates a mechanical trap with the following statistics. Rigged Construct Trap
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Type
- **Description:** mechanical;
- **Detailed mechanics:**
  - **Rules text to implement:** mechanical;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Perception
- **Description:** DC 20;
- **Detailed mechanics:**
  - **Rules text to implement:** DC 20;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Disable Device
- **Description:** DC 20 Effects
- **Detailed mechanics:**
  - **Rules text to implement:** DC 20 Effects
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Trigger
- **Description:** location (all spaces occupied by the construct’s remains);
- **Detailed mechanics:**
  - **Rules text to implement:** location (all spaces occupied by the construct’s remains);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Reset
- **Description:** none
- **Detailed mechanics:**
  - **Rules text to implement:** none
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Effect
- **Description:** blast of electricity (1d6 electricity damage/2 HD of construct); Reflex negates (DC = 10 + 1/2 the ranger’s level + his Intelligence modifier); multiple targets (all targets within 5 ft.
- **Detailed mechanics:**
  - **Rules text to implement:** blast of electricity (1d6 electricity damage/2 HD of construct); Reflex negates (DC = 10 + 1/2 the ranger’s level + his Intelligence modifier); multiple targets (all targets within 5 ft. of construct’s remains) Other types of destroyed constructs can serve as suitable materials for a rigged construct trap (at the GM’s discretion). Constructs destroyed by disintegrate or similar effects that leave no intact remains cannot be used to create a rigged construct trap.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: swift tracker and camouflage

- **Archetype feature:** Static Strike (Ex)
- **Description:** At 8th level, the galvanic saboteur has gathered enough parts and scrap from his constructed enemies that he can infuse some of his attacks with a bit of their alien energy.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8, 12, 14, 20.
  - **Rules text to implement:** At 8th level, the galvanic saboteur has gathered enough parts and scrap from his constructed enemies that he can infuse some of his attacks with a bit of their alien energy. Once per day as a standard action, the ranger can make a static strike as a melee attack at his full base attack bonus. If the attack hits, it deals an additional 1d6 points of electricity damage and the ranger can make an additional attack at his full base attack bonus against a foe that is adjacent to the previous foe and still within his reach, as if he had Cleave, except he doesn’t take a –2 penalty to his AC and the second attack deals an additional 2d6 points of electricity damage. At 12th level, the ranger can continue to make attacks against adjacent creatures, as if he had Greater Cleave, with each hit increasing the amount of electricity damage dealt to the next foe in line. The ranger can use this ability twice per day at 14th level and three times per day at 20th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: hide in plain sight

- **Archetype feature:** Sensor Evasion (Su)
- **Description:** At 17th level, a galvanic saboteur has mastered the art of evading technological and magical observation.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a galvanic saboteur has mastered the art of evading technological and magical observation. He can use the Stealth skill against constructs and magical sensors (such as those created by arcane eye or clairaudience/clairvoyance ) even while being observed.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Class Skills
- Favored Enemy (Ex)
- Reprogram (Ex)
- Lucky Dodge (Ex)
- Technological Trapsmith (Ex)
- Type
- Perception
- Disable Device
- Trigger
- Reset
- Effect
- Static Strike (Ex)
- Sensor Evasion (Su)
