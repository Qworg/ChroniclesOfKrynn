# Wizard - Spell Sage

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spell Sage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spell%20Sage
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Focused Spells (Su); Spell Study (Su)
- **Replaced / altered class features:** arcane bond; arcane school

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Focused Spells (Su)
- **Description:** A few times per day the wizard can sharply boost caster level for one spell.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 8, 16
  - Action/timing: Declared as part of casting the target spell
  - Duration: Applies to that single spell cast
  - Uses: 1/day at 1st level; 2/day at 8th; 3/day at 16th
  - Core function:
    - Increase caster level by 4 for one spell.
    - This bonus stacks with other caster-level increases.
  - Scaling: Daily uses increase at 8th and 16th level.
  - Interactions: The bonus applies only to the current spell and then ends.
  - Edge cases: The +4 applies regardless of slot adjustments caused by metamagic or other effects.
  - Implementation flags:
    - Likely existing hooks: temporary caster-level boost for a single cast, daily-use tracking.

### Replaces: arcane school

- **Archetype feature:** Spell Study (Su)
- **Description:** The wizard can slowly improvise off-list bard, cleric, or druid spells by spending extra time and two prepared wizard slots.
- **Mechanics:**
  - Type: Su
  - Level hooks: 2, 6, 11, 16
  - Action/timing: Extended casting time of 1 full round per spell level, added to any longer normal casting time
  - Duration: Instantaneous for the cast spell itself
  - Uses: 1/day at 2nd level, plus one additional use at 6th, 11th, and 16th level
  - Core function:
    - Cast any spell from the bard, cleric, or druid list as though it were a wizard spell.
    - Spend two prepared wizard spell slots of the target spell's level or higher.
    - Add 1 full round of casting time per spell level to the spell, plus any longer casting time the spell already has.
    - If the spell appears on more than one of the qualifying lists, use the lowest listed spell level.
  - Scaling: Daily uses increase at 6th, 11th, and 16th level to a maximum of 4/day.
  - Interactions: The borrowed spell uses wizard statistics for caster level, save DCs, and related calculations.
  - Edge cases: Slot cost is based on the lowest eligible list level even if the wizard conceptually learns the spell from a different list.
  - Implementation flags:
    - Likely existing hooks: extended-cast-time cross-list spontaneous access, dual-slot expenditure, multi-list level comparison.

## Parsed source feature headings

- Focused Spells (Su)
- Spell Study (Su)
