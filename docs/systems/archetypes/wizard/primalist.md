# Wizard - Primalist

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Primalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Primalist
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Primal Magic (Su); Enhance Primal Magic Event (Su); Primal Surge (Su)
- **Replaced / altered class features:** arcane bond; the wizard bonus feat acquired at 5th level; the wizard bonus feat acquired at 10th level

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Primal Magic (Su)
- **Description:** Once per day, the wizard can gamble a prepared spell on a concentration check to either keep the slot or unleash a primal magic event.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 20
  - Action/timing: Swift action declared while casting the spell
  - Duration: The spell resolves normally on success; on failure, the wizard is staggered for 1 round per spell level
  - Uses: 1/day, with possible extra uses at 20th level per the full archetype
  - Core function:
    - Declare this ability as a swift action while casting a prepared spell.
    - After the spell resolves, attempt a concentration check against DC 20 + double the spell's level.
    - On success, the spell slot is not expended.
    - On failure, the slot is expended normally, the spell's effects are replaced by a primal magic event whose CR equals the wizard's caster level, and the wizard is staggered.
  - Scaling: Later archetype rules may add more daily uses at 20th level.
  - Interactions: Failure still consumes the prepared spell even though the spell itself is replaced by the random event.
  - Edge cases: High-level spells create very steep concentration DCs, making this ability increasingly risky.
  - Implementation flags:
    - Likely existing hooks: post-cast concentration check, spell-slot refund on success, primal magic event trigger on failure, stagger condition.

### Replaces: the 5th-level wizard bonus feat

- **Archetype feature:** Enhance Primal Magic Event (Su)
- **Description:** The wizard can nudge the severity of a primal event after it is rolled but before it resolves.
- **Mechanics:**
  - Type: Su
  - Level hooks: 5
  - Action/timing: Swift action declared after the event is determined and before it resolves
  - Duration: Applies to the triggering event only
  - Uses: No daily cap; each use costs a swift action
  - Core function:
    - When a primal magic event is triggered, shift its CR by +1 or -1 with no check.
    - Alternatively, attempt a concentration check against DC 15 + the event's CR.
    - On a successful check, shift the event's CR by +2 or -2 instead.
  - Scaling: None
  - Interactions: The ability works only in the window after the event is known but before its effects happen.
  - Edge cases: If the concentration check for the larger shift fails, the CR stays unchanged.
  - Implementation flags:
    - Likely existing hooks: post-event-determination CR adjustment, optional concentration check for larger shift.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Primal Surge (Su)
- **Description:** The wizard gains more control over which event happens and may resist primal events that target him directly.
- **Mechanics:**
  - Type: Su
  - Level hooks: 10
  - Action/timing: Passive during event generation and passive when targeted by an event
  - Duration: Applies to each triggering event
  - Uses: No daily cap
  - Core function:
    - Whenever the wizard triggers a primal magic event, roll percentile twice and choose which event takes effect.
    - Gain resistance to primal events that target the wizard personally.
    - Resolve that resistance as 1d20 + event CR against DC 11 + wizard level; on a failed check, the event does not affect the wizard.
    - If the event duplicates a spell that ignores spell resistance, this protection does not apply.
  - Scaling: The resistance DC scales with wizard level.
  - Interactions: The wizard chooses between the two rolled events before checking whether a chosen event affects him.
  - Edge cases: Effects modeled on spells that bypass spell resistance also bypass this resistance.
  - Implementation flags:
    - Likely existing hooks: double-event roll with player choice, SR-like resistance check against event CR, SR-bypass exception for applicable spells.

## Parsed source feature headings

- Primal Magic (Su)
- Enhance Primal Magic Event (Su)
- Primal Surge (Su)
