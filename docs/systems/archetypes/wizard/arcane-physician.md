# Wizard - Arcane Physician

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Arcane Physician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Arcane%20Physician
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Medicinal Alchemy; Brew Potion
- **Replaced / altered class features:** arcane school

## Replacement details

### Replaces: arcane school

- **Archetype feature:** Medicinal Alchemy
- **Description:** The arcane physician treats all spells of the healing subschool on the alchemist extract list as if they were on the wizard spell list for the purpose of activating magic items.
- **Mechanics:**
  - Level hooks: 8, 1.
  - Mechanics summary: The arcane physician treats all spells of the healing subschool on the alchemist extract list as if they were on the wizard spell list for the purpose of activating magic items. Additionally, he can expend a spell slot of the appropriate level to meet the spell requirements for magic item construction (including potions) as if the expended spell slot contained any alchemist spell that belongs to the healing subschool. If the spell is on both the wizard and alchemist lists, the arcane physician may expend a slot equal to the spell’s alchemist level instead of the spell’s wizard level. At 8th level, the arcane physician can expend a spell slot of 1st level or higher as a standard action to alter a potion or alchemical remedy held in hand. An alchemical remedy can become any other alchemical remedy of the same or lower price of the arcane physician’s choice. A potion can change to contain any alchemist extract of the arcane physician’s choice that belongs to the healing subschool and is of the same level as or lower than the expended spell slot.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: scribe scroll

- **Archetype feature:** Brew Potion
- **Description:** At 1st level, an arcane physician gains Brew Potion as a bonus feat.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an arcane physician gains Brew Potion as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Medicinal Alchemy
- Brew Potion

