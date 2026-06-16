# Berserker - Dreadnought

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Dreadnought
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Dreadnought
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Dead Calm (Ex); Stead Gait (Ex); Fearless Killer (Su); Instant Dispassion (Ex)
- **Replaced / altered class features:** fast movement; indomitable will; tireless rage

## Replacement details

### Alters: rage

- **Archetype feature:** Dead Calm (Ex)
- **Description:** A dreadnought can enter a dispassionate killing spree as a free action, granting her additional combat prowess.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A dreadnought can enter a dispassionate killing spree as a free action, granting her additional combat prowess. The dreadnought gains only half the usual bonuses from her rage but takes no penalty to her AC, can use all her normal skills and effects that require concentration, and is not fatigued when her rage ends. The dreadnought cannot enter a rage for 1 minute after she ends her rage, and she cannot charge or run while under the effects of her rage.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, rage/rage-power hook, ki/monk hook.

### Replaces: fast movement

- **Archetype feature:** Stead Gait (Ex)
- **Description:** A dreadnought advances steadily, shrugging off attempts to slow her advance.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A dreadnought advances steadily, shrugging off attempts to slow her advance. The dreadnought gains a +1 bonus on saving throws and to her CMD against effects that would slow or immobilize her. This bonus increases to +2 when she gains greater rage and +3 when she gains mighty rage.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: indomitable will

- **Archetype feature:** Fearless Killer (Su)
- **Description:** Starting at 14th level, a dreadnought becomes implacable in her pursuit of slaughter.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: Starting at 14th level, a dreadnought becomes implacable in her pursuit of slaughter. While in rage, she is immune to fear effects.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, ki/monk hook.

### Replaces: tireless rage

- **Archetype feature:** Instant Dispassion (Ex)
- **Description:** At 17th level, a dreadnought can quickly turn her compassion on and off.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a dreadnought can quickly turn her compassion on and off. She can enter a rage as soon as she wants after ending a previous rage.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Dead Calm (Ex)
- Stead Gait (Ex)
- Fearless Killer (Su)
- Instant Dispassion (Ex)

