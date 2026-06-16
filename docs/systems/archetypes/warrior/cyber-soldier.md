# Warrior - Cyber-Soldier

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Cyber-Soldier
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Cyber-Soldier
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Cybernetic Combat (Ex); Improved Implantation (Ex); Resilience (Ex)
- **Replaced / altered class features:** weapon training 1; armor training 2 and 4; armor mastery

## Replacement details

### Replaces: weapon training 1

- **Archetype feature:** Cybernetic Combat (Ex)
- **Description:** At 5th level, a cyber-soldier gains a +1 bonus on attack rolls and damage rolls with implanted weapons, cybernetic arms, and melee or thrown weapons wielded with a cybernetic arm.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a cyber-soldier gains a +1 bonus on attack rolls and damage rolls with implanted weapons, cybernetic arms, and melee or thrown weapons wielded with a cybernetic arm. Weapons wielded with two cybernetic arms receive double the bonus, except when such weapons are thrown. This damage bonus increases by 1 for every 4 levels gained. This attack bonus does not stack with the attack bonus for weapon training. A cyber-soldier gains a slam attack for each cybernetic arm. These attacks deal 1d6 points of bludgeoning damage for a Medium cyber-soldier and 1d4 points of bludgeoning damage for a Small cybersoldier.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: cybernetics.

### Replaces: armor training 2

- **Archetype feature:** Improved Implantation (Ex)
- **Description:** At 7th level, a cybersoldier can exceed the normal limitations on cybertech implantation.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 15.
  - Mechanics summary: At 7th level, a cybersoldier can exceed the normal limitations on cybertech implantation. Her brain and body slots each accommodate one more piece of cybertech than normal. In addition, her limit on implantation points increases by 1/2 his cybersoldier level. She can allocate these points between his Intelligence and Constitution scores as she chooses. At 15th level, her body slot can accommodate two more pieces of cybertech than normal.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: 4

- **Archetype feature:** Improved Implantation (Ex)
- **Description:** At 7th level, a cybersoldier can exceed the normal limitations on cybertech implantation.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 15.
  - Mechanics summary: At 7th level, a cybersoldier can exceed the normal limitations on cybertech implantation. Her brain and body slots each accommodate one more piece of cybertech than normal. In addition, her limit on implantation points increases by 1/2 his cybersoldier level. She can allocate these points between his Intelligence and Constitution scores as she chooses. At 15th level, her body slot can accommodate two more pieces of cybertech than normal.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor mastery

- **Archetype feature:** Resilience (Ex)
- **Description:** At 19th level, a cyber-soldier has a reservoir of 5 temporary hit points for each piece of implanted cybertech in his body.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a cyber-soldier has a reservoir of 5 temporary hit points for each piece of implanted cybertech in his body. Lost temporary hit points are recovered at the rate of 10 points per hour.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Cybernetic Combat (Ex)
- Improved Implantation (Ex)
- Resilience (Ex)

