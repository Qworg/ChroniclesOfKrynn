# Wizard - Cruoromancer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Cruoromancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Cruoromancer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Blood Infusion (Su); Blood Command (Su); Blood Desecration (Su); Blood Ability (Su); Perfect Infusion (Su)
- **Replaced / altered class features:** arcane bond; the 5th-level wizard bonus feat; the 10th-level wizard bonus feat; the 15th-level wizard bonus feat; the 20th-level wizard bonus spell

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Blood Infusion (Su)
- **Description:** When a cruoromancer casts a spell of the necromancy school, he can opt to infuse that spell with his undead-tainted blood as a swift action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: When a cruoromancer casts a spell of the necromancy school, he can opt to infuse that spell with his undead-tainted blood as a swift action. As he increases in level, the power and effects of such infusions become more potent. Each time a cruoromancer uses blood infusion, he drains a portion of his own blood either by cutting himself with a blade or by opening a scab from a previous wound. When he does this, he takes an amount of damage equal to 1d4 + the level of the spell being infused. A cruoromancer can only affect a spell with a single type of blood infusion. At 1st level, he can infuse his necromancy spells in either of the following ways.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.

### Replaces: the 5th-level wizard bonus feat

- **Archetype feature:** Blood Command (Su)
- **Description:** At 5th level, a cruoromancer can control up to 5 Hit Dice worth of undead creatures per caster level instead of the normal 4 Hit Dice of undead when casting the animate dead spell.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a cruoromancer can control up to 5 Hit Dice worth of undead creatures per caster level instead of the normal 4 Hit Dice of undead when casting the animate dead spell. He also gains the following blood infusion ability. Commanding Infusion : When using this infusion with animate dead, the cruoromancer can create a number of Hit Dice of undead equal to three times his caster level instead of twice his caster level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Blood Desecration (Su)
- **Description:** At 10th level, a cruoromancer gains the following blood infusion.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a cruoromancer gains the following blood infusion. Desecrating Infusion : When the cruoromancer uses this infusion, he can choose to center a desecrate effect on himself or a single target of the spell modified by this infusion (he chooses upon casting). This effect is like the desecrate spell, but lasts for 1 minute per caster level of the cruoromancer, and does not interact with altars, shrines, or permanent fixtures that boost the desecrate effect.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the 15th-level wizard bonus feat

- **Archetype feature:** Blood Ability (Su)
- **Description:** At 15th level, a cruoromancer can choose to scry through a single undead creature he created with a spell modified by a commanding infusion.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a cruoromancer can choose to scry through a single undead creature he created with a spell modified by a commanding infusion. The undead creature is treated as if imbued with an arcane eye spell (caster level equal to the cruoromancer’s wizard level).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the 20th-level wizard bonus spell

- **Archetype feature:** Perfect Infusion (Su)
- **Description:** At 20th level, a cruoromancer can use his blood infusions without taking damage.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a cruoromancer can use his blood infusions without taking damage.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Blood Infusion (Su)
- Blood Command (Su)
- Blood Desecration (Su)
- Blood Ability (Su)
- Perfect Infusion (Su)

