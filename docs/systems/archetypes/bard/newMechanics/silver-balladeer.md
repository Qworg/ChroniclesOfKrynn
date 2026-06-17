# Bard - Silver Balladeer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Silver Balladeer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Silver%20Balladeer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Pure Heart (Ex); Silver Mastery (Su)
- **Replaced / altered class features:** suggestion; inspire greatness; mass suggestion; well-versed; the 2nd-level versatile performance

## Implementation details

### Alters: alignment

- **Archetype feature:** Alignment
- **Description:** A silver balladeer must have a good alignment.
- **Detailed mechanics:**
  - **Rules text to implement:** A silver balladeer must have a good alignment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A silver balladeer gains the bardic performances listed below.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 9, 18.
  - **Rules text to implement:** A silver balladeer gains the bardic performances listed below. These bardic performances all require the use of a silver or silver-stringed instrument, which costs twice as much as a normal masterwork instrument. Break Curse (Su) : At 6th level, a silver balladeer can suppress a single curse affecting an ally within 30 feet that is able to see and hear her. Each round the silver balladeer uses break curse, she attempts a Perform check against the original DC of the curse. If successful, she suppresses the curse for 1 round. After she has suppressed the curse for 4 consecutive rounds, she can attempt a caster level check to remove the curse as if she had cast remove curse. Holy Vibration (Su) : At 9th level, a silver balladeer can spend a round of bardic performance to make a single door or a window within 30 feet resonate with a holy vibration. Undead and creatures with the evil subtype are unable to open a door or window affected in this way (as arcane lock ) for 10 minutes per bard level. If such a creature has the incorporeal subtype, it is unable to move through the affected door or window, or through any walls, floors, or ceilings within 20 feet of it. Incorporeal creatures can attempt Charisma checks to break through areas warded by holy vibration, using the same break DC as for the object the creature is trying to move through. Mass Break Curse (Su) : At 18th level, a silver balladeer can suppress all curses among any number of allies within 30 feet when using break curse. Every 4 consecutive rounds of using this performance, the silver balladeer can attempt a caster level check to remove a single curse on a single ally affected by this performance, as if she had cast remove curse.
- **Implementation flags:**
  - bardic performance subsystem.
  - curse subsystem.

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** A silver balladeer gains the bardic performances listed below.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 9, 18.
  - **Rules text to implement:** A silver balladeer gains the bardic performances listed below. These bardic performances all require the use of a silver or silver-stringed instrument, which costs twice as much as a normal masterwork instrument. Break Curse (Su) : At 6th level, a silver balladeer can suppress a single curse affecting an ally within 30 feet that is able to see and hear her. Each round the silver balladeer uses break curse, she attempts a Perform check against the original DC of the curse. If successful, she suppresses the curse for 1 round. After she has suppressed the curse for 4 consecutive rounds, she can attempt a caster level check to remove the curse as if she had cast remove curse. Holy Vibration (Su) : At 9th level, a silver balladeer can spend a round of bardic performance to make a single door or a window within 30 feet resonate with a holy vibration. Undead and creatures with the evil subtype are unable to open a door or window affected in this way (as arcane lock ) for 10 minutes per bard level. If such a creature has the incorporeal subtype, it is unable to move through the affected door or window, or through any walls, floors, or ceilings within 20 feet of it. Incorporeal creatures can attempt Charisma checks to break through areas warded by holy vibration, using the same break DC as for the object the creature is trying to move through. Mass Break Curse (Su) : At 18th level, a silver balladeer can suppress all curses among any number of allies within 30 feet when using break curse. Every 4 consecutive rounds of using this performance, the silver balladeer can attempt a caster level check to remove a single curse on a single ally affected by this performance, as if she had cast remove curse.
- **Implementation flags:**
  - bardic performance subsystem.
  - curse subsystem.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A silver balladeer gains the bardic performances listed below.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 9, 18.
  - **Rules text to implement:** A silver balladeer gains the bardic performances listed below. These bardic performances all require the use of a silver or silver-stringed instrument, which costs twice as much as a normal masterwork instrument. Break Curse (Su) : At 6th level, a silver balladeer can suppress a single curse affecting an ally within 30 feet that is able to see and hear her. Each round the silver balladeer uses break curse, she attempts a Perform check against the original DC of the curse. If successful, she suppresses the curse for 1 round. After she has suppressed the curse for 4 consecutive rounds, she can attempt a caster level check to remove the curse as if she had cast remove curse. Holy Vibration (Su) : At 9th level, a silver balladeer can spend a round of bardic performance to make a single door or a window within 30 feet resonate with a holy vibration. Undead and creatures with the evil subtype are unable to open a door or window affected in this way (as arcane lock ) for 10 minutes per bard level. If such a creature has the incorporeal subtype, it is unable to move through the affected door or window, or through any walls, floors, or ceilings within 20 feet of it. Incorporeal creatures can attempt Charisma checks to break through areas warded by holy vibration, using the same break DC as for the object the creature is trying to move through. Mass Break Curse (Su) : At 18th level, a silver balladeer can suppress all curses among any number of allies within 30 feet when using break curse. Every 4 consecutive rounds of using this performance, the silver balladeer can attempt a caster level check to remove a single curse on a single ally affected by this performance, as if she had cast remove curse.
- **Implementation flags:**
  - bardic performance subsystem.
  - curse subsystem.

### Replaces: well-versed

- **Archetype feature:** Pure Heart (Ex)
- **Description:** At 2nd level, a silver balladeer gains a +4 bonus on saving throws against curses, hexes, and charm effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a silver balladeer gains a +4 bonus on saving throws against curses, hexes, and charm effects.
- **Implementation flags:**
  - hex subsystem.
  - curse subsystem.

### Replaces: the 2nd-level versatile performance

- **Archetype feature:** Silver Mastery (Su)
- **Description:** At 2nd level, a silver balladeer treats silver weapons as if they were also cold iron for the purpose of overcoming damage reduction.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a silver balladeer treats silver weapons as if they were also cold iron for the purpose of overcoming damage reduction. Also, alchemical silver weapons do not impose a penalty on damage rolls when wielded by a silver balladeer, and a silver balladeer gains a +1 bonus on attack rolls made with mithral weapons.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Alignment
- Bardic Performance
- Pure Heart (Ex)
- Silver Mastery (Su)
