# Warrior - Brawler

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Brawler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Brawler
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Close Control (Ex); Close Combatant (Ex); Menacing Stance (Ex); No Escape (Ex); Stand Still; Weapon Mastery (Ex)
- **Replaced / altered class features:** armor training 1; weapon training 1 and 2; armor training 2, 3, and 4 and armor mastery; weapon training 3 and 4

## Implementation details

### Replaces: armor training 1

- **Archetype feature:** Close Control (Ex)
- **Description:** At 2nd level, a brawler becomes skilled at forcefully moving his opponent around the battlefield.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 18.
  - **Rules text to implement:** At 2nd level, a brawler becomes skilled at forcefully moving his opponent around the battlefield. The brawler gains a +1 bonus on bull rush, drag, and reposition combat maneuver checks. The brawler also gains a +1 bonus to CMD when attacked with the bull rush, drag, and reposition maneuvers. These bonuses increase by +1 for every four levels after 2nd (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: weapon training 1 and 2

- **Archetype feature:** Close Combatant (Ex)
- **Description:** At 3rd level, a brawler gains a +1 bonus on attack rolls and a +3 bonus on damage rolls with weapons in the close weapon group.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 19.
  - **Rules text to implement:** At 3rd level, a brawler gains a +1 bonus on attack rolls and a +3 bonus on damage rolls with weapons in the close weapon group. Both of these bonuses increase by +1 for every four levels beyond 3rd (to a maximum of +5 on attack rolls and +7 on damage rolls at 19th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2, 3, and 4 and armor mastery

- **Archetype feature:** Menacing Stance (Ex)
- **Description:** At 7th level, a brawler constantly harries and distracts his enemies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7, 19.
  - **Rules text to implement:** At 7th level, a brawler constantly harries and distracts his enemies. While adjacent to the brawler, enemies take a –1 penalty on attack rolls and a –4 penalty on concentration checks. These penalties increase by 1 for every four levels after 7th level (to a maximum of –4 on attack rolls and –7 on concentration checks at 19th level). Creatures do not take these penalties if the brawler is dazed, helpless, staggered, stunned, or unconscious.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3 and 4

- **Archetype feature:** No Escape (Ex)
- **Description:** At 9th level, taking a 5-foot step out of the area of a brawler’s menacing stance or moving out of the area of a brawler’s menacing stance with a withdraw action provokes an attack of opportunity from the brawler.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, taking a 5-foot step out of the area of a brawler’s menacing stance or moving out of the area of a brawler’s menacing stance with a withdraw action provokes an attack of opportunity from the brawler.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Stand Still
- **Description:** At 13th level, a brawler gains Stand Still as a bonus feat, even if he does not have the Combat Reflexes feat.
- **Detailed mechanics:**
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a brawler gains Stand Still as a bonus feat, even if he does not have the Combat Reflexes feat. If the brawler already has the Stand Still feat, he can take any other combat feat instead. Furthermore, he gains a bonus equal to 1/2 his fighter level on combat maneuver checks when using the Stand Still feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Mastery (Ex)
- **Description:** A brawler must select a close weapon for this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A brawler must select a close weapon for this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Close Control (Ex)
- Close Combatant (Ex)
- Menacing Stance (Ex)
- No Escape (Ex)
- Stand Still
- Weapon Mastery (Ex)
