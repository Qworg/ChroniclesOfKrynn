# Rogue - Sanctified Rogue

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sanctified Rogue
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sanctified%20Rogue
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Divine Purpose (Su); Divine Epiphany (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Divine Purpose (Su)
- **Description:** At 4th level, the favor of a deity or religious institution grants a special blessing on a sanctified rogue, shoring up some of her weaknesses.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, the favor of a deity or religious institution grants a special blessing on a sanctified rogue, shoring up some of her weaknesses. She gains a +1 sacred bonus on Fortitude and Will saving throws.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Divine Epiphany (Su)
- **Description:** At 8th level, once per day, a sanctified rogue can peer into the immediate future and predict the results of a specific action as if she had cast an augury spell.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, once per day, a sanctified rogue can peer into the immediate future and predict the results of a specific action as if she had cast an augury spell. The caster level of this spell is equal to the sanctified rogue’s rogue class level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the sanctified rogue archetype: esoteric scholar*, major magic, and minor magic.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the sanctified rogue archetype: esoteric scholar*, major magic, and minor magic.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the sanctified rogue archetype: feat and skill mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the sanctified rogue archetype: feat and skill mastery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Divine Purpose (Su)
- Divine Epiphany (Su)
- Rogue Talents
- Advanced Talents
