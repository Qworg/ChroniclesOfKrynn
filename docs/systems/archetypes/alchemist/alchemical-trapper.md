# Alchemist - Alchemical Trapper

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Alchemical Trapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Alchemical%20Trapper
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bomb Trap (Su); Trapfinding (Ex)
- **Replaced / altered class features:** the discovery at 2nd level; the discovery at 4th level

## Implementation details

### Replaces: the discovery at 2nd level

- **Archetype feature:** Bomb Trap (Su)
- **Description:** At 2nd level, an alchemical trapper can use one of her bombs to make a trap.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an alchemical trapper can use one of her bombs to make a trap. Setting a bomb trap is a full-round action that provokes attacks of opportunity. A bomb trap fills a single 5-foot square and cannot be placed in the same area as any other trap. The alchemical trapper needs the same materials required for making a bomb. The DCs for Perception checks to notice the trap, Disable Device checks to disable it, and saving throws to avoid it are equal to the DC for the alchemical trapper’s bombs. All bomb traps have location triggers and do not reset. The alchemical trapper can use any one discovery that applies to a bomb when making a bomb trap. The bomb trap lasts 10 minutes for each alchemist level the trapper possesses. If the bomb trap is not disabled or exploded within that time frame, the trap becomes inert. Creating a bomb trap uses one of the alchemical trapper’s bombs per day.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the discovery at 4th level

- **Archetype feature:** Trapfinding (Ex)
- **Description:** At 4th level, an alchemical trapper can find and disable traps, as the rogue class feature of the same name.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an alchemical trapper can find and disable traps, as the rogue class feature of the same name.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bomb Trap (Su)
- Trapfinding (Ex)
