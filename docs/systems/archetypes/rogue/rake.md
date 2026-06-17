# Rogue - Rake

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Rake
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Rake
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bravado’s Blade (Ex); Rake’s Smile (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Bravado’s Blade (Ex)
- **Description:** When a rake hits an opponent and deals sneak attack damage, she can forgo 1d6 points of that damage and make a free Intimidate check to demoralize the foe.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** When a rake hits an opponent and deals sneak attack damage, she can forgo 1d6 points of that damage and make a free Intimidate check to demoralize the foe. For every additional 1d6 points of sneak attack damage she forgoes, she receives a +5 circumstance bonus on this check.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Rake’s Smile (Ex)
- **Description:** At 3rd level, a rake gains a +1 morale bonus on Bluff and Diplomacy checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a rake gains a +1 morale bonus on Bluff and Diplomacy checks. This bonus increases by +1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the rake archetype: befuddling strike, charmer, honeyed words, and surprise attack*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the rake archetype: befuddling strike, charmer, honeyed words, and surprise attack*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the rake archetype: another day, redirect attack, and skill mastery*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the rake archetype: another day, redirect attack, and skill mastery*.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Bravado’s Blade (Ex)
- Rake’s Smile (Ex)
- Rogue Talents
- Advanced Talents
