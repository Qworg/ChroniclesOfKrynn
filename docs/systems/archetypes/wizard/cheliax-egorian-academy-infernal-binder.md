# Wizard - Cheliax: Egorian Academy Infernal Binder

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Cheliax: Egorian Academy Infernal Binder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Cheliax%20%20Egorian%20Academy%20Infernal%20Binder
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Associated School; Suggested Opposition Schools; Alignment; Requirements; Replacement Powers; Planar Knowledge (Ex); Assume Control (Su); Imp Familiar (Ex)
- **Replaced / altered class features:** Acid Dart, Dimensional Steps

## Replacement details

### Alters: school, alignment, and arcane bond requirements

- **Archetype feature:** Associated School / Suggested Opposition Schools / Alignment / Requirements
- **Description:** The archetype locks the wizard into an infernal conjuration package with fixed build constraints.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restrictions
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The associated school is conjuration.
    - Suggested opposition schools are divination, illusion, or transmutation.
    - Allowed alignments are lawful evil, lawful neutral, neutral evil, or neutral.
    - The wizard must choose a familiar for arcane bond at 1st level.
  - Scaling: None
  - Interactions: These are entry and build restrictions layered onto the normal conjurer chassis.
  - Edge cases: The suggested opposition schools read as guidance rather than a hard exclusive list unless the engine chooses to enforce them.
  - Implementation flags:
    - Likely existing hooks: school lock, alignment validation, familiar-only bond restriction.

### Replaces: acid dart and dimensional steps

- **Archetype feature:** Planar Knowledge (Ex)
- **Description:** The wizard gains planar lore in place of one conjuration school power.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain a +3 bonus on Knowledge (planes) checks.
    - The bonus applies to identifying outsiders, planar traits, and related lore under normal skill rules.
    - This is an always-on skill modifier and does not consume school-power uses.
  - Scaling: None
  - Interactions: Pure skill modifier with no separate resource cost.
  - Edge cases: None beyond normal stacking rules.
  - Implementation flags:
    - Likely existing hooks: skill bonus.

- **Archetype feature:** Assume Control (Su)
- **Description:** The wizard can temporarily seize summoned creatures and later bargain with called outsiders as though she were their caster.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 9
  - Action/timing: Activated when targeting a summoned creature; reclaim attempts by the original summoner use a standard action
  - Duration: Half wizard level rounds, minimum 1 round, and never longer than the original summon duration
  - Uses: 3 + Intelligence modifier times per day
  - Core function:
    - Attempt a caster-level check against DC 10 + the summoning caster's level to take control of a summoned creature.
    - Knowing the creature's name grants a +2 circumstance bonus on that check.
    - On success, control the creature as though the wizard had summoned it.
    - The original summoner may try to reclaim control with a caster-level check against the wizard's caster level + 10.
    - When the takeover ends, the creature returns to its original summoner if the summoning effect still exists.
    - At 9th level, the wizard may use this ability to bargain with called creatures as though she were the original conjurer.
  - Scaling: The bargaining rider unlocks at 9th level.
  - Interactions: The called-creature rider is a negotiation benefit, not the same forced-control mechanic used for summons.
  - Edge cases: If the summoning duration expires during the takeover, the creature departs normally.
  - Implementation flags:
    - Likely existing hooks: contested caster-level checks, summoned-creature controller swap, limited-use resource tracking.
    - Unsupported / review needed: true-name data and called-creature bargaining contracts.

- **Archetype feature:** Imp Familiar (Ex)
- **Description:** At mid levels the familiar is forcibly upgraded into an imp.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 7
  - Action/timing: Automatic on reaching 7th level
  - Duration: Permanent familiar replacement
  - Uses: No daily cap
  - Core function:
    - Gain Improved Familiar as a bonus feat.
    - The granted feat must be used to take an imp.
    - The imp replaces the current familiar.
  - Scaling: None
  - Interactions: This is a feat grant plus a mandatory familiar swap, not an optional familiar menu expansion.
  - Edge cases: If the prior familiar carried archetype state, only normal replacement carryovers should persist.
  - Implementation flags:
    - Likely existing hooks: bonus feat grant, mandatory improved-familiar replacement.
    - Unsupported / review needed: imp familiar conversion flow.

## Parsed source feature headings

- Associated School
- Suggested Opposition Schools
- Alignment
- Requirements
- Replacement Powers
- Planar Knowledge (Ex)
- Assume Control (Su)
- Imp Familiar (Ex)
