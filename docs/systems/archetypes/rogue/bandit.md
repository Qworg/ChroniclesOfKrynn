# Rogue - Bandit

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Bandit
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Bandit
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Ambush (Ex); Fearsome Strike (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Ambush (Ex)
- **Description:** At 4th level, a bandit becomes fully practiced in the art of ambushing.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a bandit becomes fully practiced in the art of ambushing. When she acts in the surprise round, she can take a move action, standard action, and swift action during the surprise round, not just a move or standard action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: improved uncanny dodge

- **Archetype feature:** Fearsome Strike (Ex)
- **Description:** At 8th level, a bandit can terrify an opponent with a single hit.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a bandit can terrify an opponent with a single hit. A number of times per day equal to her Charisma modifier (minimum 1), when a bandit confirms a critical hit and deals sneak attack damage to an opponent, she can choose to make the opponent frightened for a number of rounds equal to her Charisma modifier (minimum 1). She cannot use this ability in conjunction with a critical feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sneak attack hook.

## Parsed source feature headings

- Ambush (Ex)
- Fearsome Strike (Ex)
- Rogue Talents
- Advanced Talents

