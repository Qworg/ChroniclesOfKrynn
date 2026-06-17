# Ranger - Trapper

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Trapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Trapper
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Trapfinding; Trap; Launch Trap
- **Replaced / altered class features:** the ranger’s spells class feature

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A trapper adds Disable Device to her list of class skills in addition to the normal ranger class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A trapper adds Disable Device to her list of class skills in addition to the normal ranger class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Trapfinding
- **Description:** A trapper adds 1/2 her ranger level on Perception skill checks made to locate traps and on Disable Device skill checks (minimum +1).
- **Detailed mechanics:**
  - **Rules text to implement:** A trapper adds 1/2 her ranger level on Perception skill checks made to locate traps and on Disable Device skill checks (minimum +1). A trapper can use Disable Device to disarm magic traps.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the ranger’s spells class feature

- **Archetype feature:** Trap
- **Description:** At 5th level, a trapper learns how to create a snare trap and one other ranger trap of her choice.
- **Detailed mechanics:**
  - **Level hooks:** 5, 7.
  - **Rules text to implement:** At 5th level, a trapper learns how to create a snare trap and one other ranger trap of her choice. At 7th level and every two levels thereafter, she learns another trap. The trapper can use these traps a total number of times per day equal to 1/2 her ranger level + her Wisdom modifier. Once a trap is learned, it can’t be unlearned and replaced with a different type of trap. The trapper cannot select an individual trap more than once. Trappers do not gain any spells or spellcasting ability, do not have a caster level, and cannot use spell trigger and spell completion magic items.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Launch Trap
- **Description:** At 10th level, a trapper can affix a magical ranger trap to an arrow, crossbow bolt, or thrown weapon, allowing her to set the trap remotely or use it as a direct attack.
- **Detailed mechanics:**
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, a trapper can affix a magical ranger trap to an arrow, crossbow bolt, or thrown weapon, allowing her to set the trap remotely or use it as a direct attack. Attaching the trap to the projectile is part of the full-round action of creating a new trap. The trapped projectile is fired or thrown in the normal manner. If fired at a square, the trap is treated as if the ranger had set the trap in that square, except the DC is 5 lower than normal. If fired at a creature, the target takes damage from the ranged weapon and is treated as if it had triggered the trap (saving throw applies, if any). The attack has a maximum range of 60 feet, and range increments apply to the attack roll. The duration of the trapped projectile starts from when it is created, not from when it is used.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Trapfinding
- Trap
- Launch Trap
