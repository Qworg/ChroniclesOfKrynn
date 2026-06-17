# Inquisitor - Immolator

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Immolator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Immolator
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Servant of the Flame; Judgment (Su); Burnt Offering (Su); Judgment by Fire (Su)
- **Replaced / altered class features:** bane and greater bane

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Servant of the Flame
- **Description:** An immolator must worship a deity whose portfolio includes the Fire domain.
- **Detailed mechanics:**
  - **Rules text to implement:** An immolator must worship a deity whose portfolio includes the Fire domain. An immolator who selects the Fire domain (or one of its associated subdomains, if available) uses her domain powers at +1 caster level (this stacks with the ifrit’s fire affinity racial trait).
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Judgment (Su)
- **Description:** An immolator gains the following judgment instead of the smiting judgment.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 11, 16.
  - **Rules text to implement:** An immolator gains the following judgment instead of the smiting judgment. Immolation : The immolator channels purifying flame to consume her enemies. When dealing fire damage to an opponent, she treats the target’s fire resistance as 5 lower than normal (minimum 0). At 6th level, she treats the target’s resistance as 10 lower than normal, 15 lower than normal at 11th level, and 20 lower than normal at 16th level.
- **Implementation flags:**
  - judgment subsystem.
  - feat grant/prerequisite handling.

### Replaces: bane and greater bane

- **Archetype feature:** Burnt Offering (Su)
- **Description:** At 5th level, as a swift action, an immolator can imbue one of her weapons with the flaming weapon special ability.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 12.
  - **Rules text to implement:** At 5th level, as a swift action, an immolator can imbue one of her weapons with the flaming weapon special ability. Any creature slain by this weapon burns with magical flame; its body turns to ash, though its equipment is not harmed. This special ability only functions while the immolator wields the weapon. This ability lasts for a number of rounds per day equal to the immolator’s level. These rounds do not need to be consecutive. At 12th level, this ability gives the immolator’s weapon the flaming burst weapon special ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: and functions as true judgment

- **Archetype feature:** Judgment by Fire (Su)
- **Description:** At 20th level, an immolator can call fiery judgment down upon a foe during combat.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, an immolator can call fiery judgment down upon a foe during combat. Whenever an immolator uses her judgment ability, she can invoke a judgment by fire on a foe as a swift action. Once declared, the immolator can make a single melee (or ranged attack, if the foe is within 30 feet) against the target. If the attack hits, the attack deals fire damage instead of weapon damage, and the target must make a successful Fortitude save or die (creatures immune to fire do not have to save). The DC of this save is equal to 10 + 1/2 the immolator’s level + the immolator’s Wisdom modifier. Regardless of whether the save is successful, the target creature is immune to the immolator’s judgment by fire ability for 24 hours. Creatures killed in this manner explode in a burst of fire, dealing 10d6 points of fire damage to every creature within 5 feet (Reflex save for half damage, DC 10 + 1/2 the immolator’s level + the immolator’s Wisdom modifier). Once this ability has been used, it cannot be used again for 1d4 rounds.
- **Implementation flags:**
  - judgment subsystem.
  - ki subsystem.

## Parsed source feature headings

- Servant of the Flame
- Judgment (Su)
- Burnt Offering (Su)
- Judgment by Fire (Su)
