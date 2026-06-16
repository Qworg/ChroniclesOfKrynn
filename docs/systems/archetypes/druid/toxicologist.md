# Druid - Toxicologist

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Toxicologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Toxicologist
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Expanded Repertoire (Ex); Natural Poison Lore (Ex); Expert Poisoner (Su); Toxic Shaper (Su)
- **Replaced / altered class features:** wild empathy and woodland stride; trackless step and resist nature’s lure

## Replacement details

### Alters: spells and replaces spontaneous casting

- **Archetype feature:** Expanded Repertoire (Ex)
- **Description:** A toxicologist adds the following extracts and spells to her druid spell list as druid spells of the listed spell level: poisoned egg (1st level, Pathfinder Campaign Setting: Inner Sea Gods 238 ), transmute potion to poison APG (2nd level), stinking cloud (3rd level), toxic gift UM (4th level), and cloudkill (5th level).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 2, 3, 4, 5.
  - Mechanics summary: A toxicologist adds the following extracts and spells to her druid spell list as druid spells of the listed spell level: poisoned egg (1st level, Pathfinder Campaign Setting: Inner Sea Gods 238 ), transmute potion to poison APG (2nd level), stinking cloud (3rd level), toxic gift UM (4th level), and cloudkill (5th level). A toxicologist can channel stored spell energy only into summoning spells she has prepared ahead of time.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: wild empathy and woodland stride

- **Archetype feature:** Natural Poison Lore (Ex)
- **Description:** A toxicologist has a deep understanding of and appreciation for poisons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A toxicologist has a deep understanding of and appreciation for poisons. At 2nd level, she cannot accidentally poison herself when applying poison to a weapon and cannot accidentally poison an animal companion or summoned creature when applying poison to its claws (though poison obviously should not be applied to a creature’s bite).
- **Implementation flags:**
  - Likely existing hooks: animal companion hook.

### Replaces: trackless step and resist nature’s lure

- **Archetype feature:** Expert Poisoner (Su)
- **Description:** At 4th level, a toxicologist increases the DCs of any spells she casts with the poison descriptor by 1.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a toxicologist increases the DCs of any spells she casts with the poison descriptor by 1.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.

### Alters: wild shape

- **Archetype feature:** Toxic Shaper (Su)
- **Description:** A toxicologist never gains the ability to use wild shape to transform into an elemental or plant.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8, 10.
  - Mechanics summary: A toxicologist never gains the ability to use wild shape to transform into an elemental or plant. At 8th level, a toxicologist can transform into a Small or Medium vermin. At 10th level, a toxicologist can transform into a tiny or large vermin.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

## Parsed source feature headings

- Expanded Repertoire (Ex)
- Natural Poison Lore (Ex)
- Expert Poisoner (Su)
- Toxic Shaper (Su)

