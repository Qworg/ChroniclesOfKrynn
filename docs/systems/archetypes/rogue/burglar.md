# Rogue - Burglar

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Burglar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Burglar
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Careful Disarm (Ex); Distraction (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Careful Disarm (Ex)
- **Description:** At 4th level, whenever a burglar attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, whenever a burglar attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more. If she does set off a trap she was attempting to disarm, she adds double her trap sense bonus to avoid the trap.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Distraction (Ex)
- **Description:** At 8th level, whenever a burglar is detected while using Stealth, she can immediately attempt a Bluff skill check opposed by the Sense Motive skill of the creature that spotted her.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, whenever a burglar is detected while using Stealth, she can immediately attempt a Bluff skill check opposed by the Sense Motive skill of the creature that spotted her. If this check succeeds, the target assumes that the noise was something innocent and disregards the detection. This only functions if the creature cannot see the rogue. This ability can only be used once during a given Stealth attempt. If the same creature detects the rogue’s presence again, the ability has no effect.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Careful Disarm (Ex)
- Distraction (Ex)
- Rogue Talents
- Advanced Talents

