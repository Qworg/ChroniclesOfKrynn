# Ranger - Summit Sentinel

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Summit Sentinel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Summit%20Sentinel
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Roots of the Mountain (Su); Mountain Mastery (Ex); Spells; Rockslide (Su); Invincible (Su)
- **Replaced / altered class features:** Combat Style; Favored Terrain; Swift Tracker; Hide in Plain Sight

## Replacement details

### Replaces: the ranger’s combat style feats

- **Archetype feature:** Roots of the Mountain (Su)
- **Description:** At 2nd level, a summit sentinel gains Toughness as a bonus feat.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a summit sentinel gains Toughness as a bonus feat. Additionally, as a move action, she can enter a defensive stance for 1 minute. While in this stance, the summit sentinel’s speed is reduced to 5 feet, she gains a +2 enhancement bonus to her natural armor, and she gains a +2 bonus to her CMD against maneuvers that would move her or knock her prone. If the ranger loses contact with the ground or other solid surface, the stance ends immediately. The ranger can enter this stance a number of times per day equal to 3 + her Constitution modifier. At 6th level and every 4 levels thereafter, the enhancement bonus to natural armor increases by 1, and the bonus to CMD increases by 2.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, AC/natural armor bonus.

### Alters: favored terrain

- **Archetype feature:** Mountain Mastery (Ex)
- **Description:** At 3rd level, a summit sentinel must select mountains as her favored terrain, and she does not gain additional favored terrains at higher levels.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8, 18.
  - Mechanics summary: At 3rd level, a summit sentinel must select mountains as her favored terrain, and she does not gain additional favored terrains at higher levels. Every 5 levels beyond 5th, the bonus from this favored terrain increases by 2. At 8th level, a summit sentinel draws strength from the earth. When she and her target are both in contact with the ground or an earthen floor, the summit sentinel gains a +1 bonus on attack and damage rolls against the target. At 18th level, the bonus on attack and damage rolls increases to +2.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook.

### Alters: the ranger’s spells

- **Archetype feature:** Spells
- **Description:** A summit sentinel adds stoneskin to the ranger spell list as a 4th-level spell.
- **Mechanics:**
  - Level hooks: 4.
  - Mechanics summary: A summit sentinel adds stoneskin to the ranger spell list as a 4th-level spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: swift tracker

- **Archetype feature:** Rockslide (Su)
- **Description:** At 8th level, once per day as a standard action, a summit sentinel can create a rushing wave of earth and stone.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, once per day as a standard action, a summit sentinel can create a rushing wave of earth and stone. The summit sentinel chooses a point on the ground or floor within 30 feet. Each creature in the area takes 4d6 points of bludgeoning damage and is pushed to the end of the cone. A target that succeeds at a Reflex save (DC = 10 + half the ranger’s level + the ranger’s Wisdom modifier) takes half damage and is not pushed.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

### Replaces: hide in plain sight

- **Archetype feature:** Invincible (Su)
- **Description:** At 17th level, a summit sentinel takes on the unyielding hardness of the mountains.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a summit sentinel takes on the unyielding hardness of the mountains. While in her roots of the mountain defensive stance, she is immune to critical hits and precision damage.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Roots of the Mountain (Su)
- Mountain Mastery (Ex)
- Spells
- Rockslide (Su)
- Invincible (Su)

