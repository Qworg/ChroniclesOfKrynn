# Warrior - Brawler

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Brawler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Brawler
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Close Control (Ex); Close Combatant (Ex); Menacing Stance (Ex); No Escape (Ex); Stand Still; Weapon Mastery (Ex)
- **Replaced / altered class features:** armor training 1; weapon training 1 and 2; armor training 2, 3, and 4 and armor mastery; weapon training 3 and 4

## Replacement details

### Replaces: armor training 1

- **Archetype feature:** Close Control (Ex)
- **Description:** At 2nd level, a brawler becomes skilled at forcefully moving his opponent around the battlefield.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level, a brawler becomes skilled at forcefully moving his opponent around the battlefield. The brawler gains a +1 bonus on bull rush, drag, and reposition combat maneuver checks. The brawler also gains a +1 bonus to CMD when attacked with the bull rush, drag, and reposition maneuvers. These bonuses increase by +1 for every four levels after 2nd (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: weapon training 1

- **Archetype feature:** Close Combatant (Ex)
- **Description:** At 3rd level, a brawler gains a +1 bonus on attack rolls and a +3 bonus on damage rolls with weapons in the close weapon group.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a brawler gains a +1 bonus on attack rolls and a +3 bonus on damage rolls with weapons in the close weapon group. Both of these bonuses increase by +1 for every four levels beyond 3rd (to a maximum of +5 on attack rolls and +7 on damage rolls at 19th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 2

- **Archetype feature:** Close Combatant (Ex)
- **Description:** At 3rd level, a brawler gains a +1 bonus on attack rolls and a +3 bonus on damage rolls with weapons in the close weapon group.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a brawler gains a +1 bonus on attack rolls and a +3 bonus on damage rolls with weapons in the close weapon group. Both of these bonuses increase by +1 for every four levels beyond 3rd (to a maximum of +5 on attack rolls and +7 on damage rolls at 19th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 2, 3
- **Archetype feature:** Menacing Stance (Ex)
- **Description:** At 7th level, a brawler constantly harries and distracts his enemies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 19.
  - Mechanics summary: At 7th level, a brawler constantly harries and distracts his enemies. While adjacent to the brawler, enemies take a –1 penalty on attack rolls and a –4 penalty on concentration checks. These penalties increase by 1 for every four levels after 7th level (to a maximum of –4 on attack rolls and –7 on concentration checks at 19th level).
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: 4

- **Archetype feature:** Menacing Stance (Ex)
- **Description:** At 7th level, a brawler constantly harries and distracts his enemies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 19.
  - Mechanics summary: At 7th level, a brawler constantly harries and distracts his enemies. While adjacent to the brawler, enemies take a –1 penalty on attack rolls and a –4 penalty on concentration checks. These penalties increase by 1 for every four levels after 7th level (to a maximum of –4 on attack rolls and –7 on concentration checks at 19th level).
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: armor mastery

- **Archetype feature:** Menacing Stance (Ex)
- **Description:** At 7th level, a brawler constantly harries and distracts his enemies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 19.
  - Mechanics summary: At 7th level, a brawler constantly harries and distracts his enemies. While adjacent to the brawler, enemies take a –1 penalty on attack rolls and a –4 penalty on concentration checks. These penalties increase by 1 for every four levels after 7th level (to a maximum of –4 on attack rolls and –7 on concentration checks at 19th level).
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: weapon training 3

- **Archetype feature:** No Escape (Ex)
- **Description:** At 9th level, taking a 5-foot step out of the area of a brawler’s menacing stance or moving out of the area of a brawler’s menacing stance with a withdraw action provokes an attack of opportunity from the brawler.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, taking a 5-foot step out of the area of a brawler’s menacing stance or moving out of the area of a brawler’s menacing stance with a withdraw action provokes an attack of opportunity from the brawler.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: 4

- **Archetype feature:** No Escape (Ex)
- **Description:** At 9th level, taking a 5-foot step out of the area of a brawler’s menacing stance or moving out of the area of a brawler’s menacing stance with a withdraw action provokes an attack of opportunity from the brawler.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, taking a 5-foot step out of the area of a brawler’s menacing stance or moving out of the area of a brawler’s menacing stance with a withdraw action provokes an attack of opportunity from the brawler.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Close Control (Ex)
- Close Combatant (Ex)
- Menacing Stance (Ex)
- No Escape (Ex)
- Stand Still
- Weapon Mastery (Ex)

