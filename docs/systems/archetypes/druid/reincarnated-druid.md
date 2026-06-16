# Druid - Reincarnated Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Reincarnated Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Reincarnated%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mysterious Stranger (Ex); Resist Death’s Touch (Ex); Many Lives (Ex); Wild Shape (Su); Cheat Death (Ex); Tongue of the Sun and Moon (Ex)
- **Replaced / altered class features:** woodland stride; resist nature’s lure; venom immunity; timeless body

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Mysterious Stranger (Ex)
- **Description:** At 2nd level, a reincarnated druids adds 1/2 her druid level to the DC of Sense Motive, Diplomacy, and Knowledge checks to learn about her.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a reincarnated druids adds 1/2 her druid level to the DC of Sense Motive, Diplomacy, and Knowledge checks to learn about her.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Death’s Touch (Ex)
- **Description:** At 4th level, a reincarnated druid gains a +4 bonus on saving throws against death effects, energy drain, and necromancy effects, and on stabilization checks when dying.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a reincarnated druid gains a +4 bonus on saving throws against death effects, energy drain, and necromancy effects, and on stabilization checks when dying.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: venom immunity

- **Archetype feature:** Cheat Death (Ex)
- **Description:** At 9th level, once per day, a reincarnated druid may reroll a save against a death effect, energy drain, or necromancy effect before the result of the roll is revealed, or reroll a failed stabilization check while dying.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, once per day, a reincarnated druid may reroll a save against a death effect, energy drain, or necromancy effect before the result of the roll is revealed, or reroll a failed stabilization check while dying. She must take the result of the second roll, even if it is worse than the original roll.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook.

### Replaces: timeless body

- **Archetype feature:** Tongue of the Sun and Moon (Ex)
- **Description:** At 15th level, a reincarnated druid can speak with any living creature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a reincarnated druid can speak with any living creature.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Mysterious Stranger (Ex)
- Resist Death’s Touch (Ex)
- Many Lives (Ex)
- Wild Shape (Su)
- Cheat Death (Ex)
- Tongue of the Sun and Moon (Ex)

