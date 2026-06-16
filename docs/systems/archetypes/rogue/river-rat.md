# Rogue - River Rat

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** River Rat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20River%20Rat
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Swamper (Ex); Rat’s Resilience (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trapfinding; Trap Sense

## Replacement details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A river rat gains Knowledge (nature) as a class skill instead of Knowledge (dungeoneering).
- **Mechanics:**
  - Mechanics summary: A river rat gains Knowledge (nature) as a class skill instead of Knowledge (dungeoneering).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: trapfinding

- **Archetype feature:** Swamper (Ex)
- **Description:** At 1st level, a river rat gains a bonus equal to half her rogue level on Swim checks (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a river rat gains a bonus equal to half her rogue level on Swim checks (minimum +1). A river rat ignores difficult terrain caused by light undergrowth and shallow bogs, and it costs her only 2 squares of movement to enter a square of deep bog or heavy undergrowth, rather than 4 squares of movement. She takes no penalty on Acrobatics or Stealth checks for being in bogs and undergrowth.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Replaces: trap sense

- **Archetype feature:** Rat’s Resilience (Ex)
- **Description:** A river rat is inured to dangers presented by disease-carrying parasites, poisonous fish, and other toxic river denizens.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: A river rat is inured to dangers presented by disease-carrying parasites, poisonous fish, and other toxic river denizens. At 3rd level, a river rat gains a +1 bonus on saving throws against disease and poison effects. This bonus increases by 1 every 3 levels thereafter, to a maximum bonus of +6 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Swamper (Ex)
- Rat’s Resilience (Ex)
- Rogue Talents
- Advanced Talents

