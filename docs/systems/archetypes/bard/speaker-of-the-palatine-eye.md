# Bard - Speaker of the Palatine Eye

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Speaker of the Palatine Eye
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Speaker%20of%20the%20Palatine%20Eye
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Angelic Grace (Ex); Spells; Corpse Speaker (Su); Keen Ritualist (Ex)
- **Replaced / altered class features:** Class Skills; Spells; Countersong; Jack-of-all-Trades

## Replacement details

### Alters: the bard’s class skills

- **Archetype feature:** Angelic Grace (Ex)
- **Description:** Members of the Order of the Palatine Eye carry themselves with the austerity and import their heavenly aspirations demand.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Members of the Order of the Palatine Eye carry themselves with the austerity and import their heavenly aspirations demand. A speaker of the Palatine Eye does not have Acrobatics or Escape Artist as class skills, but he gains Celestial as a bonus language.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Alters: spells

- **Archetype feature:** Spells
- **Description:** A speaker of the Palatine Eye draws his powers from the mysterious rites of the Esoteric Order of the Palatine Eye.
- **Mechanics:**
  - Mechanics summary: A speaker of the Palatine Eye draws his powers from the mysterious rites of the Esoteric Order of the Palatine Eye. He casts psychic spells from the mesmerist list instead of arcane spells from the bard spell list. He otherwise casts spells, learns spells, and determines his spell allotment and spell DCs as a bard.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: countersong

- **Archetype feature:** Corpse Speaker (Su)
- **Description:** A speaker of the Palatine Eye can make it appear as if a corpse is speaking, similar to ventriloquism.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A speaker of the Palatine Eye can make it appear as if a corpse is speaking, similar to ventriloquism. A creature must succeed at a Will saving throw (DC = 10 + half the bard’s level + the bard’s Charisma modifier) to see through the ruse.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.

### Replaces: jack-of-all-trades

- **Archetype feature:** Keen Ritualist (Ex)
- **Description:** At 10th level, a speaker of the Palatine Eye reduces the number of secondary casters required to cast a ritual by 2.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 16, 19.
  - Mechanics summary: At 10th level, a speaker of the Palatine Eye reduces the number of secondary casters required to cast a ritual by 2. At 16th level, the DCs of skill checks the speaker of the Palatine Eye attempts during a ritual are reduced by 2. At 19th level, a speaker of the Palatine Eye can perform any ritual by himself without needing to satisfy any secondary caster requirements. The DCs of skill checks he attempts during a ritual are reduced by an additional 2, for a maximum DC reduction of 4.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Angelic Grace (Ex)
- Spells
- Corpse Speaker (Su)
- Keen Ritualist (Ex)

