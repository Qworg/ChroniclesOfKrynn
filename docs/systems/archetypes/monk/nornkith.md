# Monk - Nornkith

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Nornkith
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Nornkith
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Conviction of Fate (Ex); Forewarned (Su); Shears (Su); Resist Death’s Lure (Su); Fate Weaver (Su); Snip Thread (Su); Inscrutable (Su); Norn Transformation
- **Replaced / altered class features:** stunning fist; the bonus feat gained at 1st level; purity of body and the bonus feat gained at 10th level; diamond soul; quivering palm; empty body; perfect self

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Conviction of Fate (Ex)
- **Description:** A nornkith uses her Charisma, rather than her Wisdom, to determine all class features and effects relating to his monk class.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A nornkith uses her Charisma, rather than her Wisdom, to determine all class features and effects relating to his monk class.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: stunning fist

- **Archetype feature:** Forewarned (Su)
- **Description:** A nornkith can always act in the surprise round, even if he does not notice her enemies, though she remains flat-footed until she takes an action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** A nornkith can always act in the surprise round, even if he does not notice her enemies, though she remains flat-footed until she takes an action. In addition, she gains a bonus on initiative rolls equal to half her monk level (minimum +1). At 20th level, a nornkith’s initiative roll is automatically a natural 20.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Shears (Su)
- **Description:** Whenever a nornkith makes an unarmed strike, she can cause shimmering silver shears to manifest around the blow, causing the unarmed strike to count as silver for the purpose of overcoming damage reduction.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7, 1.
  - **Rules text to implement:** Whenever a nornkith makes an unarmed strike, she can cause shimmering silver shears to manifest around the blow, causing the unarmed strike to count as silver for the purpose of overcoming damage reduction. At 7th level, she gains Improved Critical (unarmed strike) as a bonus feat, even if she does not meet the prerequisites.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: purity of body and the bonus feat gained at 10th level

- **Archetype feature:** Resist Death’s Lure (Su)
- **Description:** At 5th level, a nornkith gains a +4 morale bonus on saves against death effects, energy drain, and negative energy.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 10.
  - **Rules text to implement:** At 5th level, a nornkith gains a +4 morale bonus on saves against death effects, energy drain, and negative energy. At 10th level, she gains immunity to energy drain and negative energy.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: diamond soul

- **Archetype feature:** Fate Weaver (Su)
- **Description:** At 11th level, a nornkith can spend 1 ki point as an immediate action to force a creature within 60 feet to reroll one saving throw before the results of the roll are revealed.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a nornkith can spend 1 ki point as an immediate action to force a creature within 60 feet to reroll one saving throw before the results of the roll are revealed. The creature must take the result of the second roll, even if it’s worse than the original roll. Whether the new result is a success or failure, the creature cannot be the target of this ability again for 1 day.
- **Implementation flags:**
  - ki subsystem.

### Replaces: quivering palm

- **Archetype feature:** Snip Thread (Su)
- **Description:** At 15th level, as a standard action, a monk can spend 1 ki point to produce a golden thread linked to the fate of a creature within 60 feet and mimic snipping through the thread with a pair of shears.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, as a standard action, a monk can spend 1 ki point to produce a golden thread linked to the fate of a creature within 60 feet and mimic snipping through the thread with a pair of shears. The target takes 1d6 points of damage per nornkith level and can attempt a Fortitude saving throw (DC = 10 + half the nornkith’s monk level + her Charisma modifier) to halve this damage. If the damage would bring the target’s hit points to 0 or below, the nornkith can spend another ki point to sever the golden thread completely; in this case, the target dies and can only be restored to life with miracle, wish, or divine intervention. The nornkith can use this ability once per day. This is a death effect.
- **Implementation flags:**
  - ki subsystem.

### Replaces: empty body

- **Archetype feature:** Inscrutable (Su)
- **Description:** At 19th level, the nornkith is protected by a constant mind blank effect with a caster level equal to her monk level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, the nornkith is protected by a constant mind blank effect with a caster level equal to her monk level. The nornkith can suppress or resume this protection as a standard action.
- **Implementation flags:**
  - ki subsystem.

### Replaces: perfect self

- **Archetype feature:** Norn Transformation
- **Description:** At 20th level, a nornkith attains her fey heritage.
- **Detailed mechanics:**
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a nornkith attains her fey heritage. Her type changes to fey, and she gains DR 10/cold iron.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Conviction of Fate (Ex)
- Forewarned (Su)
- Shears (Su)
- Resist Death’s Lure (Su)
- Fate Weaver (Su)
- Snip Thread (Su)
- Inscrutable (Su)
- Norn Transformation
