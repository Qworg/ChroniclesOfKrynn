# Summoner - Leshy Caller

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Leshy Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Leshy%20Caller
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Leshy Eidolon; Free Evolutions; Summon Nature’s Ally (Sp)
- **Replaced / altered class features:** Eidolon; Summon Monster

## Replacement details

### Alters: the summoner’s eidolon

- **Archetype feature:** Free Evolutions
- **Description:** limbs (arms), slam, swim (2).
- **Mechanics:**
  - Mechanics summary: limbs (arms), slam, swim (2).
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook.

### Alters: summon monster

- **Archetype feature:** Summon Nature’s Ally (Sp)
- **Description:** A leshy caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + her Charisma modifier.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 19.
  - Mechanics summary: A leshy caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + her Charisma modifier. At levels where a regular summoner would gain access to a new level of summon monster as a spell-like ability, the leshy caller instead gains the equivalent summon nature’s ally spell; at 19th level, she can cast summon nature’s ally IX or gate . When a leshy caller gains a summon nature’s ally spell as a spell-like ability, she adds it to her class spell list (though she must still select it as a spell known if she wants to gain the ability to cast it as a normal spell). She adds leaf leshys, gourd leshys, fungus leshys, seaweed leshys, and lotus leshys to her list of creatures for summon nature’s ally I , II , III , IV , and V , respectively.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Leshy Eidolon
- Type
- Base Form
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
- Attack
- Ability Scores
- Free
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
- Attack
- Ability Scores
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attack
- Ability Scores
- Free Evolutions
- Summon Nature’s Ally (Sp)

