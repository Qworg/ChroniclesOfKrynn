# Berserker - Sharptooth

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Sharptooth
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Sharptooth
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Swim Like a Fish (Ex); Scent of Blood (Ex); Ocean Breath (Ex); Blood in the Water (Ex); Rage Powers
- **Replaced / altered class features:** Fast Movement; Uncanny Dodge; Improved Uncanny Dodge; Trap Sense; 6th and 12th-level Rage Powers

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Swim Like a Fish (Ex)
- **Description:** A sharptooth gains a swim speed of 10 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: A sharptooth gains a swim speed of 10 feet. At 5th level and every 5 levels thereafter, her swim speed increases by 5 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: both uncanny dodge and improved uncanny dodge

- **Archetype feature:** Scent of Blood (Ex)
- **Description:** At 2nd level, a sharptooth gains scent as per the universal monster rule.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, a sharptooth gains scent as per the universal monster rule. At 5th level, she also gains keen scent as per universal monster rule.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Ocean Breath (Ex)
- **Description:** At 3rd level, a sharptooth counts her Constitution score as 1 higher for the purposes of holding her breath.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6, 18.
  - Mechanics summary: At 3rd level, a sharptooth counts her Constitution score as 1 higher for the purposes of holding her breath. She also gains a +1 bonus on Constitution checks to continue holding her breath. This bonus and the addition to her effective Constitution score both increase by 1 at 6th level and every 3 levels thereafter, to a maximum bonus of +6 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rage powers normally gained at 6th

- **Archetype feature:** Blood in the Water (Ex)
- **Description:** At 6th level, a sharptooth can tear the flesh from living creatures.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 12.
  - Mechanics summary: At 6th level, a sharptooth can tear the flesh from living creatures. Her attacks add 3 points of bleed damage while she is raging. At 12th level, this bleed damage increases to equal her Constitution modifier if it’s higher.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: 12th levels

- **Archetype feature:** Blood in the Water (Ex)
- **Description:** At 6th level, a sharptooth can tear the flesh from living creatures.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 12.
  - Mechanics summary: At 6th level, a sharptooth can tear the flesh from living creatures. Her attacks add 3 points of bleed damage while she is raging. At 12th level, this bleed damage increases to equal her Constitution modifier if it’s higher.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 6th and 12th-level Rage Powers

## Parsed source feature headings

- Swim Like a Fish (Ex)
- Scent of Blood (Ex)
- Ocean Breath (Ex)
- Blood in the Water (Ex)
- Rage Powers

