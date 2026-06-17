# Ranger - Stormwalker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Stormwalker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Stormwalker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Combat Style Feat (Ex); Thundershot (Su); Wind Treader (Ex); Flash Step (Su); Control Weather (Sp); Flash Shot (Su)
- **Replaced / altered class features:** Combat Style; Hunter's Bond; Swift Tracker; Quarry; Improved Evasion; Improved Quarry

## Implementation details

### Alters: the ranger’s combat style

- **Archetype feature:** Combat Style Feat (Ex)
- **Description:** At 2nd level, a stormwalker must choose archery style.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a stormwalker must choose archery style.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: hunter’s bond

- **Archetype feature:** Thundershot (Su)
- **Description:** At 4th level, a stormwalker can wreathe his weapon in lightning.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** At 4th level, a stormwalker can wreathe his weapon in lightning. As a standard action, he can grant a single weapon he holds the shock special ability for 1 minute; while under this effect, the weapon counts as magic for the purpose of overcoming damage reduction. A stormwalker can use this ability a number of times per day equal to 3 + his Wisdom modifier. At 12th level, weapons affected by this ability gain the shocking burst special ability.
- **Implementation flags:**
  - ki subsystem.

### Replaces: swift tracker

- **Archetype feature:** Wind Treader (Ex)
- **Description:** At 8th level, a stormwalker becomes immune to the effects of strong wind.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a stormwalker becomes immune to the effects of strong wind. He can move without hindrance in windy conditions, and his ranged attacks take no penalties from nonmagical wind.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: quarry

- **Archetype feature:** Flash Step (Su)
- **Description:** At 11th level, a stormwalker can move across the battlefield like a bolt of lightning.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a stormwalker can move across the battlefield like a bolt of lightning. As a full-round action, he can transform into lightning and move to any unoccupied square within 60 feet without provoking attacks of opportunity. He can make a single ranged attack before or after this movement.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved evasion

- **Archetype feature:** Control Weather (Sp)
- **Description:** At 16th level, a stormwalker can cast control weather as a spell-like ability once per day.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 16.
  - **Rules text to implement:** At 16th level, a stormwalker can cast control weather as a spell-like ability once per day.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: improved quarry

- **Archetype feature:** Flash Shot (Su)
- **Description:** At 19th level, when a stormwalker uses flash step, he can make a ranged attack both before and after his movement.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, when a stormwalker uses flash step, he can make a ranged attack both before and after his movement. Both of these attacks are made at his highest base attack bonus.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Combat Style Feat (Ex)
- Thundershot (Su)
- Wind Treader (Ex)
- Flash Step (Su)
- Control Weather (Sp)
- Flash Shot (Su)
