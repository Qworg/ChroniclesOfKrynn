# Druid - Survivor

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Survivor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Survivor
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Weapon Proficiencies; Diminished Spellcasting; Nature Bond (Ex); Element of Surprise (Ex); Trap; Launch Trap
- **Replaced / altered class features:** resist nature’s lure; wild shape; venom immunity

## Replacement details

### Replaces: resist nature’s lure

- **Archetype feature:** Element of Surprise (Ex)
- **Description:** At 4th level, if a survivor makes a successful attack during a surprise round against a target that is unaware of her, her victim takes a penalty on its initiative check during the following round equal to half the damage dealt by the survivor’s attack (minimum 0, maximum equal to the survivor’s class level).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, if a survivor makes a successful attack during a surprise round against a target that is unaware of her, her victim takes a penalty on its initiative check during the following round equal to half the damage dealt by the survivor’s attack (minimum 0, maximum equal to the survivor’s class level). This cannot reduce an initiative result below 1.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: wild shape

- **Archetype feature:** Trap
- **Description:** At 4th level, a survivor learns how to create a snare trap ( Pathfinder RPG Ultimate Magic 65) and one other ranger trap of her choice (see page 25 or Ultimate Magic 64).
- **Mechanics:**
  - Level hooks: 4, 6.
  - Mechanics summary: At 4th level, a survivor learns how to create a snare trap ( Pathfinder RPG Ultimate Magic 65) and one other ranger trap of her choice (see page 25 or Ultimate Magic 64). At 6th level and every 2 levels thereafter, she learns another trap. The survivor can use these traps a total number of times per day equal to 1/2 her druid level + her Wisdom modifier. Once a trap is learned, it can’t be unlearned and replaced with a different type of trap. The survivor cannot select an individual trap more than once.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

### Replaces: venom immunity

- **Archetype feature:** Launch Trap
- **Description:** At 9th level, a survivor can affix a magical ranger trap to an arrow or thrown weapon, allowing her to set the trap remotely or use it as a direct attack.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a survivor can affix a magical ranger trap to an arrow or thrown weapon, allowing her to set the trap remotely or use it as a direct attack. Attaching the trap to the projectile is part of the full-round action of creating a new trap. If the projectile is fired at a square, the trap is treated as if the survivor had set the trap in that square, except the DC is 5 lower than normal. If the projectile is fired at a creature, the target takes damage from the ranged weapon and is treated as if it had triggered the trap (saving throw applies, if any). The attack has a maximum range of 60 feet, and range increments apply to the attack roll.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

## Parsed source feature headings

- Class Skills
- Weapon Proficiencies
- Diminished Spellcasting
- Nature Bond (Ex)
- Element of Surprise (Ex)
- Trap
- Launch Trap

