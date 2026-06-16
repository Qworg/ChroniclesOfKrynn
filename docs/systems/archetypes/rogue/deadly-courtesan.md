# Rogue - Deadly Courtesan

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Deadly Courtesan
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Deadly%20Courtesan
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Bardic Performance (Su); Inspire Competence (Su); Performance Strike (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the rogue trick gained at 2nd level; all levels of trap sense; improved uncanny dodge

## Replacement details

### Replaces: the rogue trick gained at 2nd level

- **Archetype feature:** Bardic Performance (Su)
- **Description:** At 2nd level, a deadly courtesan gains the bardic performance ability and the fascinate bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a deadly courtesan gains the bardic performance ability and the fascinate bardic performance. Her fascinate DC is 10 + 1/2 her rogue level + her Charisma modifier. She can use this bardic performance for a number of rounds per day equal to 1 + her Charisma modifier. At each level after 2nd, she can use bardic performance for 1 additional round per day. If the courtesan also has bard levels, she may use these rounds for either class’s fascinate bardic performance, and her bard and rogue levels stack for determining her fascinate DC.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, bardic performance hook.

### Replaces: all levels of trap sense

- **Archetype feature:** Inspire Competence (Su)
- **Description:** At 3rd level, a deadly courtesan can use her bardic performance to inspire competence.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a deadly courtesan can use her bardic performance to inspire competence. The bonus begins at +2 and increases by +1 for every six levels the courtesan has attained beyond 3rd (+3 at 9th and +4 at 15th).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, bardic performance hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Performance Strike (Sp)
- **Description:** At 8th level, as a swift action, a deadly courtesan may expend rounds of bardic performance to gain a morale bonus on one attack roll.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, as a swift action, a deadly courtesan may expend rounds of bardic performance to gain a morale bonus on one attack roll. The amount of the bonus is equal to the number of bardic performance rounds expended (maximum bonus equal to 1/2 her deadly courtesan level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, bardic performance hook.

## Parsed source feature headings

- Class Skills
- Bardic Performance (Su)
- Inspire Competence (Su)
- Performance Strike (Sp)
- Rogue Talents
- Advanced Talents

