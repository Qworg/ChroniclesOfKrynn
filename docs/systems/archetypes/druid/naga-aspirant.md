# Druid - Naga Aspirant

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Naga Aspirant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Naga%20Aspirant
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Aspirant’s Bond (Ex); Aspirant’s Enlightenment (Ex); Naga Shape (Su); Augmented Form (Su); True Naga (Su)
- **Replaced / altered class features:** spontaneous casting; resist nature’s lure; venom immunity, a thousand faces, and timeless body; wildshape (at will)

## Replacement details

### Replaces: spontaneous casting

- **Archetype feature:** Aspirant’s Bond (Ex)
- **Description:** A naga aspirant gains a spiritual connection to the serpentine deities worshiped by the nagas.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: A naga aspirant gains a spiritual connection to the serpentine deities worshiped by the nagas. At 1st level, and each time she gains a druid level, she may add one of the following spells to her druid spell list.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Aspirant’s Enlightenment (Ex)
- **Description:** At 4th level, a naga aspirant gains a +4 bonus on saving throws against the spell-like abilities, supernatural abilities, and poison of nagas.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a naga aspirant gains a +4 bonus on saving throws against the spell-like abilities, supernatural abilities, and poison of nagas.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: venom immunity, a thousand faces, and timeless body

- **Archetype feature:** Augmented Form (Su)
- **Description:** At 9th level and every four levels thereafter, a naga aspirant can choose one of the following abilities to enhance her naga form.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9.
  - Mechanics summary: At 9th level and every four levels thereafter, a naga aspirant can choose one of the following abilities to enhance her naga form. Once chosen, this augmentation cannot be changed and always applies to her naga form. The caster level for these abilities is equal to her druid level, and unless otherwise stated, the DC is equal to 10 + 1/2 the druid’s class level + the druid’s Charisma bonus. Charming Gaze (Sp) : The druid gains a gaze attack that affects creatures within 30 feet as a charm person spell. Darkvision (Su) : The druid gains darkvision with a range of 60 feet. Detect Thoughts (Su) : The druid can use detect thoughts at will.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, AC/natural armor bonus, natural attack system.

### Replaces: wildshape (at will)

- **Archetype feature:** True Naga (Su)
- **Description:** At 20th level, a naga aspirant metamorphoses into a unique naga.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a naga aspirant metamorphoses into a unique naga. Her wild shape form becomes her natural form, though she can transform into her original nagaji shape at will.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

## Parsed source feature headings

- Aspirant’s Bond (Ex)
- Aspirant’s Enlightenment (Ex)
- Naga Shape (Su)
- Augmented Form (Su)
- True Naga (Su)

