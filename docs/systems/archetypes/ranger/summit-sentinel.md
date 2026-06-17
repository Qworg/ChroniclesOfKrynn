# Ranger - Summit Sentinel

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Summit Sentinel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Summit%20Sentinel
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Roots of the Mountain (Su); Mountain Mastery (Ex); Spells; Rockslide (Su); Invincible (Su)
- **Replaced / altered class features:** Combat Style; Favored Terrain; Swift Tracker; Hide in Plain Sight

## Implementation details

### Replaces: the ranger’s combat style feats

- **Archetype feature:** Roots of the Mountain (Su)
- **Description:** At 2nd level, a summit sentinel gains Toughness as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, a summit sentinel gains Toughness as a bonus feat. Additionally, as a move action, she can enter a defensive stance for 1 minute. While in this stance, the summit sentinel’s speed is reduced to 5 feet, she gains a +2 enhancement bonus to her natural armor, and she gains a +2 bonus to her CMD against maneuvers that would move her or knock her prone. If the ranger loses contact with the ground or other solid surface, the stance ends immediately. The ranger can enter this stance a number of times per day equal to 3 + her Constitution modifier. At 6th level and every 4 levels thereafter, the enhancement bonus to natural armor increases by 1, and the bonus to CMD increases by 2.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: favored terrain

- **Archetype feature:** Mountain Mastery (Ex)
- **Description:** At 3rd level, a summit sentinel must select mountains as her favored terrain, and she does not gain additional favored terrains at higher levels.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8, 18.
  - **Rules text to implement:** At 3rd level, a summit sentinel must select mountains as her favored terrain, and she does not gain additional favored terrains at higher levels. Every 5 levels beyond 5th, the bonus from this favored terrain increases by 2. At 8th level, a summit sentinel draws strength from the earth. When she and her target are both in contact with the ground or an earthen floor, the summit sentinel gains a +1 bonus on attack and damage rolls against the target. At 18th level, the bonus on attack and damage rolls increases to +2.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the ranger’s spells

- **Archetype feature:** Spells
- **Description:** A summit sentinel adds stoneskin to the ranger spell list as a 4th-level spell.
- **Detailed mechanics:**
  - **Level hooks:** 4.
  - **Rules text to implement:** A summit sentinel adds stoneskin to the ranger spell list as a 4th-level spell.
- **Implementation flags:**
  - ki subsystem.
  - archetype spell-list override.

### Replaces: swift tracker

- **Archetype feature:** Rockslide (Su)
- **Description:** At 8th level, once per day as a standard action, a summit sentinel can create a rushing wave of earth and stone.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, once per day as a standard action, a summit sentinel can create a rushing wave of earth and stone. The summit sentinel chooses a point on the ground or floor within 30 feet. Rippling waves of earth and stone emanate from the chosen point in a 25-foot cone in a direction of the summit sentinel’s choice. Each creature in the area takes 4d6 points of bludgeoning damage and is pushed to the end of the cone. A target that succeeds at a Reflex save (DC = 10 + half the ranger’s level + the ranger’s Wisdom modifier) takes half damage and is not pushed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: hide in plain sight

- **Archetype feature:** Invincible (Su)
- **Description:** At 17th level, a summit sentinel takes on the unyielding hardness of the mountains.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a summit sentinel takes on the unyielding hardness of the mountains. While in her roots of the mountain defensive stance, she is immune to critical hits and precision damage.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Roots of the Mountain (Su)
- Mountain Mastery (Ex)
- Spells
- Rockslide (Su)
- Invincible (Su)
