# Ranger - Skirmisher

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Skirmisher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Skirmisher
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hunter’s Tricks
- **Replaced / altered class features:** the ranger’s spells class feature

## Replacement details

### Replaces: the ranger’s spells class feature

- **Archetype feature:** Hunter’s Tricks
- **Description:** At 5th level, a skirmisher ranger learns the use of hunter’s tricks, which typically grant a boon or bonus to the ranger or a nearby ally.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 7.
  - Mechanics summary: At 5th level, a skirmisher ranger learns the use of hunter’s tricks, which typically grant a boon or bonus to the ranger or a nearby ally. At 5th level, the ranger learns one trick, selected from the list below. At 7th level, and every two levels thereafter, he learns another trick. A ranger can use these tricks a total number of times per day equal to 1/2 his ranger level + his Wisdom modifier. Tricks are usually swift actions, but sometimes move or free actions that modify a standard action, usually an attack action. Once a trick is chosen, it can’t be retrained.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, animal companion hook, ki/monk hook.

## Parsed source feature headings

- Hunter’s Tricks

