# Bard - Faith Singer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Faith Singer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Faith%20Singer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Faithful; Devout Spell Knowledge (Su)
- **Replaced / altered class features:** versatile performance

## Replacement details

### Replaces: versatile performance

- **Archetype feature:** Devout Spell Knowledge (Su)
- **Description:** At 2nd level, a faith singer can select one domain from among those belonging to his deity.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 1, 6, 5.
  - Mechanics summary: At 2nd level, a faith singer can select one domain from among those belonging to his deity. Once per day as a spell-like ability using his bard level as his caster level, he can cast the 1st-level domain spell while giving a bardic performance. At 6th level, and every 4 bard levels thereafter, he can similarly cast the next-higher domain spell as a spell-like ability (to a maximum of the 5th-level domain spell at bard level 18th). He can use each spell-like ability only once per day.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook, bardic performance hook.

## Parsed source feature headings

- Faithful
- Devout Spell Knowledge (Su)

