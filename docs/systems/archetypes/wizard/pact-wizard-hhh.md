# Wizard - Pact Wizard (HHH)

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Pact Wizard (HHH)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Pact%20Wizard%20%28HHH%29
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Effortless Magic (Ex); Patron Spells; Great Power, Greater Expense (Ex)
- **Replaced / altered class features:** Scribe Scroll; the bonus feats a wizard gains at 5th, 10th, 15th, and 20th level

## Replacement details

### Alters: the wizard's spellcasting

- **Archetype feature:** Effortless Magic (Ex)
- **Description:** The wizard prepares spells much faster than normal.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive modifier to spell preparation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Full spell preparation takes 15 minutes instead of 1 hour.
    - Minimum preparation time is reduced to 1 minute.
  - Scaling: None
  - Interactions: The wizard still needs the normal conditions for preparation, including spellbook access.
  - Edge cases: Short preparation still follows the usual rules for recovering only part of the day's slots.
  - Implementation flags:
    - Likely existing hooks: spell preparation time modifier.

### Replaces: Scribe Scroll

- **Archetype feature:** Patron Spells
- **Description:** A witch patron's spells go into the wizard's spellbook and can be cast by sacrificing prepared slots.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Automatic additions as patron spells unlock; spontaneous casting uses the replacement spell's normal action
  - Duration: Permanent for spellbook additions; per the patron spell when cast
  - Uses: Spontaneous casting consumes a prepared non-school-slot spell of equal or higher level
  - Core function:
    - At 1st level, choose a witch patron.
    - Add that patron's spells to the wizard's spellbook automatically as they become available.
    - Sacrifice any prepared spell that is not sitting in a school bonus slot to cast a patron spell of equal or lower level.
  - Scaling: New patron spells enter the spellbook as the wizard gains access to their levels.
  - Interactions: School bonus-slot spells cannot be spent for this spontaneous conversion.
  - Edge cases: If a patron spell is already present in the spellbook, the automatic addition has no extra effect.
  - Implementation flags:
    - Likely existing hooks: witch patron system linked to wizard class, automatic spellbook injection, spontaneous-casting substitution excluding school bonus slots.

### Replaces: bonus feats at 5th, 10th, 15th, and 20th level

- **Archetype feature:** Great Power, Greater Expense (Ex)
- **Description:** The wizard accepts an oracle curse, gains patron-backed luck on key rolls, and eventually twists patron and curse spells more efficiently.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 5, 10, 15, 20
  - Action/timing: Curse is passive; the luck option is a free action declared before the roll, even outside the wizard's turn
  - Duration: Curse is permanent; luck applies to one check
  - Uses: Luck option is usable 3 + half Intelligence modifier times per day starting at 10th level
  - Core function:
    - At 5th level, choose one oracle curse and treat half character level as the effective oracle level for that curse.
    - Add the curse's spells to the wizard spell list and spellbook.
    - At 10th level, declare a free action before a caster-level check, concentration check, initiative check, or saving throw to roll twice and keep the better result.
    - At 15th level, add the wizard's Intelligence bonus as an insight bonus when using the roll-twice option, and metamagic applied to patron or curse spells reduces the spell's final adjusted level by 1 to a minimum of its original level.
    - At 20th level, if the roll-twice option produces a natural 20, the relevant check automatically succeeds even when that check type normally does not auto-succeed.
  - Scaling: The luck option unlocks at 10th level, gains an Intelligence-based result boost plus metamagic efficiency at 15th, and gains natural-20 auto-success at 20th; daily uses scale with Intelligence modifier.
  - Interactions: The curse's drawbacks still apply normally, and the metamagic reduction works only on spells learned through the chosen patron or oracle curse.
  - Edge cases: The roll-twice option can be used during another creature's turn if the triggering roll occurs then, and the 20th-level natural-20 clause matters only if one of the two dice is actually a 20.
  - Implementation flags:
    - Likely existing hooks: oracle curse selection with wizard-level scaling, luck reroll on listed check types, daily-use tracking.

## Parsed source feature headings

- Effortless Magic (Ex)
- Patron Spells
- Great Power, Greater Expense (Ex)
