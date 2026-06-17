# Monk - Perfect Scholar

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Perfect Scholar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Perfect%20Scholar
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Lore (Ex); Learn from Failure (Ex); Eye of the Sun and Moon (Ex); Walk with the Master (Su)
- **Replaced / altered class features:** still mind; slow fall; tongue of the sun and moon

## Implementation details

### Alters: the monk’s class skills

- **Archetype feature:** Class Skills
- **Description:** A perfect scholar adds Knowledge (all) and Linguistics to his list of class skills, instead of Intimidate and Perform.
- **Detailed mechanics:**
  - **Rules text to implement:** A perfect scholar adds Knowledge (all) and Linguistics to his list of class skills, instead of Intimidate and Perform.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: still mind

- **Archetype feature:** Lore (Ex)
- **Description:** At 3rd level, the perfect scholar gains a bonus equal to 1/2 his monk level on Knowledge checks and can attempt Knowledge checks untrained.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the perfect scholar gains a bonus equal to 1/2 his monk level on Knowledge checks and can attempt Knowledge checks untrained.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: slow fall

- **Archetype feature:** Learn from Failure (Ex)
- **Description:** At 4th level, when the perfect scholar misses with an attack roll or fails a Research check ( Ultimate Intrigue 148 ), he gains a +1 insight bonus on his next attack roll or Research check against the same target attempted in the next 24 hours.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6.
  - **Rules text to implement:** At 4th level, when the perfect scholar misses with an attack roll or fails a Research check ( Ultimate Intrigue 148 ), he gains a +1 insight bonus on his next attack roll or Research check against the same target attempted in the next 24 hours. An individual target cannot be affected by this ability more than once in a 24-hour period. At 6th level, and every 2 monk levels thereafter, this bonus increases by 1.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: tongue of the sun and moon

- **Archetype feature:** Eye of the Sun and Moon (Ex)
- **Description:** At 17th level, a perfect scholar can read all languages and write all languages he has read or heard.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a perfect scholar can read all languages and write all languages he has read or heard.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: perfect self

- **Archetype feature:** Walk with the Master (Su)
- **Description:** At 20th level, the perfect scholar has mastered his spiritual resonance, allowing him to travel as if using etherealness, plane shift, or shadow walk at his monk level by spending only 1 point from his ki pool.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, the perfect scholar has mastered his spiritual resonance, allowing him to travel as if using etherealness, plane shift, or shadow walk at his monk level by spending only 1 point from his ki pool. He cannot bring other creatures with him. He is treated as an outsider rather than his original type, although he can be brought back to life as if he were still of his former type.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Class Skills
- Lore (Ex)
- Learn from Failure (Ex)
- Eye of the Sun and Moon (Ex)
- Walk with the Master (Su)
