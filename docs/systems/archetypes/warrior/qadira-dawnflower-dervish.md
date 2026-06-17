# Warrior - Qadira: Dawnflower Dervish

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Qadira: Dawnflower Dervish
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Qadira%20%20Dawnflower%20Dervish
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Suggested Feats; Burst of Speed (Ex); Desert Stride (Ex); Rapid Attack (Ex); Lightning Strike (Ex)
- **Replaced / altered class features:** Armor Training 1-4

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Suggested Feats
- **Description:** Agile Maneuvers, Combat Expertise, Dazzling Display, Dervish Dance (see World Guide: The Inner Sea ), Dodge, Mobility, Spring Attack, Step Up, Weapon Finesse, Weapon Focus (scimitar), Weapon Specialization (scimitar), Whirlwind Attack.
- **Detailed mechanics:**
  - **Rules text to implement:** Agile Maneuvers, Combat Expertise, Dazzling Display, Dervish Dance (see World Guide: The Inner Sea ), Dodge, Mobility, Spring Attack, Step Up, Weapon Finesse, Weapon Focus (scimitar), Weapon Specialization (scimitar), Whirlwind Attack.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 1

- **Archetype feature:** Burst of Speed (Ex)
- **Description:** At 3rd level, a Dawnflower dervish takes only a –1 penalty to her AC after charging.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 7.
  - **Rules text to implement:** At 3rd level, a Dawnflower dervish takes only a –1 penalty to her AC after charging. At 7th level, the Dawnflower dervish can charge with no penalty.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2

- **Archetype feature:** Desert Stride (Ex)
- **Description:** At 7th level, a Dawnflower dervish can move through 10 feet of difficult terrain each round as if it were normal terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a Dawnflower dervish can move through 10 feet of difficult terrain each round as if it were normal terrain. This benefit stacks with the benefits provided by the Acrobatic Steps and Nimble Moves feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 3

- **Archetype feature:** Rapid Attack (Ex)
- **Description:** At 11th level, a Dawnflower dervish can combine a full attack with a single move.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a Dawnflower dervish can combine a full attack with a single move. She must forgo the attack at her highest bonus but may take the remaining attacks at any point during her movement. This movement provokes attacks of opportunity as normal.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 4

- **Archetype feature:** Lightning Strike (Ex)
- **Description:** At 15th level, as part of a full attack, a Dawnflower dervish can make one additional attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, as part of a full attack, a Dawnflower dervish can make one additional attack. This attack is at the dervish’s highest base attack bonus, but each attack in the round (including the extra one) takes a –2 penalty.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Suggested Feats
- Burst of Speed (Ex)
- Desert Stride (Ex)
- Rapid Attack (Ex)
- Lightning Strike (Ex)
