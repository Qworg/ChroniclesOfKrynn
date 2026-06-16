# Warrior - Tower Shield Specialist

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Tower Shield Specialist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Tower%20Shield%20Specialist
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Burst Barrier (Ex); Tower Shield Training (Ex); Tower Shield Specialist (Ex); Tower Shield Defense (Ex); Immediate Repositioning (Ex); Tower Shield Evasion (Ex)
- **Replaced / altered class features:** bravery; weapon training 1; weapon training 2; weapon training 3; both weapon training 4 and weapon mastery

## Replacement details

### Replaces: bravery

- **Archetype feature:** Burst Barrier (Ex)
- **Description:** At 2nd level, a tower shield specialist can use his shield to screen himself from burst spells and effects, gaining a +1 bonus on Reflex saves against them while employing a tower shield.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level, a tower shield specialist can use his shield to screen himself from burst spells and effects, gaining a +1 bonus on Reflex saves against them while employing a tower shield. This bonus increases by +1 for every four levels after 2nd (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

### Replaces: weapon training 1

- **Archetype feature:** Tower Shield Specialist (Ex)
- **Description:** At 5th level, when a tower shield specialist employs a tower shield in combat, he does not take the –2 penalty on attack rolls because of the shield’s encumbrance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, when a tower shield specialist employs a tower shield in combat, he does not take the –2 penalty on attack rolls because of the shield’s encumbrance.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: weapon training 2

- **Archetype feature:** Tower Shield Defense (Ex)
- **Description:** At 9th level, while using a tower shield, a tower shield specialist gains his shield bonus against touch attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, while using a tower shield, a tower shield specialist gains his shield bonus against touch attacks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 3

- **Archetype feature:** Immediate Repositioning (Ex)
- **Description:** At 13th level, as an immediate action, a tower shield specialist can reposition his tower shield to another facing, but he cannot use this ability to interrupt an attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, as an immediate action, a tower shield specialist can reposition his tower shield to another facing, but he cannot use this ability to interrupt an attack.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: both weapon training 4 and weapon mastery

- **Archetype feature:** Tower Shield Evasion (Ex)
- **Description:** At 16th level, while using a tower shield, the tower shield specialist gains evasion, as the rogue class ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 16, 20.
  - Mechanics summary: At 16th level, while using a tower shield, the tower shield specialist gains evasion, as the rogue class ability. At 20th level, the shield specialist gains improved evasion, as the rogue advanced talent, while using a tower shield.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Burst Barrier (Ex)
- Tower Shield Training (Ex)
- Tower Shield Specialist (Ex)
- Tower Shield Defense (Ex)
- Immediate Repositioning (Ex)
- Tower Shield Evasion (Ex)

