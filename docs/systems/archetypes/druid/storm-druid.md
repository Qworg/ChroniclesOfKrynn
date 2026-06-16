# Druid - Storm Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Storm Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Storm%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spontaneous Domain Casting; Nature Bond (Ex); Windwalker (Ex); Stormvoice (Ex); Eyes of the Storm (Ex); Windlord; Storm Lord (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: spontaneous casting

- **Archetype feature:** Spontaneous Domain Casting
- **Description:** A storm druid can channel stored spell energy into domain spells that she has not prepared ahead of time.
- **Mechanics:**
  - Mechanics summary: A storm druid can channel stored spell energy into domain spells that she has not prepared ahead of time. She can “lose” a prepared spell in order to cast any domain spell of the same level or lower.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

### Replaces: woodland stride

- **Archetype feature:** Windwalker (Ex)
- **Description:** At 2nd level, the penalties from natural or magical wind effects are treated as one step less severe for a storm druid.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the penalties from natural or magical wind effects are treated as one step less severe for a storm druid.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trackless step

- **Archetype feature:** Stormvoice (Ex)
- **Description:** At 3rd level, a storm druid’s voice can magically carry over howling winds and peals of thunder.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a storm druid’s voice can magically carry over howling winds and peals of thunder. Whenever a Perception check is needed to hear the druid’s voice, the DC is reduced by an amount equal to the druid’s level.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

### Replaces: resist nature’s lure

- **Archetype feature:** Eyes of the Storm (Ex)
- **Description:** At 4th level, a storm druid can see through 10 feet of magical fog, mist, gas, wind, rain, or similar inclement weather conditions, ignoring any concealment it might grant.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a storm druid can see through 10 feet of magical fog, mist, gas, wind, rain, or similar inclement weather conditions, ignoring any concealment it might grant. This distance increases by 5 feet for every 4 levels beyond 4th.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: venom immunity

- **Archetype feature:** Windlord
- **Description:** At 9th level, a storm druid can select another domain or subdomain from those available to her through her nature bond.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a storm druid can select another domain or subdomain from those available to her through her nature bond.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: a thousand faces

- **Archetype feature:** Storm Lord (Ex)
- **Description:** At 13th level, a storm druid is unaffected by natural and magical wind effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a storm druid is unaffected by natural and magical wind effects. She also becomes immune to deafness and gains +2 bonus on saving throws against sonic effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Spontaneous Domain Casting
- Nature Bond (Ex)
- Windwalker (Ex)
- Stormvoice (Ex)
- Eyes of the Storm (Ex)
- Windlord
- Storm Lord (Ex)

