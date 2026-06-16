# Rogue - Thug

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Thug
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Thug
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Frightening (Ex); Brutal Beating (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Frightening (Ex)
- **Description:** Whenever a thug successfully uses Intimidate to demoralize a creature, the duration of the shaken condition is increased by 1 round.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Whenever a thug successfully uses Intimidate to demoralize a creature, the duration of the shaken condition is increased by 1 round. In addition, if the target is shaken for 4 or more rounds, the thug can instead decide to make the target frightened for 1 round.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Brutal Beating (Ex)
- **Description:** At 3rd level, whenever a thug deals sneak attack damage, she can choose to forgo 1d6 points of sneak attack damage to make the target sickened for a number of rounds equal to 1/2 her rogue level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, whenever a thug deals sneak attack damage, she can choose to forgo 1d6 points of sneak attack damage to make the target sickened for a number of rounds equal to 1/2 her rogue level. This ability does not stack with itself—only the most recent duration applies.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

## Parsed source feature headings

- Frightening (Ex)
- Brutal Beating (Ex)
- Rogue Talents
- Advanced Talents

