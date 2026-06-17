# Rogue - Thug

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Thug
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Thug
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Frightening (Ex); Brutal Beating (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Frightening (Ex)
- **Description:** Whenever a thug successfully uses Intimidate to demoralize a creature, the duration of the shaken condition is increased by 1 round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Whenever a thug successfully uses Intimidate to demoralize a creature, the duration of the shaken condition is increased by 1 round. In addition, if the target is shaken for 4 or more rounds, the thug can instead decide to make the target frightened for 1 round.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Brutal Beating (Ex)
- **Description:** At 3rd level, whenever a thug deals sneak attack damage, she can choose to forgo 1d6 points of sneak attack damage to make the target sickened for a number of rounds equal to 1/2 her rogue level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, whenever a thug deals sneak attack damage, she can choose to forgo 1d6 points of sneak attack damage to make the target sickened for a number of rounds equal to 1/2 her rogue level. This ability does not stack with itself—only the most recent duration applies.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the thug archetype: offensive defense, powerful sneak, strong impression, and weapon training*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the thug archetype: offensive defense, powerful sneak, strong impression, and weapon training*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the thug archetype: crippling strike*, deadly sneak, and knock-out blow.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the thug archetype: crippling strike*, deadly sneak, and knock-out blow.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Frightening (Ex)
- Brutal Beating (Ex)
- Rogue Talents
- Advanced Talents
