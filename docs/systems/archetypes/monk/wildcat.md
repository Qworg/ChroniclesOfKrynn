# Monk - Wildcat

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Wildcat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Wildcat
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ready for Anything (Ex); Brawler Maneuver Training (Ex); Improvised Weapon Mastery (Ex); Bonus Feat; Knockout (Ex); Turn the Tables (Ex); Dirty Blow (Ex)
- **Replaced / altered class features:** still mind; ki pool and high jump; all instances of slow fall; improved evasion and abundant step; diamond soul; empty body

## Implementation details

### Replaces: still mind

- **Archetype feature:** Ready for Anything (Ex)
- **Description:** At 3rd level, a wildcat gains a +2 bonus on initiative checks and Perception checks to act in a surprise round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a wildcat gains a +2 bonus on initiative checks and Perception checks to act in a surprise round.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: ki pool and high jump

- **Archetype feature:** Brawler Maneuver Training (Ex)
- **Description:** At 4th level, a wildcat gains additional training with the dirty trick combat maneuver ( Advanced Player’s Guide 320).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 7.
  - **Rules text to implement:** At 4th level, a wildcat gains additional training with the dirty trick combat maneuver ( Advanced Player’s Guide 320). He gains a +1 bonus on combat maneuver checks when attempting this combat maneuver and a +1 bonus to his CMD when defending against this maneuver. At 7th, 10th, and 16th levels, a wildcat becomes further trained in another combat maneuver, gaining the above +1 bonus on combat maneuver checks and to CMD. In addition, the bonuses granted by previous maneuver training increase by 1 each. For example, when a wildcat reaches 7th level, he gains a +1 bonus on one type of combat maneuver, +1 to her CMD against that combat maneuver, and the bonuses for the dirty trick combat maneuver increase to +2.
- **Implementation flags:**
  - ki subsystem.

### Replaces: all instances of slow fall

- **Archetype feature:** Improvised Weapon Mastery (Ex)
- **Description:** Starting at 4th level, a wildcat’s damage with improvised weapons increases.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6.
  - **Rules text to implement:** Starting at 4th level, a wildcat’s damage with improvised weapons increases. When wielding an improvised weapon, he uses the unarmed strike damage of a monk four levels lower instead of the base damage for that weapon (minimum monk level 1). For example, a 6th-level Medium wildcat wielding a broken bottle deals 1d6 points of damage instead of the weapon’s normal 1d4. If the weapon normally deals more damage than this, its damage is unchanged. This increase in damage does not affect any other aspect of the weapon. The wildcat can decide to use the weapon’s base damage instead of his adjusted unarmed strike damage. This must be declared before the attack roll is attempted.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** A wildcat adds the following feats to his list of bonus feats at 6th level: Improved Dirty Trick APG, Improved Reposition APG, Improved Steal APG.
- **Detailed mechanics:**
  - **Level hooks:** 6, 10.
  - **Rules text to implement:** A wildcat adds the following feats to his list of bonus feats at 6th level: Improved Dirty Trick APG, Improved Reposition APG, Improved Steal APG. He adds the following feats to his list of bonus feats at 10th level: Quick Dirty Trick UC, Quick Reposition UC, Quick Steal UC.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: improved evasion and abundant step

- **Archetype feature:** Knockout (Ex)
- **Description:** Starting at 9th level, once per day a wildcat can unleash a devastating attack that can instantly knock a target unconscious.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 12.
  - **Rules text to implement:** Starting at 9th level, once per day a wildcat can unleash a devastating attack that can instantly knock a target unconscious. He must announce this intent before making his attack roll. If the wildcat’s strike is successful and the target takes damage from the blow, the target must succeed at a Fortitude saving throw (DC = 10 + 1/2 the wildcat’s level + the higher of the wildcat’s Strength or Dexterity modifier) or fall unconscious for 1d6 rounds. Each round on its turn, the unconscious target can attempt a new saving throw to end the effect; this is a fullround action that does not provoke attacks of opportunity. Creatures immune to critical hits or nonlethal damage are immune to this ability. At 12th level, a wildcat can use this ability twice per day.
- **Implementation flags:**
  - ki subsystem.

### Replaces: diamond soul

- **Archetype feature:** Turn the Tables (Ex)
- **Description:** At 13th level, opponents provoke an attack of opportunity from the wildcat whenever they fail at a combat maneuver against the wildcat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, opponents provoke an attack of opportunity from the wildcat whenever they fail at a combat maneuver against the wildcat.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: empty body

- **Archetype feature:** Dirty Blow (Ex)
- **Description:** At 19th level, when a wildcat succeeds at a dirty trick combat maneuver, he can deal his unarmed strike damage to that opponent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, when a wildcat succeeds at a dirty trick combat maneuver, he can deal his unarmed strike damage to that opponent.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Ready for Anything (Ex)
- Brawler Maneuver Training (Ex)
- Improvised Weapon Mastery (Ex)
- Bonus Feat
- Knockout (Ex)
- Turn the Tables (Ex)
- Dirty Blow (Ex)
