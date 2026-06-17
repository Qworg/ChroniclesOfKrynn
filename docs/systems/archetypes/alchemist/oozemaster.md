# Alchemist - Oozemaster

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Oozemaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Oozemaster
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Ooze Bomb (Su); Ooze Toxin (Ex); Ooze Resistance; Discoveries
- **Replaced / altered class features:** Brew Potion, though an oozemaster can still select Brew Potion without meeting the feat’s prerequisites

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** An oozemaster gains Knowledge (dungeoneering) as a class skill but does not gain Knowledge (nature) as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** An oozemaster gains Knowledge (dungeoneering) as a class skill but does not gain Knowledge (nature) as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ooze Bomb (Su)
- **Description:** An oozemaster’s bombs deal acid damage instead of fire damage, and they deal damage only on a direct hit; they do not splash.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** An oozemaster’s bombs deal acid damage instead of fire damage, and they deal damage only on a direct hit; they do not splash. A creature damaged by an ooze bomb takes additional acid damage equal to the oozemaster’s Intelligence modifier at the start of the oozemaster’s next turn. A creature can take this delayed damage only once per round; additional hits extend the duration of the ongoing damage by 1 round each. An oozemaster cannot select discoveries that change the type of damage dealt by his bombs, nor those that affect the bomb’s splash radius. This ability otherwise functions as and replaces the bomb class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: Brew Potion, though an oozemaster can still select Brew Potion without meeting the feat’s prerequisites

- **Archetype feature:** Ooze Toxin (Ex)
- **Description:** An oozemaster can extract deadly toxins from the bodies of slain oozes and use them against his foes, making him a deadly opponent with unpredictable stratagems.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An oozemaster can extract deadly toxins from the bodies of slain oozes and use them against his foes, making him a deadly opponent with unpredictable stratagems. As a full-round action while adjacent to an ooze that died within the past 10 minutes, an oozemaster can attempt a Craft (alchemy) check with a DC equal to 10 + the ooze’s Challenge Rating to create a toxin. If successful, the oozemaster can extract a number of doses of toxin from an ooze equal to half its Constitution modifier (minimum 1). These toxins remain potent for 1 hour before becoming inert. The oozemaster can throw an ooze toxin as a ranged touch attack with a range increment of 10 feet, or he can apply the toxin to a weapon as if it were an injury poison. The toxin deals 1d6 points of acid damage plus an additional 1d6 points of acid damage per 3 Hit Dice the ooze had. If the ooze had any additional effects conveyed by its slam attack other than grab (such as a gelatinous cube’s paralysis ability ), the oozemaster can also apply these qualities to this attack. The save DC for additional abilities produced by this attack is 10 + half the alchemist’s level + the alchemist’s Intelligence modifier.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: poison resistance and poison immunity

- **Archetype feature:** Ooze Resistance
- **Description:** At 2nd level, an oozemaster becomes especially resistant to the abilities of his chosen foes.
- **Detailed mechanics:**
  - **Level hooks:** 2, 5, 20.
  - **Rules text to implement:** At 2nd level, an oozemaster becomes especially resistant to the abilities of his chosen foes. He gains a +2 bonus on saving throws against the extraordinary and supernatural abilities of oozes. This bonus increases by +1 at 5th level and every 3 levels thereafter, to a maximum of +8 at 20th level.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the oozemaster archetype: bottled ooze, ooze blight, and splitting mutagen.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the oozemaster archetype: bottled ooze, ooze blight, and splitting mutagen.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Ooze Bomb (Su)
- Ooze Toxin (Ex)
- Ooze Resistance
- Discoveries
