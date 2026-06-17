# Ranger - Battle Scout

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Battle Scout
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Battle%20Scout
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hunter’s Bond (Ex); Advantageous Terrain (Ex); Infiltration (Ex); Superior Tactics (Ex); Perfect Advantage (Ex)
- **Replaced / altered class features:** the ranger’s second favored enemy; the ranger’s third favorite enemy; the ranger’s fourth favored enemy; master hunter

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Hunter’s Bond (Ex)
- **Description:** At 4th level, when a battle scout gains the hunter’s bond ability, he must choose to bond with his companions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, when a battle scout gains the hunter’s bond ability, he must choose to bond with his companions. Battle scouts do not have animal companions.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Replaces: the ranger’s second favored enemy

- **Archetype feature:** Advantageous Terrain (Ex)
- **Description:** At 5th level, when a battle scout is within one of his favorite terrains, he can spend up to 3 consecutive rounds studying an area of terrain to gain the benefits below.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, when a battle scout is within one of his favorite terrains, he can spend up to 3 consecutive rounds studying an area of terrain to gain the benefits below. Each round of studying terrain is a standard action. During the first round of studying terrain, the battle scout designates a 60-foot-radius-burst area from a single square within line of sight. Depending on how many rounds the battle scout spends studying the area, he or his allies gain the following benefits for 10 minutes per ranger level he possesses. (For example, if he spends 2 rounds, he or his allies gain the first two benefits.) 1st Round : Allies within line of sight and that can hear the battle scout gain a +2 bonus on initiative checks while within the advantageous terrain area. 2nd Round : Allies within line of sight and that can hear the battle scout gain a +2 on Perception, Stealth, and Survival checks while within the advantageous terrain area. 3rd Round : The battle scout’s movement is not hampered by difficult terrain while within the advantageous terrain area. Furthermore, the battle scout can take 10 on Climb and Swim checks and checks to jump while within the area, even when in immediate danger or distracted.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the ranger’s third favorite enemy

- **Archetype feature:** Infiltration (Ex)
- **Description:** At 10th level, once per day, a battle scout can choose a single terrain type that is not his favored terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, once per day, a battle scout can choose a single terrain type that is not his favored terrain. For the next hour per ranger level, he treats that terrain as if it were one of his favored terrains.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the ranger’s fourth favored enemy

- **Archetype feature:** Superior Tactics (Ex)
- **Description:** At 15th level, once per day, after a battle scout and his allies roll initiative, the battle scout can arrange his and his allies’ initiative rolls any way he wishes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, once per day, after a battle scout and his allies roll initiative, the battle scout can arrange his and his allies’ initiative rolls any way he wishes. If he has already taken 3 rounds to scout out the terrain with his advantageous terrain ability and both he and his allies are within the effect area, they gain a +2 bonus to initiative checks. Using this ability is not an action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: master hunter

- **Archetype feature:** Perfect Advantage (Ex)
- **Description:** At 20th level, when using his advantageous terrain ability, a battle scout needs only to study the terrain as a standard action to gain all of the benefits.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, when using his advantageous terrain ability, a battle scout needs only to study the terrain as a standard action to gain all of the benefits. Furthermore, the area of his advantageous terrain increases to a 1-mile-radius spread from the single square within line of sight.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Hunter’s Bond (Ex)
- Advantageous Terrain (Ex)
- Infiltration (Ex)
- Superior Tactics (Ex)
- Perfect Advantage (Ex)
