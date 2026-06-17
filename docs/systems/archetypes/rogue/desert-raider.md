# Rogue - Desert Raider

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Desert Raider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Desert%20Raider
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Desert Tracker (Ex); Sun at Your Back (Ex); Light Step (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trapfinding; Trap Sense

## Implementation details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A desert raider adds Knowledge (geography) and Survival to her list of class skills instead of Knowledge (dungeoneering) and Swim.
- **Detailed mechanics:**
  - **Rules text to implement:** A desert raider adds Knowledge (geography) and Survival to her list of class skills instead of Knowledge (dungeoneering) and Swim.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trapfinding

- **Archetype feature:** Desert Tracker (Ex)
- **Description:** A desert raider is immune to the dazzled condition.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A desert raider is immune to the dazzled condition. A desert raider adds half her level (minimum 1) as a bonus on Survival skill checks to follow or identify tracks in desert terrain.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Sun at Your Back (Ex)
- **Description:** At 2nd level, a desert raider can use the reflected light of the blinding sun to conceal her presence.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a desert raider can use the reflected light of the blinding sun to conceal her presence. A desert raider in bright light can attempt Stealth checks without cover or concealment but takes a –5 penalty on her check. The desert raider cannot use this ability to hide from creatures immune to the blinded or dazzled conditions.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Light Step (Ex)
- **Description:** At 3rd level, the DC of Survival checks to track the desert raider increase by 3.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, the DC of Survival checks to track the desert raider increase by 3. In addition, she gains a +1 bonus on Perception checks to avoid being surprised by a foe. The DC increase and the bonus on Perception checks increase by 1 every 3 rogue levels thereafter (to a maximum increase of 8 and a maximum bonus of +6 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the desert raider archetype: fast stealth, getaway artist, ledge walker, rogue crawl, stand up, surprise attack.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the desert raider archetype: fast stealth, getaway artist, ledge walker, rogue crawl, stand up, surprise attack.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the desert raider archetype: hide in plain sight, stealthy sniper.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the desert raider archetype: hide in plain sight, stealthy sniper.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Desert Tracker (Ex)
- Sun at Your Back (Ex)
- Light Step (Ex)
- Rogue Talents
- Advanced Talents
