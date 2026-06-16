# Alchemist - Alchemical Sapper

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Alchemical Sapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Alchemical%20Sapper
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Diminished Alchemy; Class Skills; Demolition Bomb (Su); Delayed Bomb (Su); Master Engineer (Ex); Camouflage Bomb (Ex); Trip Mine (Su); Selective Detonation (Su)
- **Replaced / altered class features:** mutagen; poison resistance; swift alchemy; the discovery gained at 6th level; poison immunity

## Replacement details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An alchemical sapper adds Knowledge (engineering) and Stealth to his list of class skills.
- **Mechanics:**
  - Mechanics summary: An alchemical sapper adds Knowledge (engineering) and Stealth to his list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: bomb

- **Archetype feature:** Demolition Bomb (Su)
- **Description:** At 1st level, an alchemical sapper can create a demolition bomb.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 5.
  - Mechanics summary: At 1st level, an alchemical sapper can create a demolition bomb. This bomb deals double his normal bomb damage, half of which is bludgeoning and piercing damage, the other half of which is fire damage. This bomb ignores a number of points of hardness up to 1/2 the alchemical sapper’s level (minimum 1). This counts as an ability that modifies the alchemical sapper’s bomb, so it doesn’t stack with other discoveries that modify bombs. The alchemical sapper can’t use his demolition bomb with the fast bombs discovery. An alchemical sapper can only expend one use of his bomb class feature to create a demolition bomb once per day.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, alchemist bomb hook, alchemist discovery hook.

### Replaces: mutagen

- **Archetype feature:** Delayed Bomb (Su)
- **Description:** An alchemical sapper gains the delayed bomb discovery at 1st level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8.
  - Mechanics summary: An alchemical sapper gains the delayed bomb discovery at 1st level. He does not qualify for the mutagen or cognatogen discoveries until 8th level.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, mutagen hook, alchemist discovery hook.

### Replaces: poison resistance

- **Archetype feature:** Master Engineer (Ex)
- **Description:** At 2nd level, an alchemical sapper adds 1/2 his alchemist level to Knowledge (engineering) checks, Craft (stonemasonry) checks, and Craft (traps) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an alchemical sapper adds 1/2 his alchemist level to Knowledge (engineering) checks, Craft (stonemasonry) checks, and Craft (traps) checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: swift alchemy

- **Archetype feature:** Camouflage Bomb (Ex)
- **Description:** At 3rd level, an alchemical sapper becomes skilled at hiding his bombs.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an alchemical sapper becomes skilled at hiding his bombs. When deploying a delayed bomb or trip mine (see below), the alchemical sapper can camouflage the bomb by taking an additional full-round action. Creatures searching for traps must succeed at a Perception check (DC = 10 + the alchemical sapper’s alchemist level + his Intelligence modifier) to notice a camouflaged bomb.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, save DC calculation, alchemist bomb hook, ki/monk hook.

### Replaces: the discovery gained at 6th level

- **Archetype feature:** Trip Mine (Su)
- **Description:** At 6th level, an alchemical sapper can expend two uses of his bomb class feature to prepare a special kind of trap called a trip mine.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, an alchemical sapper can expend two uses of his bomb class feature to prepare a special kind of trap called a trip mine. This special bomb remains inert until 1 round after it leaves the alchemical sapper’s possession, after which time it becomes armed. When a creature enters a square containing an armed trip mine, it explodes, dealing normal bomb damage to all creatures in its square (DC = 10 + 1/2 the alchemical sapper’s alchemist level + his Intelligence modifier; Reflex half ) and splash damage to every creature adjacent to that square. A trip mine can be disarmed with a successful Disable Device check (with a DC equal to the trip mine’s save DC); otherwise, it lasts until the next time the alchemical sapper refreshes his daily bombs. If the alchemical sapper expends four uses of his bomb class feature, his trip mine deals damage as per a demolition bomb; this does not count against his daily uses of the demolition bomb ability. Other than demolition bomb, discoveries that modify bombs cannot apply to trip mine.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, save DC calculation, alchemist bomb hook, alchemist discovery hook, ki/monk hook.

### Replaces: poison immunity

- **Archetype feature:** Selective Detonation (Su)
- **Description:** At 10th level, when an alchemical sapper plants a trip mine, he can designate a number of allies up to his Intelligence modifier, allowing the designated allies to pass safely through an armed trip mine’s square without causing it to detonate.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, when an alchemical sapper plants a trip mine, he can designate a number of allies up to his Intelligence modifier, allowing the designated allies to pass safely through an armed trip mine’s square without causing it to detonate. If another creature triggers the trip mine while an ally is nearby, the ally still takes damage as normal.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Diminished Alchemy
- Class Skills
- Demolition Bomb (Su)
- Delayed Bomb (Su)
- Master Engineer (Ex)
- Camouflage Bomb (Ex)
- Trip Mine (Su)
- Selective Detonation (Su)

