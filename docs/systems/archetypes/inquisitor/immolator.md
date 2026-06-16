# Inquisitor - Immolator

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Immolator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Immolator
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Servant of the Flame; Judgment (Su); Burnt Offering (Su); Judgment by Fire (Su)
- **Replaced / altered class features:** bane and greater bane

## Replacement details

### Replaces: bane and greater bane

- **Archetype feature:** Burnt Offering (Su)
- **Description:** At 5th level, as a swift action, an immolator can imbue one of her weapons with the flaming weapon special ability.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 12.
  - Mechanics summary: At 5th level, as a swift action, an immolator can imbue one of her weapons with the flaming weapon special ability. Any creature slain by this weapon burns with magical flame; its body turns to ash, though its equipment is not harmed. This ability lasts for a number of rounds per day equal to the immolator’s level. These rounds do not need to be consecutive. At 12th level, this ability gives the immolator’s weapon the flaming burst weapon special ability.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: and functions as true judgment

- **Archetype feature:** Judgment by Fire (Su)
- **Description:** At 20th level, an immolator can call fiery judgment down upon a foe during combat.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, an immolator can call fiery judgment down upon a foe during combat. Whenever an immolator uses her judgment ability, she can invoke a judgment by fire on a foe as a swift action. Once declared, the immolator can make a single melee (or ranged attack, if the foe is within 30 feet) against the target. If the attack hits, the attack deals fire damage instead of weapon damage, and the target must make a successful Fortitude save or die (creatures immune to fire do not have to save). The DC of this save is equal to 10 + 1/2 the immolator’s level + the immolator’s Wisdom modifier. Regardless of whether the save is successful, the target creature is immune to the immolator’s judgment by fire ability for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Servant of the Flame
- Judgment (Su)
- Burnt Offering (Su)
- Judgment by Fire (Su)

