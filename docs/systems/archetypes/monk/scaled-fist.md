# Monk - Scaled Fist

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Scaled Fist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Scaled%20Fist
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Draconic Might; Bonus Feats; Draconic Mettle (Su); Draconic Fury (Su); Draconic Breath (Su)
- **Replaced / altered class features:** the still mind ability; maneuver training; quivering palm

## Replacement details

### Alters: bonus feats

- **Archetype feature:** Bonus Feats
- **Description:** A scaled fist adds Dragon Style UC and Intimidating Prowess to her list of bonus feats at 1st level.
- **Mechanics:**
  - Level hooks: 1, 6, 10.
  - Mechanics summary: A scaled fist adds Dragon Style UC and Intimidating Prowess to her list of bonus feats at 1st level. At 6th level, she adds Dazzling Display and Dragon Ferocity UC . At 10th level, she adds Disheartening Display ACG , Dragon Roar UC and Shatter Defenses.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the still mind ability

- **Archetype feature:** Draconic Mettle (Su)
- **Description:** At 3rd level, a scaled fist gains a +2 bonus on saving throws attempted against all fear, paralysis, and sleep effects.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a scaled fist gains a +2 bonus on saving throws attempted against all fear, paralysis, and sleep effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: maneuver training

- **Archetype feature:** Draconic Fury (Su)
- **Description:** At 3rd level, the scaled fist has gained some control over the draconic energies she studies.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the scaled fist has gained some control over the draconic energies she studies. She must select one type of energy: acid, cold, electricity, or fire. Once this choice is made, it cannot be changed. The scaled fist can expend 1 point from her ki pool as a swift action to imbue her natural attacks with this energy, causing them to deal an extra 1d6 points of damage of the chosen energy type for a number of rounds equal to 1/2 her monk level.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook, natural attack system.

### Replaces: quivering palm

- **Archetype feature:** Draconic Breath (Su)
- **Description:** At 15th level, a scaled fist can spend 3 points from her ki pool to make a breath weapon attack as a standard action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a scaled fist can spend 3 points from her ki pool to make a breath weapon attack as a standard action. This breath weapon deals 1d6 points of damage of her energy type per monk level in a 30-foot cone. Those caught in the area of the breath can attempt a Reflex save (DC = 10 + 1/2 the scaled fist’s monk level + her Charisma modifier) to halve the normal damage.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Draconic Might
- Bonus Feats
- Draconic Mettle (Su)
- Draconic Fury (Su)
- Draconic Breath (Su)

