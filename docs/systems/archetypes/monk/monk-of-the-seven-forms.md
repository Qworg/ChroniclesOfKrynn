# Monk - Monk of the Seven Forms

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Seven Forms
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Seven%20Forms
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonus Feats; Lightning Finish (Ex); Endurance (Ex); Sirocco Fury (Su)
- **Replaced / altered class features:** stunning fist; maneuver training; abundant step and quivering palm

## Replacement details

### Replaces: stunning fist

- **Archetype feature:** Lightning Finish (Ex)
- **Description:** At 1st level, as an immediate action, a monk of the seven forms can make a single attack with a manufactured light or one-handed slashing weapon he is currently wielding against any target he has successfully hit at least twice with his unarmed strike during his turn.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 4, 8, 12.
  - Mechanics summary: At 1st level, as an immediate action, a monk of the seven forms can make a single attack with a manufactured light or one-handed slashing weapon he is currently wielding against any target he has successfully hit at least twice with his unarmed strike during his turn. This attack deals normal damage but without the normal Strength bonus to damage. At 4th level, he can take a 5-foot step before or after performing a lightning finish so long as he ends adjacent to his target, though if he takes this step, he cannot perform a 5-foot step during his next turn. At 8th level, he applies his full Strength bonus to his damage roll for the extra attack, even if he made the attack with an offhand weapon or with a weapon wielded in two hands. At 12th level, if he hit the target at least three times with his unarmed strike during his turn, taking the 5-foot step granted by lightning finish does not prevent him from taking a 5-foot step during his next turn. A monk of the seven forms can use this ability a number of times per day equal to his monk level, but no more than once per round.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: maneuver training

- **Archetype feature:** Endurance (Ex)
- **Description:** At 3rd level, a monk of the seven forms gains Endurance as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a monk of the seven forms gains Endurance as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: abundant step and quivering palm

- **Archetype feature:** Sirocco Fury (Su)
- **Description:** At 11th level, a monk of the seven forms can spend 2 ki points as a full-round action to enter a meditative trance that replicates the spell dance of a hundred cuts ( Pathfinder RPG Ultimate Magic 215), using his monk level as his caster level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11, 15.
  - Mechanics summary: At 11th level, a monk of the seven forms can spend 2 ki points as a full-round action to enter a meditative trance that replicates the spell dance of a hundred cuts ( Pathfinder RPG Ultimate Magic 215), using his monk level as his caster level. Unlike the spell, a monk of the seven forms must both move 10 feet and make a melee attack each round after he begins this trance to prevent the effect from ending. At 15th level, he can instead spend 3 ki points when using this ability to make his trance replicate dance of a thousand cuts ( Ultimate Magic 216) with the same limitations.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Bonus Feats
- Lightning Finish (Ex)
- Endurance (Ex)
- Sirocco Fury (Su)

