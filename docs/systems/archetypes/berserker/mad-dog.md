# Berserker - Mad Dog

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Mad Dog
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Mad%20Dog
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** War Beast (Ex); Pack Tactics (Ex); Rage (Ex); Ferocious Fetch (Ex); Damage Reduction (Ex); Throat Cutter (Ex); Rage Powers
- **Replaced / altered class features:** the rage powers gained at 2nd, 6th, 10th, 14th, and 18th level; uncanny dodge; improved uncanny dodge; indomitable will

## Replacement details

### Replaces: the rage powers gained at 2nd, 6th, 10th, 14th
- **Archetype feature:** War Beast (Ex)
- **Description:** At 1st level, a mad dog gains the service of an animal companion , using the barbarian’s level as her effective druid level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 18.
  - Mechanics summary: At 1st level, a mad dog gains the service of an animal companion , using the barbarian’s level as her effective druid level.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, animal companion hook.

### Replaces: 18th level

- **Archetype feature:** War Beast (Ex)
- **Description:** At 1st level, a mad dog gains the service of an animal companion , using the barbarian’s level as her effective druid level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 18.
  - Mechanics summary: At 1st level, a mad dog gains the service of an animal companion , using the barbarian’s level as her effective druid level.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, animal companion hook.

### Replaces: uncanny dodge

- **Archetype feature:** Pack Tactics (Ex)
- **Description:** At 2nd level, a mad dog and her war beast gain a +4 bonus on attack rolls while flanking the same opponent (instead of the normal +2 bonus).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a mad dog and her war beast gain a +4 bonus on attack rolls while flanking the same opponent (instead of the normal +2 bonus).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Ferocious Fetch (Ex)
- **Description:** At 5th level, a mad dog’s war beast gains Improved Drag as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a mad dog’s war beast gains Improved Drag as a bonus feat. As a swift action, a mad dog can command her war beast to move toward an opponent within 30 feet and attempt a drag combat maneuver to pull the target back toward the mad dog. The war beast can move before and after performing the maneuver, but this movement counts toward the war beast’s total movement during its turn.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: indomitable will

- **Archetype feature:** Throat Cutter (Ex)
- **Description:** At 14th level, whenever her war beast succeeds at a bull rush, drag, grapple, overrun, or trip combat maneuver against an opponent threatened by the mad dog, a mad dog can take an attack of opportunity against that opponent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, whenever her war beast succeeds at a bull rush, drag, grapple, overrun, or trip combat maneuver against an opponent threatened by the mad dog, a mad dog can take an attack of opportunity against that opponent.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- War Beast (Ex)
- Pack Tactics (Ex)
- Rage (Ex)
- Ferocious Fetch (Ex)
- Damage Reduction (Ex)
- Throat Cutter (Ex)
- Rage Powers

