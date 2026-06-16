# Druid - Urban Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Urban Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Urban%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spontaneous Casting; Nature Bond (Ex); Lorekeeper (Ex); Resist Temptation (Ex); A Thousand Faces (Su); Wild Shape (Su); Mental Strength (Ex)
- **Replaced / altered class features:** the ability to spontaneously cast summon nature’s ally spells; a druid’s woodland stride and trackless step abilities; venom immunity

## Replacement details

### Replaces: the ability to spontaneously cast summon nature’s ally spells

- **Archetype feature:** Spontaneous Casting
- **Description:** An urban druid can channel stored spell energy into domain spells that she has not prepared ahead of time.
- **Mechanics:**
  - Mechanics summary: An urban druid can channel stored spell energy into domain spells that she has not prepared ahead of time. She can “lose” a prepared spell in order to cast any domain spell of the same level or lower.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

### Replaces: a druid’s woodland stride and trackless step abilities

- **Archetype feature:** Lorekeeper (Ex)
- **Description:** At 2nd level, an urban druid adds Diplomacy, Knowledge (history), Knowledge (local), and Knowledge (nobility) skills to her list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an urban druid adds Diplomacy, Knowledge (history), Knowledge (local), and Knowledge (nobility) skills to her list of class skills. She also receives a +2 bonus on these skill checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the resist nature’s lure ability

- **Archetype feature:** Resist Temptation (Ex)
- **Description:** At 4th level, an urban druid gains a +2 bonus on saves vs.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an urban druid gains a +2 bonus on saves vs. divinations and enchantments.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: venom immunity

- **Archetype feature:** Mental Strength (Ex)
- **Description:** At 9th level, an urban druid gains immunity to charm and compulsion effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, an urban druid gains immunity to charm and compulsion effects.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Spontaneous Casting
- Nature Bond (Ex)
- Lorekeeper (Ex)
- Resist Temptation (Ex)
- A Thousand Faces (Su)
- Wild Shape (Su)
- Mental Strength (Ex)

