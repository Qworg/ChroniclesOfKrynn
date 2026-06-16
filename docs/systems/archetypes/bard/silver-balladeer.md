# Bard - Silver Balladeer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Silver Balladeer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Silver%20Balladeer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Pure Heart (Ex); Silver Mastery (Su)
- **Replaced / altered class features:** suggestion; inspire greatness; mass suggestion; well-versed; the 2nd-level versatile performance

## Replacement details

### Alters: alignment

- **Archetype feature:** Alignment
- **Description:** A silver balladeer must have a good alignment.
- **Mechanics:**
  - Mechanics summary: A silver balladeer must have a good alignment.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A silver balladeer gains the bardic performances listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 9, 18.
  - Mechanics summary: A silver balladeer gains the bardic performances listed below. These bardic performances all require the use of a silver or silver-stringed instrument, which costs twice as much as a normal masterwork instrument. Break Curse (Su) : At 6th level, a silver balladeer can suppress a single curse affecting an ally within 30 feet that is able to see and hear her. Each round the silver balladeer uses break curse, she attempts a Perform check against the original DC of the curse. If successful, she suppresses the curse for 1 round. After she has suppressed the curse for 4 consecutive rounds, she can attempt a caster level check to remove the curse as if she had cast remove curse .
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, bardic performance hook.

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** A silver balladeer gains the bardic performances listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 9, 18.
  - Mechanics summary: A silver balladeer gains the bardic performances listed below. These bardic performances all require the use of a silver or silver-stringed instrument, which costs twice as much as a normal masterwork instrument. Break Curse (Su) : At 6th level, a silver balladeer can suppress a single curse affecting an ally within 30 feet that is able to see and hear her. Each round the silver balladeer uses break curse, she attempts a Perform check against the original DC of the curse. If successful, she suppresses the curse for 1 round. After she has suppressed the curse for 4 consecutive rounds, she can attempt a caster level check to remove the curse as if she had cast remove curse .
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, bardic performance hook.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A silver balladeer gains the bardic performances listed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 9, 18.
  - Mechanics summary: A silver balladeer gains the bardic performances listed below. These bardic performances all require the use of a silver or silver-stringed instrument, which costs twice as much as a normal masterwork instrument. Break Curse (Su) : At 6th level, a silver balladeer can suppress a single curse affecting an ally within 30 feet that is able to see and hear her. Each round the silver balladeer uses break curse, she attempts a Perform check against the original DC of the curse. If successful, she suppresses the curse for 1 round. After she has suppressed the curse for 4 consecutive rounds, she can attempt a caster level check to remove the curse as if she had cast remove curse .
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, bardic performance hook.

### Replaces: well-versed

- **Archetype feature:** Pure Heart (Ex)
- **Description:** At 2nd level, a silver balladeer gains a +4 bonus on saving throws against curses, hexes, and charm effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a silver balladeer gains a +4 bonus on saving throws against curses, hexes, and charm effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: the 2nd-level versatile performance

- **Archetype feature:** Silver Mastery (Su)
- **Description:** At 2nd level, a silver balladeer treats silver weapons as if they were also cold iron for the purpose of overcoming damage reduction.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a silver balladeer treats silver weapons as if they were also cold iron for the purpose of overcoming damage reduction. Also, alchemical silver weapons do not impose a penalty on damage rolls when wielded by a silver balladeer, and a silver balladeer gains a +1 bonus on attack rolls made with mithral weapons.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

## Parsed source feature headings

- Bardic Performance
- Pure Heart (Ex)
- Silver Mastery (Su)

