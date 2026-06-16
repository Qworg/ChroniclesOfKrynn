# Ranger - Guide

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Guide
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Guide
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Ranger’s Focus (Ex); Terrain Bond (Ex); Ranger’s Luck (Ex); Inspired Moment (Ex); Improved Ranger’s Luck (Ex)
- **Replaced / altered class features:** favored enemy; hunter’s bond; evasion; quarry and improved quarry; improved evasion

## Replacement details

### Replaces: favored enemy

- **Archetype feature:** Ranger’s Focus (Ex)
- **Description:** At 1st level, once per day, the guide can focus on a single enemy within line of sight as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5, 4.
  - Mechanics summary: At 1st level, once per day, the guide can focus on a single enemy within line of sight as a swift action. That creature remains the ranger’s focus until it is reduced to 0 or fewer hit points or surrenders, or until the ranger designates a new focus, whichever occurs first. The ranger gains a +2 bonus on attack and damage rolls against the target of his focus. At 5th level, and every five levels thereafter, this bonus increases by +2. At 4th level, and every 3 levels thereafter, the ranger can use this ability one additional time per day.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: hunter’s bond

- **Archetype feature:** Terrain Bond (Ex)
- **Description:** At 4th level, the guide forms a bond with the land itself, enabling him to direct others in such terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the guide forms a bond with the land itself, enabling him to direct others in such terrain. When in his favored terrain, the ranger grants all allies within line of sight and that can hear him a +2 bonus on initiative checks and Perception, Stealth, and Survival skill checks. Also, as long as they travel with him, the ranger’s allies leave no trail and can’t be tracked. The ranger can choose for the group to leave a trail, or even specific members of the group to leave a trail if he so desires.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, favored terrain hook, ki/monk hook.

### Replaces: evasion

- **Archetype feature:** Ranger’s Luck (Ex)
- **Description:** Upon reaching 9th level, once per day the guide can either reroll one of his attack rolls or force an enemy who just hit him with an attack to reroll the attack roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: Upon reaching 9th level, once per day the guide can either reroll one of his attack rolls or force an enemy who just hit him with an attack to reroll the attack roll. The ranger must take the result of the second roll even if it is worse. A ranger can use this ability once per day at 9th level, plus one additional time per day at 14th and 19th levels.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: quarry and improved quarry

- **Archetype feature:** Inspired Moment (Ex)
- **Description:** At 11th level, the guide can have an inspired moment once per day as a free action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11, 19.
  - Mechanics summary: At 11th level, the guide can have an inspired moment once per day as a free action. The ranger gains the following benefits until the end of his next turn. He can take an extra move or swift action on his turn. He gains a +4 bonus to AC and on attack rolls, skill checks, or ability checks. He can use this ability one additional time per day at 19th level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: improved evasion

- **Archetype feature:** Improved Ranger’s Luck (Ex)
- **Description:** Upon reaching 16th level, the ranger’s luck increases.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 16.
  - Mechanics summary: Upon reaching 16th level, the ranger’s luck increases. He gains a +4 bonus on his rerolls made with the ranger’s luck ability, or if he forces an enemy to reroll an attack, that enemy takes a –4 penalty on the roll. This bonus or penalty is also applied on any roll to confirm critical hits.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

## Parsed source feature headings

- Ranger’s Focus (Ex)
- Terrain Bond (Ex)
- Ranger’s Luck (Ex)
- Inspired Moment (Ex)
- Improved Ranger’s Luck (Ex)

