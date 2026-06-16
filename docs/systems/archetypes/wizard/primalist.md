# Wizard - Primalist

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Primalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Primalist
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Primal Magic (Su); Enhance Primal Magic Event (Su); Primal Surge (Su)
- **Replaced / altered class features:** arcane bond; the wizard bonus feat acquired at 5th level; the wizard bonus feat acquired at 10th level

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Primal Magic (Su)
- **Description:** At 1st level, a primalist may attempt to channel primal magic as a swift action to cast a prepared spell without losing that spell from its spell slot.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 20.
  - Mechanics summary: At 1st level, a primalist may attempt to channel primal magic as a swift action to cast a prepared spell without losing that spell from its spell slot. Essentially, a primalist is forcing primal magic into the world and attempting to shape it into a specific spell effect. To use this ability, she casts the spell as she would normally, but as the spell’s effects take place, she makes a concentration check (DC 20 + double the spell’s level). If she fails this check, she expends the spell normally as if she had cast it, but its actual effects are replaced by a primal magic event with a CR equal to her caster level and she is staggered for 1 round per level of the spell she was attempting to cast. If she makes this check, she casts the spell normally and it is not expended from her prepared spell slot, allowing her to cast that spell again at a later point. You may use primal magic in this manner once per day.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.

### Replaces: the wizard bonus feat acquired at 5th level

- **Archetype feature:** Enhance Primal Magic Event (Su)
- **Description:** At 5th level, when a primalist triggers a primal magic event, as a swift action she can increase or decrease its CR by 1.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, when a primalist triggers a primal magic event, as a swift action she can increase or decrease its CR by 1. If she makes a concentration check (DC = 15 + the primal magic event’s CR), she can instead increase or decrease the CR by 2. She can choose to use this ability after she determines what primal magic event she triggers, but before she resolves the effects of that event.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation.

### Replaces: the wizard bonus feat acquired at 10th level

- **Archetype feature:** Primal Surge (Su)
- **Description:** At 10th level, whenever a primalist triggers a primal magic event, she rolls the percentile dice twice to determine the event that occurs and chooses which one of the two possible events occurs.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, whenever a primalist triggers a primal magic event, she rolls the percentile dice twice to determine the event that occurs and chooses which one of the two possible events occurs. She becomes resistant to the effects of primal magic events. Anytime an event would affect her, the GM rolls 1d20 + the event’s CR against a DC of 11 + her wizard level. If this roll fails, the event does not affect her, similar to a creature with spell resistance ignoring magical effects with an SR check. If the primal magic event is duplicating the effects of a spell that does not allow spell resistance (such as create pit ), this resistance does not apply.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook.

## Parsed source feature headings

- Primal Magic (Su)
- Enhance Primal Magic Event (Su)
- Primal Surge (Su)

