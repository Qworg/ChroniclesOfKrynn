# Alchemist - Internal Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Internal Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Internal%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Breath Mastery; Bonus Feats; Disease Resistance; Uncanny Dodge; Discoveries
- **Replaced / altered class features:** Throw Anything; swift alchemy; swift poisoning

## Implementation details

### Replaces: Throw Anything

- **Archetype feature:** Breath Mastery
- **Description:** At 1st level, the internal alchemist can control his breath and the flow of vital energy within his body.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the internal alchemist can control his breath and the flow of vital energy within his body. Without preparation, he can hold his breath for a number of minutes equal to his Constitution score (after this, he must begin making Constitution checks or risk suffocation); by spending a full-round action preparing himself, he can increase this duration to 1 hour per point of Constitution. The alchemist can survive twice as long as normal without food or water before he starts to take penalties. He can put himself into a state of suspended animation as a move action, and is then unconscious and appears completely dead; he awakens at a preset time or in response to a condition set by him when he enters this state.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** An internal alchemist can select Alertness, Extra Ki, Great Fortitude, Improved Critical (unarmed strike), Improved Initiative, Improved Unarmed Strike, Iron Will, Lighting Reflexes, Stunning Fist, or Weapon Focus (unarmed strike) in place of an alchemical discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** An internal alchemist can select Alertness, Extra Ki, Great Fortitude, Improved Critical (unarmed strike), Improved Initiative, Improved Unarmed Strike, Iron Will, Lighting Reflexes, Stunning Fist, or Weapon Focus (unarmed strike) in place of an alchemical discovery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: swift alchemy

- **Archetype feature:** Disease Resistance
- **Description:** At 3rd level, an internal alchemist gains a bonus on all saving throws against disease equal to his alchemist class bonus against poison.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an internal alchemist gains a bonus on all saving throws against disease equal to his alchemist class bonus against poison. When he gains the poison immunity alchemist class ability, he becomes immune to disease as well.
- **Implementation flags:**
  - poison subsystem.

### Replaces: swift poisoning

- **Archetype feature:** Uncanny Dodge
- **Description:** Starting at 6th level, an internal alchemist can react to danger before his senses would normally allow him to do so.
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** Starting at 6th level, an internal alchemist can react to danger before his senses would normally allow him to do so. He cannot be caught flat-footed, nor does he lose his Dexterity bonus to AC if the attacker is invisible. However, he still loses his Dexterity bonus to AC if he is immobilized, or if an opponent successfully uses the feint action (see Bluff) against him. If the internal alchemist already has uncanny dodge from a different class, he automatically gains improved uncanny dodge (as a rogue) instead.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the internal alchemist archetype: cognatogen, elixir of life, grand cognatogen, greater cognatogen, lingering spirit, mummification, and spontaneous healing.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the internal alchemist archetype: cognatogen, elixir of life, grand cognatogen, greater cognatogen, lingering spirit, mummification, and spontaneous healing.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Breath Mastery
- Bonus Feats
- Disease Resistance
- Uncanny Dodge
- Discoveries
