# Rogue - Sczarni Swindler

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sczarni Swindler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sczarni%20Swindler
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Let Fate Decide (Ex); Quicker Than the Eye (Ex); Poker Face (Ex); No Fool (Ex); Cheat Fate (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; evasion; trap sense; uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Let Fate Decide (Ex)
- **Description:** At 1st level, the Sczarni swindler can declare two different actions that rely on different types of rolls or checks, such as attacking a creature (an attack roll) or sneaking past the same creature (a Stealth check).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the Sczarni swindler can declare two different actions that rely on different types of rolls or checks, such as attacking a creature (an attack roll) or sneaking past the same creature (a Stealth check). As a standard action, the swindler then uses a random method to choose one of the declared activities, such as flipping a coin, rolling a die, or drawing a harrow card. The specific method doesn’t matter as long as there is an equal chance of either activity being chosen. If the swindler then performs the chosen activity within the next round, she gains a luck bonus on the roll type required for that activity—attack rolls with a specific weapon, a specific skill check, a specific ability check, or a specific saving throw—equal to half her rogue level (minimum +1) for 1 minute. If the swindler performs any other action (whether declared or not) in the round after using this ability, she becomes shaken for 1 minute instead. The swindler can use this ability a number of times per day equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: harrow deck/cards.

### Replaces: evasion

- **Archetype feature:** Quicker Than the Eye (Ex)
- **Description:** At 2nd level, when the Sczarni swindler uses Sleight of Hand, creatures take a penalty on their Perception checks equal to half the swindler’s class level to notice the attempt.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, when the Sczarni swindler uses Sleight of Hand, creatures take a penalty on their Perception checks equal to half the swindler’s class level to notice the attempt. The swindler also reduces the normal –20 penalty by an amount equal to her class level when attempting a Sleight of Hand check as a move action instead of as a standard action. Lastly, the swindler can draw hidden weapons or objects from her person as a move action instead of the usual standard action.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: trap sense

- **Archetype feature:** Poker Face (Ex)
- **Description:** At 3rd level, the Sczarni swindler gains a +1 bonus on Bluff, Profession (gambler), and Sense Motive checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the Sczarni swindler gains a +1 bonus on Bluff, Profession (gambler), and Sense Motive checks. This bonus increases by 1 for every 3 levels beyond 3rd. The Sczarni swindler can also attempt to feint against non-humanoid targets without penalty, though she still takes a –8 penalty on feint attempts against creatures with animal intelligence and she cannot feint against mindless creatures.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Replaces: uncanny dodge

- **Archetype feature:** No Fool (Ex)
- **Description:** At 4th level, the Sczarni swindler gains a +1 bonus on Will saving throws.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 20.
  - Mechanics summary: At 4th level, the Sczarni swindler gains a +1 bonus on Will saving throws. This bonus increases by 1 for every 4 levels beyond 4th (to a maximum of +5 at 20th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Cheat Fate (Ex)
- **Description:** At 8th level, once per day, the Sczarni swindler can reroll any one d20 roll she has just made before the GM has revealed the result.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8, 14.
  - Mechanics summary: At 8th level, once per day, the Sczarni swindler can reroll any one d20 roll she has just made before the GM has revealed the result. She must take the result of the second roll, even if it is worse. The swindler can use this ability twice per day at 14th level, and three times per day at 20th.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Let Fate Decide (Ex)
- Quicker Than the Eye (Ex)
- Poker Face (Ex)
- No Fool (Ex)
- Cheat Fate (Ex)
- Rogue Talents
- Advanced Talents

