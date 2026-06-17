# Bard - Chronicler of Worlds

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Chronicler of Worlds
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Chronicler%20of%20Worlds
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Wanderer’s Insight; Planar Lore (Ex); Bardic Performance; Amoral Scholar (Ex); Scrivener’s Versatility (Ex)
- **Replaced / altered class features:** Key Ability Score; Alignment; Bardic Knowledge; Inspire Greatness; Inspire Heroics; Well-Versed; Versatile Performance;

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wanderer’s Insight
- **Description:** A chronicler of worlds gains power not from her personality but from an analytical understanding of existence.
- **Detailed mechanics:**
  - **Rules text to implement:** A chronicler of worlds gains power not from her personality but from an analytical understanding of existence. She uses Intelligence instead of Charisma to determine the effects of bard class features, including spellcasting and bardic performance. A chronicler of worlds must have an alignment with at least one neutral component; a character who does not meet this requirement cannot use or benefit from this archetype’s abilities.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Alters: bardic knowledge

- **Archetype feature:** Planar Lore (Ex)
- **Description:** A chronicler of worlds can take 10 on Knowledge (planes) checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** A chronicler of worlds can take 10 on Knowledge (planes) checks. A number of times per day equal to her Intelligence modifier, she can take 20 on a Knowledge (planes) check. This ability stacks with that gained by lore master at 5th level. A chronicler of worlds can attempt all Knowledge checks untrained.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** The chronicler of worlds gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9, 13, 16, 15.
  - **Rules text to implement:** The chronicler of worlds gains the following bardic performances. Quintessence Infusion (Su) : This performance infuses allies with planar quintessence. At 9th level, while on a plane other than the Material Plane, the chronicler of worlds can use this performance to target an ally within 30 feet. For every 3 bard levels she has beyond 9th, she can affect one additional creature. Affected allies gain the plane’s basic infusion effect (see Planar Infusions ). If the chronicler of worlds is 13th level or higher, affected creatures also gain the plane’s improved infusion. If she is 16th level or higher, affected creatures also gain the plane’s greater infusion. The first time each day a creature benefits from quintessence infusion, the plane infused is set for the day and additional infusions can grant only that plane’s infusions. Infusions that have limited uses per day remain limited in that way, regardless of how many times quintessence infusion is gained. Quintessence infusion relies on audible and visual components. Mantra of Tabris (Su) : Tabris survived his travels through the darkest realms, his dedication to the pursuit of knowledge a shield against planar horrors. The chronicler of worlds walks in his footsteps. At 15th level, the chronicler of worlds can create a potent ward against outsiders. While maintaining this performance, when the chronicler of worlds is hit by an attack from an outsider or fails a saving throw against an outsider’s extraordinary, supernatural, or spell-like ability, as an immediate action she can attempt a Knowledge (planes) check and use the result as her Armor Class or her saving throw result against that attack or effect. The chronicler cannot use her planar lore ability to take 20 on this Knowledge (planes) check. This can retroactively alter the results of the attack or ability. The chronicler of worlds must decide to use this ability before the effects of the successful attack or failed saving throw have been announced. Mantra of Tabris relies on audible components.
- **Implementation flags:**
  - bardic performance subsystem.
  - spell-like ability support.

### Replaces: inspire heroics

- **Archetype feature:** Bardic Performance
- **Description:** The chronicler of worlds gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9, 13, 16, 15.
  - **Rules text to implement:** The chronicler of worlds gains the following bardic performances. Quintessence Infusion (Su) : This performance infuses allies with planar quintessence. At 9th level, while on a plane other than the Material Plane, the chronicler of worlds can use this performance to target an ally within 30 feet. For every 3 bard levels she has beyond 9th, she can affect one additional creature. Affected allies gain the plane’s basic infusion effect (see Planar Infusions ). If the chronicler of worlds is 13th level or higher, affected creatures also gain the plane’s improved infusion. If she is 16th level or higher, affected creatures also gain the plane’s greater infusion. The first time each day a creature benefits from quintessence infusion, the plane infused is set for the day and additional infusions can grant only that plane’s infusions. Infusions that have limited uses per day remain limited in that way, regardless of how many times quintessence infusion is gained. Quintessence infusion relies on audible and visual components. Mantra of Tabris (Su) : Tabris survived his travels through the darkest realms, his dedication to the pursuit of knowledge a shield against planar horrors. The chronicler of worlds walks in his footsteps. At 15th level, the chronicler of worlds can create a potent ward against outsiders. While maintaining this performance, when the chronicler of worlds is hit by an attack from an outsider or fails a saving throw against an outsider’s extraordinary, supernatural, or spell-like ability, as an immediate action she can attempt a Knowledge (planes) check and use the result as her Armor Class or her saving throw result against that attack or effect. The chronicler cannot use her planar lore ability to take 20 on this Knowledge (planes) check. This can retroactively alter the results of the attack or ability. The chronicler of worlds must decide to use this ability before the effects of the successful attack or failed saving throw have been announced. Mantra of Tabris relies on audible components.
- **Implementation flags:**
  - bardic performance subsystem.
  - spell-like ability support.

### Replaces: well-versed

- **Archetype feature:** Amoral Scholar (Ex)
- **Description:** A chronicler of worlds rejects cosmic morality.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A chronicler of worlds rejects cosmic morality. At 2nd level, she does not take penalties imposed by planar alignment traits, and she gains a +4 bonus on saving throws against spells and effects that vary based on their target’s alignment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: versatile performance

- **Archetype feature:** Scrivener’s Versatility (Ex)
- **Description:** A chronicler of worlds seeks to emulate history’s greatest scribe; studying the lore of Tabris grants insight into widely varying subjects, from anatomy to discourse.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** A chronicler of worlds seeks to emulate history’s greatest scribe; studying the lore of Tabris grants insight into widely varying subjects, from anatomy to discourse. At 2nd level, a chronicler of worlds selects a skill from the following list: Bluff, Diplomacy, Disable Device, Heal, Intimidate, Profession (scribe), Sense Motive, or Survival. When attempting skill checks of that type, a chronicler can use her Linguistics skill bonus in place of her bonus with the chosen skill. At 6th level and every 4 levels thereafter, a chronicler of worlds selects an additional skill to gain this benefit.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Wanderer’s Insight
- Planar Lore (Ex)
- Bardic Performance
- Amoral Scholar (Ex)
- Scrivener’s Versatility (Ex)
