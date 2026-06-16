# Alchemist - Oozemaster

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Oozemaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Oozemaster
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Ooze Bomb (Su); Ooze Toxin (Ex); Ooze Resistance; Discoveries
- **Replaced / altered class features:** Brew Potion, though an oozemaster can still select Brew Potion without meeting the feat’s prerequisites

## Replacement details

### Replaces: Brew Potion, though an oozemaster can still select Brew Potion without meeting the feat’s prerequisites

- **Archetype feature:** Ooze Toxin (Ex)
- **Description:** An oozemaster can extract deadly toxins from the bodies of slain oozes and use them against his foes, making him a deadly opponent with unpredictable stratagems.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An oozemaster can extract deadly toxins from the bodies of slain oozes and use them against his foes, making him a deadly opponent with unpredictable stratagems. As a full-round action while adjacent to an ooze that died within the past 10 minutes, an oozemaster can attempt a Craft (alchemy) check with a DC equal to 10 + the ooze’s Challenge Rating to create a toxin. If successful, the oozemaster can extract a number of doses of toxin from an ooze equal to half its Constitution modifier (minimum 1). These toxins remain potent for 1 hour before becoming inert. The oozemaster can throw an ooze toxin as a ranged touch attack with a range increment of 10 feet, or he can apply the toxin to a weapon as if it were an injury poison. The toxin deals 1d6 points of acid damage plus an additional 1d6 points of acid damage per 3 Hit Dice the ooze had.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, save DC calculation, ki/monk hook.

### Replaces: poison resistance and poison immunity

- **Archetype feature:** Ooze Resistance
- **Description:** At 2nd level, an oozemaster becomes especially resistant to the abilities of his chosen foes.
- **Mechanics:**
  - Level hooks: 2, 5, 20.
  - Mechanics summary: At 2nd level, an oozemaster becomes especially resistant to the abilities of his chosen foes. He gains a +2 bonus on saving throws against the extraordinary and supernatural abilities of oozes. This bonus increases by +1 at 5th level and every 3 levels thereafter, to a maximum of +8 at 20th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Ooze Bomb (Su)
- Ooze Toxin (Ex)
- Ooze Resistance
- Discoveries

