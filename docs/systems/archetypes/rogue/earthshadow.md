# Rogue - Earthshadow

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Earthshadow
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Earthshadow
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Earthlink (Su); Earthcraft (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** evasion and the rogue talents gained at 4th, 8th, 12th, and 16th levels

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Earthlink (Su)
- **Description:** The earth grants an earthshadow swiftness and hones her senses.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The earth grants an earthshadow swiftness and hones her senses. When an earthshadow is in direct contact with an expanse of natural earth or unworked stone that is at least as large as she is, she adds half her rogue level (minimum 1) to Acrobatics and Perception checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: evasion and the rogue talents gained at 4th, 8th, 12th, and 16th levels

- **Archetype feature:** Earthcraft (Su)
- **Description:** At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 4, 8, 12, 16.
  - **Rules text to implement:** At 2nd level, an earthshadow can draw upon the power of earth to perform mystical tricks. At the start of each day, an earthshadow gains a pool of earthcraft points equal to half her rogue level plus her Wisdom modifier, and she can spend earthcraft points to use certain spell-like abilities. The caster level of these spell-like abilities is equal to the earthshadow’s rogue level. Earthcraft effects affect only the earthshadow, even if the spell could normally affect others. She can spend 1 earthcraft point to cast blend ( Pathfinder RPG Advanced Race Guide 29), even if she is not an elf, but this ability works only in areas of natural earth or unworked stone. At 4th level, an earthshadow can spend 2 earthcraft points to cast meld into stone. At 8th level, an earthshadow can spend 3 earthcraft points to cast dimension door. She must be able to see her destination (or she must be able to otherwise sense its surface, such as with tremorsense), and her current location must be connected to her destination by continuous natural earth or unworked stone. At 12th level, an earthshadow can spend 5 earthcraft points to cast the spell stone tell but can communicate only with unworked stone. At 16th level, an earthshadow can spend 6 earthcraft points to cast statue.
- **Implementation flags:**
  - spell-like ability support.
  - crafting subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the earthshadow archetype: extra earthcraft (see below), favored terrain UC, fortified position (see below), major magic, minor magic, resiliency, and trap spotter.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the earthshadow archetype: extra earthcraft (see below), favored terrain UC, fortified position (see below), major magic, minor magic, resiliency, and trap spotter.
- **Implementation flags:**
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the earthshadow archetype: against the wall (see below), dispelling attack, hide in plain sight UC, slippery mind, and stony skin (see below).
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the earthshadow archetype: against the wall (see below), dispelling attack, hide in plain sight UC, slippery mind, and stony skin (see below).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Earthlink (Su)
- Earthcraft (Su)
- Rogue Talents
- Advanced Talents
