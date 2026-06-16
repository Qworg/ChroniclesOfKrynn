# Berserker - Pack Hunter

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Pack Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Pack%20Hunter
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonus Feats; In and Out (Ex); Sympathetic Rage (Ex); Rage Powers
- **Replaced / altered class features:** Rage Powers; Trap Sense; 6th-level Rage Power

## Replacement details

### Alters: rage power

- **Archetype feature:** Bonus Feats
- **Description:** Whenever a pack hunter would gain a new rage power, she can instead select a teamwork feat.
- **Mechanics:**
  - Mechanics summary: Whenever a pack hunter would gain a new rage power, she can instead select a teamwork feat . She must still meet the prerequisites for the teamwork feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: trap sense

- **Archetype feature:** In and Out (Ex)
- **Description:** At 3rd level, a pack hunter gains a +1 dodge bonus to AC against attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, a pack hunter gains a +1 dodge bonus to AC against attacks of opportunity. This bonus increases by 1 for every 3 barbarian levels after 3rd (to a maximum bonus of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rage power normally gained at 6th level

- **Archetype feature:** Sympathetic Rage (Ex)
- **Description:** At 6th level, if an ally within 30 feet is bloodraging or raging, a pack hunter counts as raging even if knocked unconscious.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, if an ally within 30 feet is bloodraging or raging, a pack hunter counts as raging even if knocked unconscious. She has to have been raging when incapacitated to maintain her rage, and she ceases raging normally if she depletes her maximum number of rounds of rage in a day.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Bonus Feats
- In and Out (Ex)
- Sympathetic Rage (Ex)
- Rage Powers

