# Wizard - Arcane Physician

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Arcane Physician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Arcane%20Physician
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Medicinal Alchemy; Brew Potion
- **Replaced / altered class features:** arcane school

## Replacement details

### Replaces: arcane school

- **Archetype feature:** Medicinal Alchemy
- **Description:** The wizard borrows healing-technique exceptions from the alchemist list and later converts potions or remedies on the fly.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1, 8
  - Action/timing: Passive item-use and crafting extension at 1st level; standard action transformation at 8th level
  - Duration: Permanent for list-extension rules; instantaneous for each transformation
  - Uses: No daily cap on the passive rules; each 8th-level use consumes one eligible spell slot
  - Core function:
    - Treat healing-subschool spells on the alchemist extract list as wizard spells for activating magic items.
    - Expend a spell slot to satisfy the spell requirement when crafting a healing-subschool alchemist spell, even if that spell is not normally on the wizard list.
    - Use the alchemist spell's level when determining the slot cost for that crafting exception when applicable.
    - At 8th level, spend a 1st-level or higher spell slot as a standard action while holding a potion or alchemical remedy to transform it.
    - A remedy can become any other remedy of equal or lower price, and a potion can become any healing-subschool alchemist extract of equal or lower spell level.
  - Scaling: The transformation option unlocks at 8th level.
  - Interactions: Uses the alchemist extract list for both the activation exception and the 8th-level conversion rule.
  - Edge cases: If a qualifying spell appears on both class lists, use the lower spell level for slot expenditure; the transformation does not grant any other alchemist class features.
  - Implementation flags:
    - Likely existing hooks: cross-class spell-list extension for item activation, item-creation slot substitution, in-hand item transformation.

### Replaces: Scribe Scroll

- **Archetype feature:** Brew Potion
- **Description:** The archetype swaps the standard scroll feat for a potion feat at 1st level.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive feat grant
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain Brew Potion as a bonus feat at 1st level without needing its prerequisites.
    - This feat replaces Scribe Scroll rather than adding a second item-creation bonus feat.
    - After it is granted, use the feat under normal potion-creation rules.
  - Scaling: None
  - Interactions: Functions as a normal feat and pairs naturally with Medicinal Alchemy's healing focus.
  - Edge cases: None beyond standard feat use.
  - Implementation flags:
    - Likely existing hooks: bonus feat grant at 1st level.

## Parsed source feature headings

- Medicinal Alchemy
- Brew Potion
