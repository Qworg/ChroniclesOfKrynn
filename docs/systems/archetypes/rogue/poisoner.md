# Rogue - Poisoner

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Poisoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Poisoner
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Poison Use (Ex); Master Poisoner (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Poison Use (Ex)
- **Description:** At 1st level, a poisoner is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a poisoner is trained in the use of poison and cannot accidentally poison herself when applying poison to a blade.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Master Poisoner (Ex)
- **Description:** At 3rd level, a poisoner can use Craft (alchemy) to change the type of a poison.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a poisoner can use Craft (alchemy) to change the type of a poison. This requires 1 hour of work with an alchemist’s lab and a Craft (alchemy) skill check with a DC equal to the poison’s DC. The poisoner also receives a bonus on Craft (alchemy) skill checks when working with poison equal to 1/2 her rogue level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Poison Use (Ex)
- Master Poisoner (Ex)
- Rogue Talents
- Advanced Talents

