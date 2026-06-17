# Monk - Invested Regent

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Invested Regent
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Invested%20Regent
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Investiture (Su); Vested Power (Ex or Sp); Vested Powers; 2nd-Level Vested Powers; 6th-Level Vested Powers; 10th-Level Vested Powers; 14th-Level Vested Powers; 18th-Level Vested Powers
- **Replaced / altered class features:** the bonus feat gained at 1st level

## Implementation details

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Investiture (Su)
- **Description:** An invested regent gains a pool of investiture points, supernatural energy he can use to call upon amazing abilities and divine protection.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** An invested regent gains a pool of investiture points, supernatural energy he can use to call upon amazing abilities and divine protection. The number of points in the invested regent’s investiture pool is equal to 1/2 his monk level + his Charisma modifier. As long as he has at least 1 point in his investiture pool, the invested regent can select one of his saving throws as a swift action and gain a +1 sacred bonus on saving throws of that type for 1 round. If he spends 1 point from his investiture pool during this swift action, he instead gains a sacred bonus equal to his Charisma modifier on the saving throw selected. A character with this feature and the ki pool class feature tracks investiture points and ki points separately.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: the bonus feat the invested regent gives up for the vested power

- **Archetype feature:** Vested Power (Ex or Sp)
- **Description:** At 2nd level and every 4 monk levels thereafter, an invested regent can select a vested power (see the Vested Powers section below) for which he qualifies in place of selecting a monk bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level and every 4 monk levels thereafter, an invested regent can select a vested power (see the Vested Powers section below) for which he qualifies in place of selecting a monk bonus feat. The invested regent need not do so and can instead take the bonus feat, but once the decision to take a bonus feat or a vested power is made, he can’t change it.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Vested Powers
- **Description:** Vested powers are abilities that draw on an invested regent’s investiture pool.
- **Detailed mechanics:**
  - **Rules text to implement:** Vested powers are abilities that draw on an invested regent’s investiture pool. Vested powers are divided into two categories: feats and spells. Requirements: All vested powers have a minimum level requirement to select them. An invested regent who hasn’t reached the required monk level cannot select that vested power. Activation: Most vested powers require the invested regent to spend investiture points; the exact amount is listed after the vested power. Vested powers that cost 0 investiture points don’t require the invested regent to have any investiture points in his investiture pool to use the ability. The saving throw against an invested regent’s vested power, if any, is equal to 10 + 1/2 the invested regent’s monk level + his Charisma bonus. Feats: These vested powers duplicate the effects of specific feats. An invested regent doesn’t need to qualify for a feat to select it as a vested power. For example, an invested regent can select Spring Attack as a vested power even if he doesn’t meet the prerequisites for selecting Spring Attack as a feat. Activating one of these vested powers is a free action on the invested regent’s turn; until the start of his next turn, the invested regent is treated as if he had that feat. Feats marked with an asterisk (*) can also be activated as an immediate action when it isn’t the invested regent’s turn. Spells: These vested powers duplicate the effects of a spell and are spell-like abilities. An invested regent’s monk level is the caster level for these spell-like abilities, and he uses Charisma to determine his concentration check bonus. Activating one of these vested powers is a standard action.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 2nd-Level Vested Powers
- **Description:** Comprehend languages (2 investiture points) Divine favor (1 investiture point) Dodge* (0 investiture points) Entropic shield (1 investiture point) Expeditious retreat (2 investiture points) Feather step APG (self only, 1 investiture point) Hide from undead (self only, 1 investiture point) Sanctuary (self only, 1 investiture point) Shield of faith (self only, 1 investiture point)
- **Detailed mechanics:**
  - **Rules text to implement:** Comprehend languages (2 investiture points) Divine favor (1 investiture point) Dodge* (0 investiture points) Entropic shield (1 investiture point) Expeditious retreat (2 investiture points) Feather step APG (self only, 1 investiture point) Hide from undead (self only, 1 investiture point) Sanctuary (self only, 1 investiture point) Shield of faith (self only, 1 investiture point)
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 6th-Level Vested Powers
- **Description:** Calm emotions (1 investiture point) Cloak of winds APG (self only, 2 investiture points) Enthrall (2 investiture points) Gaseous form (self only, 1 investiture point) Helping hand (1 investiture point) Heroic Defiance APG, * (1 investiture point) Heroic Recovery APG, * (1 investiture point) Protective spirit APG (2 investiture points) Remove disease (self only, 2 investiture points) Sidestep APG, * (1 investiture point) Snatch Arrows* (1 investiture point) Spring Attack (1 investiture point) Tongues (self only, 2 investiture points)
- **Detailed mechanics:**
  - **Rules text to implement:** Calm emotions (1 investiture point) Cloak of winds APG (self only, 2 investiture points) Enthrall (2 investiture points) Gaseous form (self only, 1 investiture point) Helping hand (1 investiture point) Heroic Defiance APG, * (1 investiture point) Heroic Recovery APG, * (1 investiture point) Protective spirit APG (2 investiture points) Remove disease (self only, 2 investiture points) Sidestep APG, * (1 investiture point) Snatch Arrows* (1 investiture point) Spring Attack (1 investiture point) Tongues (self only, 2 investiture points)
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 10th-Level Vested Powers
- **Description:** Air walk (self only, 2 investiture points) Death ward (self only, 2 investiture points) Dimension door (self only, 2 investiture points) Discern lies (3 investiture points) Divine power (3 investiture points) Freedom of movement (self only, 3 investiture points) Improved Blind-Fight APG, * (1 investiture point) Improved Great Fortitude* (1 investiture point) Improved Iron Will* (1 investiture point) Improved Lightning Reflexes* (1 investiture point) Mark of justice (3 investiture points) Neutralize poison (self only, 3 investiture points) Restoration (self only, 2 investiture points) Spell resistance (self only, 2 investiture points) Wind Stance (2 investiture points)
- **Detailed mechanics:**
  - **Rules text to implement:** Air walk (self only, 2 investiture points) Death ward (self only, 2 investiture points) Dimension door (self only, 2 investiture points) Discern lies (3 investiture points) Divine power (3 investiture points) Freedom of movement (self only, 3 investiture points) Improved Blind-Fight APG, * (1 investiture point) Improved Great Fortitude* (1 investiture point) Improved Iron Will* (1 investiture point) Improved Lightning Reflexes* (1 investiture point) Mark of justice (3 investiture points) Neutralize poison (self only, 3 investiture points) Restoration (self only, 2 investiture points) Spell resistance (self only, 2 investiture points) Wind Stance (2 investiture points)
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.
  - air walk spell effect.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 14th-Level Vested Powers
- **Description:** Antilife shell (3 investiture points) Disarming Strike APG (2 investiture points) Greater Blind-Fight APG, * (2 investiture points) Greater command (3 investiture points) Greater forbid action UM (3 investiture points) Lightning Stance (3 investiture points) Shadow walk (self only, 3 investiture points) Unwilling shield APG (3 investiture points)
- **Detailed mechanics:**
  - **Rules text to implement:** Antilife shell (3 investiture points) Disarming Strike APG (2 investiture points) Greater Blind-Fight APG, * (2 investiture points) Greater command (3 investiture points) Greater forbid action UM (3 investiture points) Lightning Stance (3 investiture points) Shadow walk (self only, 3 investiture points) Unwilling shield APG (3 investiture points)
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 18th-Level Vested Powers
- **Description:** Divine vessel APG (3 investiture points) Foresight (self only, 3 investiture points) Greater restoration (self only, 3 investiture points) Regenerate (self only, 3 investiture points) Repulsion (3 investiture points)
- **Detailed mechanics:**
  - **Rules text to implement:** Divine vessel APG (3 investiture points) Foresight (self only, 3 investiture points) Greater restoration (self only, 3 investiture points) Regenerate (self only, 3 investiture points) Repulsion (3 investiture points)
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Investiture (Su)
- Vested Power (Ex or Sp)
- Vested Powers
- 2nd-Level Vested Powers
- 6th-Level Vested Powers
- 10th-Level Vested Powers
- 14th-Level Vested Powers
- 18th-Level Vested Powers
