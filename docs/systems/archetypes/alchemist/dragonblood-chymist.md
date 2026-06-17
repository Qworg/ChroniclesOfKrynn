# Alchemist - Dragonblood Chymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Dragonblood Chymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Dragonblood%20Chymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Dragonblood Mutagen (Su); Explosive Breath (Su); Draconic Resistances (Ex)
- **Replaced / altered class features:** Mutagen; 2nd, 12th, 16th-level discovery; Throw Anything; Poison Resistance; Poison Use; Swift Poisoning

## Implementation details

### Alters: the mutagen class feature

- **Archetype feature:** Dragonblood Mutagen (Su)
- **Description:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 2, 12, 16.
  - **Rules text to implement:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon. While he maintains his original form, his features take on a draconic appearance, becoming scaly and lizard-like. He gains a +2 natural armor bonus and a +2 alchemical bonus to his Strength for 10 minutes per class level. At 2nd level, the dragonblood chymist has learned to concentrate the potency of his dragonblood mutagen such that it grants him two claw attacks and a bite attack. If these are the only attacks the dragonblood chymist makes in a round, they are primary attacks and are made using his full base attack bonus. Otherwise, these natural attacks are treated as secondary attacks. The claw attacks deal 1d4 points of damage (1d3 if he is Small) and the bite attack deals 1d6 points of damage (1d4 if he is Small). While the mutagen is in effect, he gains a +2 competence bonus on Intimidate checks. At 12th level, the dragonblood mutagen grants a +4 natural armor bonus and a +4 alchemical bonus to his Strength. At 16th level, the dragonblood mutagen grants a +6 natural armor bonus and a +6 alchemical bonus to his Strength. This ability otherwise functions as mutagen.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: replaces the discoveries gained at 2nd, 12th, and 16th levels

- **Archetype feature:** Dragonblood Mutagen (Su)
- **Description:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 2, 12, 16.
  - **Rules text to implement:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon. While he maintains his original form, his features take on a draconic appearance, becoming scaly and lizard-like. He gains a +2 natural armor bonus and a +2 alchemical bonus to his Strength for 10 minutes per class level. At 2nd level, the dragonblood chymist has learned to concentrate the potency of his dragonblood mutagen such that it grants him two claw attacks and a bite attack. If these are the only attacks the dragonblood chymist makes in a round, they are primary attacks and are made using his full base attack bonus. Otherwise, these natural attacks are treated as secondary attacks. The claw attacks deal 1d4 points of damage (1d3 if he is Small) and the bite attack deals 1d6 points of damage (1d4 if he is Small). While the mutagen is in effect, he gains a +2 competence bonus on Intimidate checks. At 12th level, the dragonblood mutagen grants a +4 natural armor bonus and a +4 alchemical bonus to his Strength. At 16th level, the dragonblood mutagen grants a +6 natural armor bonus and a +6 alchemical bonus to his Strength. This ability otherwise functions as mutagen.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: and precludes the dragonblood chymist from taking any other mutagen discoveries

- **Archetype feature:** Dragonblood Mutagen (Su)
- **Description:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 2, 12, 16.
  - **Rules text to implement:** At 1st level, a dragonblood chymist discovers how to create a mutagen that he can imbibe in order to mimic the might of a dragon. While he maintains his original form, his features take on a draconic appearance, becoming scaly and lizard-like. He gains a +2 natural armor bonus and a +2 alchemical bonus to his Strength for 10 minutes per class level. At 2nd level, the dragonblood chymist has learned to concentrate the potency of his dragonblood mutagen such that it grants him two claw attacks and a bite attack. If these are the only attacks the dragonblood chymist makes in a round, they are primary attacks and are made using his full base attack bonus. Otherwise, these natural attacks are treated as secondary attacks. The claw attacks deal 1d4 points of damage (1d3 if he is Small) and the bite attack deals 1d6 points of damage (1d4 if he is Small). While the mutagen is in effect, he gains a +2 competence bonus on Intimidate checks. At 12th level, the dragonblood mutagen grants a +4 natural armor bonus and a +4 alchemical bonus to his Strength. At 16th level, the dragonblood mutagen grants a +6 natural armor bonus and a +6 alchemical bonus to his Strength. This ability otherwise functions as mutagen.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Explosive Breath (Su)
- **Description:** At 1st level, a dragonblood chymist gains the ability to expel fire from his mouth in the same manner as a dragon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a dragonblood chymist gains the ability to expel fire from his mouth in the same manner as a dragon. He gains the breath weapon bomb alchemist discovery but must apply this discovery to every bomb he creates. This ability replaces the Throw Anything ability
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Draconic Resistances (Ex)
- **Description:** At 2nd level, a dragonblood chymist gains a +2 bonus on all saving throws against paralysis and sleep effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 10.
  - **Rules text to implement:** At 2nd level, a dragonblood chymist gains a +2 bonus on all saving throws against paralysis and sleep effects. This bonus increases to +4 at 6th level, and to +6 at 10th level. At 10th level, a dragonblood chymist becomes immune to paralysis and sleep effects. This ability replaces poison resistance, poison use, and swift poisoning
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Dragonblood Mutagen (Su)
- Explosive Breath (Su)
- Draconic Resistances (Ex)
