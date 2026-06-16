# Inquisitor - Infiltrator

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Infiltrator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Infiltrator
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Misdirection (Sp); Guileful Lore (Ex); Forbidden Lore (Ex); Necessary Lies (Su)
- **Replaced / altered class features:** monster lore; track

## Replacement details

### Replaces: stern gaze

- **Archetype feature:** Misdirection (Sp)
- **Description:** At 1st level, each day when the infiltrator prepares spells, she may choose an alignment.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, each day when the infiltrator prepares spells, she may choose an alignment. She detects as that alignment as if she had used misdirection on a creature with that alignment (this does not change any divination results about her other than her alignment).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: monster lore

- **Archetype feature:** Guileful Lore (Ex)
- **Description:** At 1st level, the infiltrator’s will is bent toward subterfuge and deception.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the infiltrator’s will is bent toward subterfuge and deception. She adds her Wisdom modifier on Bluff and Diplomacy skill checks in addition to the normal ability score modifiers.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: track

- **Archetype feature:** Forbidden Lore (Ex)
- **Description:** While other inquisitors learned to track unbelievers, an infiltrator learns how to cast their spells.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: While other inquisitors learned to track unbelievers, an infiltrator learns how to cast their spells. An infiltrator can cast spells of an alignment opposed to her or her deity (ignoring the restriction in the Chaotic, Evil, Good, and Lawful Spells class ability).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: discern lies

- **Archetype feature:** Necessary Lies (Su)
- **Description:** An infiltrator adds her class level on saving throws against abilities that detect lies or reveal or force the truth, such as detect lies and zone of truth .
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: An infiltrator adds her class level on saving throws against abilities that detect lies or reveal or force the truth, such as detect lies and zone of truth .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Misdirection (Sp)
- Guileful Lore (Ex)
- Forbidden Lore (Ex)
- Necessary Lies (Su)

