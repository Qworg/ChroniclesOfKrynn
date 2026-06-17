# Warrior - Siegebreaker

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Siegebreaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Siegebreaker
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Breaker Rush (Ex); Armored Vigor (Ex); Breaker Momentum (Ex); Persistent Menace (Ex); Disorienting Blow (Ex); Masterful Distraction (Ex)
- **Replaced / altered class features:** the feat gained at 1st level; bravery; the feat gained at 2nd level; the bonus feat gained at 8th level; weapon mastery

## Implementation details

### Replaces: the feat gained at 1st level

- **Archetype feature:** Breaker Rush (Ex)
- **Description:** At 1st level, a siegebreaker can attempt bull rush or overrun combat maneuvers without provoking attacks of opportunity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a siegebreaker can attempt bull rush or overrun combat maneuvers without provoking attacks of opportunity. When he performs either combat maneuver, he deals an amount of bludgeoning damage equal to his Strength bonus (minimum 1). If he has Improved Bull Rush or Improved Overrun, the damage dealt by the appropriate maneuver increases by 2 and he adds any enhancement bonus from his armor or shield (though such enhancement bonuses do not stack, if both armor and shield are magic).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Armored Vigor (Ex)
- **Description:** At 2nd level as a swift action, a siegebreaker can gain 2 temporary hit points that last for 1 minute.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 18.
  - **Rules text to implement:** At 2nd level as a swift action, a siegebreaker can gain 2 temporary hit points that last for 1 minute. He can use this ability a number of times per day equal to 3 + his Constitution modifier (minimum 1 per day), but only while wearing armor. At 6th level and every 4 levels thereafter, the number of temporary hit points the siegebreaker gains increases by 2, to a maximum of 10 at 18th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the feat gained at 2nd level

- **Archetype feature:** Breaker Momentum (Ex)
- **Description:** At 2nd level, when a siegebreaker successfully bull rushes a foe, he can attempt an overrun combat maneuver check against that foe as a free action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, when a siegebreaker successfully bull rushes a foe, he can attempt an overrun combat maneuver check against that foe as a free action.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Persistent Menace (Ex)
- **Description:** At 4th level, a siegebreaker must choose either Step Up or Disruptive as his bonus feat, but need not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a siegebreaker must choose either Step Up or Disruptive as his bonus feat, but need not meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feat gained at 8th level

- **Archetype feature:** Disorienting Blow (Ex)
- **Description:** At 8th level, as an immediate action, a siegebreaker can distract a foe he just hit with an attack or combat maneuver, imposing a –2 penalty on the foe’s attack rolls, caster level checks, or skill checks for 1 round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8, 14.
  - **Rules text to implement:** At 8th level, as an immediate action, a siegebreaker can distract a foe he just hit with an attack or combat maneuver, imposing a –2 penalty on the foe’s attack rolls, caster level checks, or skill checks for 1 round. The foe can negate this penalty with a successful Fortitude save (DC = 10 + 1/2 the siegebreaker’s fighter level + his Strength modifier). At 14th level, the penalty increases to –4.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: weapon mastery

- **Archetype feature:** Masterful Distraction (Ex)
- **Description:** At 20th level, a siegebreaker can nauseate a foe he targets with his disorienting blow instead of inflicting a penalty.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a siegebreaker can nauseate a foe he targets with his disorienting blow instead of inflicting a penalty.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Breaker Rush (Ex)
- Armored Vigor (Ex)
- Breaker Momentum (Ex)
- Persistent Menace (Ex)
- Disorienting Blow (Ex)
- Masterful Distraction (Ex)
