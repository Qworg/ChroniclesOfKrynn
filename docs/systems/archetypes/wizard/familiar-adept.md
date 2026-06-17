# Wizard - Familiar Adept

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Familiar Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Familiar%20Adept
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Diminished Expertise; School Familiar (Ex); Familiar Spells (Ex); Focused School (Ex)
- **Replaced / altered class features:** Scribe Scroll; 5th and 10th-level Bonus Feats; Arcane Bond; Spellbooks

## Replacement details

### Replaces: Scribe Scroll, the wizard's bonus feats at 5th and 10th level, and alters opposition-school choice

- **Archetype feature:** Diminished Expertise
- **Description:** The wizard loses several early class perks and takes on an extra opposition school.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1, 5, 10
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard does not gain Scribe Scroll at 1st level.
    - The wizard does not gain the normal bonus feats at 5th and 10th level.
    - The wizard must choose one additional opposition school, even if he is a universalist.
  - Scaling: None
  - Interactions: This increases the opposition-school burden without changing specialist bonus-slot math.
  - Edge cases: Universalists still take the extra opposition school even though they normally have none.
  - Implementation flags:
    - Likely existing hooks: Scribe Scroll suppression, bonus-feat suppression, extra opposition-school selection.

### Alters: arcane bond

- **Archetype feature:** School Familiar (Ex)
- **Description:** The wizard must use a familiar, and that familiar becomes a delayed-access school familiar.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 4, 8
  - Action/timing: Passive bond restriction; school-power access unlocks automatically at the listed levels
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must select a familiar for arcane bond.
    - That familiar automatically gains the school familiar archetype.
    - It cannot use its lesser school power until 4th level.
    - At 8th level, it gains access to its greater school power.
  - Scaling: School-familiar powers unlock at 4th and 8th level.
  - Interactions: This shifts school-expression mechanics onto the familiar.
  - Edge cases: Replacement familiars should inherit the school-familiar package under normal familiar replacement rules.
  - Implementation flags:
    - Likely existing hooks: familiar-only bond restriction, school-familiar archetype attachment, gated power unlocks.
    - Unsupported / review needed: school familiar archetype support.

### Alters: spellbooks

- **Archetype feature:** Familiar Spells (Ex)
- **Description:** The wizard stores spells in the familiar using witch-style rules instead of a spellbook.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1 and every later spell-learning event
  - Action/timing: Passive storage rule
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Store spells in the familiar rather than a spellbook, following witch familiar rules.
    - The familiar can trade spells known with a witch's familiar when the traded spells appear on both class spell lists.
    - Familiar replacement follows the witch-style higher replacement cost.
  - Scaling: None
  - Interactions: Any spell-learning or copying system must target familiar-based storage rather than a physical book.
  - Edge cases: Trade eligibility depends on both classes' spell lists, not just spell level.
  - Implementation flags:
    - Likely existing hooks: familiar-based spell storage, witch familiar trade rules, spellbook suppression.
    - Unsupported / review needed: wizard/witch familiar spell exchange if not already modeled.

### Additional archetype features

- **Archetype feature:** Focused School (Ex)
- **Description:** The familiar gains separate daily uses of the wizard's 1st-level school power.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 5, 10, 15, 20
  - Action/timing: The familiar uses the school power under that power's normal activation rules
  - Duration: Per school-power use
  - Uses: The familiar gains 1 extra use per day of the wizard's 1st-level school ability at each listed level
  - Core function:
    - At 1st level, the familiar can use the wizard's 1st-level school ability once per day.
    - At 5th level and every 5 levels thereafter, it gains one additional daily use.
    - These uses do not count against the wizard's own daily uses.
  - Scaling: One extra familiar use is added at each listed milestone.
  - Interactions: The familiar must have a valid 1st-level school power to mirror.
  - Edge cases: Unusual school variants may need manual review before the familiar can use their powers safely.
  - Implementation flags:
    - Likely existing hooks: familiar-activated school powers with separate daily-use tracking.
    - Unsupported / review needed: handing wizard school powers to familiars across all school variants.

## Parsed source feature headings

- Diminished Expertise
- School Familiar (Ex)
- Familiar Spells (Ex)
- Focused School (Ex)
