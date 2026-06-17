# Bard - Disciple of the Forked Tongue

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Disciple of the Forked Tongue
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Disciple%20of%20the%20Forked%20Tongue
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Serpent of the Mind (Su)
- **Replaced / altered class features:** Inspire Courage; Inspire Greatness; Versatile Performance

## Implementation details

### Replaces: inspire courage

- **Archetype feature:** Bardic Performance
- **Description:** A disciple of the forked tongue gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 9, 18.
  - **Rules text to implement:** A disciple of the forked tongue gains the following bardic performances. Discordant Spiral (Su) : The disciple can disrupt the thought processes of enemies who hear his performance, causing them to take a –1 penalty on saves against mind-affecting and curse effects and a –2 penalty on concentration checks. These penalties increase by 1 at 5th level and every 6 levels thereafter. Venomous Whispers (Su) : At 9th level, a disciple of the forked tongue can use his performance to sow distrust into the mind of an enemy within 30 feet. An affected creature treats its allies as hostile for the purposes of their spells and abilities—it is never considered a willing target of spells and must attempt saving throws against them when possible, and it gains no benefit from allied bardic performances and other abilities that specifically target allies. For every 3 levels a disciple of the forked tongue has beyond 9th, he can target one additional enemy while using this performance (up to a maximum of four at 18th level).
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - curse subsystem.

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** A disciple of the forked tongue gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 9, 18.
  - **Rules text to implement:** A disciple of the forked tongue gains the following bardic performances. Discordant Spiral (Su) : The disciple can disrupt the thought processes of enemies who hear his performance, causing them to take a –1 penalty on saves against mind-affecting and curse effects and a –2 penalty on concentration checks. These penalties increase by 1 at 5th level and every 6 levels thereafter. Venomous Whispers (Su) : At 9th level, a disciple of the forked tongue can use his performance to sow distrust into the mind of an enemy within 30 feet. An affected creature treats its allies as hostile for the purposes of their spells and abilities—it is never considered a willing target of spells and must attempt saving throws against them when possible, and it gains no benefit from allied bardic performances and other abilities that specifically target allies. For every 3 levels a disciple of the forked tongue has beyond 9th, he can target one additional enemy while using this performance (up to a maximum of four at 18th level).
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - curse subsystem.

### Replaces: versatile performance

- **Archetype feature:** Serpent of the Mind (Su)
- **Description:** A disciple of the forked tongue can add one spell with the curse descriptor from the spell list of any spellcasting class to his list of spells known at 2nd level and every 4 levels thereafter.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** A disciple of the forked tongue can add one spell with the curse descriptor from the spell list of any spellcasting class to his list of spells known at 2nd level and every 4 levels thereafter.
- **Implementation flags:**
  - curse subsystem.
  - archetype spell-list override.

## Parsed source feature headings

- Bardic Performance
- Serpent of the Mind (Su)
