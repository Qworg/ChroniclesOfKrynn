# Alchemist - Inspired Chemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Inspired Chemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Inspired%20Chemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Inspiring Cognatogen; Bonus Feats; Bonus Investigator Talents; Languages; Discoveries
- **Replaced / altered class features:** the mutagen class ability

## Implementation details

### Replaces: the mutagen class ability

- **Archetype feature:** Inspiring Cognatogen
- **Description:** At 1st level, an inspired chemist learns how to create an inspiring cognatogen, as the inspiring cognatogen discovery.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an inspired chemist learns how to create an inspiring cognatogen, as the inspiring cognatogen discovery. (This means that an inspired chemist cannot create mutagens unless he selects the mutagen discovery).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** An inspired chemist can select Skill Focus (Disable Device, Disguise, Heal, any Knowledge skill, Sense Motive, Spellcraft, or Use Magic Device) in place of a discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** An inspired chemist can select Skill Focus (Disable Device, Disguise, Heal, any Knowledge skill, Sense Motive, Spellcraft, or Use Magic Device) in place of a discovery.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Investigator Talents
- **Description:** An inspired chemist can select any two investigator talents in place of a discovery, but can only use these talents while under the effect of an inspiring cognatogen.
- **Detailed mechanics:**
  - **Rules text to implement:** An inspired chemist can select any two investigator talents in place of a discovery, but can only use these talents while under the effect of an inspiring cognatogen.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Languages
- **Description:** An inspired chemist can learn three languages in place of a discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** An inspired chemist can learn three languages in place of a discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the inspired chemist archetype: grand inspiring cognatogen, greater inspiring cognatogen, and inspired bomb.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the inspired chemist archetype: grand inspiring cognatogen, greater inspiring cognatogen, and inspired bomb.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Inspiring Cognatogen
- Bonus Feats
- Bonus Investigator Talents
- Languages
- Discoveries
