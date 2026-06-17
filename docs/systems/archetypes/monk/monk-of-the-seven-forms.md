# Monk - Monk of the Seven Forms

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Seven Forms
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Seven%20Forms
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonus Feats; Lightning Finish (Ex); Endurance (Ex); Sirocco Fury (Su)
- **Replaced / altered class features:** stunning fist; maneuver training; abundant step and quivering palm

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A monk of the seven forms loses the ability to take Improved Disarm, Improved Feint, Improved Grapple, and Improved Trip as bonus feats.
- **Detailed mechanics:**
  - **Level hooks:** 6, 10.
  - **Rules text to implement:** A monk of the seven forms loses the ability to take Improved Disarm, Improved Feint, Improved Grapple, and Improved Trip as bonus feats. He adds Nimble Moves to his list of bonus feats. At 6th level, he also adds Acrobatic Steps and Wind Stance to his list of bonus feats. At 10th level, he adds Lightning Stance to his list of bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: stunning fist

- **Archetype feature:** Lightning Finish (Ex)
- **Description:** At 1st level, as an immediate action, a monk of the seven forms can make a single attack with a manufactured light or one-handed slashing weapon he is currently wielding against any target he has successfully hit at least twice with his unarmed strike during his turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 4, 8, 12.
  - **Rules text to implement:** At 1st level, as an immediate action, a monk of the seven forms can make a single attack with a manufactured light or one-handed slashing weapon he is currently wielding against any target he has successfully hit at least twice with his unarmed strike during his turn. This attack deals normal damage but without the normal Strength bonus to damage. At 4th level, he can take a 5-foot step before or after performing a lightning finish so long as he ends adjacent to his target, though if he takes this step, he cannot perform a 5-foot step during his next turn. At 8th level, he applies his full Strength bonus to his damage roll for the extra attack, even if he made the attack with an offhand weapon or with a weapon wielded in two hands. At 12th level, if he hit the target at least three times with his unarmed strike during his turn, taking the 5-foot step granted by lightning finish does not prevent him from taking a 5-foot step during his next turn. A monk of the seven forms can use this ability a number of times per day equal to his monk level, but no more than once per round.
- **Implementation flags:**
  - ki subsystem.

### Replaces: maneuver training

- **Archetype feature:** Endurance (Ex)
- **Description:** At 3rd level, a monk of the seven forms gains Endurance as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a monk of the seven forms gains Endurance as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: abundant step and quivering palm

- **Archetype feature:** Sirocco Fury (Su)
- **Description:** At 11th level, a monk of the seven forms can spend 2 ki points as a full-round action to enter a meditative trance that replicates the spell dance of a hundred cuts ( Pathfinder RPG Ultimate Magic 215), using his monk level as his caster level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11, 15.
  - **Rules text to implement:** At 11th level, a monk of the seven forms can spend 2 ki points as a full-round action to enter a meditative trance that replicates the spell dance of a hundred cuts ( Pathfinder RPG Ultimate Magic 215), using his monk level as his caster level. Unlike the spell, a monk of the seven forms must both move 10 feet and make a melee attack each round after he begins this trance to prevent the effect from ending. At 15th level, he can instead spend 3 ki points when using this ability to make his trance replicate dance of a thousand cuts ( Ultimate Magic 216) with the same limitations.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Bonus Feats
- Lightning Finish (Ex)
- Endurance (Ex)
- Sirocco Fury (Su)
