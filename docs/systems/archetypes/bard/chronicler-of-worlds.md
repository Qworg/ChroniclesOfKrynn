# Bard - Chronicler of Worlds

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Chronicler of Worlds
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Chronicler%20of%20Worlds
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Wanderer’s Insight; Planar Lore (Ex); Bardic Performance; Amoral Scholar (Ex); Scrivener’s Versatility (Ex)
- **Replaced / altered class features:** Key Ability Score; Alignment; Bardic Knowledge; Inspire Greatness; Inspire Heroics; Well-Versed; Versatile Performance;

## Replacement details

### Alters: bardic knowledge

- **Archetype feature:** Planar Lore (Ex)
- **Description:** A chronicler of worlds can take 10 on Knowledge (planes) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: A chronicler of worlds can take 10 on Knowledge (planes) checks. A number of times per day equal to her Intelligence modifier, she can take 20 on a Knowledge (planes) check. This ability stacks with that gained by lore master at 5th level. A chronicler of worlds can attempt all Knowledge checks untrained.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** The chronicler of worlds gains the following bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9, 13, 16, 15.
  - Mechanics summary: The chronicler of worlds gains the following bardic performances. Quintessence Infusion (Su) : This performance infuses allies with planar quintessence. At 9th level, while on a plane other than the Material Plane, the chronicler of worlds can use this performance to target an ally within 30 feet. For every 3 bard levels she has beyond 9th, she can affect one additional creature. Affected allies gain the plane’s basic infusion effect (see Planar Infusions ). If the chronicler of worlds is 13th level or higher, affected creatures also gain the plane’s improved infusion.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, bardic performance hook.

### Replaces: inspire heroics

- **Archetype feature:** Bardic Performance
- **Description:** The chronicler of worlds gains the following bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9, 13, 16, 15.
  - Mechanics summary: The chronicler of worlds gains the following bardic performances. Quintessence Infusion (Su) : This performance infuses allies with planar quintessence. At 9th level, while on a plane other than the Material Plane, the chronicler of worlds can use this performance to target an ally within 30 feet. For every 3 bard levels she has beyond 9th, she can affect one additional creature. Affected allies gain the plane’s basic infusion effect (see Planar Infusions ). If the chronicler of worlds is 13th level or higher, affected creatures also gain the plane’s improved infusion.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, bardic performance hook.

### Replaces: well-versed

- **Archetype feature:** Amoral Scholar (Ex)
- **Description:** A chronicler of worlds rejects cosmic morality.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A chronicler of worlds rejects cosmic morality. At 2nd level, she does not take penalties imposed by planar alignment traits, and she gains a +4 bonus on saving throws against spells and effects that vary based on their target’s alignment.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: versatile performance

- **Archetype feature:** Scrivener’s Versatility (Ex)
- **Description:** A chronicler of worlds seeks to emulate history’s greatest scribe; studying the lore of Tabris grants insight into widely varying subjects, from anatomy to discourse.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: A chronicler of worlds seeks to emulate history’s greatest scribe; studying the lore of Tabris grants insight into widely varying subjects, from anatomy to discourse. At 2nd level, a chronicler of worlds selects a skill from the following list: Bluff, Diplomacy, Disable Device, Heal, Intimidate, Profession (scribe), Sense Motive, or Survival. When attempting skill checks of that type, a chronicler can use her Linguistics skill bonus in place of her bonus with the chosen skill. At 6th level and every 4 levels thereafter, a chronicler of worlds selects an additional skill to gain this benefit.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Key Ability Score
- Alignment

## Parsed source feature headings

- Wanderer’s Insight
- Planar Lore (Ex)
- Bardic Performance
- Amoral Scholar (Ex)
- Scrivener’s Versatility (Ex)

