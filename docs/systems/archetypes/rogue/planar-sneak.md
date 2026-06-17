# Rogue - Planar Sneak

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Planar Sneak
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Planar%20Sneak
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Planar Sense (Ex); Elemental Execution (Su); Rogue Talents; Advanced Rogue Talents
- **Replaced / altered class features:** trap sense; uncanny dodge and improved uncanny dodge

## Implementation details

### Replaces: trap sense

- **Archetype feature:** Planar Sense (Ex)
- **Description:** At 3rd level, a planar sneak gains a +1 bonus on saving throws against all effects with the air, chaos, earth, evil, fire, good, law, or water descriptors.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, a planar sneak gains a +1 bonus on saving throws against all effects with the air, chaos, earth, evil, fire, good, law, or water descriptors. This bonus increases by 1 for every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Elemental Execution (Su)
- **Description:** At 4th level, a planar sneak treats creatures with the elemental subtype as though they were vulnerable to her sneak attack, but she deals only half as much sneak attack damage as she normally would.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, a planar sneak treats creatures with the elemental subtype as though they were vulnerable to her sneak attack, but she deals only half as much sneak attack damage as she normally would. She can confirm critical hits against such creatures, though 50% of the time, the critical hit is automatically negated and damage is instead rolled normally. At 8th level, this ability also applies to all outsiders otherwise immune to critical hits and sneak attack damage.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the planar sneak archetype: guileful polyglot APG, strong stroke, terrain mastery UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the planar sneak archetype: guileful polyglot APG, strong stroke, terrain mastery UC.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Rogue Talents
- **Description:** The following advanced rogue talents complement this archetype: defensive roll, hide in plain sight UC, and skill mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement this archetype: defensive roll, hide in plain sight UC, and skill mastery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Planar Sense (Ex)
- Elemental Execution (Su)
- Rogue Talents
- Advanced Rogue Talents
