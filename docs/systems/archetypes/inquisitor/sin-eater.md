# Inquisitor - Sin Eater

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Sin Eater
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Sin%20Eater
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Eat Sin (Sp); Speak with Dead (Sp); Burden of Sin (Sp)
- **Replaced / altered class features:** an inquisitor’s domain; the bonus teamwork feat gained at 6th level; exploit weakness

## Implementation details

### Replaces: an inquisitor’s domain

- **Archetype feature:** Eat Sin (Sp)
- **Description:** At 1st level, as a free action, when the sin eater inquisitor kills an enemy, she may eat the sins of that enemy by spending 1 minute adjacent to its corpse.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 1, 5, 9, 13, 8.
  - **Rules text to implement:** At 1st level, as a free action, when the sin eater inquisitor kills an enemy, she may eat the sins of that enemy by spending 1 minute adjacent to its corpse. This provokes attacks of opportunity. The inquisitor can rush this ritual, performing it as a full-round action that provokes attacks of opportunity, but she only gains half the normal benefit (see below). Eating the enemy’s sins heals the inquisitor of a number of hit points of damage equal to 1d8 + her inquisitor level (maximum +5). The enemy must have been killed by the sin eater within the last hour, and it must have had at least as many Hit Dice as half the inquisitor’s level. The inquisitor can use this ability once for each enemy she kills. This ability has no effect on mindless creatures or those with Intelligence 2 or less. At 5th level, the healing increases to 2d8 plus her inquisitor level (maximum +10); it increases to 3d8 + her inquisitor level (maximum +15) at 9th level and to 4d8 + her inquisitor level (maximum +20) at 13th level. In some faiths, this “eating” is a purely symbolic act, while in others, the inquisitor must eat a small amount of food and water as part of the ritual. A few extreme faiths actually require the inquisitor to eat some of the body of the slain enemy. At 8th level, when a sin eater eats the sins of a creature that would rise as an undead (such as someone slain by a shadow, spectre, or vampire), the sin eater may choose to accept 1 temporary negative level to absorb the taint in the corpse, preventing it from rising as an undead. This negative level can be removed with the appropriate magic, though it automatically expires after 24 hours, and never becomes a permanent negative level. At the GM’s discretion, this ability may prevent a ghost from using its rejuvenation ability.
- **Implementation flags:**
  - domain system.
  - ki subsystem.

### Replaces: the bonus teamwork feat gained at 6th level

- **Archetype feature:** Speak with Dead (Sp)
- **Description:** At 6th level, when the inquisitor eats an enemy’s sins, within 10 minutes of doing so, she can ask the remnants of the enemy’s soul questions as if using speak with dead, with a caster level equal to her inquisitor level.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, when the inquisitor eats an enemy’s sins, within 10 minutes of doing so, she can ask the remnants of the enemy’s soul questions as if using speak with dead, with a caster level equal to her inquisitor level. She does not need the enemy’s corpse to use this ability (she can eat sin, move away from the corpse, then use speak with dead ), though the soul gets a saving throw just as a corpse would.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: exploit weakness

- **Archetype feature:** Burden of Sin (Sp)
- **Description:** At 14th level, a sin eater may spend a full-round action to transfer one harmful affliction, condition, or spell effect from another creature to herself (this includes curses, possessions, and permanent effects such as petrification, or any condition that break enchantment can end or reverse).
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a sin eater may spend a full-round action to transfer one harmful affliction, condition, or spell effect from another creature to herself (this includes curses, possessions, and permanent effects such as petrification, or any condition that break enchantment can end or reverse). The effect to be transferred is chosen by the sin eater and affects her as if she were the original target, continuing its duration (if any) and preventing any further effect on the original bearer. For example, the inquisitor could transfer a lethal disease to herself, or petrify herself to restore a petrified comrade. The sin eater can use this ability as often as desired, even using it multiple times on the same creature.
- **Implementation flags:**
  - curse subsystem.

## Parsed source feature headings

- Eat Sin (Sp)
- Speak with Dead (Sp)
- Burden of Sin (Sp)
