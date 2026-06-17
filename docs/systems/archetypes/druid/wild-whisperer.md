# Druid - Wild Whisperer

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Wild Whisperer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Wild%20Whisperer
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Inspiration (Ex); Wild Shape (Ex); Natural Expertise (Ex); Investigator Talent; Investigator Talents
- **Replaced / altered class features:** woodland stride, trackless step, and resist nature’s lure; the additional use of wild shape at 6th level; the additional use of wild shape at 8th level

## Implementation details

### Replaces: woodland stride, trackless step, and resist nature’s lure

- **Archetype feature:** Inspiration (Ex)
- **Description:** At 2nd level, a wild whisperer gains an inspiration pool as the investigator class ability (see page 31).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a wild whisperer gains an inspiration pool as the investigator class ability (see page 31). A wild whisperer uses her druid level as her investigator level when determining the effects of this ability. Instead of free uses of inspiration on Knowledge, Linguistics, or Spellcraft skill checks, the wild whisperer can use inspiration on Handle Animal, Heal, Knowledge (geography), Knowledge (nature), Ride, Sense Motive, and Survival skill checks without expending a use of inspiration, provided she’s trained in the relevant skill. She can also use inspiration on any wild empathy check without expending a use of inspiration. A wild whisperer’s inspiration pool refreshes each day when she prepares spells.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Alters: wild shape

- **Archetype feature:** Wild Shape (Ex)
- **Description:** At 4th level, a wild whisperer gains the wild shape ability, but she never gains access to any forms beyond Small and Medium animal forms, as beast shape I.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a wild whisperer gains the wild shape ability, but she never gains access to any forms beyond Small and Medium animal forms, as beast shape I.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: the additional use of wild shape at 6th level

- **Archetype feature:** Natural Expertise (Ex)
- **Description:** At 6th level, a wild whisperer’s powers of observation give her an advantage when she’s fighting natural creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a wild whisperer’s powers of observation give her an advantage when she’s fighting natural creatures. When using inspiration on an attack roll against an animal or a vermin or on a saving throw against an effect from an animal or a vermin, a wild whisperer has to expend only one use of inspiration instead of two.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: the additional use of wild shape at 8th level

- **Archetype feature:** Investigator Talent
- **Description:** At 8th level, wild whisperer selects an investigator talent (see page 32).
- **Detailed mechanics:**
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, wild whisperer selects an investigator talent (see page 32).
- **Implementation flags:**
  - wild shape subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Investigator Talents
- **Description:** The following investigator talents complement the wild whisperer archetype: amazing inspiration, effortless aid, eidetic recollection, empathy, inspirational expertise, inspired alertness, inspired intimidator, perceptive tracking, tenacious inspiration.
- **Detailed mechanics:**
  - **Rules text to implement:** The following investigator talents complement the wild whisperer archetype: amazing inspiration, effortless aid, eidetic recollection, empathy, inspirational expertise, inspired alertness, inspired intimidator, perceptive tracking, tenacious inspiration.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Inspiration (Ex)
- Wild Shape (Ex)
- Natural Expertise (Ex)
- Investigator Talent
- Investigator Talents
