# Warrior - Opportunist

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Opportunist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Opportunist
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Duplicitous (Ex); Underhanded (Ex); Cunning Edge (Ex); Alchemical Onslaught (Ex)
- **Replaced / altered class features:** bravery and alters the fighter’s class skills; the bonus feat gained at 1st level; the bonus feats gained at 4th, 8th, 12th, 16th, and 20th levels; weapon training 1

## Implementation details

### Replaces: bravery and alters the fighter’s class skills

- **Archetype feature:** Duplicitous (Ex)
- **Description:** An opportunist adds Bluff, Sense Motive, Sleight of Hand, and Stealth to his list of class skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An opportunist adds Bluff, Sense Motive, Sleight of Hand, and Stealth to his list of class skills. He gains 2 bonus skill ranks at each level, which must be allocated among these skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Underhanded (Ex)
- **Description:** An opportunist gains Improved Dirty Trick APG as a bonus feat at 1st level even if he does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** An opportunist gains Improved Dirty Trick APG as a bonus feat at 1st level even if he does not meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feats gained at 4th, 8th, 12th, 16th, and 20th levels

- **Archetype feature:** Cunning Edge (Ex)
- **Description:** At 4th level, an opportunist can select an edge from those listed below.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an opportunist can select an edge from those listed below. Every 4 levels beyond 4th, he can select one additional edge, to a maximum of five at level 20. Alchemical Admixture (Ex) : As a full round action that provokes an attack of opportunity, the opportunist can combine two alchemical weapons into a single vial. When thrown as a splash weapon, the mixture has the effects of both component substances and targets are affected as if hit by both. The mixture becomes inert after 1 hour. Combining identical alchemical weapons has no effect. The opportunist can use this ability once per day for every 4 fighter levels he has. Alchemical Refinement (Ex) : The opportunist increases the save DC of any alchemical item he crafts by 1 for every 3 fighter levels he has. Doing so increases the raw material cost to craft that item by 10 gp for every +1 increase. This bonus applies only when the opportunist uses the crafted alchemical item himself; it functions as a normal item of its type for all other users. Bombs (Ex) : The opportunist can make a number of bombs per day equal to his Intelligence modifier (minimum 1). These bombs act as alchemist’s bombs and deal 1d6 points of fire damage, plus an additional 1d6 points for every 3 fighter levels the opportunist has. Clouded Shift (Ex) : As part of the standard action to ignite a smokestick or smoke pellet ( Pathfinder RPG Ultimate Equipment 105 ), the opportunist can take a 5-foot step, even if he has already moved this round. He can use this ability only if he has not already taken a 5-foot step this round, and only if the smoke from his alchemical tool conceals his starting location. Poison Use (Ex) : The opportunist no longer risks poisoning himself when applying poison to a weapon. Rogue Talent (Ex) : The opportunist can select one of the following rogue talents for which he qualifies, treating his fighter level as his rogue level: deft palm UC, fast fingers APG, fast stealth, honeyed words APG, lasting poison APG, minor magic, or quick trapsmith APG. The opportunist can select this edge multiple times.
- **Implementation flags:**
  - poison subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: weapon training 1

- **Archetype feature:** Alchemical Onslaught (Ex)
- **Description:** At 5th level, an opportunist gains a +1 bonus on attack rolls with alchemical weapons and bombs and can add his Intelligence modifier to damage rolls for splash weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, an opportunist gains a +1 bonus on attack rolls with alchemical weapons and bombs and can add his Intelligence modifier to damage rolls for splash weapons. He can draw an alchemical weapon as a free action once per round.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Duplicitous (Ex)
- Underhanded (Ex)
- Cunning Edge (Ex)
- Alchemical Onslaught (Ex)
