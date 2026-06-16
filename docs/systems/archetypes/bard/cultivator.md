# Bard - Cultivator

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Cultivator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Cultivator
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Plant Magic; Verdant Voice; Song of Growth (Su); Resist Nature’s Lure (Ex); Nature Lore (Ex)
- **Replaced / altered class features:** Class Skills; Spells; Bardic Knowledge; Countersong; Well-Versed; Lore Master

## Replacement details

### Alters: the bard’s class skills

- **Archetype feature:** Class Skills
- **Description:** A cultivator gains Survival as a class skill.
- **Mechanics:**
  - Mechanics summary: A cultivator gains Survival as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: the bard’s spells

- **Archetype feature:** Plant Magic
- **Description:** A cultivator bard adds the following spells to his bard spell list at the corresponding spell levels: entangle (1st), greensight (2nd), plant growth (3rd), antiplant shell (4th), tree stride (5th), green caress (6th).
- **Mechanics:**
  - Mechanics summary: A cultivator bard adds the following spells to his bard spell list at the corresponding spell levels: entangle (1st), greensight (2nd), plant growth (3rd), antiplant shell (4th), tree stride (5th), green caress (6th).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: bardic knowledge

- **Archetype feature:** Verdant Voice
- **Description:** By combining traditional Green Faith chants and fey songs into his bardic performance, a cultivator gains the ability to affect a creature of the plant type with mind-affecting bardic performances.
- **Mechanics:**
  - Mechanics summary: By combining traditional Green Faith chants and fey songs into his bardic performance, a cultivator gains the ability to affect a creature of the plant type with mind-affecting bardic performances. However, doing so requires the cultivator to expend 1 additional round of bardic performance each round he maintains a performance augmented by verdant voice.
- **Implementation flags:**
  - Likely existing hooks: bardic performance hook.

### Replaces: well-versed

- **Archetype feature:** Resist Nature’s Lure (Ex)
- **Description:** At 2nd level, a cultivator gains resist nature’s lure, as the druid class feature of the same name , but with only a +2 bonus instead of +4.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4.
  - Mechanics summary: At 2nd level, a cultivator gains resist nature’s lure, as the druid class feature of the same name , but with only a +2 bonus instead of +4. This increases to a +4 bonus at 4th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Alters: lore master

- **Archetype feature:** Nature Lore (Ex)
- **Description:** At 5th level, the cultivator gains the lore master bard ability, except he can use it only on Knowledge (nature) checks and Survival checks to track creatures in natural environments.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, the cultivator gains the lore master bard ability, except he can use it only on Knowledge (nature) checks and Survival checks to track creatures in natural environments.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Countersong

## Parsed source feature headings

- Class Skills
- Plant Magic
- Verdant Voice
- Song of Growth (Su)
- Resist Nature’s Lure (Ex)
- Nature Lore (Ex)

