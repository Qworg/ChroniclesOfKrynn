# Cleric - Evangelist

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Evangelist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Evangelist
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Single-Minded; Public Speaker; Sermonic Performance; Spontaneous Casting; Spell Level; Spontaneous Spell
- **Replaced / altered class features:** Domains; Channel Energy; Spontaneous Casting

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Single-Minded
- **Description:** An evangelist focuses her skills and learning on proclamation rather than the fine details of the church’s deeper mysteries or martial training.
- **Detailed mechanics:**
  - **Rules text to implement:** An evangelist focuses her skills and learning on proclamation rather than the fine details of the church’s deeper mysteries or martial training. Thus, she may select only one domain and does not gain Medium Armor Proficiency or Shield Proficiency.
- **Implementation flags:**
  - domain system.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Public Speaker
- **Description:** An evangelist gains Perform as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** An evangelist gains Perform as a class skill. In addition, she is trained to project her voice with great skill and effect; the DC to hear her speak in difficult conditions is reduced by an amount equal to her class level plus her Charisma modifier (minimum 0).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sermonic Performance
- **Description:** An evangelist gains the ability to deliver a select number of supernatural and spell-like performances through the force and power of her divinely inspired preaching and exhortation.
- **Detailed mechanics:**
  - **Level hooks:** 1, 9, 15.
  - **Rules text to implement:** An evangelist gains the ability to deliver a select number of supernatural and spell-like performances through the force and power of her divinely inspired preaching and exhortation. This ability is similar in all respects to bardic performance as used by a bard of the same level (including interactions with feats, spells, and prestige classes), using Perform (oratory) as the evangelist’s performance skill. However, an evangelist gains only the following types of bardic performance: countersong, fascinate, and inspire courage at 1st level; inspire greatness at 9th level; and inspire heroics at 15th level. Sermonic performance replaces the 1st-, 9th-, and 15th-level channel energy abilities. This caps the cleric’s channel energy damage at 7d6 points.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - ki subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spontaneous Casting
- **Description:** An evangelist does not gain the ability to spontaneously cast cure or inflict spells by sacrificing prepared spells.
- **Detailed mechanics:**
  - **Rules text to implement:** An evangelist does not gain the ability to spontaneously cast cure or inflict spells by sacrificing prepared spells. However, an evangelist can spontaneously cast the following spells by sacrificing a prepared spell of the noted level or above:
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spontaneous Spell
- **Description:** 1st level command 2nd level enthrall 3rd level tongues 4th level suggestion 5th level greater command 6th level geas/quest 7th level mass suggestion 8th level sympathy 9th level demand
- **Detailed mechanics:**
  - **Level hooks:** 1, 2, 3, 4, 5, 6, 7, 8, 9.
  - **Rules text to implement:** 1st level command 2nd level enthrall 3rd level tongues 4th level suggestion 5th level greater command 6th level geas/quest 7th level mass suggestion 8th level sympathy 9th level demand
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Single-Minded
- Public Speaker
- Sermonic Performance
- Spontaneous Casting
- Spontaneous Spell
