# Rogue - Scout

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Scout
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Scout
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Scout’s Charge (Ex); Skirmisher (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Scout’s Charge (Ex)
- **Description:** At 4th level, whenever a scout makes a charge, her attack deals sneak attack damage as if the target were flat-footed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, whenever a scout makes a charge, her attack deals sneak attack damage as if the target were flat-footed. Foes with uncanny dodge are immune to this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Skirmisher (Ex)
- **Description:** At 8th level, whenever a scout moves more than 10 feet in a round and makes an attack action, the attack deals sneak attack damage as if the target was flat-footed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, whenever a scout moves more than 10 feet in a round and makes an attack action, the attack deals sneak attack damage as if the target was flat-footed. If the scout makes more than one attack this turn, this ability only applies to the first attack. Foes with uncanny dodge are immune to this ability.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the scout archetype: assault leader, camouflage, cunning trigger, survivalist, and trap spotter*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the scout archetype: assault leader, camouflage, cunning trigger, survivalist, and trap spotter*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the scout archetype: hunter’s surprise, skill mastery*, and stealthy sniper.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the scout archetype: hunter’s surprise, skill mastery*, and stealthy sniper.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Scout’s Charge (Ex)
- Skirmisher (Ex)
- Rogue Talents
- Advanced Talents
