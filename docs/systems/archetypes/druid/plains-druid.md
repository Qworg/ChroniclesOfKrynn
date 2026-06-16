# Druid - Plains Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Plains Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Plains%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Plains Traveler (Ex); Run Like the Wind (Ex); Savanna Ambush (Ex); Wild Shape (Su); Canny Charger (Ex); Evasion (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Plains Traveler (Ex)
- **Description:** At 2nd level, a plains druid gains a bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in plains terrain, and she cannot be tracked in such an environment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a plains druid gains a bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in plains terrain, and she cannot be tracked in such an environment.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Run Like the Wind (Ex)
- **Description:** At 3rd level, a plains druid gains +10 feet to her land speed when wearing light or no armor and carrying a light load, and once per hour, she may run or charge at double the normal speed for 1 round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a plains druid gains +10 feet to her land speed when wearing light or no armor and carrying a light load, and once per hour, she may run or charge at double the normal speed for 1 round. If riding her animal companion, it gains this ability instead.
- **Implementation flags:**
  - Likely existing hooks: animal companion hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Savanna Ambush (Ex)
- **Description:** At 4th level, a plains druid gains concealment whenever she is prone in natural surroundings, and can make Stealth checks at no penalty when prone and not moving or at –5 when crawling.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a plains druid gains concealment whenever she is prone in natural surroundings, and can make Stealth checks at no penalty when prone and not moving or at –5 when crawling. A plains druid can stand up from prone as an immediate action during a surprise round.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: venom immunity

- **Archetype feature:** Canny Charger (Ex)
- **Description:** At 9th level, a plains druid can charge through allies’ squares without difficulty (whether mounted or afoot) and can turn up to 90 degrees once during a charge, provided the last 10 feet toward the target are in a straight line.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a plains druid can charge through allies’ squares without difficulty (whether mounted or afoot) and can turn up to 90 degrees once during a charge, provided the last 10 feet toward the target are in a straight line. She also gains a +4 dodge bonus to AC against enemy charge attacks and a +4 bonus to damage with a readied action against a charging foe.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: a thousand faces

- **Archetype feature:** Evasion (Ex)
- **Description:** At 13th level, a plains druid gains evasion when wearing light or no armor and carrying a light load.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a plains druid gains evasion when wearing light or no armor and carrying a light load. This functions as the rogue ability of the same name.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Plains Traveler (Ex)
- Run Like the Wind (Ex)
- Savanna Ambush (Ex)
- Wild Shape (Su)
- Canny Charger (Ex)
- Evasion (Ex)

