# Berserker - Cave Dweller

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Cave Dweller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Cave%20Dweller
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skills; Tight Tunnels (Ex); Tunnel Vision (Ex); Sun Walker (Ex); Rage Powers
- **Replaced / altered class features:** Skills; Fast Movement; Trap Sense; Damage Reduction

## Implementation details

### Alters: the barbarian’s skills

- **Archetype feature:** Skills
- **Description:** A cave dweller gains Stealth as a class skill in place of Ride.
- **Detailed mechanics:**
  - **Rules text to implement:** A cave dweller gains Stealth as a class skill in place of Ride.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: fast movement

- **Archetype feature:** Tight Tunnels (Ex)
- **Description:** Cave dwellers pursue prey through the winding tunnels of the deep, which rarely accommodate open sprints.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Cave dwellers pursue prey through the winding tunnels of the deep, which rarely accommodate open sprints. A cave dweller can make a single turn up to 90 degrees while running (though not while charging). Additionally, a cave dweller takes no penalties to movement speed while squeezing.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Tunnel Vision (Ex)
- **Description:** At 3rd level, a cave dweller’s senses become sharp in the dark.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6.
  - **Rules text to implement:** At 3rd level, a cave dweller’s senses become sharp in the dark. She gains darkvision to a range of 60 feet and a +1 bonus on Perception checks to detect ambushes, movement, and sound while in darkness. This bonus increases by 1 at 6th level and every 3 levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: damage reduction

- **Archetype feature:** Sun Walker (Ex)
- **Description:** At 7th level, a cave dweller gains a +1 dodge bonus to AC and on saving throws against effects with the light descriptor or that produce bright or sudden light.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7, 10.
  - **Rules text to implement:** At 7th level, a cave dweller gains a +1 dodge bonus to AC and on saving throws against effects with the light descriptor or that produce bright or sudden light. Any penalties on attack rolls, saving throws, or skill checks because of bright light are reduced by 1. At 10th level and every 3 levels after 10th, the bonus to AC and saving throws, as well as the reduction of light-based penalties, increases by 1.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the cave dweller archetype: animal fury, bestial climber, eclipsing rage, greater eclipsing rage, greater ground breaker, ground breaker, night vision, raging climber, primal scent, and sprint.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the cave dweller archetype: animal fury, bestial climber, eclipsing rage, greater eclipsing rage, greater ground breaker, ground breaker, night vision, raging climber, primal scent, and sprint.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skills
- Tight Tunnels (Ex)
- Tunnel Vision (Ex)
- Sun Walker (Ex)
- Rage Powers
