# Monk - Nimble Guardian

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Nimble Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Nimble%20Guardian
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Defensive Aid (Ex); Nimble Reflexes (Ex); Defensive Mastery (Ex); Guardian Feline (Su); Evasion (Ex)
- **Replaced / altered class features:** evasion; still mind; purity of body; wholeness of body; improved evasion

## Replacement details

### Replaces: evasion

- **Archetype feature:** Defensive Aid (Ex)
- **Description:** At 2nd level, a number of times per day equal to his Wisdom bonus, a nimble guardian can interpose herself between one adjacent ally and an attack or damage dealt in an area of effect.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a number of times per day equal to his Wisdom bonus, a nimble guardian can interpose herself between one adjacent ally and an attack or damage dealt in an area of effect. If an adjacent ally is the target of the attack or is required to make a Reflex saving throw against a damaging effect, as an immediate action the nimble guardian can grant that ally a +4 circumstance bonus to AC or on the saving throw against the effect. The nimble guardian must use this ability before the attack roll or saving throw is made. The nimble guardian can only use this ability if he is wearing light or no armor.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: still mind

- **Archetype feature:** Nimble Reflexes (Ex)
- **Description:** At 3rd level, a nimble guardian gains a +2 bonus on all Reflex saving throws.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a nimble guardian gains a +2 bonus on all Reflex saving throws.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: purity of body

- **Archetype feature:** Defensive Mastery (Ex)
- **Description:** At 5th level, a nimble guardian gains 3 additional uses of her defensive aid ability per day.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a nimble guardian gains 3 additional uses of her defensive aid ability per day. Furthermore, if an ally that gained the benefit of a use of defensive aid succeeds her Reflex saving throw, and the effect still deals damage on a successful saving throw, the nimble guardian can spend 1 ki point to negate that damage. Doing so is not an action.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: wholeness of body

- **Archetype feature:** Guardian Feline (Su)
- **Description:** At 7th level, a nimble guardian can transform himself into a feline creature by spending 2 ki points.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7, 9.
  - Mechanics summary: At 7th level, a nimble guardian can transform himself into a feline creature by spending 2 ki points. The effect lasts for 1 hour or until the nimble guardian changes back. Changing form (to animal or back) is a standard action and does not provoke an attack of opportunity. The chosen form must be some form of feline (cheetah, lion, etc.). At 9th level, this ability functions as beast shape III .
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: improved evasion

- **Archetype feature:** Evasion (Ex)
- **Description:** At 9th level, a nimble guardian gains evasion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a nimble guardian gains evasion.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Defensive Aid (Ex)
- Nimble Reflexes (Ex)
- Defensive Mastery (Ex)
- Guardian Feline (Su)
- Evasion (Ex)

