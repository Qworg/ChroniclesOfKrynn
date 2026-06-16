# Rogue - Survivalist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Survivalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Survivalist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hardy (Ex); Endure Elements (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Hardy (Ex)
- **Description:** At 1st level, a survivalist is already prepared to endure extreme hardships and environmental conditions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a survivalist is already prepared to endure extreme hardships and environmental conditions. She can go twice the normal number of days without water and triple the normal number of days without food before feeling the effects of either thirst or starvation.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Endure Elements (Sp)
- **Description:** At 3rd level, a survivalist rogue can use endure elements once per day as a spell-like ability.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a survivalist rogue can use endure elements once per day as a spell-like ability. The survivalist’s caster level is the same as her rogue level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Hardy (Ex)
- Endure Elements (Sp)
- Rogue Talents
- Advanced Talents

