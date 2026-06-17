# Monk - Lifting Hand

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Lifting Hand
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Lifting%20Hand
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Savage Toss (Ex); Bonus Feats (Ex); Joint Lock (Ex); Counter-Throw (Sp)
- **Replaced / altered class features:** Stunning Fist; Bonus Feats; Abundant Step

## Implementation details

### Replaces: stunning fist

- **Archetype feature:** Savage Toss (Ex)
- **Description:** A lifting hand gains Savage Slam as a bonus feat, even if she doesn’t meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** A lifting hand gains Savage Slam as a bonus feat, even if she doesn’t meet the prerequisites. At 4th level, when the lifting hand succeeds at her grapple combat maneuver check while using the Savage Slam feat and her grapple combat maneuver check result exceeds the opponent’s CMD by at least 5, she can throw the opponent into an non-adjacent square. The lifting hand can throw the opponent 10 feet, plus an additional 5 feet for every 5 by which her grapple check exceeds the opponent’s CMD. For instance, if the lifting monk exceeds the target’s CMD by 15, she can throw the target into a square 20 feet away. At 8th level, when using Savage Slam, the lifting hand’s target no longer receives a bonus to its CMD when the lifting hand attempts to throw it into a dangerous area.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the monk’s bonus feats

- **Archetype feature:** Bonus Feats (Ex)
- **Description:** A lifting hand adds Whirling Hold to her list of bonus feats at 1st level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 6, 10.
  - **Rules text to implement:** A lifting hand adds Whirling Hold to her list of bonus feats at 1st level. At 6th level, she adds Dramatic Slam and Overhead Flip. At 10th level, she adds Savage Leap.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feat gained at 10th level

- **Archetype feature:** Joint Lock (Ex)
- **Description:** At 10th level, when a lifting hand succeeds at a combat maneuver check to maintain a grapple, instead of choosing to damage, move, pin, or tie up the opponent, she can instead force one of the target’s limbs into an agonizing position.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, when a lifting hand succeeds at a combat maneuver check to maintain a grapple, instead of choosing to damage, move, pin, or tie up the opponent, she can instead force one of the target’s limbs into an agonizing position. The target becomes sickened as long as the lifting hand maintains the grapple. When the grapple is released or broken, the target is fatigued for a number of rounds equal to the lifting hand’s level. This is a pain effect.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: abundant step

- **Archetype feature:** Counter-Throw (Sp)
- **Description:** At 12th level, a lifting hand can ready an action to trigger if a creature tries to attack her.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a lifting hand can ready an action to trigger if a creature tries to attack her. When the readied action triggers, the lifting hand can attempt a grapple combat maneuver check with a +2 bonus. If she succeeds, she grapples the creature and negates the triggering attack, and she can spend an immediate action to use the Savage Slam feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Savage Toss (Ex)
- Bonus Feats (Ex)
- Joint Lock (Ex)
- Counter-Throw (Sp)
