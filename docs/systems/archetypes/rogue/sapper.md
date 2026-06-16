# Rogue - Sapper

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sapper
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Destructive Dismantle (Ex); Sapping (Ex); Fence (Ex)
- **Replaced / altered class features:** trapfinding; her 2nd-level rogue talent; her 4thlevel rogue talent

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Destructive Dismantle (Ex)
- **Description:** A sapper is able to quickly breach obstacles.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sapper is able to quickly breach obstacles. Using a combination of engineering, explosives, alchemical reagents, and sheer bloodymindedness, she can deal up to 10 points of damage per sapper level upon an object once per day, ignoring the object’s hardness. This ability requires 1d4+1 hours of preparation, so it can be used only on immobile and unresisting objects.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: her 2nd-level rogue talent

- **Archetype feature:** Sapping (Ex)
- **Description:** At 2nd level, a sapper gains a +4 bonus on Perception or Disable Device checks to find or disable traps.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sapper gains a +4 bonus on Perception or Disable Device checks to find or disable traps. She also grants a +4 bonus when using the aid another action to assist with Strength checks to lift gates, bend bars, or force open doors. However, the sapper is focused, so it takes her a full-round action to complete any aid another action.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: her 4thlevel rogue talent

- **Archetype feature:** Fence (Ex)
- **Description:** At 4th level, a sapper loots a dungeon or other adventuring complex of its mundane goods and sells them to her various contacts.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a sapper loots a dungeon or other adventuring complex of its mundane goods and sells them to her various contacts. These mundane goods include things like brass fittings, stewpots, scrap metal, and so on. The sapper automatically loots this junk while in the dungeon, and must spend 24 uninterrupted hours selling the objects in town. She shares a portion of the proceeds with the adventurers; the amount typically equals 1d10 gp per sapper level per dungeon.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Destructive Dismantle (Ex)
- Sapping (Ex)
- Fence (Ex)

