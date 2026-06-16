# Monk - Underfoot Adept

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Underfoot Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Underfoot%20Adept
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Underfoot Grace (Ex); Underfoot Trip (Ex); Improved Underfoot Grace (Ex)
- **Replaced / altered class features:** the bonus feat gained at 1st level; stunning fist; high jump

## Replacement details

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Underfoot Grace (Ex)
- **Description:** At 1st level, an underfoot adept uses his size and grace to avoid the attacks of those he passes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an underfoot adept uses his size and grace to avoid the attacks of those he passes. When using the Acrobatics skill to avoid attacks of opportunity by moving through a threatened area or an enemy’s space, he only takes a –5 penalty when doing so at full speed, instead of the normal –10 penalty.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, ki/monk hook.

### Replaces: stunning fist

- **Archetype feature:** Underfoot Trip (Ex)
- **Description:** At 1st level, an underfoot adept learns a number of maneuvers and grabs that can cause even the largest opponents to stumble and fall.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 4.
  - Mechanics summary: At 1st level, an underfoot adept learns a number of maneuvers and grabs that can cause even the largest opponents to stumble and fall. He gains Improved Trip as a bonus feat, even if he does not meet the requirements. At 4th level, and every four levels thereafter, he acts as if he is one size larger for the purposes of determining the maximum size of creatures he can trip and when determining his CMB and CMD for purposes of a trip combat maneuver.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: high jump

- **Archetype feature:** Improved Underfoot Grace (Ex)
- **Description:** At 5th level, an underfoot adept’s ability to avoid attacks of opportunity against those he passes improves.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an underfoot adept’s ability to avoid attacks of opportunity against those he passes improves. When using the Acrobatics skill to avoid attacks of opportunity, while moving through a threatened area or through an enemy’s space, he takes no penalty when doing so at full speed.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, ki/monk hook.

## Parsed source feature headings

- Underfoot Grace (Ex)
- Underfoot Trip (Ex)
- Improved Underfoot Grace (Ex)

