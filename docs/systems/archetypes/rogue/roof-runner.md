# Rogue - Roof Runner

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Roof Runner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Roof%20Runner
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Roof Running (Ex); Tumbling Descent (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Roof Running (Ex)
- **Description:** At 1st level, a roof runner becomes entirely adept at moving across the tops of buildings, spires, and similar locations.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a roof runner becomes entirely adept at moving across the tops of buildings, spires, and similar locations. Provided she is wearing light armor or no armor, the roof runner can move at full speed while traveling across the tops of buildings or similar structures, and takes no penalties on any Dexterity-based Skill checks or Reflex saves that might be incurred from moving about on a roof.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trap sense

- **Archetype feature:** Tumbling Descent (Ex)
- **Description:** At 2nd level, a roof runner can use her acrobatics skill to attempt a rapid descent from a rooftop or another surface, ricocheting against another surface and then diving through an opening (such as a balcony or window) directly below.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a roof runner can use her acrobatics skill to attempt a rapid descent from a rooftop or another surface, ricocheting against another surface and then diving through an opening (such as a balcony or window) directly below. So long as she has at least two surfaces no farther than 10 feet apart to bounce against, she can ricochet her body back from one to the next, descending great distances with a single check. The DC is 10 + 5 for every additional 10-foot increment descended beyond the initial 10 feet dropped. If she fails, she falls the full distance.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the roof runner archetype: expert leaper, ledge walker, nimble climber, stand up, and terrain mastery*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the roof runner archetype: expert leaper, ledge walker, nimble climber, stand up, and terrain mastery*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talent complements the roof runner archetype: fast tumble.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talent complements the roof runner archetype: fast tumble.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Roof Running (Ex)
- Tumbling Descent (Ex)
- Rogue Talents
- Advanced Talents
