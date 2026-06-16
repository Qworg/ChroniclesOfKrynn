# Inquisitor - Preacher

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Preacher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Preacher
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Determination (Ex)
- **Replaced / altered class features:** solo tactics

## Replacement details

### Replaces: solo tactics

- **Archetype feature:** Determination (Ex)
- **Description:** At 3rd level, the preacher is a person of few words on the battlefield, but those words hold great power and authority.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, the preacher is a person of few words on the battlefield, but those words hold great power and authority. Once per day, the inquisitor can use this ability to create one of the following effects. Each is a free action to use. Aggression : The preacher may reroll an attack roll that she just made before the results of the roll are revealed. She must take the result of the reroll, even if it’s worse than the original roll. Defense : When the inquisitor would be hit by a melee or ranged attack, as an immediate action she may add a +4 insight bonus to her Armor Class against that attack, and if this makes the inquisitor’s AC higher than the opponent’s attack roll, the attack misses.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Determination (Ex)

