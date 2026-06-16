# Rogue - Driver

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Driver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Driver
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hard Drive (Ex); Driver’s Fortitude (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trap sense

## Replacement details

### Replaces: trap sense

- **Archetype feature:** Driver’s Fortitude (Ex)
- **Description:** At 3rd level, the driver learns to keep driving and maintain control of her vehicle, even when mortally wounded.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the driver learns to keep driving and maintain control of her vehicle, even when mortally wounded. If the driver drops below 0 hit points but is not dead, she can attempt a DC 15 Fortitude save each round to remain conscious and in control of her vehicle, though she may take no other actions.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.
  - Needs implementation review: vehicle-specific action rules.

## Parsed source feature headings

- Hard Drive (Ex)
- Driver’s Fortitude (Ex)
- Rogue Talents
- Advanced Talents

