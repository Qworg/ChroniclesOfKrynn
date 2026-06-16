# Alchemist - Construct Rider

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Construct Rider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Construct%20Rider
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Craft Mount (Su); Diminished Extracts; Construct Rider Discoveries (Su)
- **Replaced / altered class features:** Brew Potion, mutagen, and the discovery gained at 4th level

## Replacement details

### Replaces: Brew Potion, mutagen
- **Archetype feature:** Craft Mount (Su)
- **Description:** A construct rider assembles a construct mount shaped like a riding animal.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: A construct rider assembles a construct mount shaped like a riding animal. A Medium alchemist can select a camel or a horse. A Small alchemist can select a pony or wolf, but can also select a boar or a dog if he’s at least 4th level. The GM may approve other animals as mounts. This construct mount acts in most ways as a druid animal companion , using the character’s alchemist level as his effective druid level. A construct mount is a construct, but uses the appropriate animal companion’s statistics, gaining Hit Dice, skills, feats, and Strength and Dexterity adjustments as the alchemist advances in level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, mutagen hook, alchemist discovery hook, animal companion hook.

### Replaces: the discovery gained at 4th level

- **Archetype feature:** Craft Mount (Su)
- **Description:** A construct rider assembles a construct mount shaped like a riding animal.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: A construct rider assembles a construct mount shaped like a riding animal. A Medium alchemist can select a camel or a horse. A Small alchemist can select a pony or wolf, but can also select a boar or a dog if he’s at least 4th level. The GM may approve other animals as mounts. This construct mount acts in most ways as a druid animal companion , using the character’s alchemist level as his effective druid level. A construct mount is a construct, but uses the appropriate animal companion’s statistics, gaining Hit Dice, skills, feats, and Strength and Dexterity adjustments as the alchemist advances in level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, mutagen hook, alchemist discovery hook, animal companion hook.

## Parsed source feature headings

- Class Skills
- Craft Mount (Su)
- Diminished Extracts
- Construct Rider Discoveries (Su)

