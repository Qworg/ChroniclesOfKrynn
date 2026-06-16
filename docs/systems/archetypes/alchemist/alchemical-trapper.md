# Alchemist - Alchemical Trapper

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Alchemical Trapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Alchemical%20Trapper
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bomb Trap (Su); Trapfinding (Ex)
- **Replaced / altered class features:** the discovery at 2nd level; the discovery at 4th level

## Replacement details

### Replaces: the discovery at 2nd level

- **Archetype feature:** Bomb Trap (Su)
- **Description:** At 2nd level, an alchemical trapper can use one of her bombs to make a trap.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an alchemical trapper can use one of her bombs to make a trap. Setting a bomb trap is a full-round action that provokes attacks of opportunity. A bomb trap fills a single 5-foot square and cannot be placed in the same area as any other trap. The DCs for Perception checks to notice the trap, Disable Device checks to disable it, and saving throws to avoid it are equal to the DC for the alchemical trapper’s bombs. The alchemical trapper can use any one discovery that applies to a bomb when making a bomb trap. The bomb trap lasts 10 minutes for each alchemist level the trapper possesses.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, alchemist bomb hook, alchemist discovery hook, ki/monk hook.

### Replaces: the discovery at 4th level

- **Archetype feature:** Trapfinding (Ex)
- **Description:** At 4th level, an alchemical trapper can find and disable traps, as the rogue class feature of the same name.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an alchemical trapper can find and disable traps, as the rogue class feature of the same name.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, alchemist discovery hook.

## Parsed source feature headings

- Bomb Trap (Su)
- Trapfinding (Ex)

