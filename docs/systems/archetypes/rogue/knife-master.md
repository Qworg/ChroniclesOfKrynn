# Rogue - Knife Master

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Knife Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Knife%20Master
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hidden Blade; Sneak Stab (Ex); Blade Sense (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Hidden Blade
- **Description:** A knife master adds 1/2 her level on Sleight of Hand checks made to conceal a light blade.
- **Mechanics:**
  - Mechanics summary: A knife master adds 1/2 her level on Sleight of Hand checks made to conceal a light blade.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Blade Sense (Ex)
- **Description:** At 3rd level, a knife master is so skilled in combat involving light blades that she gains a +1 dodge bonus to AC against attacks made against her with light blades.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, a knife master is so skilled in combat involving light blades that she gains a +1 dodge bonus to AC against attacks made against her with light blades. This bonus increases by +1 for every three levels, to a maximum of +6 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Hidden Blade
- Sneak Stab (Ex)
- Blade Sense (Ex)
- Rogue Talents
- Advanced Talents

