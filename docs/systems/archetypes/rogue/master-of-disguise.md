# Rogue - Master of Disguise

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Master of Disguise
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Master%20of%20Disguise
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Consummate Actor (Ex); Grandmaster of Disguise (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding and the rogue talent gained at 2nd level; the rogue talent gained at 10th level

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Consummate Actor (Ex)
- **Description:** A master of disguise adds half her rogue level (minimum 1) on all Disguise checks and on Bluff checks to stay in character while using Disguise.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A master of disguise adds half her rogue level (minimum 1) on all Disguise checks and on Bluff checks to stay in character while using Disguise. At 2nd level, she gains the quick disguise APG rogue talent, and she can create a disguise twice as quickly as normal even for that rogue talent (she can create a disguise that encompasses only minor details as a standard action).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Consummate Actor (Ex)
- **Description:** A master of disguise adds half her rogue level (minimum 1) on all Disguise checks and on Bluff checks to stay in character while using Disguise.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A master of disguise adds half her rogue level (minimum 1) on all Disguise checks and on Bluff checks to stay in character while using Disguise. At 2nd level, she gains the quick disguise APG rogue talent, and she can create a disguise twice as quickly as normal even for that rogue talent (she can create a disguise that encompasses only minor details as a standard action).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the rogue talent gained at 10th level

- **Archetype feature:** Grandmaster of Disguise (Ex)
- **Description:** At 10th level, a master of disguise gains the master of disguise APG advanced rogue talent and can use it an unlimited number of times per day.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a master of disguise gains the master of disguise APG advanced rogue talent and can use it an unlimited number of times per day. Because she must still don a physical disguise to gain this bonus, it doesn’t stack with the bonuses from spells like alter self and disguise self , but since it is completely nonmagical, it is more reliable when scrutinized under magical detection.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Consummate Actor (Ex)
- Grandmaster of Disguise (Ex)
- Rogue Talents
- Advanced Talents

