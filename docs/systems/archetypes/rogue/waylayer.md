# Rogue - Waylayer

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Waylayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Waylayer
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Staggering Reflexes (Ex); Ambuscading Sneak Attack (Ex); Danger Awareness (Ex); Exceptional Reflexes (Ex); Masterful Reflexes (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; uncanny dodge; the rogue talent gained at 20th level

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Staggering Reflexes (Ex)
- **Description:** At 1st level, a waylayer gains a bonus on initiative checks equal to 1/2 her level (minimum +1) if she acts in a surprise round, and is never flat-footed at the start of combat (even if she fails to act during the surprise round).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a waylayer gains a bonus on initiative checks equal to 1/2 her level (minimum +1) if she acts in a surprise round, and is never flat-footed at the start of combat (even if she fails to act during the surprise round).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** Ambuscading Sneak Attack (Ex)
- **Description:** At 4th level, a waylayer becomes especially skilled at attacking unaware foes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a waylayer becomes especially skilled at attacking unaware foes. When she makes a sneak attack during a surprise round, she uses d8s to roll sneak attack damage instead of d6s.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: improved uncanny dodge

- **Archetype feature:** Danger Awareness (Ex)
- **Description:** At 8th level, a waylayer is never considered an unaware combatant and is always able to act in the surprise round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a waylayer is never considered an unaware combatant and is always able to act in the surprise round.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Exceptional Reflexes (Ex)
- **Description:** At 12th level, a waylayer can move up to her speed before taking her action in a surprise round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a waylayer can move up to her speed before taking her action in a surprise round.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the rogue talent gained at 20th level

- **Archetype feature:** Masterful Reflexes (Ex)
- **Description:** At 20th level, a waylayer’s initiative roll is automatically a natural 20.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a waylayer’s initiative roll is automatically a natural 20.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the waylayer archetype: camouflage APG, cunning trigger APG, quick trapsmith APG, slow reactions, surprise attack, and underhanded UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the waylayer archetype: camouflage APG, cunning trigger APG, quick trapsmith APG, slow reactions, surprise attack, and underhanded UC.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced talents complement the waylayer archetype: entanglement of blades APG, hide in plain sight UC, knock-out blow APG, and weapon snatcher UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced talents complement the waylayer archetype: entanglement of blades APG, hide in plain sight UC, knock-out blow APG, and weapon snatcher UC.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Staggering Reflexes (Ex)
- Ambuscading Sneak Attack (Ex)
- Danger Awareness (Ex)
- Exceptional Reflexes (Ex)
- Masterful Reflexes (Ex)
- Rogue Talents
- Advanced Talents
