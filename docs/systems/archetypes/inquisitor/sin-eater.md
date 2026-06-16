# Inquisitor - Sin Eater

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Sin Eater
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Sin%20Eater
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Eat Sin (Sp); Speak with Dead (Sp); Burden of Sin (Sp)
- **Replaced / altered class features:** an inquisitor’s domain; the bonus teamwork feat gained at 6th level; exploit weakness

## Replacement details

### Replaces: an inquisitor’s domain

- **Archetype feature:** Eat Sin (Sp)
- **Description:** At 1st level, as a free action, when the sin eater inquisitor kills an enemy, she may eat the sins of that enemy by spending 1 minute adjacent to its corpse.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1, 5, 9, 13, 8.
  - Mechanics summary: At 1st level, as a free action, when the sin eater inquisitor kills an enemy, she may eat the sins of that enemy by spending 1 minute adjacent to its corpse. This provokes attacks of opportunity. The inquisitor can rush this ritual, performing it as a full-round action that provokes attacks of opportunity, but she only gains half the normal benefit (see below). Eating the enemy’s sins heals the inquisitor of a number of hit points of damage equal to 1d8 + her inquisitor level (maximum +5). The enemy must have been killed by the sin eater within the last hour, and it must have had at least as many Hit Dice as half the inquisitor’s level. The inquisitor can use this ability once for each enemy she kills.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook, ki/monk hook.

### Replaces: the bonus teamwork feat gained at 6th level

- **Archetype feature:** Speak with Dead (Sp)
- **Description:** At 6th level, when the inquisitor eats an enemy’s sins, within 10 minutes of doing so, she can ask the remnants of the enemy’s soul questions as if using speak with dead , with a caster level equal to her inquisitor level.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, when the inquisitor eats an enemy’s sins, within 10 minutes of doing so, she can ask the remnants of the enemy’s soul questions as if using speak with dead , with a caster level equal to her inquisitor level. She does not need the enemy’s corpse to use this ability (she can eat sin, move away from the corpse, then use speak with dead ), though the soul gets a saving throw just as a corpse would.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: exploit weakness

- **Archetype feature:** Burden of Sin (Sp)
- **Description:** At 14th level, a sin eater may spend a full-round action to transfer one harmful affliction, condition, or spell effect from another creature to herself (this includes curses, possessions, and permanent effects such as petrification, or any condition that break enchantment can end or reverse).
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a sin eater may spend a full-round action to transfer one harmful affliction, condition, or spell effect from another creature to herself (this includes curses, possessions, and permanent effects such as petrification, or any condition that break enchantment can end or reverse). The effect to be transferred is chosen by the sin eater and affects her as if she were the original target, continuing its duration (if any) and preventing any further effect on the original bearer. The sin eater can use this ability as often as desired, even using it multiple times on the same creature.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Eat Sin (Sp)
- Speak with Dead (Sp)
- Burden of Sin (Sp)

