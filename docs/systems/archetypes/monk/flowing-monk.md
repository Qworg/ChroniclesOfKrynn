# Monk - Flowing Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Flowing Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Flowing%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonus Feat; Redirection (Ex); Unbalancing Counter (Ex); Flowing Dodge (Ex); Elusive Target (Ex); Volley Spell (Su)
- **Replaced / altered class features:** stunning fist; the bonus feat gained at 2nd level; fast movement; purity of body and diamond body; quivering palm

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** A flowing monk replaces the normal monk bonus feats with the following: Agile Maneuvers, Combat Reflexes, Deflect Arrows, Dodge, Improved Reposition, Improved Trip, Nimble Moves, and Weapon Finesse.
- **Detailed mechanics:**
  - **Level hooks:** 6, 10.
  - **Rules text to implement:** A flowing monk replaces the normal monk bonus feats with the following: Agile Maneuvers, Combat Reflexes, Deflect Arrows, Dodge, Improved Reposition, Improved Trip, Nimble Moves, and Weapon Finesse. At 6th level, the following feats are also available: Acrobatic Steps, Bodyguard, Improved Disarm, Improved Feint, Ki Throw, Mobility, Second Chance, and Sidestep. At 10th level, the following feats are added: In Harm’s Way, Repositioning Strike, Snatch Arrows, Spring Attack, and Tripping Strike.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: stunning fist

- **Archetype feature:** Redirection (Ex)
- **Description:** At 1st level, as an immediate action, a flowing monk can attempt a reposition or trip combat maneuver against a creature that the flowing monk threatens and that attacks him.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 4, 20, 8, 12.
  - **Rules text to implement:** At 1st level, as an immediate action, a flowing monk can attempt a reposition or trip combat maneuver against a creature that the flowing monk threatens and that attacks him. If the combat maneuver is successful, the attacker is sickened for 1 round (Reflex DC = 10 + 1/2 the monk’s level + monk’s Wisdom modifier to halve the duration), plus 1 additional round at 4th level and for every four levels afterward (to a maximum of 6 rounds at 20th level). The monk gains a +2 bonus on the reposition or trip combat maneuver check and the save DC for redirection increases by 2 if the attacker is using Power Attack or is charging when attacking him. The benefit increases to a +4 bonus and an increase of the saving throw by 4 if both apply. At 4th level, a flowing monk can use redirection against an opponent that the flowing monk threatens and that attacks an ally with a melee attack. At 8th level, a flowing monk can make both a reposition and a trip maneuver as part of a single immediate action with this ability. At 12th level, a flowing monk can use redirection against any opponent that attacks him in melee, even if the flowing monk is not threatening the opponent who attacks him. A flowing monk can use this ability once per day per monk level, but no more than once per round.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the bonus feat gained at 2nd level

- **Archetype feature:** Unbalancing Counter (Ex)
- **Description:** At 2nd level, a flowing monk’s attacks of opportunity render a struck creature flat-footed until the end of the flowing monk’s next turn (Reflex DC 10 + 1/2 the monk’s level + Wisdom modifier negates).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a flowing monk’s attacks of opportunity render a struck creature flat-footed until the end of the flowing monk’s next turn (Reflex DC 10 + 1/2 the monk’s level + Wisdom modifier negates).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: fast movement

- **Archetype feature:** Flowing Dodge (Ex)
- **Description:** At 3rd level, a flowing monk gains a +1 dodge bonus to AC for each enemy adjacent to him, up to a maximum bonus equal to his Wisdom modifier (minimum 1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a flowing monk gains a +1 dodge bonus to AC for each enemy adjacent to him, up to a maximum bonus equal to his Wisdom modifier (minimum 1).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: purity of body and diamond body

- **Archetype feature:** Elusive Target (Ex)
- **Description:** At 5th level, as an immediate action, a flowing monk may spend 2 points from his ki pool to attempt a Reflex save opposed by an attacker’s attack roll to halve damage from that attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 11.
  - **Rules text to implement:** At 5th level, as an immediate action, a flowing monk may spend 2 points from his ki pool to attempt a Reflex save opposed by an attacker’s attack roll to halve damage from that attack. At 11th level and above, the flowing monk suffers no damage on a successful save, or half damage on a failed save. If the attacker is flanking the monk, the flanking opponent who is not attacking becomes the target of the attack. Use the same attack roll, and if the attack hits the new target, that creatures takes half damage (or full damage if the attack is completely avoided). Any associated effects from the attack (such as bleed, poison, or spell effects) apply fully even if the attack deals only half damage.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

### Replaces: quivering palm

- **Archetype feature:** Volley Spell (Su)
- **Description:** At 15th level, when a targeted spell or spell-like ability fails to overcome a flowing monk’s spell resistance, he may reflect the effect onto its caster as spell turning by spending a number of points from his ki pool equal to 1/2 the spell’s level (minimum 1).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, when a targeted spell or spell-like ability fails to overcome a flowing monk’s spell resistance, he may reflect the effect onto its caster as spell turning by spending a number of points from his ki pool equal to 1/2 the spell’s level (minimum 1).
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.

## Parsed source feature headings

- Bonus Feat
- Redirection (Ex)
- Unbalancing Counter (Ex)
- Flowing Dodge (Ex)
- Elusive Target (Ex)
- Volley Spell (Su)
