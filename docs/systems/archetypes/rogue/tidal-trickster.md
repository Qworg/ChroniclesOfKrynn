# Rogue - Tidal Trickster

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Tidal Trickster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Tidal%20Trickster
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Wisdom of the Waves (Ex); Liquid Disruption (Ex); Tidal Distortion (Ex)
- **Replaced / altered class features:** trapfinding and trap sense; improved uncanny dodge and the 8th-level rogue talent

## Replacement details

### Replaces: trapfinding and trap sense

- **Archetype feature:** Wisdom of the Waves (Ex)
- **Description:** A tidal trickster gains a swim speed equal to her unmodified base land speed (or increases her swim speed by 10 feet, if she has a racial swim speed).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6.
  - Mechanics summary: A tidal trickster gains a swim speed equal to her unmodified base land speed (or increases her swim speed by 10 feet, if she has a racial swim speed). Instead of the +8 bonus granted by a swim speed, she gains a racial bonus on Swim checks equal to 4 + half her rogue level (if she has a racial swim speed, she uses the better bonus). She gains a bonus on Bluff checks equal to half her rogue level. At 3rd level, she gains a +1 bonus on Will saves whenever she is underwater; this bonus increases by 1 at 6th level and every 3 levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Alters: sneak attack and replaces uncanny dodge

- **Archetype feature:** Liquid Disruption (Ex)
- **Description:** At 4th level, a tidal trickster can use her knowledge of the cohesion of liquids to disrupt certain foes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a tidal trickster can use her knowledge of the cohesion of liquids to disrupt certain foes. She can deal sneak attack damage to oozes and creatures with the water subtype that are normally immune to precision damage (such as water elementals), and she ignores a hydrokineticist’s chance to negate precision damage from elemental overflow.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook, ki/monk hook.
  - Needs implementation review: kineticist burn/infusion mechanics.

### Alters: the 4th-level rogue talent

- **Archetype feature:** Liquid Disruption (Ex)
- **Description:** At 4th level, a tidal trickster can use her knowledge of the cohesion of liquids to disrupt certain foes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a tidal trickster can use her knowledge of the cohesion of liquids to disrupt certain foes. She can deal sneak attack damage to oozes and creatures with the water subtype that are normally immune to precision damage (such as water elementals), and she ignores a hydrokineticist’s chance to negate precision damage from elemental overflow.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook, ki/monk hook.
  - Needs implementation review: kineticist burn/infusion mechanics.

### Replaces: improved uncanny dodge

- **Archetype feature:** Tidal Distortion (Ex)
- **Description:** At 8th level, while making a full attack underwater, a tidal trickster can give up one attack to create a tidal distortion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, while making a full attack underwater, a tidal trickster can give up one attack to create a tidal distortion. When she creates a tidal distortion, the tidal trickster moves up to 10 feet. If any part of her movement includes a square adjacent to one or more foes, she can choose one of those foes and attempt a Bluff check with a DC of 11 + either the enemy’s Sense Motive or Swim modifier, whichever is higher. Her Bluff check is subject to any penalties the attack roll she sacrificed would have taken, and if she trades an iterative attack gained from having a high base attack bonus, she also takes a penalty based on that attack’s lower base attack bonus (a –5 penalty for the second iterative attack, a –10 penalty for the third iterative attack, and a –15 penalty for the fourth ite... If she succeeds at the Bluff check, the movement doesn’t provoke an attack of opportunity from that foe and the foe becomes off-balance (see page 45) until its next turn. A tidal trickster can give up any number of her attacks in a given full attack to create tidal distortions, but she can’t give up two consecutive attacks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, save DC calculation, ki/monk hook.

### Replaces: the 8th-level rogue talent

- **Archetype feature:** Tidal Distortion (Ex)
- **Description:** At 8th level, while making a full attack underwater, a tidal trickster can give up one attack to create a tidal distortion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, while making a full attack underwater, a tidal trickster can give up one attack to create a tidal distortion. When she creates a tidal distortion, the tidal trickster moves up to 10 feet. If any part of her movement includes a square adjacent to one or more foes, she can choose one of those foes and attempt a Bluff check with a DC of 11 + either the enemy’s Sense Motive or Swim modifier, whichever is higher. Her Bluff check is subject to any penalties the attack roll she sacrificed would have taken, and if she trades an iterative attack gained from having a high base attack bonus, she also takes a penalty based on that attack’s lower base attack bonus (a –5 penalty for the second iterative attack, a –10 penalty for the third iterative attack, and a –15 penalty for the fourth ite... If she succeeds at the Bluff check, the movement doesn’t provoke an attack of opportunity from that foe and the foe becomes off-balance (see page 45) until its next turn. A tidal trickster can give up any number of her attacks in a given full attack to create tidal distortions, but she can’t give up two consecutive attacks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Wisdom of the Waves (Ex)
- Liquid Disruption (Ex)
- Tidal Distortion (Ex)

