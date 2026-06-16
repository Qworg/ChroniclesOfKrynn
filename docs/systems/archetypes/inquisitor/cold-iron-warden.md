# Inquisitor - Cold Iron Warden

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Cold Iron Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Cold%20Iron%20Warden
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Track Teleportation (Su); Abyssal Scourge (Su); Favored Judgment; Bane (Su); Translate Telepathy (Su)
- **Replaced / altered class features:** track and the teamwork feats gained at 12th and 18th level; solo tactics and the teamwork feats gained at 6th and 15th level; the teamwork feats gained at 3rd and 9th level; discern lies

## Replacement details

### Replaces: track

- **Archetype feature:** Track Teleportation (Su)
- **Description:** At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 12, 18.
  - Mechanics summary: At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood. As a full-round action while standing in a square that a creature occupied when it cast a conjuration (teleportation) spell or spell-like ability, the cold iron warden may attempt a Survival check (DC 10 + the teleportation spell’s caster level) to sense the direction of the creature’s destination as well as whether the destination lies within 25 feet, 100 feet, 1,000 feet,... She must use this ability within a number of rounds after the creature’s teleportation equal to 1/2 her inquisitor level, after which the trail goes cold. A cold iron warden may use this ability once per day plus one additional time per day for every 4 levels she has beyond 2nd. At 12th level, if the cold iron warden exceeds the Survival check DC by 5 or more, she can also sense the creature’s location as if using the locate creature spell, using her inquisitor level as the caster level. At 18th level, if the cold iron warden exceeds the Survival check DC by 10 or more, she can also sense the creature’s location as if she had cast discern location .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, spellcasting/spell-list hook.

### Replaces: the teamwork feats gained at 12th

- **Archetype feature:** Track Teleportation (Su)
- **Description:** At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 12, 18.
  - Mechanics summary: At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood. As a full-round action while standing in a square that a creature occupied when it cast a conjuration (teleportation) spell or spell-like ability, the cold iron warden may attempt a Survival check (DC 10 + the teleportation spell’s caster level) to sense the direction of the creature’s destination as well as whether the destination lies within 25 feet, 100 feet, 1,000 feet,... She must use this ability within a number of rounds after the creature’s teleportation equal to 1/2 her inquisitor level, after which the trail goes cold. A cold iron warden may use this ability once per day plus one additional time per day for every 4 levels she has beyond 2nd. At 12th level, if the cold iron warden exceeds the Survival check DC by 5 or more, she can also sense the creature’s location as if using the locate creature spell, using her inquisitor level as the caster level. At 18th level, if the cold iron warden exceeds the Survival check DC by 10 or more, she can also sense the creature’s location as if she had cast discern location .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, spellcasting/spell-list hook.

### Replaces: 18th level

- **Archetype feature:** Track Teleportation (Su)
- **Description:** At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 12, 18.
  - Mechanics summary: At 2nd level, a cold iron warden may acquire clues about a teleporting creature’s destination by closely examining the place it once stood. As a full-round action while standing in a square that a creature occupied when it cast a conjuration (teleportation) spell or spell-like ability, the cold iron warden may attempt a Survival check (DC 10 + the teleportation spell’s caster level) to sense the direction of the creature’s destination as well as whether the destination lies within 25 feet, 100 feet, 1,000 feet,... She must use this ability within a number of rounds after the creature’s teleportation equal to 1/2 her inquisitor level, after which the trail goes cold. A cold iron warden may use this ability once per day plus one additional time per day for every 4 levels she has beyond 2nd. At 12th level, if the cold iron warden exceeds the Survival check DC by 5 or more, she can also sense the creature’s location as if using the locate creature spell, using her inquisitor level as the caster level. At 18th level, if the cold iron warden exceeds the Survival check DC by 10 or more, she can also sense the creature’s location as if she had cast discern location .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, spellcasting/spell-list hook.

### Replaces: solo tactics

- **Archetype feature:** Abyssal Scourge (Su)
- **Description:** At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 6, 15.
  - Mechanics summary: At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders. She can channel energy as a cleric of her inquisitor level – 2 a number of times per day equal to 3 + her Charisma modifier, but only to use Alignment Channel to damage outsiders. The DC of the Will save to halve the damage is equal to 10 + 1/2 the inquisitor’s level + the inquisitor’s Charisma modifier. At 6th level, the energy lingers in the affected area for 1 round as a shimmering, barely perceptible, mist that disrupts Abyssal magic. A creature in the mist that casts a conjuration (summoning) spell or spell-like ability with the selected alignment subtype must succeed at a concentration check or lose the spell. At 15th level, any chaotic or evil creature that casts a conjuration (teleportation) spell or spell-like ability while in the mist must succeed at a concentration check or lose the spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.

### Replaces: the teamwork feats gained at 6th

- **Archetype feature:** Abyssal Scourge (Su)
- **Description:** At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 6, 15.
  - Mechanics summary: At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders. She can channel energy as a cleric of her inquisitor level – 2 a number of times per day equal to 3 + her Charisma modifier, but only to use Alignment Channel to damage outsiders. The DC of the Will save to halve the damage is equal to 10 + 1/2 the inquisitor’s level + the inquisitor’s Charisma modifier. At 6th level, the energy lingers in the affected area for 1 round as a shimmering, barely perceptible, mist that disrupts Abyssal magic. A creature in the mist that casts a conjuration (summoning) spell or spell-like ability with the selected alignment subtype must succeed at a concentration check or lose the spell. At 15th level, any chaotic or evil creature that casts a conjuration (teleportation) spell or spell-like ability while in the mist must succeed at a concentration check or lose the spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.

### Replaces: 15th level

- **Archetype feature:** Abyssal Scourge (Su)
- **Description:** At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 6, 15.
  - Mechanics summary: At 3rd level, a cold iron warden gains Alignment Channel as a bonus feat and must choose either chaotic or evil outsiders. She can channel energy as a cleric of her inquisitor level – 2 a number of times per day equal to 3 + her Charisma modifier, but only to use Alignment Channel to damage outsiders. The DC of the Will save to halve the damage is equal to 10 + 1/2 the inquisitor’s level + the inquisitor’s Charisma modifier. At 6th level, the energy lingers in the affected area for 1 round as a shimmering, barely perceptible, mist that disrupts Abyssal magic. A creature in the mist that casts a conjuration (summoning) spell or spell-like ability with the selected alignment subtype must succeed at a concentration check or lose the spell. At 15th level, any chaotic or evil creature that casts a conjuration (teleportation) spell or spell-like ability while in the mist must succeed at a concentration check or lose the spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.

### Replaces: the teamwork feats gained at 3rd

- **Archetype feature:** Favored Judgment
- **Description:** At 3rd level, the inquisitor gains Favored Judgment ( Pathfinder RPG Ultimate Magic 150) as a bonus feat but must choose either outsider (chaotic) or outsider (evil).
- **Mechanics:**
  - Level hooks: 3, 9.
  - Mechanics summary: At 3rd level, the inquisitor gains Favored Judgment ( Pathfinder RPG Ultimate Magic 150) as a bonus feat but must choose either outsider (chaotic) or outsider (evil). At 9th level, she gains Favored Judgment as a bonus feat a second time and must choose either outsider (chaotic) or outsider (evil).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: 9th level

- **Archetype feature:** Favored Judgment
- **Description:** At 3rd level, the inquisitor gains Favored Judgment ( Pathfinder RPG Ultimate Magic 150) as a bonus feat but must choose either outsider (chaotic) or outsider (evil).
- **Mechanics:**
  - Level hooks: 3, 9.
  - Mechanics summary: At 3rd level, the inquisitor gains Favored Judgment ( Pathfinder RPG Ultimate Magic 150) as a bonus feat but must choose either outsider (chaotic) or outsider (evil). At 9th level, she gains Favored Judgment as a bonus feat a second time and must choose either outsider (chaotic) or outsider (evil).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Alters: the bane ability

- **Archetype feature:** Bane (Su)
- **Description:** A cold iron warden reduces the amount of bonus damage dealt when using her bane ability against creatures that are not outsiders with the chaotic or evil subtype by 1d6.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A cold iron warden reduces the amount of bonus damage dealt when using her bane ability against creatures that are not outsiders with the chaotic or evil subtype by 1d6. She increases the amount of bonus damage by 1d6 when she selects outsiders with the chaotic or evil subtype.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: discern lies

- **Archetype feature:** Translate Telepathy (Su)
- **Description:** At 5th level, an inquisitor can sense when a creature within 5 feet of her receives or sends a telepathic message.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 20.
  - Mechanics summary: At 5th level, an inquisitor can sense when a creature within 5 feet of her receives or sends a telepathic message. The distance at which she can detect telepathic messages increases by 5 feet for every 5 additional inquisitor levels she has beyond 5th level, to a maximum of 20 feet at 20th level. By making a Perception check (DC 15 + the highest CR of the creatures using telepathy) as an immediate action, she may listen to all telepathic messages sent to and by creatures in this area for a number of rounds per day equal to her inquisitor level. These rounds do not need to be consecutive.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.

## Parsed source feature headings

- Track Teleportation (Su)
- Abyssal Scourge (Su)
- Favored Judgment
- Bane (Su)
- Translate Telepathy (Su)

