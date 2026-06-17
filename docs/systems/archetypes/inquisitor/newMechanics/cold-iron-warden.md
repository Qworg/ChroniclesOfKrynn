# Inquisitor - Cold Iron Warden

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Cold Iron Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Cold%20Iron%20Warden
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Track Teleportation (Su); Abyssal Scourge (Su); Favored Judgment; Bane (Su); Translate Telepathy (Su)
- **Replaced / altered class features:** track and the teamwork feats gained at 12th and 18th level; solo tactics and the teamwork feats gained at 6th and 15th level; the teamwork feats gained at 3rd and 9th level; discern lies

## Implementation details

### Replaces: track and the teamwork feats gained at 12th and 18th level

- **Archetype feature:** Track Teleportation (Su)
- **Description:** At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 12, 18.
  - **Rules text to implement:** At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood. As a full-round action while standing in a square that a creature occupied when it cast a conjuration (teleportation) spell or spell-like ability, the cold iron warden may attempt a Survival check (DC 10 + the teleportation spell’s caster level) to sense the direction of the creature’s destination as well as whether the destination lies within 25 feet, 100 feet, 1,000 feet, or more than 1,000 feet of her. She must use this ability within a number of rounds after the creature’s teleportation equal to 1/2 her inquisitor level, after which the trail goes cold. A cold iron warden may use this ability once per day plus one additional time per day for every 4 levels she has beyond 2nd. At 12th level, if the cold iron warden exceeds the Survival check DC by 5 or more, she can also sense the creature’s location as if using the locate creature spell, using her inquisitor level as the caster level. At 18th level, if the cold iron warden exceeds the Survival check DC by 10 or more, she can also sense the creature’s location as if she had cast discern location.
- **Implementation flags:**
  - teleport/positioning subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Replaces: solo tactics and the teamwork feats gained at 6th and 15th level

- **Archetype feature:** Abyssal Scourge (Su)
- **Description:** At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 6, 15.
  - **Rules text to implement:** At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders. She can channel energy as a cleric of her inquisitor level – 2 a number of times per day equal to 3 + her Charisma modifier, but only to use Alignment Channel to damage outsiders. The DC of the Will save to halve the damage is equal to 10 + 1/2 the inquisitor’s level + the inquisitor’s Charisma modifier. At 6th level, the energy lingers in the affected area for 1 round as a shimmering, barely perceptible, mist that disrupts Abyssal magic. A creature in the mist that casts a conjuration (summoning) spell or spell-like ability with the selected alignment subtype must succeed at a concentration check or lose the spell. At 15th level, any chaotic or evil creature that casts a conjuration (teleportation) spell or spell-like ability while in the mist must succeed at a concentration check or lose the spell. The concentration check DC for both abilities is equal to 15 + double the level of the conjuration spell. A cold iron warden can take other feats to add to this ability such as Improved Channeling, but not feats that alter this ability, such as Command Undead.
- **Implementation flags:**
  - teleport/positioning subsystem.
  - summoning subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Replaces: the teamwork feats gained at 3rd and 9th level

- **Archetype feature:** Favored Judgment
- **Description:** At 3rd level, the inquisitor gains Favored Judgment ( Pathfinder RPG Ultimate Magic 150) as a bonus feat but must choose either outsider (chaotic) or outsider (evil).
- **Detailed mechanics:**
  - **Level hooks:** 3, 9.
  - **Rules text to implement:** At 3rd level, the inquisitor gains Favored Judgment ( Pathfinder RPG Ultimate Magic 150) as a bonus feat but must choose either outsider (chaotic) or outsider (evil). At 9th level, she gains Favored Judgment as a bonus feat a second time and must choose either outsider (chaotic) or outsider (evil).
- **Implementation flags:**
  - judgment subsystem.
  - feat grant/prerequisite handling.

### Alters: the bane ability

- **Archetype feature:** Bane (Su)
- **Description:** A cold iron warden reduces the amount of bonus damage dealt when using her bane ability against creatures that are not outsiders with the chaotic or evil subtype by 1d6.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A cold iron warden reduces the amount of bonus damage dealt when using her bane ability against creatures that are not outsiders with the chaotic or evil subtype by 1d6. She increases the amount of bonus damage by 1d6 when she selects outsiders with the chaotic or evil subtype.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: discern lies

- **Archetype feature:** Translate Telepathy (Su)
- **Description:** At 5th level, an inquisitor can sense when a creature within 5 feet of her receives or sends a telepathic message.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 20.
  - **Rules text to implement:** At 5th level, an inquisitor can sense when a creature within 5 feet of her receives or sends a telepathic message. The distance at which she can detect telepathic messages increases by 5 feet for every 5 additional inquisitor levels she has beyond 5th level, to a maximum of 20 feet at 20th level. By making a Perception check (DC 15 + the highest CR of the creatures using telepathy) as an immediate action, she may listen to all telepathic messages sent to and by creatures in this area for a number of rounds per day equal to her inquisitor level. These rounds do not need to be consecutive.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Track Teleportation (Su)
- Abyssal Scourge (Su)
- Favored Judgment
- Bane (Su)
- Translate Telepathy (Su)
