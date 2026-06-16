# Rogue - Desert Raider

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Desert Raider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Desert%20Raider
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Desert Tracker (Ex); Sun at Your Back (Ex); Light Step (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trapfinding; Trap Sense

## Replacement details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A desert raider adds Knowledge (geography) and Survival to her list of class skills instead of Knowledge (dungeoneering) and Swim.
- **Mechanics:**
  - Mechanics summary: A desert raider adds Knowledge (geography) and Survival to her list of class skills instead of Knowledge (dungeoneering) and Swim.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: trapfinding

- **Archetype feature:** Desert Tracker (Ex)
- **Description:** A desert raider is immune to the dazzled condition.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A desert raider is immune to the dazzled condition. A desert raider adds half her level (minimum 1) as a bonus on Survival skill checks to follow or identify tracks in desert terrain.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Sun at Your Back (Ex)
- **Description:** At 2nd level, a desert raider can use the reflected light of the blinding sun to conceal her presence.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a desert raider can use the reflected light of the blinding sun to conceal her presence. A desert raider in bright light can attempt Stealth checks without cover or concealment but takes a –5 penalty on her check. The desert raider cannot use this ability to hide from creatures immune to the blinded or dazzled conditions.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: trap sense

- **Archetype feature:** Light Step (Ex)
- **Description:** At 3rd level, the DC of Survival checks to track the desert raider increase by 3.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, the DC of Survival checks to track the desert raider increase by 3. In addition, she gains a +1 bonus on Perception checks to avoid being surprised by a foe. The DC increase and the bonus on Perception checks increase by 1 every 3 rogue levels thereafter (to a maximum increase of 8 and a maximum bonus of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

## Parsed source feature headings

- Class Skills
- Desert Tracker (Ex)
- Sun at Your Back (Ex)
- Light Step (Ex)
- Rogue Talents
- Advanced Talents

