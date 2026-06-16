# Rogue - Spy

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Spy
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Spy
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skilled Liar (Ex); Poison Use (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Skilled Liar (Ex)
- **Description:** Whenever a spy uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Whenever a spy uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1). This bonus does not apply to feint attempts or attempts to pass secret messages.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Poison Use (Ex)
- **Description:** A 3rd level, a spy is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: A 3rd level, a spy is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Skilled Liar (Ex)
- Poison Use (Ex)
- Rogue Talents
- Advanced Talents

