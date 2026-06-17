# Monk - Wasteland Meditant

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Wasteland Meditant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Wasteland%20Meditant
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Dehydrating Strike (Su); Vigor (Ex); Desert Strider (Ex); Improved Vigor (Ex); Pillar of Salt (Su)
- **Replaced / altered class features:** Stunning Fist; Evasion; Slow Fall; Improved Evasion; Quivering Palm

## Implementation details

### Replaces: stunning fist

- **Archetype feature:** Dehydrating Strike (Su)
- **Description:** As a free action as part of a melee attack, a wasteland meditant can draw the moisture out of a living creature damaged by his unarmed strike.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 10, 4.
  - **Rules text to implement:** As a free action as part of a melee attack, a wasteland meditant can draw the moisture out of a living creature damaged by his unarmed strike. Unless the creature succeeds at a Will save (DC = 10 + half the monk’s level + his Wisdom modifier), the creature is fatigued for a number of rounds equal to half the wasteland meditant’s level (minimum 1). At 5th level, the creature struck is also staggered for 1 round if it fails its save. At 10th level, a creature that fails its save is exhausted instead of fatigued. When used against a plant creature or a creature with the water subtype, dehydrating strike inflicts the above conditions (as applicable) on a failed save and also deals 1d6 points of damage, plus 1d6 additional points of damage at 4th level and every 4 levels thereafter. This damage is in addition to the wasteland meditant’s normal unarmed strike damage. A wasteland meditant can use this ability a number of times per day equal to 3 + his Wisdom modifier but only once per round. Creatures immune to critical hits or precision damage are immune to this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: evasion

- **Archetype feature:** Vigor (Ex)
- **Description:** At 2nd level, when a wasteland meditant succeeds at a Fortitude save against an effect with a partial effect on a successful save, he instead suffers no effect.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, when a wasteland meditant succeeds at a Fortitude save against an effect with a partial effect on a successful save, he instead suffers no effect.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: slow fall

- **Archetype feature:** Desert Strider (Ex)
- **Description:** At 4th level, a wasteland meditant ignores movement penalties for difficult terrain when in desert terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6, 18.
  - **Rules text to implement:** At 4th level, a wasteland meditant ignores movement penalties for difficult terrain when in desert terrain. Additionally, he kicks up dust around his body whenever he performs a double move action in desert terrain. This dust grants the wasteland meditant concealment. The miss chance granted by this concealment starts at 10% at 4th level and increases by 10% at 6th level and every 2 levels thereafter, to a maximum of 80% at 18th level. This concealment lasts until the start of the meditant’s next turn and stacks with any concealment provided by movement, such as from the Wind Stance feat.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: improved evasion

- **Archetype feature:** Improved Vigor (Ex)
- **Description:** At 9th level, a wasteland meditant’s vigor ability improves.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a wasteland meditant’s vigor ability improves. He still takes no damage on a successful Fortitude saving throw against attacks, but henceforth he takes only half damage on a failed save.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: quivering palm

- **Archetype feature:** Pillar of Salt (Su)
- **Description:** At 15th level, a wasteland meditant can transform a creature’s body into a column of crumbling salt with a touch.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a wasteland meditant can transform a creature’s body into a column of crumbling salt with a touch. He can use pillar of salt once per day as part of an unarmed strike, and he must announce his intent before making his attack roll. Creatures immune to critical hits or transmutation effects cannot be affected. A creature successfully damaged by the wasteland meditant’s unarmed strike must succeed at a Fortitude saving throw (DC = 10 + half the monk’s level + his Wisdom modifier) or begin to calcify. Each round thereafter, the target of pillar of salt takes 2 points of Strength and Dexterity drain and gains a +1 bonus to its natural armor as a crust of salt begins to cover its body and restrict movement. These effects take place every round at the start of the wasteland meditant’s turn and continue for 1 round per level the wasteland meditant has. If the target is reduced to 0 Strength or Dexterity at any time during this duration, the creature is instantly killed and its body is transformed into a pillar of salt. A creature killed in this way can’t be brought back to life except by miracle, true resurrection, or wish. Total immersion in water suppresses the ongoing effects of pillar of salt but resets the accumulated natural armor bonus to zero. As long as the target lives, the ongoing effect of pillar of salt can be ended via a heal spell.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Dehydrating Strike (Su)
- Vigor (Ex)
- Desert Strider (Ex)
- Improved Vigor (Ex)
- Pillar of Salt (Su)
