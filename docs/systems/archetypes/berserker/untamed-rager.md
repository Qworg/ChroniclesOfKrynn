# Berserker - Untamed Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Untamed Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Untamed%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Despicable Tactics; Feral Appearance (Ex); Deplorable Tactics; Dishonorable (Ex)
- **Replaced / altered class features:** uncanny dodge; trap sense; improved uncanny dodge; damage reduction

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Despicable Tactics
- **Description:** At 2nd level, the untamed rager gains Improved Dirty Trick as a bonus feat.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the untamed rager gains Improved Dirty Trick as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: trap sense

- **Archetype feature:** Feral Appearance (Ex)
- **Description:** At 3rd level, the untamed rager gains a +1 bonus on Intimidate checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the untamed rager gains a +1 bonus on Intimidate checks. This bonus increases by 1 every 3 barbarian levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Deplorable Tactics
- **Description:** At 5th level, the untamed rager gains Greater Dirty Trick as a bonus feat.
- **Mechanics:**
  - Level hooks: 5.
  - Mechanics summary: At 5th level, the untamed rager gains Greater Dirty Trick as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: damage reduction

- **Archetype feature:** Dishonorable (Ex)
- **Description:** At 7th level and every 3 barbarian levels thereafter, the untamed rager gains a +1 bonus on combat maneuver checks when performing dirty tricks and to her CMD to resist others’ dirty tricks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level and every 3 barbarian levels thereafter, the untamed rager gains a +1 bonus on combat maneuver checks when performing dirty tricks and to her CMD to resist others’ dirty tricks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

## Parsed source feature headings

- Despicable Tactics
- Feral Appearance (Ex)
- Deplorable Tactics
- Dishonorable (Ex)

