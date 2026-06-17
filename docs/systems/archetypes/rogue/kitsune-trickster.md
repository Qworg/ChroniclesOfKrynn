# Rogue - Kitsune Trickster

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Kitsune Trickster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Kitsune%20Trickster
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Kitsune’s Guile (Ex); Kitsune’s Charm (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Kitsune’s Guile (Ex)
- **Description:** At 1st level, a trickster relies on her intellect as much as her personality.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a trickster relies on her intellect as much as her personality. She adds her Intelligence modifier on Bluff, Diplomacy, Disguise, and Sense Motive checks.
- **Implementation flags:**
  - ki subsystem.

### Replaces: trap sense

- **Archetype feature:** Kitsune’s Charm (Sp)
- **Description:** At 3rd level, a kitsune trickster can use charm person once per day as a spell-like ability (caster level equal to her rogue level – 2).
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 3, 6.
  - **Rules text to implement:** At 3rd level, a kitsune trickster can use charm person once per day as a spell-like ability (caster level equal to her rogue level – 2). At 6th level, and every three levels thereafter, the kitsune trickster gains an additional daily use of this ability.
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the kitsune trickster archetype: major magic, minor magic ( Core Rulebook ); false friend, obfuscate story, steal the story (see below); charmer, coax information, honeyed words ; convincing lie.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the kitsune trickster archetype: major magic, minor magic ( Core Rulebook ); false friend, obfuscate story, steal the story (see below); charmer, coax information, honeyed words ; convincing lie.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the kitsune trickster archetype: skill mastery, slippery mind ( Core Rulebook ); master of disguise ; rumormonger.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the kitsune trickster archetype: skill mastery, slippery mind ( Core Rulebook ); master of disguise ; rumormonger.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Kitsune’s Guile (Ex)
- Kitsune’s Charm (Sp)
- Rogue Talents
- Advanced Talents
