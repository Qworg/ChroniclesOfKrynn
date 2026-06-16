# Rogue - Dreamthief

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Dreamthief
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Dreamthief
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skills; Dreamshard Focus (Su); Lucid Dreamer (Ex); Soothe Dreaming (Su); Dream Infiltrator (Sp)
- **Replaced / altered class features:** Class Skills; Sneak Attack; Master Strike; Trap Sense; Uncanny Dodge; Improved Uncanny Dodge; 12th-level Rogue Talent

## Replacement details

### Alters: the rogue’s class skills

- **Archetype feature:** Skills
- **Description:** Knowledge (arcana) and Knowledge (planes) are class skills for a dreamthief.
- **Mechanics:**
  - Mechanics summary: Knowledge (arcana) and Knowledge (planes) are class skills for a dreamthief.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: sneak attack and master strike

- **Archetype feature:** Dreamshard Focus (Su)
- **Description:** At 1st level, a dreamthief selects an emotional focus from among those available to a spiritualist’s phantom.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 20.
  - Mechanics summary: At 1st level, a dreamthief selects an emotional focus from among those available to a spiritualist’s phantom. She gains the abilities granted by that emotional focus (with the exception of the focus determining her good saving throws—she retains the typical rogue saves). For each of the two skills associated with that emotional focus, a dreamthief gains ranks in that skill equal to her rogue level; this does not allow her ranks in these skills to exceed her Hit Dice. A dreamthief is considered to be both a phantom and a spiritualist for the purpose of emotional focus abilities whose effect references both a phantom and a spiritualist, such as dutiful strike, and she treats her rogue level as both her spiritualist level and her phantom Hit Dice when determining abilities and save DCs. Once per round when a dreamthief makes a melee attack, she can declare that attack to be a dreamstrike. This does not require an action, but a dreamthief must declare a dreamstrike before making the attack roll.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, saving throw hook, save DC calculation, sneak attack hook, ki/monk hook.
  - Needs implementation review: spiritualist phantom mechanics.

### Replaces: trap sense

- **Archetype feature:** Lucid Dreamer (Ex)
- **Description:** At 3rd level, a dreamthief can control her dreams, and gains Lucid Dreamer as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a dreamthief can control her dreams, and gains Lucid Dreamer as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: uncanny dodge

- **Archetype feature:** Soothe Dreaming (Su)
- **Description:** At 4th level, a dreamthief can steal negative emotions, freeing allies from harmful conditions.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a dreamthief can steal negative emotions, freeing allies from harmful conditions. This acts as the mesmerist’s touch treatment ability, treating her rogue level as her mesmerist level; a dreamthief can use this ability once per day for every 3 rogue levels she has.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: improved uncanny dodge

- **Archetype feature:** Dream Infiltrator (Sp)
- **Description:** A dreamthief can enter dreams, whether to learn secrets or meddle more directly.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8, 12.
  - Mechanics summary: A dreamthief can enter dreams, whether to learn secrets or meddle more directly. At 8th level, a dreamthief can cast dream scan once per day as a spell-like ability. At 12th level, once per day she can cast either dream scan or dream travel as a spell-like ability. The caster level of these spell-like abilities is equal to her rogue level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Dream Infiltrator (Sp)
- **Description:** A dreamthief can enter dreams, whether to learn secrets or meddle more directly.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8, 12.
  - Mechanics summary: A dreamthief can enter dreams, whether to learn secrets or meddle more directly. At 8th level, a dreamthief can cast dream scan once per day as a spell-like ability. At 12th level, once per day she can cast either dream scan or dream travel as a spell-like ability. The caster level of these spell-like abilities is equal to her rogue level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 12th-level Rogue Talent

## Parsed source feature headings

- Skills
- Dreamshard Focus (Su)
- Lucid Dreamer (Ex)
- Soothe Dreaming (Su)
- Dream Infiltrator (Sp)

