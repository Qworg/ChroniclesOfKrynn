# Wizard - Pact Wizard (HHH)

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Pact Wizard (HHH)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Pact%20Wizard%20%28HHH%29
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Effortless Magic (Ex); Patron Spells; Great Power, Greater Expense (Ex)
- **Replaced / altered class features:** Scribe Scroll; the bonus feats a wizard gains at 5th, 10th, 15th, and 20th level

## Replacement details

### Alters: the wizard's spellcasting

- **Archetype feature:** Effortless Magic (Ex)
- **Description:** Although a pact wizard still uses a spellbook to prepare his wizard spells, his close ties with his otherworldly patron allow him to do so nearly effortlessly.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Although a pact wizard still uses a spellbook to prepare his wizard spells, his close ties with his otherworldly patron allow him to do so nearly effortlessly. A pact wizard can prepare all of his spells in only 15 minutes, and his minimum preparation time is only 1 minute.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: Scribe Scroll

- **Archetype feature:** Patron Spells
- **Description:** At 1st level, a pact wizard must select a patron.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a pact wizard must select a patron. This functions like the witch class ability of the same name, except the pact wizard automatically adds his patron’s spells to his spellbook instead of to his familiar. In addition, the pact wizard can expend any prepared spell that isn’t a spell prepared using the additional spell slot the wizard receives from his arcane school in order to spontaneously cast one of his patron’s spells of the same level or lower.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the bonus feats a wizard gains at 5th, 10th, 15th
- **Archetype feature:** Great Power, Greater Expense (Ex)
- **Description:** As a pact wizard grows in power, his choice of patron begins to affect his physical body.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: As a pact wizard grows in power, his choice of patron begins to affect his physical body. At 5th level, the pact wizard chooses one oracle curse, using 1/2 his character level as his effective oracle level when determining the effects of this curse. If an oracle curse would add spells to the oracle’s list of spells known, the pact wizard instead add those spells to the wizard’s spell list as well as to his spellbook. At 10th level, the pact wizard can invoke his patron’s power to roll twice and take the better result when attempting any caster level check, concentration check, initiative check, or saving throw. He can activate this ability as a free action before attempting the check, even if it isn’t his turn. He can use this ability a number of times per day equal to 3 + 1/2 his Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: 20th level

- **Archetype feature:** Great Power, Greater Expense (Ex)
- **Description:** As a pact wizard grows in power, his choice of patron begins to affect his physical body.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: As a pact wizard grows in power, his choice of patron begins to affect his physical body. At 5th level, the pact wizard chooses one oracle curse, using 1/2 his character level as his effective oracle level when determining the effects of this curse. If an oracle curse would add spells to the oracle’s list of spells known, the pact wizard instead add those spells to the wizard’s spell list as well as to his spellbook. At 10th level, the pact wizard can invoke his patron’s power to roll twice and take the better result when attempting any caster level check, concentration check, initiative check, or saving throw. He can activate this ability as a free action before attempting the check, even if it isn’t his turn. He can use this ability a number of times per day equal to 3 + 1/2 his Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Effortless Magic (Ex)
- Patron Spells
- Great Power, Greater Expense (Ex)

