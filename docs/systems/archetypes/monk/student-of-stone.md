# Monk - Student of Stone

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Student of Stone
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Student%20of%20Stone
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hard as Stone (Ex); Strength of Stone (Ex); Bonus Feat; Bones of Stone (Su); Body of Stone (Ex); Soul of Stone (Su); Stone Self
- **Replaced / altered class features:** evasion; fast movement; high jump; improved evasion; abundant step

## Replacement details

### Replaces: evasion

- **Archetype feature:** Hard as Stone (Ex)
- **Description:** At 2nd level, whenever an opponent rolls to confirm a critical hit against a student of stone, treat the student of stone’s AC as +4 higher than normal.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, whenever an opponent rolls to confirm a critical hit against a student of stone, treat the student of stone’s AC as +4 higher than normal.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: fast movement

- **Archetype feature:** Strength of Stone (Ex)
- **Description:** At 3rd level, a student of stone learns to draw strength from the earth.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a student of stone learns to draw strength from the earth. So long as both he and his opponent are touching the ground, the student of stone gains a +1 bonus on attack rolls, damage rolls, bull rush and trip combat maneuver rolls, and to his CMD when resisting a bull rush or trip attempt.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: high jump

- **Archetype feature:** Bones of Stone (Su)
- **Description:** At 7th level, as a swift action, a student of stone can spend 1 ki point to gain DR 2/magic until the beginning of his next turn.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7, 10, 15.
  - Mechanics summary: At 7th level, as a swift action, a student of stone can spend 1 ki point to gain DR 2/magic until the beginning of his next turn. At 10th level, he can spend 1 ki point to gain DR 2/chaotic until his next turn. At 15th level, he can spend 1 ki point to gain DR 5/chaotic until his next turn.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: improved evasion

- **Archetype feature:** Body of Stone (Ex)
- **Description:** At 9th level, a student of stone gains the benefits of the light fortification armor property .
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a student of stone gains the benefits of the light fortification armor property .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: abundant step

- **Archetype feature:** Soul of Stone (Su)
- **Description:** At 12th level, as a swift action, a student of stone can spend 1 ki point to gain tremorsense 15 feet until his next turn.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12, 16.
  - Mechanics summary: At 12th level, as a swift action, a student of stone can spend 1 ki point to gain tremorsense 15 feet until his next turn. At 16th level, the range of this tremorsense increases to 30 feet.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Hard as Stone (Ex)
- Strength of Stone (Ex)
- Bonus Feat
- Bones of Stone (Su)
- Body of Stone (Ex)
- Soul of Stone (Su)
- Stone Self

