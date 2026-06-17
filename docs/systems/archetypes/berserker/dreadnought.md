# Berserker - Dreadnought

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Dreadnought
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Dreadnought
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Dead Calm (Ex); Stead Gait (Ex); Fearless Killer (Su); Instant Dispassion (Ex)
- **Replaced / altered class features:** fast movement; indomitable will; tireless rage

## Implementation details

### Alters: rage

- **Archetype feature:** Dead Calm (Ex)
- **Description:** A dreadnought can enter a dispassionate killing spree as a free action, granting her additional combat prowess.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dreadnought can enter a dispassionate killing spree as a free action, granting her additional combat prowess. The dreadnought gains only half the usual bonuses from her rage but takes no penalty to her AC, can use all her normal skills and effects that require concentration, and is not fatigued when her rage ends. The dreadnought cannot enter a rage for 1 minute after she ends her rage, and she cannot charge or run while under the effects of her rage.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: fast movement

- **Archetype feature:** Stead Gait (Ex)
- **Description:** A dreadnought advances steadily, shrugging off attempts to slow her advance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dreadnought advances steadily, shrugging off attempts to slow her advance. The dreadnought gains a +1 bonus on saving throws and to her CMD against effects that would slow or immobilize her. This bonus increases to +2 when she gains greater rage and +3 when she gains mighty rage.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: indomitable will

- **Archetype feature:** Fearless Killer (Su)
- **Description:** Starting at 14th level, a dreadnought becomes implacable in her pursuit of slaughter.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** Starting at 14th level, a dreadnought becomes implacable in her pursuit of slaughter. While in rage, she is immune to fear effects.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.

### Replaces: tireless rage

- **Archetype feature:** Instant Dispassion (Ex)
- **Description:** At 17th level, a dreadnought can quickly turn her compassion on and off.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a dreadnought can quickly turn her compassion on and off. She can enter a rage as soon as she wants after ending a previous rage.
- **Implementation flags:**
  - rage/rage power subsystem.

## Parsed source feature headings

- Dead Calm (Ex)
- Stead Gait (Ex)
- Fearless Killer (Su)
- Instant Dispassion (Ex)
