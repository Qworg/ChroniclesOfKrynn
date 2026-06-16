# Alchemist - Dragonblood Chymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Dragonblood Chymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Dragonblood%20Chymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Dragonblood Mutagen (Su); Explosive Breath (Su); Draconic Resistances (Ex)
- **Replaced / altered class features:** Mutagen; 2nd, 12th, 16th-level discovery; Throw Anything; Poison Resistance; Poison Use; Swift Poisoning

## Replacement details

### Alters: the mutagen class feature

- **Archetype feature:** Dragonblood Mutagen (Su)
- **Description:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 2, 12, 16.
  - Mechanics summary: At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon. While he maintains his original form, his features take on a draconic appearance, becoming scaly and lizard-like. He gains a +2 natural armor bonus and a +2 alchemical bonus to his Strength for 10 minutes per class level. At 2nd level, the dragonblood chymist has learned to concentrate the potency of his dragonblood mutagen such that it grants him two claw attacks and a bite attack. If these are the only attacks the dragonblood chymist makes in a round, they are primary attacks and are made using his full base attack bonus. Otherwise, these natural attacks are treated as secondary attacks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, mutagen hook, ki/monk hook, AC/natural armor bonus, natural attack system.

### Alters: replaces the discoveries gained at 2nd, 12th
- **Archetype feature:** Dragonblood Mutagen (Su)
- **Description:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 2, 12, 16.
  - Mechanics summary: At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon. While he maintains his original form, his features take on a draconic appearance, becoming scaly and lizard-like. He gains a +2 natural armor bonus and a +2 alchemical bonus to his Strength for 10 minutes per class level. At 2nd level, the dragonblood chymist has learned to concentrate the potency of his dragonblood mutagen such that it grants him two claw attacks and a bite attack. If these are the only attacks the dragonblood chymist makes in a round, they are primary attacks and are made using his full base attack bonus. Otherwise, these natural attacks are treated as secondary attacks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, mutagen hook, ki/monk hook, AC/natural armor bonus, natural attack system.

### Alters: 16th levels

- **Archetype feature:** Dragonblood Mutagen (Su)
- **Description:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 2, 12, 16.
  - Mechanics summary: At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon. While he maintains his original form, his features take on a draconic appearance, becoming scaly and lizard-like. He gains a +2 natural armor bonus and a +2 alchemical bonus to his Strength for 10 minutes per class level. At 2nd level, the dragonblood chymist has learned to concentrate the potency of his dragonblood mutagen such that it grants him two claw attacks and a bite attack. If these are the only attacks the dragonblood chymist makes in a round, they are primary attacks and are made using his full base attack bonus. Otherwise, these natural attacks are treated as secondary attacks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, mutagen hook, ki/monk hook, AC/natural armor bonus, natural attack system.

### Alters: and precludes the dragonblood chymist from taking any other mutagen discoveries

- **Archetype feature:** Dragonblood Mutagen (Su)
- **Description:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 2, 12, 16.
  - Mechanics summary: At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon. While he maintains his original form, his features take on a draconic appearance, becoming scaly and lizard-like. He gains a +2 natural armor bonus and a +2 alchemical bonus to his Strength for 10 minutes per class level. At 2nd level, the dragonblood chymist has learned to concentrate the potency of his dragonblood mutagen such that it grants him two claw attacks and a bite attack. If these are the only attacks the dragonblood chymist makes in a round, they are primary attacks and are made using his full base attack bonus. Otherwise, these natural attacks are treated as secondary attacks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, mutagen hook, ki/monk hook, AC/natural armor bonus, natural attack system.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 2nd, 12th, 16th-level discovery
- Throw Anything
- Poison Resistance
- Poison Use
- Swift Poisoning

## Parsed source feature headings

- Dragonblood Mutagen (Su)
- Explosive Breath (Su)
- Draconic Resistances (Ex)

