# Berserker - Hurler

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Hurler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Hurler
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skilled Thrower (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Skilled Thrower (Ex)
- **Description:** The hurler is skilled at throwing objects in combat.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: The hurler is skilled at throwing objects in combat. Increase the range increment of any thrown weapon or object by 10 feet.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Skilled Thrower (Ex)
- Rage Powers

