# Warrior - Qadira: Dawnflower Dervish

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Qadira: Dawnflower Dervish
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Qadira%20%20Dawnflower%20Dervish
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Suggested Feats; Burst of Speed (Ex); Desert Stride (Ex); Rapid Attack (Ex); Lightning Strike (Ex)
- **Replaced / altered class features:** Armor Training 1-4

## Replacement details

### Replaces: armor training 1

- **Archetype feature:** Burst of Speed (Ex)
- **Description:** At 3rd level, a Dawnflower dervish takes only a –1 penalty to her AC after charging.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 7.
  - Mechanics summary: At 3rd level, a Dawnflower dervish takes only a –1 penalty to her AC after charging. At 7th level, the Dawnflower dervish can charge with no penalty.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: armor training 2

- **Archetype feature:** Desert Stride (Ex)
- **Description:** At 7th level, a Dawnflower dervish can move through 10 feet of difficult terrain each round as if it were normal terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a Dawnflower dervish can move through 10 feet of difficult terrain each round as if it were normal terrain. This benefit stacks with the benefits provided by the Acrobatic Steps and Nimble Moves feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: armor training 3

- **Archetype feature:** Rapid Attack (Ex)
- **Description:** At 11th level, a Dawnflower dervish can combine a full attack with a single move.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a Dawnflower dervish can combine a full attack with a single move. She must forgo the attack at her highest bonus but may take the remaining attacks at any point during her movement. This movement provokes attacks of opportunity as normal.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 4

- **Archetype feature:** Lightning Strike (Ex)
- **Description:** At 15th level, as part of a full attack, a Dawnflower dervish can make one additional attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, as part of a full attack, a Dawnflower dervish can make one additional attack. This attack is at the dervish’s highest base attack bonus, but each attack in the round (including the extra one) takes a –2 penalty.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

## Parsed source feature headings

- Burst of Speed (Ex)
- Desert Stride (Ex)
- Rapid Attack (Ex)
- Lightning Strike (Ex)

