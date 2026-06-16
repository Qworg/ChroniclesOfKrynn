# Bard - Prankster

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Prankster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Prankster
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Swap (Ex)
- **Replaced / altered class features:** fascinate; the suggestion ability; the mass suggestion ability; lore master

## Replacement details

### Replaces: fascinate

- **Archetype feature:** Bardic Performance
- **Description:** A prankster’s bardic performance functions like a bard’s, but some of its performances are exchanged for those listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 18.
  - Mechanics summary: A prankster’s bardic performance functions like a bard’s, but some of its performances are exchanged for those listed below. Mock (Su) : At 1st level, the prankster can use his performance to cause one or more creatures to become furious with him. Each creature to be mocked must be within 90 feet, able to see, hear, and understand the prankster, and capable of paying attention to him. The prankster must also be able to see the creatures affected. For every three levels the prankster has attained beyond 1st, he can target one additional creature with this ability. Each creature within range receives a Will save (DC 10 + 1/2 the prankster’s level + the prankster’s Charisma modifier) to negate the effect.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, saving throw hook, save DC calculation, spellcasting/spell-list hook, bardic performance hook, ki/monk hook.

### Replaces: the suggestion ability

- **Archetype feature:** Bardic Performance
- **Description:** A prankster’s bardic performance functions like a bard’s, but some of its performances are exchanged for those listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 18.
  - Mechanics summary: A prankster’s bardic performance functions like a bard’s, but some of its performances are exchanged for those listed below. Mock (Su) : At 1st level, the prankster can use his performance to cause one or more creatures to become furious with him. Each creature to be mocked must be within 90 feet, able to see, hear, and understand the prankster, and capable of paying attention to him. The prankster must also be able to see the creatures affected. For every three levels the prankster has attained beyond 1st, he can target one additional creature with this ability. Each creature within range receives a Will save (DC 10 + 1/2 the prankster’s level + the prankster’s Charisma modifier) to negate the effect.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, saving throw hook, save DC calculation, spellcasting/spell-list hook, bardic performance hook, ki/monk hook.

### Replaces: the mass suggestion ability

- **Archetype feature:** Bardic Performance
- **Description:** A prankster’s bardic performance functions like a bard’s, but some of its performances are exchanged for those listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 18.
  - Mechanics summary: A prankster’s bardic performance functions like a bard’s, but some of its performances are exchanged for those listed below. Mock (Su) : At 1st level, the prankster can use his performance to cause one or more creatures to become furious with him. Each creature to be mocked must be within 90 feet, able to see, hear, and understand the prankster, and capable of paying attention to him. The prankster must also be able to see the creatures affected. For every three levels the prankster has attained beyond 1st, he can target one additional creature with this ability. Each creature within range receives a Will save (DC 10 + 1/2 the prankster’s level + the prankster’s Charisma modifier) to negate the effect.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, saving throw hook, save DC calculation, spellcasting/spell-list hook, bardic performance hook, ki/monk hook.

### Replaces: lore master

- **Archetype feature:** Swap (Ex)
- **Description:** A prankster can steal an object from a creature and replace it with another object of the same size or smaller that the prankster has in his hand.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A prankster can steal an object from a creature and replace it with another object of the same size or smaller that the prankster has in his hand. This functions as the steal combat maneuver, but the prankster does not provoke an attack of opportunity, and may use his Sleight of Hand check in place of his combat maneuver check.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Bardic Performance
- Swap (Ex)

