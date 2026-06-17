# Wizard - Worldseeker

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Worldseeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Worldseeker
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Walk the Planes (Sp, Su); Planar Adaptation (Su); Planar Associates (Ex); Planar Redoubt (Sp)
- **Replaced / altered class features:** Scribe Scroll; 6th/8th-level School Ability; Arcane Bond; 5th, 15th-level Bonus Feat

## Replacement details

### Replaces: Scribe Scroll

- **Archetype feature:** Walk the Planes (Sp, Su)
- **Description:** The wizard gains constant elemental protection and improved planar knowledge.
- **Mechanics:**
  - Type: Mixed (Sp, Su)
  - Level hooks: 1
  - Action/timing: Passive
  - Duration: Endure elements is constant
  - Uses: No daily cap
  - Core function:
    - Gain a +2 bonus on Knowledge (planes) checks.
    - Remain continually under endure elements.
  - Scaling: None
  - Interactions: The protection is always on unless suppressed by a broader effect-negation rule.
  - Edge cases: Constant endure elements does not replace stronger planar survival magic.
  - Implementation flags:
    - Likely existing hooks: constant spell effect, skill bonus.

### Replaces: the school ability normally gained at 6th or 8th level

- **Archetype feature:** Planar Adaptation (Su)
- **Description:** The wizard becomes continuously protected from hostile planar environments and later extends that benefit to nearby allies.
- **Mechanics:**
  - Type: Su
  - Level hooks: 8, 15
  - Action/timing: Passive, with aura-style sharing at 15th level
  - Duration: Continuous
  - Uses: No daily cap
  - Core function:
    - At 8th level, gain continual planar adaptation.
    - At 15th level, extend that protection to all allies within 30 feet.
  - Scaling: The ally-sharing upgrade appears at 15th level.
  - Interactions: The 15th-level extension should update dynamically as allies move in or out of range.
  - Edge cases: The archetype grants this at 8th level even though the replaced school ability varies by school.
  - Implementation flags:
    - Likely existing hooks: constant planar-adaptation effect, proximity-based ally aura.
    - Unsupported / review needed: planar-environment hazard subsystem if not already present.

### Alters: arcane bond and replaces the bonus feat gained at 5th level

- **Archetype feature:** Planar Associates (Ex)
- **Description:** The wizard must use a familiar, upgrades it into a matching outsider, and gains spontaneous planar ally casting with a daily material-cost discount.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 5, 7, 11, 15
  - Action/timing: Familiar choice is passive; spontaneous conversion uses the cast spell's normal timing
  - Duration: Familiar changes and learned spells are permanent; the daily discount refreshes each day
  - Uses: The gp discount applies the first time each day one of the listed planar ally spells is cast
  - Core function:
    - The wizard must choose a familiar for arcane bond.
    - At 5th level, gain Improved Familiar as a bonus feat and choose an outsider familiar whose alignment exactly matches the wizard's, ignoring the usual 7th-level caster requirement.
    - At 7th level, automatically learn lesser planar ally as a 4th-level wizard spell.
    - At 11th level, automatically learn planar ally as a 6th-level wizard spell.
    - At 15th level, automatically learn greater planar ally as an 8th-level wizard spell.
    - Sacrifice a prepared spell of the matching level to cast any of those spells spontaneously.
    - The first time each day one of those three spells is cast, reduce its material component cost by caster level x 100 gp, to a minimum of 0 gp.
  - Scaling: New planar ally spells unlock at 7th, 11th, and 15th level.
  - Interactions: The spontaneous swap is fixed to exact levels: 4th for lesser planar ally, 6th for planar ally, and 8th for greater planar ally.
  - Edge cases: The daily component discount is shared across the whole planar ally package, not one use per spell.
  - Implementation flags:
    - Likely existing hooks: familiar-only bond restriction, improved-familiar grant with waived caster-level gate, automatic spell additions, exact-level spontaneous conversion, once-per-day material-cost reduction.
    - Unsupported / review needed: outsider familiar alignment matching and planar ally bargain-cost flows.

### Replaces: the bonus feat gained at 15th level

- **Archetype feature:** Planar Redoubt (Sp)
- **Description:** The wizard gains a permanent lesser-create-demiplane retreat.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 15
  - Action/timing: Uses the normal casting and creation timing of the copied spell unless surfaced as a granted power
  - Duration: Permanent
  - Uses: No daily cap beyond normal activation if modeled as spell-like casting
  - Core function:
    - Function as lesser create demiplane, except the demiplane is limited to a single 50-foot cube and is permanent.
  - Scaling: None
  - Interactions: This is a personal retreat space rather than a broader demiplane construction system.
  - Edge cases: If demiplane ownership or access permissions are modeled, they should default to the creator's control unless another rule overrides it.
  - Implementation flags:
    - Likely existing hooks: demiplane creation spell reuse.
    - Unsupported / review needed: persistent demiplane subsystem if not already present.

## Parsed source feature headings

- Walk the Planes (Sp, Su)
- Planar Adaptation (Su)
- Planar Associates (Ex)
- Planar Redoubt (Sp)
