# Monk - Martial Artist

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Martial Artist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Martial%20Artist
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Pain Points (Ex); Martial Arts Master (Ex); Exploit Weakness (Ex); Extreme Endurance (Ex); Physical Resistance (Ex); Bonus Feats; Defensive Roll (Ex); Quivering Palm; Greater Defensive Roll (Ex)
- **Replaced / altered class features:** still mind; slow fall; ki pool; purity of body, diamond body, and perfect self; wholeness of body, timeless body, and tongue of sun and moon; abundant step; diamond soul; empty body

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Alignment
- **Description:** A martial artist may be of any alignment.
- **Detailed mechanics:**
  - **Rules text to implement:** A martial artist may be of any alignment.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: still mind

- **Archetype feature:** Pain Points (Ex)
- **Description:** At 3rd level, a martial artist’s advanced knowledge of humanoid anatomy grants a +1 bonus on critical hit confirmation rolls and increases the DC of his stunning fist and quivering palm by 1.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a martial artist’s advanced knowledge of humanoid anatomy grants a +1 bonus on critical hit confirmation rolls and increases the DC of his stunning fist and quivering palm by 1.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: slow fall

- **Archetype feature:** Martial Arts Master (Ex)
- **Description:** At 4th level, a martial artist may use his monk level to qualify for feats with a fighter level prerequisite when those feats are applied to unarmed strikes or weapons with the monk special quality.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a martial artist may use his monk level to qualify for feats with a fighter level prerequisite when those feats are applied to unarmed strikes or weapons with the monk special quality.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: ki pool

- **Archetype feature:** Exploit Weakness (Ex)
- **Description:** At 4th level, as a swift action, a martial artist can observe a creature or object to find its weak point by making a Wisdom check and adding his monk level against a DC of 10 + the object’s hardness or the target’s CR.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, as a swift action, a martial artist can observe a creature or object to find its weak point by making a Wisdom check and adding his monk level against a DC of 10 + the object’s hardness or the target’s CR. If the check succeeds, the martial artist gains a +2 bonus on attack rolls until the end of his turn, and any attacks he makes until the end of his turn ignore the creature or object’s DR or hardness. A martial artist may instead use this ability as a swift action to analyze the movements and expressions of one creature within 30 feet, granting a bonus on Sense Motive checks and Reflex saves and a dodge bonus to AC against that opponent equal to 1/2 his monk level until the start of his next turn.
- **Implementation flags:**
  - ki subsystem.

### Replaces: purity of body, diamond body, and perfect self

- **Archetype feature:** Extreme Endurance (Ex)
- **Description:** At 5th level, a martial artist gains immunity to fatigue.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 10, 15, 20.
  - **Rules text to implement:** At 5th level, a martial artist gains immunity to fatigue. At 10th level, he also gains immunity to exhaustion. At 15th level, he gains immunity to stunning. At 20th level, he gains immunity to death effects and energy drain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: wholeness of body, timeless body, and tongue of sun and moon

- **Archetype feature:** Physical Resistance (Ex)
- **Description:** At 7th level, if a martial artist suffers any effect that causes ability damage, ability drain, or temporary ability score penalties, the effect is reduced by 1 point.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7, 19.
  - **Rules text to implement:** At 7th level, if a martial artist suffers any effect that causes ability damage, ability drain, or temporary ability score penalties, the effect is reduced by 1 point. This reduction increases by 1 for every three levels beyond 7th (to a maximum reduction of 5 at 19th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: abundant step

- **Archetype feature:** Bonus Feats
- **Description:** At 12th level, a martial artist gains an additional bonus feat, selected from those available in the monk class feature.
- **Detailed mechanics:**
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a martial artist gains an additional bonus feat, selected from those available in the monk class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: diamond soul

- **Archetype feature:** Defensive Roll (Ex)
- **Description:** At 13th level, a martial artist may use the defensive roll advanced rogue talent once per day, plus once per three levels beyond 13th (to a maximum of 3 times a day at 19th level).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13, 19.
  - **Rules text to implement:** At 13th level, a martial artist may use the defensive roll advanced rogue talent once per day, plus once per three levels beyond 13th (to a maximum of 3 times a day at 19th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Quivering Palm
- **Description:** A martial artist may use this ability one additional time per day per level above 15th, but may not have more than one in effect at a time.
- **Detailed mechanics:**
  - **Rules text to implement:** A martial artist may use this ability one additional time per day per level above 15th, but may not have more than one in effect at a time.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: empty body

- **Archetype feature:** Greater Defensive Roll (Ex)
- **Description:** At 19th level, a martial artist suffers no damage on a successful defensive roll, and only half damage if the Reflex saving throw fails.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a martial artist suffers no damage on a successful defensive roll, and only half damage if the Reflex saving throw fails.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Alignment
- Pain Points (Ex)
- Martial Arts Master (Ex)
- Exploit Weakness (Ex)
- Extreme Endurance (Ex)
- Physical Resistance (Ex)
- Bonus Feats
- Defensive Roll (Ex)
- Quivering Palm
- Greater Defensive Roll (Ex)
