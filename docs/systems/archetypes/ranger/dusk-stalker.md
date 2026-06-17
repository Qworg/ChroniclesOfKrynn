# Ranger - Dusk Stalker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Dusk Stalker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Dusk%20Stalker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Shadow Guide; Shadow Bond (Su); Dark Sight (Su)
- **Replaced / altered class features:** hunter’s bond; camouflage

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The dusk stalker adds Knowledge (planes) to his list of class skills and removes Knowledge (nature) from his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** The dusk stalker adds Knowledge (planes) to his list of class skills and removes Knowledge (nature) from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: favored terrain

- **Archetype feature:** Shadow Guide
- **Description:** When a dusk stalker gains the favored terrain ability, that ability is modified in the following ways.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** When a dusk stalker gains the favored terrain ability, that ability is modified in the following ways. At 3rd level, a dusk stalker picks his primary terrain normally, but only gains a +1 bonus on those checks while on a plane other than the Shadow Plane, and gains a +3 bonus on those checks while on the Shadow Plane. Each time he chooses to add a bonus in a favored terrain, he gains a +1 bonus on those checks while on a plane other than the Shadow Plane, and gains a +3 bonus on those checks while on the Shadow Plane.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: hunter’s bond

- **Archetype feature:** Shadow Bond (Su)
- **Description:** At 4th level, a dusk stalker creates a mystical bond with shadows.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a dusk stalker creates a mystical bond with shadows. The shadows around a dusk stalker weave and swirl, confusing his enemies. When a dusk stalker is fighting in dim light or darkness (magical or otherwise), he gains a +4 insight bonus on Acrobatics checks made to move through an enemy’s threatened area or through its space. Furthermore, a number of times per day equal to his Wisdom modifier, the dusk stalker can manipulate shadows in a 5-foot square within 30 feet. That square must be in an area of dim light or darkness (magical or otherwise). Enemies with an Intelligence score within or adjacent to that 5-foot square take a –2 penalty to AC and on Reflex saving throws. The harassing shadows last for 1 round. This is a mind-affecting fear effect.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: camouflage

- **Archetype feature:** Dark Sight (Su)
- **Description:** At 12th level, a dusk stalker gains the see in darkness ability.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a dusk stalker gains the see in darkness ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Shadow Guide
- Shadow Bond (Su)
- Dark Sight (Su)
