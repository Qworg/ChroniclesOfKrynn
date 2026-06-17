# Alchemist - Alchemical Sapper

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Alchemical Sapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Alchemical%20Sapper
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Diminished Alchemy; Class Skills; Demolition Bomb (Su); Delayed Bomb (Su); Master Engineer (Ex); Camouflage Bomb (Ex); Trip Mine (Su); Selective Detonation (Su)
- **Replaced / altered class features:** mutagen; poison resistance; swift alchemy; the discovery gained at 6th level; poison immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Alchemy
- **Description:** An alchemical sapper can prepare one fewer extract of each level than normal.
- **Detailed mechanics:**
  - **Rules text to implement:** An alchemical sapper can prepare one fewer extract of each level than normal. If this reduces the number to 0, he can prepare extracts of that level only if his Intelligence allows bonus extracts of that level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An alchemical sapper adds Knowledge (engineering) and Stealth to his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An alchemical sapper adds Knowledge (engineering) and Stealth to his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: bomb

- **Archetype feature:** Demolition Bomb (Su)
- **Description:** At 1st level, an alchemical sapper can create a demolition bomb.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 5.
  - **Rules text to implement:** At 1st level, an alchemical sapper can create a demolition bomb. This bomb deals double his normal bomb damage, half of which is bludgeoning and piercing damage, the other half of which is fire damage. This bomb ignores a number of points of hardness up to 1/2 the alchemical sapper’s level (minimum 1). This counts as an ability that modifies the alchemical sapper’s bomb, so it doesn’t stack with other discoveries that modify bombs. The alchemical sapper can’t use his demolition bomb with the fast bombs discovery. An alchemical sapper can only expend one use of his bomb class feature to create a demolition bomb once per day. He can create one additional demolition bomb per day at 5th level and every 4 alchemist levels thereafter.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: mutagen

- **Archetype feature:** Delayed Bomb (Su)
- **Description:** An alchemical sapper gains the delayed bomb discovery at 1st level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 8.
  - **Rules text to implement:** An alchemical sapper gains the delayed bomb discovery at 1st level. He does not qualify for the mutagen or cognatogen discoveries until 8th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: poison resistance

- **Archetype feature:** Master Engineer (Ex)
- **Description:** At 2nd level, an alchemical sapper adds 1/2 his alchemist level to Knowledge (engineering) checks, Craft (stonemasonry) checks, and Craft (traps) checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an alchemical sapper adds 1/2 his alchemist level to Knowledge (engineering) checks, Craft (stonemasonry) checks, and Craft (traps) checks.
- **Implementation flags:**
  - poison subsystem.
  - crafting subsystem.

### Replaces: swift alchemy

- **Archetype feature:** Camouflage Bomb (Ex)
- **Description:** At 3rd level, an alchemical sapper becomes skilled at hiding his bombs.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an alchemical sapper becomes skilled at hiding his bombs. When deploying a delayed bomb or trip mine (see below), the alchemical sapper can camouflage the bomb by taking an additional full-round action. Creatures searching for traps must succeed at a Perception check (DC = 10 + the alchemical sapper’s alchemist level + his Intelligence modifier) to notice a camouflaged bomb.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the discovery gained at 6th level

- **Archetype feature:** Trip Mine (Su)
- **Description:** At 6th level, an alchemical sapper can expend two uses of his bomb class feature to prepare a special kind of trap called a trip mine.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, an alchemical sapper can expend two uses of his bomb class feature to prepare a special kind of trap called a trip mine. This special bomb remains inert until 1 round after it leaves the alchemical sapper’s possession, after which time it becomes armed. When a creature enters a square containing an armed trip mine, it explodes, dealing normal bomb damage to all creatures in its square (DC = 10 + 1/2 the alchemical sapper’s alchemist level + his Intelligence modifier; Reflex half ) and splash damage to every creature adjacent to that square. A trip mine can be disarmed with a successful Disable Device check (with a DC equal to the trip mine’s save DC); otherwise, it lasts until the next time the alchemical sapper refreshes his daily bombs. If the alchemical sapper expends four uses of his bomb class feature, his trip mine deals damage as per a demolition bomb; this does not count against his daily uses of the demolition bomb ability. Other than demolition bomb, discoveries that modify bombs cannot apply to trip mine.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: poison immunity

- **Archetype feature:** Selective Detonation (Su)
- **Description:** At 10th level, when an alchemical sapper plants a trip mine, he can designate a number of allies up to his Intelligence modifier, allowing the designated allies to pass safely through an armed trip mine’s square without causing it to detonate.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, when an alchemical sapper plants a trip mine, he can designate a number of allies up to his Intelligence modifier, allowing the designated allies to pass safely through an armed trip mine’s square without causing it to detonate. If another creature triggers the trip mine while an ally is nearby, the ally still takes damage as normal.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Diminished Alchemy
- Class Skills
- Demolition Bomb (Su)
- Delayed Bomb (Su)
- Master Engineer (Ex)
- Camouflage Bomb (Ex)
- Trip Mine (Su)
- Selective Detonation (Su)
