# Bard - Phrenologist

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Phrenologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Phrenologist
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Phrenological Knowledge (Ex); Skull-Versed (Ex); Phrenological Savant; Bardic Performance
- **Replaced / altered class features:** bardic knowledge; well-versed; jack-of-all-trades; inspire courage; inspire competence

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Phrenological Knowledge (Ex)
- **Description:** A phrenologist is an expert at reading creatures’ skulls.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A phrenologist is an expert at reading creatures’ skulls. He gains Psychic Sensitivity as a bonus feat, and he can use the phrenology skill unlock even if he is untrained in Knowledge (arcana). He adds half his class level (minimum 1) on all Knowledge (arcana) checks for the phrenology occult skill unlock .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: occult/psychic casting, occult subsystem.

### Replaces: well-versed

- **Archetype feature:** Skull-Versed (Ex)
- **Description:** Starting at 2nd level, a phrenologist can use knowledge gleaned from a creature’s skull to tailor a performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: Starting at 2nd level, a phrenologist can use knowledge gleaned from a creature’s skull to tailor a performance. All creatures on which the phrenologist has successfully used his phrenology skill unlock take a –2 penalty on all saving throws against the phrenologist’s bardic performances.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, bardic performance hook, ki/monk hook.

### Replaces: jack-of-all-trades

- **Archetype feature:** Phrenological Savant
- **Description:** At 10th level, a phrenologist gains either Psychic Maestro or Psychic Virtuoso as a bonus feat.
- **Mechanics:**
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a phrenologist gains either Psychic Maestro or Psychic Virtuoso as a bonus feat. If he chooses Psychic Maestro , he must select phrenology as one of his two skill unlocks to use an additional time.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: inspire courage

- **Archetype feature:** Bardic Performance
- **Description:** A phrenologist gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 11, 19.
  - Mechanics summary: A phrenologist gains the following types of bardic performance. Skull Sonata (Su) : At 1st level, a phrenologist learns to use the resonance of other creatures’ skulls to increase sonic damage. All enemies within 30 feet of the phrenologist that have skulls take an amount of additional sonic damage equal to half the phrenologist’s bard level (minimum 1) each time they take sonic damage. In Your Head (Sp) : At 3rd level, a phrenologist can use his performance to send his own senses into another’s skull, as the spell witness (DC = 10 + 1/2 the phrenologist’s class level + his Charisma modifier). At 11th level, this performance’s duration increases to 10 minutes per bard level, and at 19th level, the duration increases to 1 hour per bard level. Fingers of Fascination (Su) : When a phrenologist uses the fascinate bardic performance, he can send forth psychic fingers along with his performance, allowing him to study one of the fascinated creatures with his phrenology skill unlock without touching its head physically and without it being helpless, willing, or paralyzed.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: inspire competence

- **Archetype feature:** Bardic Performance
- **Description:** A phrenologist gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 11, 19.
  - Mechanics summary: A phrenologist gains the following types of bardic performance. Skull Sonata (Su) : At 1st level, a phrenologist learns to use the resonance of other creatures’ skulls to increase sonic damage. All enemies within 30 feet of the phrenologist that have skulls take an amount of additional sonic damage equal to half the phrenologist’s bard level (minimum 1) each time they take sonic damage. In Your Head (Sp) : At 3rd level, a phrenologist can use his performance to send his own senses into another’s skull, as the spell witness (DC = 10 + 1/2 the phrenologist’s class level + his Charisma modifier). At 11th level, this performance’s duration increases to 10 minutes per bard level, and at 19th level, the duration increases to 1 hour per bard level. Fingers of Fascination (Su) : When a phrenologist uses the fascinate bardic performance, he can send forth psychic fingers along with his performance, allowing him to study one of the fascinated creatures with his phrenology skill unlock without touching its head physically and without it being helpless, willing, or paralyzed.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.
  - Needs implementation review: occult/psychic casting.

### Alters: fascinate

- **Archetype feature:** Bardic Performance
- **Description:** A phrenologist gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 11, 19.
  - Mechanics summary: A phrenologist gains the following types of bardic performance. Skull Sonata (Su) : At 1st level, a phrenologist learns to use the resonance of other creatures’ skulls to increase sonic damage. All enemies within 30 feet of the phrenologist that have skulls take an amount of additional sonic damage equal to half the phrenologist’s bard level (minimum 1) each time they take sonic damage. In Your Head (Sp) : At 3rd level, a phrenologist can use his performance to send his own senses into another’s skull, as the spell witness (DC = 10 + 1/2 the phrenologist’s class level + his Charisma modifier). At 11th level, this performance’s duration increases to 10 minutes per bard level, and at 19th level, the duration increases to 1 hour per bard level. Fingers of Fascination (Su) : When a phrenologist uses the fascinate bardic performance, he can send forth psychic fingers along with his performance, allowing him to study one of the fascinated creatures with his phrenology skill unlock without touching its head physically and without it being helpless, willing, or paralyzed.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.
  - Needs implementation review: occult/psychic casting.

## Parsed source feature headings

- Phrenological Knowledge (Ex)
- Skull-Versed (Ex)
- Phrenological Savant
- Bardic Performance

