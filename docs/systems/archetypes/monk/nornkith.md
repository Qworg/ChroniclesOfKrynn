# Monk - Nornkith

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Nornkith
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Nornkith
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Conviction of Fate (Ex); Forewarned (Su); Shears (Su); Resist Death’s Lure (Su); Fate Weaver (Su); Snip Thread (Su); Inscrutable (Su); Norn Transformation
- **Replaced / altered class features:** stunning fist; the bonus feat gained at 1st level; purity of body and the bonus feat gained at 10th level; diamond soul; quivering palm; empty body; perfect self

## Replacement details

### Replaces: stunning fist

- **Archetype feature:** Forewarned (Su)
- **Description:** A nornkith can always act in the surprise round, even if he does not notice her enemies, though she remains flat-footed until she takes an action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: A nornkith can always act in the surprise round, even if he does not notice her enemies, though she remains flat-footed until she takes an action. In addition, she gains a bonus on initiative rolls equal to half her monk level (minimum +1). At 20th level, a nornkith’s initiative roll is automatically a natural 20.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Shears (Su)
- **Description:** Whenever a nornkith makes an unarmed strike, she can cause shimmering silver shears to manifest around the blow, causing the unarmed strike to count as silver for the purpose of overcoming damage reduction.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7, 1.
  - Mechanics summary: Whenever a nornkith makes an unarmed strike, she can cause shimmering silver shears to manifest around the blow, causing the unarmed strike to count as silver for the purpose of overcoming damage reduction. At 7th level, she gains Improved Critical (unarmed strike) as a bonus feat, even if she does not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: purity of body

- **Archetype feature:** Resist Death’s Lure (Su)
- **Description:** At 5th level, a nornkith gains a +4 morale bonus on saves against death effects, energy drain, and negative energy.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 10.
  - Mechanics summary: At 5th level, a nornkith gains a +4 morale bonus on saves against death effects, energy drain, and negative energy. At 10th level, she gains immunity to energy drain and negative energy.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, ki/monk hook.

### Replaces: the bonus feat gained at 10th level

- **Archetype feature:** Resist Death’s Lure (Su)
- **Description:** At 5th level, a nornkith gains a +4 morale bonus on saves against death effects, energy drain, and negative energy.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 10.
  - Mechanics summary: At 5th level, a nornkith gains a +4 morale bonus on saves against death effects, energy drain, and negative energy. At 10th level, she gains immunity to energy drain and negative energy.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, ki/monk hook.

### Replaces: diamond soul

- **Archetype feature:** Fate Weaver (Su)
- **Description:** At 11th level, a nornkith can spend 1 ki point as an immediate action to force a creature within 60 feet to reroll one saving throw before the results of the roll are revealed.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a nornkith can spend 1 ki point as an immediate action to force a creature within 60 feet to reroll one saving throw before the results of the roll are revealed. The creature must take the result of the second roll, even if it’s worse than the original roll. Whether the new result is a success or failure, the creature cannot be the target of this ability again for 1 day.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: quivering palm

- **Archetype feature:** Snip Thread (Su)
- **Description:** At 15th level, as a standard action, a monk can spend 1 ki point to produce a golden thread linked to the fate of a creature within 60 feet and mimic snipping through the thread with a pair of shears.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, as a standard action, a monk can spend 1 ki point to produce a golden thread linked to the fate of a creature within 60 feet and mimic snipping through the thread with a pair of shears. The target takes 1d6 points of damage per nornkith level and can attempt a Fortitude saving throw (DC = 10 + half the nornkith’s monk level + her Charisma modifier) to halve this damage. If the damage would bring the target’s hit points to 0 or below, the nornkith can spend another ki point to sever the golden thread completely; in this case, the target dies and can only be restored to life with miracle, wish, or divine intervention. The nornkith can use this ability once per day.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.

### Replaces: empty body

- **Archetype feature:** Inscrutable (Su)
- **Description:** At 19th level, the nornkith is protected by a constant mind blank effect with a caster level equal to her monk level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, the nornkith is protected by a constant mind blank effect with a caster level equal to her monk level. The nornkith can suppress or resume this protection as a standard action.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: perfect self

- **Archetype feature:** Norn Transformation
- **Description:** At 20th level, a nornkith attains her fey heritage.
- **Mechanics:**
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a nornkith attains her fey heritage. Her type changes to fey, and she gains DR 10/cold iron.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Conviction of Fate (Ex)
- Forewarned (Su)
- Shears (Su)
- Resist Death’s Lure (Su)
- Fate Weaver (Su)
- Snip Thread (Su)
- Inscrutable (Su)
- Norn Transformation

