# Wizard - Spirit Binder

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spirit Binder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spirit%20Binder
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Soulbound Familiar (Ex); Arcane School; Lost Talents (Ex)
- **Replaced / altered class features:** Scribe Scroll and the wizard’s bonus feats

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Soulbound Familiar (Ex)
- **Description:** The wizard's familiar is tied to a lost loved one and uses that person's favored class to set combat progressions.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive ritual result at character creation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must choose a familiar for arcane bond.
    - The familiar may be any alignment, even one directly opposed to the wizard's alignment.
    - Its base attack bonus and base saving throws come from the loved one's favored class, using wizard level as the effective character level.
    - If the loved one died before play began, the wizard chooses that favored class at 1st level and cannot change it later.
  - Scaling: Base attack bonus and save values scale with wizard level according to the chosen class progression.
  - Interactions: Nonstandard familiar alignment can affect spells or effects keyed to alignment.
  - Edge cases: The favored-class choice is locked permanently once selected.
  - Implementation flags:
    - Likely existing hooks: familiar-only bond restriction, custom BAB and save derivation from chosen class, alignment override for familiar.

### Alters: arcane school

- **Archetype feature:** Arcane School
- **Description:** Necromancy is protected from becoming an opposition school.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Necromancy cannot be selected as an opposition school.
    - The wizard still chooses specialization and any other opposition schools normally.
    - This protection applies at creation and during any retraining of school choices.
  - Scaling: None
  - Interactions: The wizard otherwise uses ordinary school specialization rules.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: necromancy opposition-school exclusion.

### Replaces: Scribe Scroll and wizard bonus feats at 5th, 10th, 15th, and 20th level

- **Archetype feature:** Lost Talents (Ex)
- **Description:** The familiar gains extra feats over time to reflect abilities carried over from the lost loved one.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 5, 10, 15, 20
  - Action/timing: Passive feat grant
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - At 1st level, the familiar gains one extra feat for which it qualifies.
    - It gains one additional feat at 5th level and every 5 levels thereafter.
    - The familiar must meet prerequisites on its own.
  - Scaling: Additional feats arrive at 5th, 10th, 15th, and 20th level after the initial 1st-level grant.
  - Interactions: The wizard's own feats do not automatically satisfy prerequisites for the familiar.
  - Edge cases: The 1st-level bonus feat is separate from the later 5-level progression.
  - Implementation flags:
    - Likely existing hooks: familiar feat progression at defined levels.

## Parsed source feature headings

- Soulbound Familiar (Ex)
- Arcane School
- Lost Talents (Ex)
