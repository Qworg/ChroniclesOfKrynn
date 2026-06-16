# Inquisitor - Secret Seeker

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Secret Seeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Secret%20Seeker
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Occult Lore (Su); Detect Mind (Sp); Seek Mind (Sp)
- **Replaced / altered class features:** monster lore; bane and greater bane; exploit weakness

## Replacement details

### Replaces: monster lore

- **Archetype feature:** Occult Lore (Su)
- **Description:** A secret seeker gains access to the prognostication and read aura occult skill unlocks ( Pathfinder RPG Occult Adventures 196–197 ), but not the other occult skill unlocks.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A secret seeker gains access to the prognostication and read aura occult skill unlocks ( Pathfinder RPG Occult Adventures 196–197 ), but not the other occult skill unlocks. If she ever chooses to gain the Psychic Sensitivity OA feat or otherwise gains access to all occult skill unlocks, she receives Psychic Maestro OA as a bonus feat, with prognostication and read aura as the two occult skill unlocks selected.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: occult/psychic casting, occult subsystem.

### Replaces: bane and greater bane

- **Archetype feature:** Detect Mind (Sp)
- **Description:** At 5th level, a secret seeker can detect anxieties , detect desires , or detect thoughts , as per the spells, for a number of rounds per day equal to twice her inquisitor level.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 5, 12.
  - Mechanics summary: At 5th level, a secret seeker can detect anxieties , detect desires , or detect thoughts , as per the spells, for a number of rounds per day equal to twice her inquisitor level. These rounds need not be consecutive. A creature that succeeds at a saving throw against this ability is immune to that secret seeker’s detect mind ability for 24 hours. If the secret seeker has the secrets inquisition, she doubles the number of rounds per day that she can use this ability. At 12th level, a secret seeker can use her detect mind ability for a number of minutes per day equal to twice her inquisitor level, rather than rounds. These minutes need not be consecutive but must be spent in 1-minute increments.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: exploit weakness

- **Archetype feature:** Seek Mind (Sp)
- **Description:** At 14th level, a secret seeker can use her detect mind ability to seek out people with particular anxieties, desires, or thoughts.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a secret seeker can use her detect mind ability to seek out people with particular anxieties, desires, or thoughts. This functions as per seek thoughts APG except that it works with any of the three types of mental output the secret seeker can detect with detect mind.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Occult Lore (Su)
- Detect Mind (Sp)
- Seek Mind (Sp)

