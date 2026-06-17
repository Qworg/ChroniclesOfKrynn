# Wizard - Chronomancer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Chronomancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Chronomancer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Temporal Pool (Su)
- **Replaced / altered class features:** arcane bond and the bonus feats gained at 10th, 15th, and 20th levels

## Replacement details

### Replaces: arcane bond; bonus feats at 10th, 15th, and 20th level

- **Archetype feature:** Temporal Pool (Su)
- **Description:** The chronomancer stores temporal energy in a shared pool that powers initiative and saving-throw manipulation.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 5, 10
  - Action/timing: Immediate action before initiative is finalized; immediate action after rolling a saving throw but before the result is revealed; standard action for other pool options from the full archetype
  - Duration: Pool refreshes whenever the wizard prepares spells
  - Uses: Pool of points equal to half wizard level + Intelligence modifier, minimum 1
  - Core function:
    - Spend 1 point when rolling initiative to let the wizard or one ally within 30 feet add 1d4 to the initiative result.
    - At 5th level, spend 2 points as an immediate action after rolling a saving throw to add the pool's bonus die before the outcome is known.
    - At 10th level, the saving-throw bonus die improves from d4 to d6.
    - The same pool also fuels later chronomancer options gained from the replaced bonus-feat slots.
  - Scaling: Pool size rises with level and Intelligence, and the saving-throw bonus die increases to d6 at 10th level.
  - Interactions: Initiative and saving-throw boosts draw from the same pool and do not use spell slots.
  - Edge cases: The saving-throw option must be declared after the roll is made but before success or failure is announced.
  - Implementation flags:
    - Likely existing hooks: point-pool tracking refreshed on spell prep, initiative roll modification, post-roll saving-throw bonus.

## Parsed source feature headings

- Temporal Pool (Su)
