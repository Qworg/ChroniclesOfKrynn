# Rogue - Waylayer

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Waylayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Waylayer
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Staggering Reflexes (Ex); Ambuscading Sneak Attack (Ex); Danger Awareness (Ex); Exceptional Reflexes (Ex); Masterful Reflexes (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; uncanny dodge; the rogue talent gained at 20th level

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Staggering Reflexes (Ex)
- **Description:** At 1st level, a waylayer gains a bonus on initiative checks equal to 1/2 her level (minimum +1) if she acts in a surprise round, and is never flat-footed at the start of combat (even if she fails to act during the surprise round).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a waylayer gains a bonus on initiative checks equal to 1/2 her level (minimum +1) if she acts in a surprise round, and is never flat-footed at the start of combat (even if she fails to act during the surprise round).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: uncanny dodge

- **Archetype feature:** Ambuscading Sneak Attack (Ex)
- **Description:** At 4th level, a waylayer becomes especially skilled at attacking unaware foes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a waylayer becomes especially skilled at attacking unaware foes. When she makes a sneak attack during a surprise round, she uses d8s to roll sneak attack damage instead of d6s.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, sneak attack hook, ki/monk hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Danger Awareness (Ex)
- **Description:** At 8th level, a waylayer is never considered an unaware combatant and is always able to act in the surprise round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a waylayer is never considered an unaware combatant and is always able to act in the surprise round.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Exceptional Reflexes (Ex)
- **Description:** At 12th level, a waylayer can move up to her speed before taking her action in a surprise round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a waylayer can move up to her speed before taking her action in a surprise round.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: the rogue talent gained at 20th level

- **Archetype feature:** Masterful Reflexes (Ex)
- **Description:** At 20th level, a waylayer’s initiative roll is automatically a natural 20.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a waylayer’s initiative roll is automatically a natural 20.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Staggering Reflexes (Ex)
- Ambuscading Sneak Attack (Ex)
- Danger Awareness (Ex)
- Exceptional Reflexes (Ex)
- Masterful Reflexes (Ex)
- Rogue Talents
- Advanced Talents

