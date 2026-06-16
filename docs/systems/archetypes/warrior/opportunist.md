# Warrior - Opportunist

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Opportunist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Opportunist
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Duplicitous (Ex); Underhanded (Ex); Cunning Edge (Ex); Alchemical Onslaught (Ex)
- **Replaced / altered class features:** bravery and alters the fighter’s class skills; the bonus feat gained at 1st level; the bonus feats gained at 4th, 8th, 12th, 16th, and 20th levels; weapon training 1

## Replacement details

### Replaces: bravery

- **Archetype feature:** Duplicitous (Ex)
- **Description:** An opportunist adds Bluff, Sense Motive, Sleight of Hand, and Stealth to his list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An opportunist adds Bluff, Sense Motive, Sleight of Hand, and Stealth to his list of class skills. He gains 2 bonus skill ranks at each level, which must be allocated among these skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: alters the fighter’s class skills

- **Archetype feature:** Duplicitous (Ex)
- **Description:** An opportunist adds Bluff, Sense Motive, Sleight of Hand, and Stealth to his list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An opportunist adds Bluff, Sense Motive, Sleight of Hand, and Stealth to his list of class skills. He gains 2 bonus skill ranks at each level, which must be allocated among these skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Underhanded (Ex)
- **Description:** An opportunist gains Improved Dirty Trick APG as a bonus feat at 1st level even if he does not meet the prerequisites.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: An opportunist gains Improved Dirty Trick APG as a bonus feat at 1st level even if he does not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feats gained at 4th, 8th, 12th, 16th
- **Archetype feature:** Cunning Edge (Ex)
- **Description:** At 4th level, an opportunist can select an edge from those listed below.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an opportunist can select an edge from those listed below. Every 4 levels beyond 4th, he can select one additional edge, to a maximum of five at level 20. Alchemical Admixture (Ex) : As a full round action that provokes an attack of opportunity, the opportunist can combine two alchemical weapons into a single vial. The mixture becomes inert after 1 hour. The opportunist can use this ability once per day for every 4 fighter levels he has. Alchemical Refinement (Ex) : The opportunist increases the save DC of any alchemical item he crafts by 1 for every 3 fighter levels he has.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, alchemist bomb hook.

### Replaces: 20th levels

- **Archetype feature:** Cunning Edge (Ex)
- **Description:** At 4th level, an opportunist can select an edge from those listed below.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an opportunist can select an edge from those listed below. Every 4 levels beyond 4th, he can select one additional edge, to a maximum of five at level 20. Alchemical Admixture (Ex) : As a full round action that provokes an attack of opportunity, the opportunist can combine two alchemical weapons into a single vial. The mixture becomes inert after 1 hour. The opportunist can use this ability once per day for every 4 fighter levels he has. Alchemical Refinement (Ex) : The opportunist increases the save DC of any alchemical item he crafts by 1 for every 3 fighter levels he has.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, alchemist bomb hook.

### Replaces: weapon training 1

- **Archetype feature:** Alchemical Onslaught (Ex)
- **Description:** At 5th level, an opportunist gains a +1 bonus on attack rolls with alchemical weapons and bombs and can add his Intelligence modifier to damage rolls for splash weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an opportunist gains a +1 bonus on attack rolls with alchemical weapons and bombs and can add his Intelligence modifier to damage rolls for splash weapons. He can draw an alchemical weapon as a free action once per round.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, alchemist bomb hook.

## Parsed source feature headings

- Duplicitous (Ex)
- Underhanded (Ex)
- Cunning Edge (Ex)
- Alchemical Onslaught (Ex)

