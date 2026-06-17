# Monk - Student of Stone

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Student of Stone
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Student%20of%20Stone
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hard as Stone (Ex); Strength of Stone (Ex); Bonus Feat; Bones of Stone (Su); Body of Stone (Ex); Soul of Stone (Su); Stone Self
- **Replaced / altered class features:** evasion; fast movement; high jump; improved evasion; abundant step

## Implementation details

### Replaces: evasion

- **Archetype feature:** Hard as Stone (Ex)
- **Description:** At 2nd level, whenever an opponent rolls to confirm a critical hit against a student of stone, treat the student of stone’s AC as +4 higher than normal.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, whenever an opponent rolls to confirm a critical hit against a student of stone, treat the student of stone’s AC as +4 higher than normal.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: fast movement

- **Archetype feature:** Strength of Stone (Ex)
- **Description:** At 3rd level, a student of stone learns to draw strength from the earth.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a student of stone learns to draw strength from the earth. So long as both he and his opponent are touching the ground, the student of stone gains a +1 bonus on attack rolls, damage rolls, bull rush and trip combat maneuver rolls, and to his CMD when resisting a bull rush or trip attempt.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** At 6th level, a student of stone adds Elemental Fist to his list of available bonus feats.
- **Detailed mechanics:**
  - **Level hooks:** 6, 10, 14, 18.
  - **Rules text to implement:** At 6th level, a student of stone adds Elemental Fist to his list of available bonus feats. If the student of stone selects Elemental Fist as a bonus feat, he may only deal acid damage when using the feat. At 10th level, the student of stone adds Shaitan Style to his list of bonus feats, at 14th level, he adds Shaitan Skin, and at 18th level, he adds Shaitan Earthblast. This otherwise functions as and alters the bonus feat ability.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: high jump

- **Archetype feature:** Bones of Stone (Su)
- **Description:** At 7th level, as a swift action, a student of stone can spend 1 ki point to gain DR 2/magic until the beginning of his next turn.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7, 10, 15.
  - **Rules text to implement:** At 7th level, as a swift action, a student of stone can spend 1 ki point to gain DR 2/magic until the beginning of his next turn. At 10th level, he can spend 1 ki point to gain DR 2/chaotic until his next turn. At 15th level, he can spend 1 ki point to gain DR 5/chaotic until his next turn.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved evasion

- **Archetype feature:** Body of Stone (Ex)
- **Description:** At 9th level, a student of stone gains the benefits of the light fortification armor property.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a student of stone gains the benefits of the light fortification armor property.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: abundant step

- **Archetype feature:** Soul of Stone (Su)
- **Description:** At 12th level, as a swift action, a student of stone can spend 1 ki point to gain tremorsense 15 feet until his next turn.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12, 16.
  - **Rules text to implement:** At 12th level, as a swift action, a student of stone can spend 1 ki point to gain tremorsense 15 feet until his next turn. At 16th level, the range of this tremorsense increases to 30 feet.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Stone Self
- **Description:** At 20th level, a student of stone becomes an earth outsider.
- **Detailed mechanics:**
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a student of stone becomes an earth outsider. He gains the earth subtype, as well as DR 5/chaotic, burrow speed 20 feet, and tremorsense 20 feet.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Hard as Stone (Ex)
- Strength of Stone (Ex)
- Bonus Feat
- Bones of Stone (Su)
- Body of Stone (Ex)
- Soul of Stone (Su)
- Stone Self
