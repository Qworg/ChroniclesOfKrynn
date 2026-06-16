# Monk - Martial Artist

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Martial Artist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Martial%20Artist
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Pain Points (Ex); Martial Arts Master (Ex); Exploit Weakness (Ex); Extreme Endurance (Ex); Physical Resistance (Ex); Bonus Feats; Defensive Roll (Ex); Quivering Palm; Greater Defensive Roll (Ex)
- **Replaced / altered class features:** still mind; slow fall; ki pool; purity of body, diamond body, and perfect self; wholeness of body, timeless body, and tongue of sun and moon; abundant step; diamond soul; empty body

## Replacement details

### Replaces: still mind

- **Archetype feature:** Pain Points (Ex)
- **Description:** At 3rd level, a martial artist’s advanced knowledge of humanoid anatomy grants a +1 bonus on critical hit confirmation rolls and increases the DC of his stunning fist and quivering palm by 1.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a martial artist’s advanced knowledge of humanoid anatomy grants a +1 bonus on critical hit confirmation rolls and increases the DC of his stunning fist and quivering palm by 1.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

### Replaces: slow fall

- **Archetype feature:** Martial Arts Master (Ex)
- **Description:** At 4th level, a martial artist may use his monk level to qualify for feats with a fighter level prerequisite when those feats are applied to unarmed strikes or weapons with the monk special quality.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a martial artist may use his monk level to qualify for feats with a fighter level prerequisite when those feats are applied to unarmed strikes or weapons with the monk special quality.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: ki pool

- **Archetype feature:** Exploit Weakness (Ex)
- **Description:** At 4th level, as a swift action, a martial artist can observe a creature or object to find its weak point by making a Wisdom check and adding his monk level against a DC of 10 + the object’s hardness or the target’s CR.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, as a swift action, a martial artist can observe a creature or object to find its weak point by making a Wisdom check and adding his monk level against a DC of 10 + the object’s hardness or the target’s CR. If the check succeeds, the martial artist gains a +2 bonus on attack rolls until the end of his turn, and any attacks he makes until the end of his turn ignore the creature or object’s DR or hardness. A martial artist may instead use this ability as a swift action to analyze the movements and expressions of one creature within 30 feet, granting a bonus on Sense Motive checks and Reflex saves and a dodge bonus to AC against that opponent equal to 1/2 his monk level until the start of his next turn.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, ki/monk hook.

### Replaces: purity of body, diamond body, and perfect self

- **Archetype feature:** Extreme Endurance (Ex)
- **Description:** At 5th level, a martial artist gains immunity to fatigue.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: At 5th level, a martial artist gains immunity to fatigue. At 10th level, he also gains immunity to exhaustion. At 15th level, he gains immunity to stunning. At 20th level, he gains immunity to death effects and energy drain.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: wholeness of body, timeless body, and tongue of sun and moon

- **Archetype feature:** Physical Resistance (Ex)
- **Description:** At 7th level, if a martial artist suffers any effect that causes ability damage, ability drain, or temporary ability score penalties, the effect is reduced by 1 point.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 19.
  - Mechanics summary: At 7th level, if a martial artist suffers any effect that causes ability damage, ability drain, or temporary ability score penalties, the effect is reduced by 1 point. This reduction increases by 1 for every three levels beyond 7th (to a maximum reduction of 5 at 19th level).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: abundant step

- **Archetype feature:** Bonus Feats
- **Description:** At 12th level, a martial artist gains an additional bonus feat, selected from those available in the monk class feature.
- **Mechanics:**
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a martial artist gains an additional bonus feat, selected from those available in the monk class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: diamond soul

- **Archetype feature:** Defensive Roll (Ex)
- **Description:** At 13th level, a martial artist may use the defensive roll advanced rogue talent once per day, plus once per three levels beyond 13th (to a maximum of 3 times a day at 19th level).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 19.
  - Mechanics summary: At 13th level, a martial artist may use the defensive roll advanced rogue talent once per day, plus once per three levels beyond 13th (to a maximum of 3 times a day at 19th level).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: empty body

- **Archetype feature:** Greater Defensive Roll (Ex)
- **Description:** At 19th level, a martial artist suffers no damage on a successful defensive roll, and only half damage if the Reflex saving throw fails.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a martial artist suffers no damage on a successful defensive roll, and only half damage if the Reflex saving throw fails.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Pain Points (Ex)
- Martial Arts Master (Ex)
- Exploit Weakness (Ex)
- Extreme Endurance (Ex)
- Physical Resistance (Ex)
- Bonus Feats
- Defensive Roll (Ex)
- Quivering Palm
- Greater Defensive Roll (Ex)

