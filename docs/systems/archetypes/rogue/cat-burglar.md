# Rogue - Cat Burglar

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Cat Burglar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Cat%20Burglar
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Phantom Presence (Ex); Trap Saboteur (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Phantom Presence (Ex)
- **Description:** At 4th level, a cat burglar masters stealthy movement and leaves no trace of her passing in dungeons and cities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a cat burglar masters stealthy movement and leaves no trace of her passing in dungeons and cities. While in dungeon and urban environments, she leaves no trail and cannot be tracked, though she can choose to leave behind a trail if she so desires. Furthermore, she can always choose to take 10 when making a Stealth check.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.
  - Needs implementation review: spiritualist phantom mechanics.

### Replaces: improved uncanny dodge

- **Archetype feature:** Trap Saboteur (Su)
- **Description:** At 8th level, a cat burglar becomes a master of avoiding and manipulating traps and locks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a cat burglar becomes a master of avoiding and manipulating traps and locks. She can attempt to open a lock as a standard action and takes 1/2 the normal amount of time to disable traps (minimum 1 round) . When she has bypassed a trap without disarming it, she can also choose to suppress its trigger for up to 1 minute. If she does, she can also choose to end this suppression prematurely as a free action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Phantom Presence (Ex)
- Trap Saboteur (Su)
- Rogue Talents
- Advanced Talents

