# Rogue - Trapsmith

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Trapsmith
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Trapsmith
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Careful Disarm (Ex); Trap Master (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Careful Disarm (Ex)
- **Description:** At 4th level, whenever a trapsmith attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, whenever a trapsmith attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more. If she does set off a trap she was attempting to disarm, she adds double her trap sense bonus to avoid the trap.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Trap Master (Ex)
- **Description:** At 8th level, whenever a trapsmith disarms a trap using Disable Device, she can bypass it even if her check did not exceed the DC by 10 or more.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, whenever a trapsmith disarms a trap using Disable Device, she can bypass it even if her check did not exceed the DC by 10 or more. If it is a magic trap that allows specific creatures to pass it without danger, she can modify which creatures it allows to pass, adding her allies and restricting enemies if she desires.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

## Parsed source feature headings

- Careful Disarm (Ex)
- Trap Master (Ex)
- Rogue Talents
- Advanced Talents

