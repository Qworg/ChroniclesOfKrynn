# Berserker - Brutal Pugilist

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Brutal Pugilist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Brutal%20Pugilist
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Savage Grapple (Ex); Pit Fighter (Ex); Improved Savage Grapple (Ex); Rage Powers
- **Replaced / altered class features:** uncanny dodge; trap sense; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Savage Grapple (Ex)
- **Description:** At 2nd level, the brutal pugilist takes only half the normal penalties to Dexterity, attack rolls, and combat maneuver checks when she has the grappled condition.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the brutal pugilist takes only half the normal penalties to Dexterity, attack rolls, and combat maneuver checks when she has the grappled condition. She can make an attack of opportunity against creatures trying to grapple her even if they possess the Improved Grapple feat or the grab special attack. If she hits with this attack of opportunity, she gains a +2 circumstance bonus to her CMD against the grapple attempt. She cannot make these attacks of opportunity once a grapple has succeeded.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: trap sense

- **Archetype feature:** Pit Fighter (Ex)
- **Description:** At 3rd level, the brutal pugilist has learned combat tricks from fighting in pit brawls and gladiatorial arenas.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the brutal pugilist has learned combat tricks from fighting in pit brawls and gladiatorial arenas. She selects one combat maneuver and gains a +1 insight bonus on her CMB or to her CMD in that maneuver. This bonus increases to +2 if the barbarian is wearing no armor (shields are allowed). At every three levels after 3rd, the barbarian may select another combat maneuver and add this bonus on her CMB or to her CMD. This bonus can be applied to each maneuver no more than twice, once on CMB and once to CMD.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Improved Savage Grapple (Ex)
- **Description:** At 5th level, the brutal pugilist takes no penalties to Dexterity, attack rolls, and combat maneuver checks when she has the grappled condition.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, the brutal pugilist takes no penalties to Dexterity, attack rolls, and combat maneuver checks when she has the grappled condition. She also is treated as one size larger than her actual size when determining whether she can be grappled using the grab ability or swallowed by another creature.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Savage Grapple (Ex)
- Pit Fighter (Ex)
- Improved Savage Grapple (Ex)
- Rage Powers

