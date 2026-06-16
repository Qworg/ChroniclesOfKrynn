# Summoner - Wild Caller (HotW)

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Wild Caller (HotW)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Wild%20Caller%20%28HotW%29
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Plant Eidolon; Size; Speed; AC; Saves; Attacks; Ability Scores; Free Evolutions; Resist; Attack; Summon Nature’s Ally (Sp); Fey Friend (Ex)
- **Replaced / altered class features:** aspect, which is instead gained at 18th level in place of greater aspect

## Replacement details

### Alters: the summoner’s eidolon

- **Archetype feature:** Free Evolutions
- **Description:** improved natural armor, limbs (arms), limbs (legs), slam ×2.
- **Mechanics:**
  - Mechanics summary: improved natural armor, limbs (arms), limbs (legs), slam ×2.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook, AC/natural armor bonus.

### Alters: the summon monster ability

- **Archetype feature:** Summon Nature’s Ally (Sp)
- **Description:** A wild caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + his Charisma modifier.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 19.
  - Mechanics summary: A wild caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + his Charisma modifier. At levels where a regular summoner would gain access to a new level of summon monster as a spell-like ability, the wild caller instead gains the equivalent summon nature’s ally spell; at 19th level, he can use summon nature’s ally IX or gate. When a wild caller gains a summon nature’s ally spell as a spell-like ability, he adds it to his class spell list (though he must still select it as a spell known if he wants to gain the ability to cast it as a normal spell).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: aspect, which is instead gained at 18th level in place of greater aspect

- **Archetype feature:** Fey Friend (Ex)
- **Description:** At 10th level, the wild caller gains a +4 bonus on Bluff, Diplomacy, and Sense Motive checks against fey.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 18.
  - Mechanics summary: At 10th level, the wild caller gains a +4 bonus on Bluff, Diplomacy, and Sense Motive checks against fey.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Plant Eidolon
- Size
- Speed
- AC
- Saves
- Attacks
- Ability Scores
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attacks
- Ability Scores
- Resist
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attack
- Ability Scores
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attacks
- Ability Scores
- Free Evolutions
- Summon Nature’s Ally (Sp)
- Fey Friend (Ex)

