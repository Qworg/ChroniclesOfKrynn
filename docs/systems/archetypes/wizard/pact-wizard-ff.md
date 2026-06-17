# Wizard - Pact Wizard (FF)

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Pact Wizard (FF)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Pact%20Wizard%20%28FF%29
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Familiar (Ex); Pact Focus (Ex); Pact (Ex); Aura (Ex); Pact Summons (Ex); True Form (Ex)
- **Replaced / altered class features:** Arcane Bond; Arcane School

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Familiar (Ex)
- **Description:** The archetype requires a familiar and ties that familiar narratively to an outsider patron.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive bond formed at character creation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must choose a familiar for arcane bond.
    - No bonded item is allowed.
    - The familiar is expected to report the wizard's actions back to the patron.
  - Scaling: None
  - Interactions: The patron-reporting element is narrative unless another subsystem explicitly models it.
  - Edge cases: Normal familiar loss and replacement rules still apply.
  - Implementation flags:
    - Likely existing hooks: familiar-only bond restriction.

### Alters: arcane school

- **Archetype feature:** Pact Focus (Ex)
- **Description:** The wizard takes on one extra opposition school, but conjuration is protected from that choice.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choose one additional opposition school at 1st level.
    - This requirement applies even to universalists.
    - Conjuration cannot be selected as that additional opposition school.
  - Scaling: None
  - Interactions: This increases the wizard's opposition-school burden while preserving conjuration access.
  - Edge cases: Universalists normally have no opposition schools, but this archetype forces one anyway.
  - Implementation flags:
    - Likely existing hooks: extra opposition-school selection, conjuration-exclusion validation.

### Adds: patron bargain framework

- **Archetype feature:** Pact (Ex)
- **Description:** The wizard forges a bond with a patron tied to a specific outsider subtype, and violating that bargain suspends most archetype benefits.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive patron choice at character creation; passive conduct check afterward
  - Duration: Permanent until broken; suspended benefits return after atonement
  - Uses: No daily cap
  - Core function:
    - Choose a patron associated with one outsider subtype that has an improved familiar option, such as devil or azata.
    - The chosen subtype can have an alignment directly opposed to the wizard's own alignment.
    - If the wizard shifts away from the chosen subtype's alignment, grossly abuses the familiar or outsiders of that subtype, or commits extreme acts against the patron's alignment, nearly all archetype benefits shut off.
    - The extra opposition school from Pact Focus remains even while the rest of the archetype is suspended.
    - An atonement effect restores the suppressed pact benefits.
  - Scaling: None
  - Interactions: Familiar, aura, summon support, and true-form upgrades all key off the chosen outsider subtype.
  - Edge cases: Losing benefits does not retroactively remove Pact Focus's extra opposition school.
  - Implementation flags:
    - Likely existing hooks: patron subtype selection, alignment-conduct validation, temporary archetype-benefit suppression with atonement recovery.

- **Archetype feature:** Aura (Ex)
- **Description:** The pact leaves an unmistakable moral or ethical imprint that detection magic can read.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Radiate an aura matching the alignment of the chosen outsider subtype.
    - Treat aura strength as though the wizard were a cleric of equal level.
    - Detection spells and effects read this aura without any activation from the wizard.
  - Scaling: Aura strength increases automatically with wizard level.
  - Interactions: The aura reflects the pact subtype's alignment, not necessarily the wizard's current alignment.
  - Edge cases: Alignment-detection effects can reveal the pact aura even when the wizard is disguised.
  - Implementation flags:
    - Likely existing hooks: cleric-style alignment aura keyed to patron subtype.

- **Archetype feature:** Pact Summons (Ex)
- **Description:** The wizard gains narrow access to Sacred Summons, but only for outsiders tied to the pact.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 5, 10, 15, 20
  - Action/timing: Passive feat-access rule when selecting wizard bonus feats
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Sacred Summons becomes a legal wizard bonus feat choice for this archetype.
    - The feat can be used only to summon outsiders of the chosen subtype.
    - All other feat prerequisites and summon-spell requirements still apply.
  - Scaling: The option matters whenever the wizard reaches a bonus-feat level and qualifies for Sacred Summons.
  - Interactions: This expands feat eligibility rather than granting the feat automatically.
  - Edge cases: Summons outside the chosen subtype do not benefit from this archetype permission.
  - Implementation flags:
    - Likely existing hooks: expanded wizard bonus-feat list, subtype restriction layered onto Sacred Summons.

- **Archetype feature:** True Form (Ex)
- **Description:** At mid levels the familiar reveals its outsider nature and upgrades into an improved familiar tied to the pact subtype.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 7
  - Action/timing: Automatic on reaching 7th level
  - Duration: Permanent familiar transformation
  - Uses: No daily cap
  - Core function:
    - The familiar automatically transforms into an outsider improved familiar of the chosen subtype.
    - The upgraded familiar reflects the subtype selected for the pact at 1st level.
    - This is a forced upgrade rather than an optional familiar menu expansion.
  - Scaling: None beyond the 7th-level transformation.
  - Interactions: The resulting familiar still uses the wizard's familiar bond and continues reporting to the patron.
  - Edge cases: If the familiar is absent or dead when the wizard reaches 7th level, the upgrade should apply to the next valid familiar gained under normal recovery rules.
  - Implementation flags:
    - Likely existing hooks: mandatory improved-familiar conversion keyed to stored pact subtype.

## Parsed source feature headings

- Familiar (Ex)
- Pact Focus (Ex)
- Pact (Ex)
- Aura (Ex)
- Pact Summons (Ex)
- True Form (Ex)
