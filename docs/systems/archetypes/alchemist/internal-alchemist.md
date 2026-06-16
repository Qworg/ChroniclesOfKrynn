# Alchemist - Internal Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Internal Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Internal%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Breath Mastery; Bonus Feats; Disease Resistance; Uncanny Dodge; Discoveries
- **Replaced / altered class features:** Throw Anything; swift alchemy; swift poisoning

## Replacement details

### Replaces: Throw Anything

- **Archetype feature:** Breath Mastery
- **Description:** At 1st level, the internal alchemist can control his breath and the flow of vital energy within his body.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the internal alchemist can control his breath and the flow of vital energy within his body. Without preparation, he can hold his breath for a number of minutes equal to his Constitution score (after this, he must begin making Constitution checks or risk suffocation); by spending a full-round action preparing himself, he can increase this duration to 1 hour per point of Constitution. The alchemist can survive twice as long as normal without food or water before he starts to take penalties. He can put himself into a state of suspended animation as a move action, and is then unconscious and appears completely dead; he awakens at a preset time or in response to a condition set by him when he enters this state.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: swift alchemy

- **Archetype feature:** Disease Resistance
- **Description:** At 3rd level, an internal alchemist gains a bonus on all saving throws against disease equal to his alchemist class bonus against poison.
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an internal alchemist gains a bonus on all saving throws against disease equal to his alchemist class bonus against poison. When he gains the poison immunity alchemist class ability, he becomes immune to disease as well.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: swift poisoning

- **Archetype feature:** Uncanny Dodge
- **Description:** Starting at 6th level, an internal alchemist can react to danger before his senses would normally allow him to do so.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: Starting at 6th level, an internal alchemist can react to danger before his senses would normally allow him to do so. He cannot be caught flat-footed, nor does he lose his Dexterity bonus to AC if the attacker is invisible. However, he still loses his Dexterity bonus to AC if he is immobilized, or if an opponent successfully uses the feint action (see Bluff) against him. If the internal alchemist already has uncanny dodge from a different class, he automatically gains improved uncanny dodge (as a rogue) instead.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Breath Mastery
- Bonus Feats
- Disease Resistance
- Uncanny Dodge
- Discoveries

