# Ranger - Dragon Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Dragon Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Dragon%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Predatory Deduction (Ex); Wyrm Hatred (Ex); Dragoncrafting (Ex); Undaunted (Ex); Expert Dragoncrafter (Ex); Elemental Resilience (Su)
- **Replaced / altered class features:** Track; the additional favored enemy and any bonuses to existing favored enemies gained at 5th level; the additional favored enemy and any bonuses to existing favored enemies gained at 10th level; the additional favored enemy and any bonuses to existing favored enemies gained at 15th level; the additional favored enemy and any bonuses to existing favored enemies gained at 20th level

## Replacement details

### Replaces: Track

- **Archetype feature:** Predatory Deduction (Ex)
- **Description:** Beginning at 1st level, when a dragon hunter successfully uses Survival to spot the trail of a creature of the dragon type, the hunter may attempt an immediate DC 15 Knowledge (arcana) check.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: Beginning at 1st level, when a dragon hunter successfully uses Survival to spot the trail of a creature of the dragon type, the hunter may attempt an immediate DC 15 Knowledge (arcana) check. On a success, the dragon hunter is able to deduce the species, age category, size, and color of the dragon. If the trail is less than 48 hours old, the dragon hunter gains a +2 circumstance bonus on the Knowledge check.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

### Replaces: the additional favored enemy

- **Archetype feature:** Dragoncrafting (Ex)
- **Description:** Dragon hunters are experts not only at tracking and killing dragons, but also at using dragon bodies to craft unique equipment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: Dragon hunters are experts not only at tracking and killing dragons, but also at using dragon bodies to craft unique equipment. A dragon hunter gains Dragoncrafting as a bonus feat at 5th level, even if she does not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored enemy hook, ki/monk hook.

### Replaces: any bonuses to existing favored enemies gained at 5th level

- **Archetype feature:** Dragoncrafting (Ex)
- **Description:** Dragon hunters are experts not only at tracking and killing dragons, but also at using dragon bodies to craft unique equipment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: Dragon hunters are experts not only at tracking and killing dragons, but also at using dragon bodies to craft unique equipment. A dragon hunter gains Dragoncrafting as a bonus feat at 5th level, even if she does not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored enemy hook, ki/monk hook.

### Replaces: the additional favored enemy

- **Archetype feature:** Undaunted (Ex)
- **Description:** Beginning at 10th level, a dragon hunter gains a +4 bonus on Will saves made to resist mind-affecting fear effects, Reflex saves made to avoid damage from breath weapons, Reflex saves made to avoid crush attacks, and Reflex saves made to avoid damage from tail sweep attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: Beginning at 10th level, a dragon hunter gains a +4 bonus on Will saves made to resist mind-affecting fear effects, Reflex saves made to avoid damage from breath weapons, Reflex saves made to avoid crush attacks, and Reflex saves made to avoid damage from tail sweep attacks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, favored enemy hook.

### Replaces: any bonuses to existing favored enemies gained at 10th level

- **Archetype feature:** Undaunted (Ex)
- **Description:** Beginning at 10th level, a dragon hunter gains a +4 bonus on Will saves made to resist mind-affecting fear effects, Reflex saves made to avoid damage from breath weapons, Reflex saves made to avoid crush attacks, and Reflex saves made to avoid damage from tail sweep attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: Beginning at 10th level, a dragon hunter gains a +4 bonus on Will saves made to resist mind-affecting fear effects, Reflex saves made to avoid damage from breath weapons, Reflex saves made to avoid crush attacks, and Reflex saves made to avoid damage from tail sweep attacks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, favored enemy hook.

### Replaces: the additional favored enemy

- **Archetype feature:** Expert Dragoncrafter (Ex)
- **Description:** At 15th level, a dragon hunter may take 10 on Heal and Craft skill checks to harvest dragoncraft materials and to create dragoncraft items.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a dragon hunter may take 10 on Heal and Craft skill checks to harvest dragoncraft materials and to create dragoncraft items. Additionally, the amount of time required to create a dragoncraft item is reduced by half.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, favored enemy hook, ki/monk hook.

### Replaces: any bonuses to existing favored enemies gained at 15th level

- **Archetype feature:** Expert Dragoncrafter (Ex)
- **Description:** At 15th level, a dragon hunter may take 10 on Heal and Craft skill checks to harvest dragoncraft materials and to create dragoncraft items.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a dragon hunter may take 10 on Heal and Craft skill checks to harvest dragoncraft materials and to create dragoncraft items. Additionally, the amount of time required to create a dragoncraft item is reduced by half.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, favored enemy hook, ki/monk hook.

### Replaces: the additional favored enemy

- **Archetype feature:** Elemental Resilience (Su)
- **Description:** At 20th level, a dragon hunter gains energy resistance 30 against a single energy type for 1 hour.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a dragon hunter gains energy resistance 30 against a single energy type for 1 hour. The energy types he may choose are acid, cold, electricity, and fire. He may use this ability once per day.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: any bonuses to existing favored enemies gained at 20th level

- **Archetype feature:** Elemental Resilience (Su)
- **Description:** At 20th level, a dragon hunter gains energy resistance 30 against a single energy type for 1 hour.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a dragon hunter gains energy resistance 30 against a single energy type for 1 hour. The energy types he may choose are acid, cold, electricity, and fire. He may use this ability once per day.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

## Parsed source feature headings

- Class Skills
- Predatory Deduction (Ex)
- Wyrm Hatred (Ex)
- Dragoncrafting (Ex)
- Undaunted (Ex)
- Expert Dragoncrafter (Ex)
- Elemental Resilience (Su)

