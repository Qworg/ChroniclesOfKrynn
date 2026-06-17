# Monk - Scaled Fist

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Scaled Fist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Scaled%20Fist
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Draconic Might; Bonus Feats; Draconic Mettle (Su); Draconic Fury (Su); Draconic Breath (Su)
- **Replaced / altered class features:** the still mind ability; maneuver training; quivering palm

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Draconic Might
- **Description:** Any of the scaled fist’s class abilities that make calculations based on her Wisdom (including bonus feats with DCs or uses per day, such as Stunning Fist, but not Wisdom-based skills or Will saving throws) are instead based on her Charisma.
- **Detailed mechanics:**
  - **Rules text to implement:** Any of the scaled fist’s class abilities that make calculations based on her Wisdom (including bonus feats with DCs or uses per day, such as Stunning Fist, but not Wisdom-based skills or Will saving throws) are instead based on her Charisma.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: bonus feats

- **Archetype feature:** Bonus Feats
- **Description:** A scaled fist adds Dragon Style UC and Intimidating Prowess to her list of bonus feats at 1st level.
- **Detailed mechanics:**
  - **Level hooks:** 1, 6, 10.
  - **Rules text to implement:** A scaled fist adds Dragon Style UC and Intimidating Prowess to her list of bonus feats at 1st level. At 6th level, she adds Dazzling Display and Dragon Ferocity UC. At 10th level, she adds Disheartening Display ACG, Dragon Roar UC and Shatter Defenses.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the still mind ability

- **Archetype feature:** Draconic Mettle (Su)
- **Description:** At 3rd level, a scaled fist gains a +2 bonus on saving throws attempted against all fear, paralysis, and sleep effects.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a scaled fist gains a +2 bonus on saving throws attempted against all fear, paralysis, and sleep effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: maneuver training

- **Archetype feature:** Draconic Fury (Su)
- **Description:** At 3rd level, the scaled fist has gained some control over the draconic energies she studies.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the scaled fist has gained some control over the draconic energies she studies. She must select one type of energy: acid, cold, electricity, or fire. Once this choice is made, it cannot be changed. The scaled fist can expend 1 point from her ki pool as a swift action to imbue her natural attacks with this energy, causing them to deal an extra 1d6 points of damage of the chosen energy type for a number of rounds equal to 1/2 her monk level.
- **Implementation flags:**
  - ki subsystem.

### Replaces: quivering palm

- **Archetype feature:** Draconic Breath (Su)
- **Description:** At 15th level, a scaled fist can spend 3 points from her ki pool to make a breath weapon attack as a standard action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a scaled fist can spend 3 points from her ki pool to make a breath weapon attack as a standard action. This breath weapon deals 1d6 points of damage of her energy type per monk level in a 30-foot cone. Those caught in the area of the breath can attempt a Reflex save (DC = 10 + 1/2 the scaled fist’s monk level + her Charisma modifier) to halve the normal damage.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Draconic Might
- Bonus Feats
- Draconic Mettle (Su)
- Draconic Fury (Su)
- Draconic Breath (Su)
