# Monk - Sensei

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Sensei
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Sensei
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skills; Advice (Ex); Insightful Strike (Ex); Mystic Wisdom (Su)
- **Replaced / altered class features:** flurry of blows, fast movement, and improved evasion; evasion and the bonus feat gained at 2nd level; the bonus feats at 6th, 10th, and 14th level

## Replacement details

### Replaces: flurry of blows, fast movement, and improved evasion

- **Archetype feature:** Advice (Ex)
- **Description:** A sensei’s advice is identical to bardic performance (using oratory), allowing him to inspire courage at 1st level, inspire competence at 3rd level, and inspire greatness at 9th level, as a bard of the sensei’s level, usable a total number of rounds per day equal to his level + his Wisdom modifier (minimum 1).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 9.
  - Mechanics summary: A sensei’s advice is identical to bardic performance (using oratory), allowing him to inspire courage at 1st level, inspire competence at 3rd level, and inspire greatness at 9th level, as a bard of the sensei’s level, usable a total number of rounds per day equal to his level + his Wisdom modifier (minimum 1).
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, bardic performance hook.

### Replaces: evasion

- **Archetype feature:** Insightful Strike (Ex)
- **Description:** At 2nd level, a sensei may use his Wisdom bonus in lieu of his Strength or Dexterity on attack rolls and combat maneuver checks with unarmed strikes or monk weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sensei may use his Wisdom bonus in lieu of his Strength or Dexterity on attack rolls and combat maneuver checks with unarmed strikes or monk weapons.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 2nd level

- **Archetype feature:** Insightful Strike (Ex)
- **Description:** At 2nd level, a sensei may use his Wisdom bonus in lieu of his Strength or Dexterity on attack rolls and combat maneuver checks with unarmed strikes or monk weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sensei may use his Wisdom bonus in lieu of his Strength or Dexterity on attack rolls and combat maneuver checks with unarmed strikes or monk weapons.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feats at 6th, 10th
- **Archetype feature:** Mystic Wisdom (Su)
- **Description:** At 6th level, a sensei may use his advice ability when spending points from his ki pool to activate a class ability (using the normal actions required for each) in order to have that ability affect one ally within 30 feet rather than the sensei himself.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10, 14.
  - Mechanics summary: At 6th level, a sensei may use his advice ability when spending points from his ki pool to activate a class ability (using the normal actions required for each) in order to have that ability affect one ally within 30 feet rather than the sensei himself. At 10th level, a sensei may affect all allies within 30 feet rather than himself (spending points from his ki pool only once, not once for each target). At 10th level, a sensei may instead spend 1 point from his ki pool (as a swift action) while using advice to provide a single ally within 30 feet with evasion, fast movement, high jump, purity of body, or slow fall. At 14th level, a sensei may spend 2 points to grant one of the abilities listed above to all allies within 30 feet, or diamond body, diamond soul, or improved evasion to a single ally within 30 feet. These abilities function at the sensei’s level and last 1 round.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: 14th level

- **Archetype feature:** Mystic Wisdom (Su)
- **Description:** At 6th level, a sensei may use his advice ability when spending points from his ki pool to activate a class ability (using the normal actions required for each) in order to have that ability affect one ally within 30 feet rather than the sensei himself.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10, 14.
  - Mechanics summary: At 6th level, a sensei may use his advice ability when spending points from his ki pool to activate a class ability (using the normal actions required for each) in order to have that ability affect one ally within 30 feet rather than the sensei himself. At 10th level, a sensei may affect all allies within 30 feet rather than himself (spending points from his ki pool only once, not once for each target). At 10th level, a sensei may instead spend 1 point from his ki pool (as a swift action) while using advice to provide a single ally within 30 feet with evasion, fast movement, high jump, purity of body, or slow fall. At 14th level, a sensei may spend 2 points to grant one of the abilities listed above to all allies within 30 feet, or diamond body, diamond soul, or improved evasion to a single ally within 30 feet. These abilities function at the sensei’s level and last 1 round.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Skills
- Advice (Ex)
- Insightful Strike (Ex)
- Mystic Wisdom (Su)

