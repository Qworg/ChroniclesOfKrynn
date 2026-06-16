# Wizard - Spellbinder

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spellbinder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spellbinder
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spell Bond (Su); Discoveries
- **Replaced / altered class features:** arcane bond

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Spell Bond (Su)
- **Description:** At 1st level, a spellbinder selects any one spell that he knows as a bonded spell.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 17, 4.
  - Mechanics summary: At 1st level, a spellbinder selects any one spell that he knows as a bonded spell. As a full-round action, the spellbinder may replace a spell of the same or higher level as his bonded spell with his bonded spell. For example, a spellbinder who selects magic missile as his bonded spell could spend a full-round action to exchange any 1st-level or higher spell that he has prepared with magic missile . At 3rd level, and every two levels thereafter, a spellbinder may select another spell he knows and add it to his list of bonded spells, to a maximum of nine bonded spells at 17th level. Upon reaching 4th level, and every two levels thereafter, a spellbinder can choose to select a new spell as a bonded spell in place of one with which he is already bonded. In effect, the spellbinder loses the bond with the old spell (though it is still one of his spells known) in exchange for forging a spell bond with a new spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Spell Bond (Su)
- Discoveries

