# Druid - Troll Fury

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Troll Fury
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Troll%20Fury
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Inspire Fervor (Ex); Chosen Prey (Ex); Troll Fury’s Mark (Su)
- **Replaced / altered class features:** wild empathy; resist nature’s lure; venom immunity

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Inspire Fervor (Ex)
- **Description:** At 1st level, once per day as a standard action, a troll fury can chant over another troll within 30 feet, bolstering it against fear and improving its combat abilities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, once per day as a standard action, a troll fury can chant over another troll within 30 feet, bolstering it against fear and improving its combat abilities. This works like the inspire courage bard ability, but affects only one troll and lasts 1 minute. The troll fury uses her druid level as her bard level to determine the effects of this ability.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Chosen Prey (Ex)
- **Description:** At 4th level, a troll fury can select one creature type from the ranger’s favored enemy list and gains a favored enemy bonus against that creature type with an effective ranger level equal to her druid level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a troll fury can select one creature type from the ranger’s favored enemy list and gains a favored enemy bonus against that creature type with an effective ranger level equal to her druid level. This ability never grants the troll fury favored enemy bonuses against a second favored enemy creature type. A troll fury can change her favored enemy type once per week by performing a ritual that takes 1 hour to perform. If a troll fury already has a favored enemy from another class, the levels from the classes that grant favored enemies stack with this one to determine the favored enemy bonuses, and in this case she can gain other favored enemy creature types.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: venom immunity

- **Archetype feature:** Troll Fury’s Mark (Su)
- **Description:** At 9th level, each time a troll fury or her animal companion damages a creature with a natural attack, the troll fury gains a +10 insight bonus on Survival checks to track that creature for 24 hours.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, each time a troll fury or her animal companion damages a creature with a natural attack, the troll fury gains a +10 insight bonus on Survival checks to track that creature for 24 hours. The duration of this ability does not stack with itself. Each time the troll fury or her animal companion hits the target, this ability lasts for the next 24 hours.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, animal companion hook, natural attack system.

## Parsed source feature headings

- Inspire Fervor (Ex)
- Chosen Prey (Ex)
- Troll Fury’s Mark (Su)

