# Rogue - Sczarni Swindler

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sczarni Swindler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sczarni%20Swindler
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Let Fate Decide (Ex); Quicker Than the Eye (Ex); Poker Face (Ex); No Fool (Ex); Cheat Fate (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; evasion; trap sense; uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Let Fate Decide (Ex)
- **Description:** At 1st level, the Sczarni swindler can declare two different actions that rely on different types of rolls or checks, such as attacking a creature (an attack roll) or sneaking past the same creature (a Stealth check).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the Sczarni swindler can declare two different actions that rely on different types of rolls or checks, such as attacking a creature (an attack roll) or sneaking past the same creature (a Stealth check). As a standard action, the swindler then uses a random method to choose one of the declared activities, such as flipping a coin, rolling a die, or drawing a harrow card. The specific method doesn’t matter as long as there is an equal chance of either activity being chosen. If the swindler then performs the chosen activity within the next round, she gains a luck bonus on the roll type required for that activity—attack rolls with a specific weapon, a specific skill check, a specific ability check, or a specific saving throw—equal to half her rogue level (minimum +1) for 1 minute. If the swindler performs any other action (whether declared or not) in the round after using this ability, she becomes shaken for 1 minute instead. The swindler can use this ability a number of times per day equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: evasion

- **Archetype feature:** Quicker Than the Eye (Ex)
- **Description:** At 2nd level, when the Sczarni swindler uses Sleight of Hand, creatures take a penalty on their Perception checks equal to half the swindler’s class level to notice the attempt.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, when the Sczarni swindler uses Sleight of Hand, creatures take a penalty on their Perception checks equal to half the swindler’s class level to notice the attempt. The swindler also reduces the normal –20 penalty by an amount equal to her class level when attempting a Sleight of Hand check as a move action instead of as a standard action. Lastly, the swindler can draw hidden weapons or objects from her person as a move action instead of the usual standard action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Poker Face (Ex)
- **Description:** At 3rd level, the Sczarni swindler gains a +1 bonus on Bluff, Profession (gambler), and Sense Motive checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the Sczarni swindler gains a +1 bonus on Bluff, Profession (gambler), and Sense Motive checks. This bonus increases by 1 for every 3 levels beyond 3rd. The Sczarni swindler can also attempt to feint against non-humanoid targets without penalty, though she still takes a –8 penalty on feint attempts against creatures with animal intelligence and she cannot feint against mindless creatures.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** No Fool (Ex)
- **Description:** At 4th level, the Sczarni swindler gains a +1 bonus on Will saving throws.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 20.
  - **Rules text to implement:** At 4th level, the Sczarni swindler gains a +1 bonus on Will saving throws. This bonus increases by 1 for every 4 levels beyond 4th (to a maximum of +5 at 20th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Cheat Fate (Ex)
- **Description:** At 8th level, once per day, the Sczarni swindler can reroll any one d20 roll she has just made before the GM has revealed the result.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8, 14.
  - **Rules text to implement:** At 8th level, once per day, the Sczarni swindler can reroll any one d20 roll she has just made before the GM has revealed the result. She must take the result of the second roll, even if it is worse. The swindler can use this ability twice per day at 14th level, and three times per day at 20th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the Sczarni swindler archetype: canny observer APG, fast fingers APG, hard to fool APG, honeyed words APG, major magic, and minor magic.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the Sczarni swindler archetype: canny observer APG, fast fingers APG, hard to fool APG, honeyed words APG, major magic, and minor magic.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the Sczarni swindler archetype: master of disguise APG, skill mastery, and slippery mind.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the Sczarni swindler archetype: master of disguise APG, skill mastery, and slippery mind.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Let Fate Decide (Ex)
- Quicker Than the Eye (Ex)
- Poker Face (Ex)
- No Fool (Ex)
- Cheat Fate (Ex)
- Rogue Talents
- Advanced Talents
