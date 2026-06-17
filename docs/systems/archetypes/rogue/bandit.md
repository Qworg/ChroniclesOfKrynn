# Rogue - Bandit

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Bandit
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Bandit
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ambush (Ex); Fearsome Strike (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Ambush (Ex)
- **Description:** At 4th level, a bandit becomes fully practiced in the art of ambushing.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a bandit becomes fully practiced in the art of ambushing. When she acts in the surprise round, she can take a move action, standard action, and swift action during the surprise round, not just a move or standard action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Fearsome Strike (Ex)
- **Description:** At 8th level, a bandit can terrify an opponent with a single hit.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a bandit can terrify an opponent with a single hit. A number of times per day equal to her Charisma modifier (minimum 1), when a bandit confirms a critical hit and deals sneak attack damage to an opponent, she can choose to make the opponent frightened for a number of rounds equal to her Charisma modifier (minimum 1). She cannot use this ability in conjunction with a critical feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the bandit archetype: assault leader, combat trick, cunning trigger, snap shot, strong impression, surprise attack, terrain master*, underhanded*, and weapon training.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the bandit archetype: assault leader, combat trick, cunning trigger, snap shot, strong impression, surprise attack, terrain master*, underhanded*, and weapon training.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the bandit archetype: hide in plain sight*, knock-out blow, and opportunist.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the bandit archetype: hide in plain sight*, knock-out blow, and opportunist.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Ambush (Ex)
- Fearsome Strike (Ex)
- Rogue Talents
- Advanced Talents
