# Paladin - Martyr

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Martyr
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Martyr
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Stigmata; See No Evil, Hear No Evil (Su); Aura Mastery (Su); Aura of Health (Su); Martyr's Mercy (Su)
- **Replaced / altered class features:** smite evil; divine grace; divine health

## Implementation details

### Replaces: smite evil

- **Archetype feature:** Stigmata
- **Description:** As a standard action, the martyr can chant hymns of faith and cause bleeding stigmata to visibly appear on his body; at 7th level, he can manifest stigmata as a move action, and at 13th level, he can do so as a swift action.
- **Detailed mechanics:**
  - **Level hooks:** 7, 13, 1, 10, 16.
  - **Rules text to implement:** As a standard action, the martyr can chant hymns of faith and cause bleeding stigmata to visibly appear on his body; at 7th level, he can manifest stigmata as a move action, and at 13th level, he can do so as a swift action. He can use this ability a number of rounds per day equal to 4 + his Charisma modifier at 1st level, plus 1 additional round per day for each level beyond 1st. While his stigmata are active, he takes 1 point of bleed damage, which automatically ceases when he ends this ability but otherwise does not relent, even in the face of magical healing or Heal checks. His stigmata assist his allies, duplicating the effect of the countersong, distraction, or inspire courage bardic performance of a bard of his paladin level, though both countersong and distraction use Heal skill checks instead of Perform skill checks. At 10th level, he can choose to duplicate the effects of inspire greatness. At 16th level, he can choose to duplicate the effects of inspire heroics.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: divine grace

- **Archetype feature:** See No Evil, Hear No Evil (Su)
- **Description:** At 2nd level, the martyr and all allies within 20 feet of him gain a +4 morale bonus on saving throws against bardic performance, sonic effects, language-dependent effects, and gaze attacks.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the martyr and all allies within 20 feet of him gain a +4 morale bonus on saving throws against bardic performance, sonic effects, language-dependent effects, and gaze attacks. This ability functions only when the martyr is conscious.
- **Implementation flags:**
  - bardic performance subsystem.

### Alters: aura of courage, aura of resolve, and aura of righteousness

- **Archetype feature:** Aura Mastery (Su)
- **Description:** The martyr’s aura of courage, aura of resolve, and aura of righteousness have a radius of 20 feet instead of 10 feet, but the martyr does not gain immunity to fear, charms, or compulsions from those abilities.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The martyr’s aura of courage, aura of resolve, and aura of righteousness have a radius of 20 feet instead of 10 feet, but the martyr does not gain immunity to fear, charms, or compulsions from those abilities.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: divine health

- **Archetype feature:** Aura of Health (Su)
- **Description:** At 3rd level, the martyr and all allies within 20 feet of him gain a +4 morale bonus on saving throws against diseases.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the martyr and all allies within 20 feet of him gain a +4 morale bonus on saving throws against diseases. This ability functions only when the martyr is conscious.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: lay on hands and mercy

- **Archetype feature:** Martyr's Mercy (Su)
- **Description:** At 3rd level, a martyr can apply any of the mercies for which he qualifies based on his paladin level to his lay on hands, even if he didn’t select that mercy (or its prerequisites).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a martyr can apply any of the mercies for which he qualifies based on his paladin level to his lay on hands, even if he didn’t select that mercy (or its prerequisites). However, when he uses a mercy he didn’t select, he transfers the condition to himself for the remaining duration (ignoring any immunity he might have to the condition), and he can’t use this ability if he already has that condition. If he transfers a condition to himself in this way, he can’t remove it from himself with a personalonly ability. The martyr can use lay on hands on any ally within 30 feet, rather than needing to touch the ally, but using lay on hands on himself is a standard action, not a swift action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Stigmata
- See No Evil, Hear No Evil (Su)
- Aura Mastery (Su)
- Aura of Health (Su)
- Martyr's Mercy (Su)
