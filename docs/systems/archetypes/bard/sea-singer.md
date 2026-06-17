# Bard - Sea Singer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Sea Singer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Sea%20Singer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; World Traveler (Ex); Familiar; Sea Legs (Ex)
- **Replaced / altered class features:** bardic knowledge; versatile performance; well-versed

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A sea singer gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 6, 18.
  - **Rules text to implement:** A sea singer gains the following types of bardic performance. Sea Shanty (Su) : A sea singer learns to counter seasickness and exhaustion during long sea voyages. Each round of a sea shanty, he makes a Perform skill check. Allies within 30 feet (including the sea singer) may use his Perform check in place of a saving throw against becoming exhausted, fatigued, nauseated, or sickened; if already under such an effect, a new save is allowed each round of the sea shanty, using the bard’s Perform check for the save. A sea shanty has no effect on instantaneous effects or effects that do not allow saves. This ability requires audible components. This performance replaces countersong. Still Water (Su) : At 3rd level, a sea singer can use performance to calm rough waters within 30 feet, reducing the DC for Profession (sailor) and Swim checks, as well as for Acrobatics and Climb checks aboard ship, by an amount equal to the bard’s level (to a minimum of DC 10) for as long he continues to perform. He can extend this duration to 1 hour by playing for 10 consecutive rounds. This ability requires audible components. This performance replaces inspire competence. Whistle the Wind (Su) : A sea singer of 6th level or higher can use performance to create a gust of wind. This wind lasts for as long as he continues his performance. He can extend this duration to 1 minute by playing for 5 consecutive rounds. This performance replaces suggestion. Call the Storm (Su) : At 18th level, a sea singer can use performance to duplicate control water, control weather, control winds, or storm of vengeance, using his bard level as the caster level. Using this ability requires 1 round of continuous performance per level of the spell (as if he were a druid). These effects continue for as long as the bard continues performing (the effects on control weather happen immediately), but not longer than the spell’s normal duration. This performance replaces mass suggestion.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: bardic knowledge

- **Archetype feature:** World Traveler (Ex)
- **Description:** A sea singer gains a bonus equal to half his bard level on Knowledge (geography), Knowledge (local), Knowledge (nature), and Linguistics checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** A sea singer gains a bonus equal to half his bard level on Knowledge (geography), Knowledge (local), Knowledge (nature), and Linguistics checks. He can reroll a check against one of these skills, but must take the result of the second roll even if it is worse. He can reroll one additional time per day at 5th level and every five levels thereafter.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: versatile performance

- **Archetype feature:** Familiar
- **Description:** At 2nd level, a sea singer acquires an exotic pet—a monkey or parrot (treat as raven)—that gains abilities as a wizard’s familiar, using the sea singer’s bard level as his wizard level.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a sea singer acquires an exotic pet—a monkey or parrot (treat as raven)—that gains abilities as a wizard’s familiar, using the sea singer’s bard level as his wizard level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: well-versed

- **Archetype feature:** Sea Legs (Ex)
- **Description:** At 2nd level, a sea singer gains a +4 bonus on saving throws against air and water effects and effects that would cause the sea singer to slip, trip, or otherwise be knocked prone.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a sea singer gains a +4 bonus on saving throws against air and water effects and effects that would cause the sea singer to slip, trip, or otherwise be knocked prone. He gains a +2 bonus to CMD against grapple, overrun, and trip.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Bardic Performance
- World Traveler (Ex)
- Familiar
- Sea Legs (Ex)
