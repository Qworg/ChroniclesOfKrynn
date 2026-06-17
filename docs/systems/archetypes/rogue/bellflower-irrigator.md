# Rogue - Bellflower Irrigator

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Bellflower Irrigator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Bellflower%20Irrigator
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bellflower Crop (Ex); Poison Use (Ex); Grafting (Ex); Irrigation (Ex)
- **Replaced / altered class features:** trapfinding; uncanny dodge and the rogue talent gained at 4th level; improved uncanny dodge

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bellflower Crop (Ex)
- **Description:** As a standard action, a Bellflower irrigator can designate a number of allies equal to 3 + his Charisma modifier as part of his Bellflower crop.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** As a standard action, a Bellflower irrigator can designate a number of allies equal to 3 + his Charisma modifier as part of his Bellflower crop. Members of a Bellflower crop must remain within 30 feet of the Bellflower irrigator to gain any benefits from abilities that affect a Bellflower crop, regardless of the ability’s source (whether it’s a Bellflower harvester, irrigator, or tiller). If the allies leave this range, the Bellflower irrigator must designate them again to include them in his crop.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trapfinding

- **Archetype feature:** Poison Use (Ex)
- **Description:** A Bellflower irrigator is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A Bellflower irrigator is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Implementation flags:**
  - poison subsystem.

### Replaces: uncanny dodge and the rogue talent gained at 4th level

- **Archetype feature:** Grafting (Ex)
- **Description:** At 4th level, a Bellflower irrigator is considered to be flanking an opponent if at least two members of his Bellflower crop are threatening that opponent, regardless of the irrigator’s actual positioning.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a Bellflower irrigator is considered to be flanking an opponent if at least two members of his Bellflower crop are threatening that opponent, regardless of the irrigator’s actual positioning.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Irrigation (Ex)
- **Description:** At 8th level, if a Bellflower irrigator studies his target for 3 rounds (spending a standard action each round to do so) and then makes a sneak attack with a melee weapon that successfully deals damage, the attack has the additional effect of possibly either paralyzing or killing the target (Bellflower irrigator’s choice).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, if a Bellflower irrigator studies his target for 3 rounds (spending a standard action each round to do so) and then makes a sneak attack with a melee weapon that successfully deals damage, the attack has the additional effect of possibly either paralyzing or killing the target (Bellflower irrigator’s choice). The death attack fails if the target detects the Bellflower irrigator or recognizes him as an enemy. If the victim of the attack fails a Fortitude save (DC = 10 + 1/2 the Bellflower irrigator’s class level + the Bellflower irrigator’s Intelligence modifier) against the kill effect, she dies. If the saving throw fails against the paralysis effect, the victim is rendered helpless and unable to act for 1d6 rounds plus 1 round per 2 rogue levels that the Bellflower irrigator has. If the victim’s saving throw succeeds, the attack is just a normal sneak attack. Once the Bellflower irrigator has completed the 3 rounds of study, he must make the irrigation attempt within the next 3 rounds. A Bellflower irrigator can attempt to kill or paralyze a creature in this way once per day, plus one additional time per day for every 4 additional rogue levels he has after 8th.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Bellflower Crop (Ex)
- Poison Use (Ex)
- Grafting (Ex)
- Irrigation (Ex)
