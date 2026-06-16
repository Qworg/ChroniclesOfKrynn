# Wizard - Spell Sage

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spell Sage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spell%20Sage
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Focused Spells (Su); Spell Study (Su)
- **Replaced / altered class features:** arcane bond; arcane school

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Focused Spells (Su)
- **Description:** At 1st level, once per day the spell sage’s understanding of spells allows him to increase his caster level by 4 for a single spell cast.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8, 16.
  - Mechanics summary: At 1st level, once per day the spell sage’s understanding of spells allows him to increase his caster level by 4 for a single spell cast. He can do this twice per day at 8th level, and three times per day at 16th level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: arcane school

- **Archetype feature:** Spell Study (Su)
- **Description:** At 2nd level, the sage’s understanding of the spells of bards, clerics, and druids is so great that he can use his own magic in an inefficient, roundabout way to duplicate those classes’ spells.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 1, 6, 16.
  - Mechanics summary: At 2nd level, the sage’s understanding of the spells of bards, clerics, and druids is so great that he can use his own magic in an inefficient, roundabout way to duplicate those classes’ spells. Once per day, a spell sage can spontaneously cast any spell on the bard, cleric, or druid spell list as if it were a wizard spell he knew and had prepared. Casting the spell requires the spell sage to spend 1 full round per spell level of the desired spell (if the spell is on multiple spell lists indicated above, using the lowest level from among those lists) and requires expending two prepared spells of that spell level or higher; if the spell’s casting time is normally 1 full round or longer, this is added to the spell sage’s... For example, if a spell sage wants to use spell study to cast cure light wounds (cleric spell level 1st), he must spend 2 full rounds casting and expend two prepared wizard spells of 1st level or higher. At 6th level and every 5 levels thereafter, a spell sage can use this ability an additional time per day (to a maximum of four times per day at 16th level).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Focused Spells (Su)
- Spell Study (Su)

