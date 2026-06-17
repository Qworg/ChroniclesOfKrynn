# Rogue - Deadly Courtesan

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Deadly Courtesan
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Deadly%20Courtesan
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Bardic Performance (Su); Inspire Competence (Su); Performance Strike (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the rogue trick gained at 2nd level; all levels of trap sense; improved uncanny dodge

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** At 1st level, a deadly courtesan adds Knowledge (history) and Knowledge (nobility) to her list of class skills and removes Knowledge (dungeoneering) from her list of class skills.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a deadly courtesan adds Knowledge (history) and Knowledge (nobility) to her list of class skills and removes Knowledge (dungeoneering) from her list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the rogue trick gained at 2nd level

- **Archetype feature:** Bardic Performance (Su)
- **Description:** At 2nd level, a deadly courtesan gains the bardic performance ability and the fascinate bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a deadly courtesan gains the bardic performance ability and the fascinate bardic performance. Her fascinate DC is 10 + 1/2 her rogue level + her Charisma modifier. She can use this bardic performance for a number of rounds per day equal to 1 + her Charisma modifier. At each level after 2nd, she can use bardic performance for 1 additional round per day. If the courtesan also has bard levels, she may use these rounds for either class’s fascinate bardic performance, and her bard and rogue levels stack for determining her fascinate DC.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: all levels of trap sense

- **Archetype feature:** Inspire Competence (Su)
- **Description:** At 3rd level, a deadly courtesan can use her bardic performance to inspire competence.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a deadly courtesan can use her bardic performance to inspire competence. The bonus begins at +2 and increases by +1 for every six levels the courtesan has attained beyond 3rd (+3 at 9th and +4 at 15th).
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Performance Strike (Sp)
- **Description:** At 8th level, as a swift action, a deadly courtesan may expend rounds of bardic performance to gain a morale bonus on one attack roll.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, as a swift action, a deadly courtesan may expend rounds of bardic performance to gain a morale bonus on one attack roll. The amount of the bonus is equal to the number of bardic performance rounds expended (maximum bonus equal to 1/2 her deadly courtesan level).
- **Implementation flags:**
  - bardic performance subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the deadly courtesan archetype: finesse rogue, stand up ( Core Rulebook ); charmer, coax information, fast fingers, honeyed words ; convincing lie, deft palm.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the deadly courtesan archetype: finesse rogue, stand up ( Core Rulebook ); charmer, coax information, fast fingers, honeyed words ; convincing lie, deft palm.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the deadly courtesan archetype: slippery mind ( Core Rulebook ); master of disguise ; rumormonger, unwitting ally.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the deadly courtesan archetype: slippery mind ( Core Rulebook ); master of disguise ; rumormonger, unwitting ally.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Bardic Performance (Su)
- Inspire Competence (Su)
- Performance Strike (Sp)
- Rogue Talents
- Advanced Talents
