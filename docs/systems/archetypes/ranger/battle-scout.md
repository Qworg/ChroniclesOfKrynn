# Ranger - Battle Scout

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Battle Scout
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Battle%20Scout
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hunter’s Bond (Ex); Advantageous Terrain (Ex); Infiltration (Ex); Superior Tactics (Ex); Perfect Advantage (Ex)
- **Replaced / altered class features:** the ranger’s second favored enemy; the ranger’s third favorite enemy; the ranger’s fourth favored enemy; master hunter

## Replacement details

### Replaces: the ranger’s second favored enemy

- **Archetype feature:** Advantageous Terrain (Ex)
- **Description:** At 5th level, when a battle scout is within one of his favorite terrains, he can spend up to 3 consecutive rounds studying an area of terrain to gain the benefits below.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, when a battle scout is within one of his favorite terrains, he can spend up to 3 consecutive rounds studying an area of terrain to gain the benefits below. Each round of studying terrain is a standard action. During the first round of studying terrain, the battle scout designates a 60-foot-radius-burst area from a single square within line of sight. Depending on how many rounds the battle scout spends studying the area, he or his allies gain the following benefits for 10 minutes per ranger level he possesses. (For example, if he spends 2 rounds, he or his allies gain the first two benefits.) 1st Round : Allies within line of sight and that can hear the battle scout gain a +2 bonus on initiative checks while within the advantageous terrain area. 2nd Round : Allies within line of sight and that can hear the battle scout gain a +2 on Perception, Stealth, and Survival checks while within the advantageous terrain area.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: the ranger’s third favorite enemy

- **Archetype feature:** Infiltration (Ex)
- **Description:** At 10th level, once per day, a battle scout can choose a single terrain type that is not his favored terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, once per day, a battle scout can choose a single terrain type that is not his favored terrain. For the next hour per ranger level, he treats that terrain as if it were one of his favored terrains.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: the ranger’s fourth favored enemy

- **Archetype feature:** Superior Tactics (Ex)
- **Description:** At 15th level, once per day, after a battle scout and his allies roll initiative, the battle scout can arrange his and his allies’ initiative rolls any way he wishes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, once per day, after a battle scout and his allies roll initiative, the battle scout can arrange his and his allies’ initiative rolls any way he wishes. If he has already taken 3 rounds to scout out the terrain with his advantageous terrain ability and both he and his allies are within the effect area, they gain a +2 bonus to initiative checks. Using this ability is not an action.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: master hunter

- **Archetype feature:** Perfect Advantage (Ex)
- **Description:** At 20th level, when using his advantageous terrain ability, a battle scout needs only to study the terrain as a standard action to gain all of the benefits.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, when using his advantageous terrain ability, a battle scout needs only to study the terrain as a standard action to gain all of the benefits. Furthermore, the area of his advantageous terrain increases to a 1-mile-radius spread from the single square within line of sight.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Hunter’s Bond (Ex)
- Advantageous Terrain (Ex)
- Infiltration (Ex)
- Superior Tactics (Ex)
- Perfect Advantage (Ex)

