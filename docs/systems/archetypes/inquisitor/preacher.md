# Inquisitor - Preacher

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Preacher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Preacher
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Determination (Ex)
- **Replaced / altered class features:** solo tactics

## Implementation details

### Replaces: solo tactics

- **Archetype feature:** Determination (Ex)
- **Description:** At 3rd level, the preacher is a person of few words on the battlefield, but those words hold great power and authority.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, the preacher is a person of few words on the battlefield, but those words hold great power and authority. Once per day, the inquisitor can use this ability to create one of the following effects. Each is a free action to use. Aggression : The preacher may reroll an attack roll that she just made before the results of the roll are revealed. She must take the result of the reroll, even if it’s worse than the original roll. Defense : When the inquisitor would be hit by a melee or ranged attack, as an immediate action she may add a +4 insight bonus to her Armor Class against that attack, and if this makes the inquisitor’s AC higher than the opponent’s attack roll, the attack misses. Warning : When a preacher’s ally within line of sight would be hit by a melee or ranged attack, she may call out a warning to that ally, and the attacker must reroll the attack and use the results of the second roll. The ally must be able to hear the preacher and must not be helpless for this ability to have any effect. Whenever the preacher could select a bonus teamwork feat (at 3rd, 6th, 9th, 12th, 15th, and 18th level), she can instead choose to increase her number of uses per day of this ability by one.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Determination (Ex)
