# Rogue - Chameleon

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Chameleon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Chameleon
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Misdirection (Ex); Effortless Sneak (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Misdirection (Ex)
- **Description:** At 1st level, a chameleon begins her career knowing that the secret to disappearing lies in deceiving the senses of her observers.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a chameleon begins her career knowing that the secret to disappearing lies in deceiving the senses of her observers. Every day she gains a pool of stealth points equal to her ranks in Bluff. Before making a Stealth check, she can choose to put stealth points into the roll, gaining a bonus on Stealth checks equal to the number of stealth points she puts into the roll. If she gains a bonus on Bluff checks because of a feat (such as Skill Focus [Bluff]), she adds a number of points to her stealth pool equal to the bonus the feat grants.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Effortless Sneak (Sp)
- **Description:** At 3rd level, the chameleon chooses a single terrain from the ranger’s favored terrain class feature.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, the chameleon chooses a single terrain from the ranger’s favored terrain class feature. While she is within that terrain, she can take 10 on any Stealth check she can make within that terrain. When the chameleon reaches 6th level, and every three levels thereafter, she chooses a new type of terrain from the ranger’s favored terrain list. She gains this ability with the newly picked terrain.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored terrain hook.

## Parsed source feature headings

- Misdirection (Ex)
- Effortless Sneak (Sp)
- Rogue Talents
- Advanced Talents

