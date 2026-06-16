# Inquisitor - Monster Tactician

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Monster Tactician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Monster%20Tactician
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Summon Monster (Sp); Summon Tactics (Su)
- **Replaced / altered class features:** judgment; discern lies , second judgment, third judgment, slayer, and true judgment

## Replacement details

### Replaces: judgment

- **Archetype feature:** Summon Monster (Sp)
- **Description:** Starting at 1st level, a monster tactician can cast summon monster I as a spell-like ability a number of times per day equal to 3 + her Wisdom modifier.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1, 3, 17, 2.
  - Mechanics summary: Starting at 1st level, a monster tactician can cast summon monster I as a spell-like ability a number of times per day equal to 3 + her Wisdom modifier. She can cast this spell as a standard action, and the creatures remain for 1 minute per level (instead of 1 round per level). At 3rd level and every 2 inquisitor levels thereafter, the power of this ability increases by 1 spell level, allowing her to summon more powerful creatures (to a maximum of summon monster IX at 17th level). A monster tactician cannot have more than one summon monster spell active in this way at a time; if she uses another, any existing summon monster immediately ends. These summon monster spells are considered to be part of the monster tactician’s spell list for the purposes of spell trigger and spell completion items. In addition, she can expend uses of this ability to fulfill the construction requirements of any magic items she creates, so long as she can use this ability to cast the required spells.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: discern lies , second judgment, third judgment, slayer, and true judgment

- **Archetype feature:** Summon Tactics (Su)
- **Description:** At 5th level, every time a monster tactician casts a summoning spell, she can choose any one teamwork feat she knows.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 8, 16, 20.
  - Mechanics summary: At 5th level, every time a monster tactician casts a summoning spell, she can choose any one teamwork feat she knows. All creatures summoned by the spell are treated as if they had the chosen feat for all purposes, without needing to meet any prerequisites. At 8th level and again at 16th level, the number of teamwork feats that she can choose when casting a summoning spell increases by 1. She cannot choose the same feat twice. At 20th level, all creatures summoned by the spell are treated as if they knew all of the monster tactician’s teamwork feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

## Parsed source feature headings

- Summon Monster (Sp)
- Summon Tactics (Su)

