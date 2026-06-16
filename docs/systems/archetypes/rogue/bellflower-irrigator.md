# Rogue - Bellflower Irrigator

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Bellflower Irrigator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Bellflower%20Irrigator
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bellflower Crop (Ex); Poison Use (Ex); Grafting (Ex); Irrigation (Ex)
- **Replaced / altered class features:** trapfinding; uncanny dodge and the rogue talent gained at 4th level; improved uncanny dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Poison Use (Ex)
- **Description:** A Bellflower irrigator is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A Bellflower irrigator is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: uncanny dodge

- **Archetype feature:** Grafting (Ex)
- **Description:** At 4th level, a Bellflower irrigator is considered to be flanking an opponent if at least two members of his Bellflower crop are threatening that opponent, regardless of the irrigator’s actual positioning.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a Bellflower irrigator is considered to be flanking an opponent if at least two members of his Bellflower crop are threatening that opponent, regardless of the irrigator’s actual positioning.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Grafting (Ex)
- **Description:** At 4th level, a Bellflower irrigator is considered to be flanking an opponent if at least two members of his Bellflower crop are threatening that opponent, regardless of the irrigator’s actual positioning.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a Bellflower irrigator is considered to be flanking an opponent if at least two members of his Bellflower crop are threatening that opponent, regardless of the irrigator’s actual positioning.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Irrigation (Ex)
- **Description:** At 8th level, if a Bellflower irrigator studies his target for 3 rounds (spending a standard action each round to do so) and then makes a sneak attack with a melee weapon that successfully deals damage, the attack has the additional effect of possibly either paralyzing or killing the target (Bellflower irrigator’s choice).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, if a Bellflower irrigator studies his target for 3 rounds (spending a standard action each round to do so) and then makes a sneak attack with a melee weapon that successfully deals damage, the attack has the additional effect of possibly either paralyzing or killing the target (Bellflower irrigator’s choice). The death attack fails if the target detects the Bellflower irrigator or recognizes him as an enemy. If the victim of the attack fails a Fortitude save (DC = 10 + 1/2 the Bellflower irrigator’s class level + the Bellflower irrigator’s Intelligence modifier) against the kill effect, she dies. If the saving throw fails against the paralysis effect, the victim is rendered helpless and unable to act for 1d6 rounds plus 1 round per 2 rogue levels that the Bellflower irrigator has. If the victim’s saving throw succeeds, the attack is just a normal sneak attack. Once the Bellflower irrigator has completed the 3 rounds of study, he must make the irrigation attempt within the next 3 rounds.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, sneak attack hook, ki/monk hook.

## Parsed source feature headings

- Bellflower Crop (Ex)
- Poison Use (Ex)
- Grafting (Ex)
- Irrigation (Ex)

