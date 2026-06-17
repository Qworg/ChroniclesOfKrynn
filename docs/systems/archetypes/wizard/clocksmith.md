# Wizard - Clocksmith

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Clocksmith
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Clocksmith
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Clockwork Bond (Ex); Clockwork Expertise (Ex); Craft Construct; Familiar Tinkering (Ex)
- **Replaced / altered class features:** Arcane Bond; Arcane School; Scribe Scroll; Bonus Feats

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Clockwork Bond (Ex)
- **Description:** The wizard's bond must be a clockwork familiar, and that companion's passive benefit is reduced.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive bond formed at character creation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The arcane bond must be a clockwork construct familiar.
    - No other bond type is allowed.
    - The familiar grants only half its normal class-skill or ability bonus to the wizard, minimum +1.
  - Scaling: None beyond standard familiar advancement.
  - Interactions: Later Familiar Tinkering abilities add eidolon evolutions to this familiar.
  - Edge cases: The halved value applies only to the familiar's benefit to its master, not to the familiar's own combat statistics.
  - Implementation flags:
    - Likely existing hooks: construct familiar bond restriction, halved familiar special-ability bonus.

### Replaces: arcane school powers

- **Archetype feature:** Clockwork Expertise (Ex)
- **Description:** The clocksmith is especially resilient against clockworks and slightly more effective at magic aimed only at them.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 8
  - Action/timing: Passive save bonus and passive caster-level adjustment
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain a +2 bonus on saves against effects created by clockwork-subtype creatures.
    - Treat caster level as 1 higher for spells that target or affect only clockwork-subtype creatures.
    - At 8th level, the save bonus improves to +4 and the caster-level boost improves to +2.
  - Scaling: Both bonuses improve at 8th level.
  - Interactions: The caster-level bonus applies only when every target is a clockwork.
  - Edge cases: Mixed-target spells do not qualify for the caster-level increase.
  - Implementation flags:
    - Likely existing hooks: creature-subtype-keyed save bonus, conditional caster-level boost.

### Replaces: Scribe Scroll

- **Archetype feature:** Craft Construct
- **Description:** The archetype gets early access to construct crafting, but non-clockwork constructs are more expensive.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive feat grant
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain Craft Construct as a bonus feat at 1st level without meeting its prerequisites.
    - Construct creations without the clockwork subtype cost 50% more gp.
  - Scaling: None
  - Interactions: The prerequisite waiver applies only to this granted feat.
  - Edge cases: The 50% surcharge stacks with other cost increases and does not affect clockwork constructs.
  - Implementation flags:
    - Likely existing hooks: feat grant with waived prerequisites, conditional crafting cost multiplier.

### Replaces: bonus feats at 5th, 10th, 15th, and 20th level

- **Archetype feature:** Familiar Tinkering (Ex)
- **Description:** The clockwork familiar gains a flexible pool of evolutions that can be reassigned when the wizard levels up.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 5, 10, 15, 20
  - Action/timing: Passive; evolutions are assigned when the wizard gains a level
  - Duration: Permanent until reassigned at a later level-up
  - Uses: No daily cap
  - Core function:
    - At 5th level and every 5 levels thereafter, the familiar gains 1 eidolon evolution point per 5 wizard levels.
    - Evolutions that require a specific base form cannot be selected.
    - The chosen evolutions may be swapped whenever the wizard gains a level.
    - These points stack with evolution points from Evolved Familiar if the wizard also has that feat.
  - Scaling: The evolution-point pool increases by 1 for each 5 wizard levels beyond 5th.
  - Interactions: Points are restricted to non-base-form evolutions and stack with Evolved Familiar.
  - Edge cases: Reassignment happens only at level-up, not during downtime between encounters.
  - Implementation flags:
    - Likely existing hooks: eidolon evolution pool attached to familiar, level-gated point accumulation.

## Parsed source feature headings

- Clockwork Bond (Ex)
- Clockwork Expertise (Ex)
- Craft Construct
- Familiar Tinkering (Ex)
