# Wizard - Spellbinder

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spellbinder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spellbinder
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Spell Bond (Su); Discoveries
- **Replaced / altered class features:** arcane bond

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Spell Bond (Su)
- **Description:** The wizard keeps a short list of bonded spells that can replace prepared slots during the day.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 3, 4, 17
  - Action/timing: Full-round action to swap a prepared spell for a bonded spell
  - Duration: The new bonded spell remains in the slot until used or changed again by the normal rules
  - Uses: No daily cap on swaps; limited by the number of bonded spells known
  - Core function:
    - At 1st level, choose one known spell as a bonded spell.
    - As a full-round action, replace any prepared spell with a bonded spell of equal or lower level, provided the slot is high enough.
    - At 3rd level and every 2 levels thereafter, add one more bonded spell to the bonded list.
    - Starting at 4th level and every 2 levels thereafter, replace one existing bonded spell with a new one.
    - The list tops out at 9 bonded spells by 17th level.
  - Scaling: The bonded-spell list expands steadily and reaches its cap at 17th level.
  - Interactions: The swapped-out prepared spell is lost; only the bonded replacement remains in the slot.
  - Edge cases: The full-round action changes preparation rather than functioning as a free in-combat cast substitution.
  - Implementation flags:
    - Likely existing hooks: mid-day prepared-spell replacement mechanic, expanding bonded-spell list with level.

### Adds: discovery synergy notes

- **Archetype feature:** Discoveries
- **Description:** The source explicitly calls out two arcane discoveries as particularly compatible with the archetype's spell-swapping loop.
- **Mechanics:**
  - Type: None stated
  - Level hooks: Whenever the wizard becomes eligible to choose arcane discoveries
  - Action/timing: Passive choice at discovery selection
  - Duration: Permanent once chosen
  - Uses: No daily cap
  - Core function:
    - Fast Study is identified as a compatible arcane discovery for the archetype.
    - Split Slot is also identified as a compatible arcane discovery for the archetype.
    - The archetype does not grant either discovery for free; they remain optional legal picks.
  - Scaling: None
  - Interactions: These recommendations complement Spell Bond but do not alter the normal discovery acquisition schedule.
  - Edge cases: If the campaign does not use arcane discoveries, this note has no mechanical effect.
  - Implementation flags:
    - Likely existing hooks: no new subsystem required beyond ordinary arcane discovery selection.

## Parsed source feature headings

- Spell Bond (Su)
- Discoveries
