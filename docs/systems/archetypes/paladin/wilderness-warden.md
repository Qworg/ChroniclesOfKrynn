# Paladin - Wilderness Warden

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Wilderness Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Wilderness%20Warden
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Natural Defense (Su); Smite Evil (Su); Aura of Comfort (Ex); Favored Terrain (Ex); Spells; Aura of Purity (Su); Natural Shield (Su)
- **Replaced / altered class features:** Class Skills; Divine Grace; Smite Evil; Aura of Courage; 3rd, 9th, 15th-level Mercy; Spells; Aura of Resolve; Aura of Justice

## Replacement details

### Alters: the paladin’s class skills

- **Archetype feature:** Class Skills
- **Description:** A wilderness warden gains Climb, Knowledge (geography), Knowledge (nature), Survival, and Swim as class skills.
- **Mechanics:**
  - Mechanics summary: A wilderness warden gains Climb, Knowledge (geography), Knowledge (nature), Survival, and Swim as class skills. She does not gain Diplomacy, Heal, Knowledge (nobility), or Spellcraft as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

### Replaces: divine grace

- **Archetype feature:** Natural Defense (Su)
- **Description:** At 2nd level, once per day, a wilderness warden can grant herself energy resistance 10 to cold, electricity, or fire and a +2 insight bonus to her CMD for a number of minutes equal to her paladin level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, once per day, a wilderness warden can grant herself energy resistance 10 to cold, electricity, or fire and a +2 insight bonus to her CMD for a number of minutes equal to her paladin level. The energy resistance increases by 5 and the CMD bonus increases by 1 at 5th level and every 5 levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Alters: smite evil

- **Archetype feature:** Smite Evil (Su)
- **Description:** A wilderness warden gains this ability at 4th level, and it functions at her paladin level – 3.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: A wilderness warden gains this ability at 4th level, and it functions at her paladin level – 3. She can expend a daily use of smite evil to gain an additional daily use of natural defense. She deals additional damage on her first successful attack when the target of her smite evil is an evil fey, humanoid (giant), magical beast, or monstrous humanoid, rather than an evil dragon, outsider (evil), or undead.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Replaces: aura of courage

- **Archetype feature:** Aura of Comfort (Ex)
- **Description:** At 3rd level, a wilderness warden is comfortable in nearly any climate, as if she were affected by a constant endure elements spell, and she and allies within 10 feet of her gain a +4 bonus on Constitution checks and saving throws to resist fatigue; exhaustion; and the effects of hunger, thirst, and hot or cold climates (including from magical effects).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a wilderness warden is comfortable in nearly any climate, as if she were affected by a constant endure elements spell, and she and allies within 10 feet of her gain a +4 bonus on Constitution checks and saving throws to resist fatigue; exhaustion; and the effects of hunger, thirst, and hot or cold climates (including from magical effects).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, rage/rage-power hook.

### Replaces: the mercies gained at 3rd level, 9th level
- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a wilderness warden selects a favored terrain, as per the ranger class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 9, 15.
  - Mechanics summary: At 3rd level, a wilderness warden selects a favored terrain, as per the ranger class feature. Every 6 levels after 3rd, she selects an additional favored terrain; each time she does so, the bonuses she gains in her previous favored terrain or terrains increase by 2.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored terrain hook.

### Replaces: 15th level

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a wilderness warden selects a favored terrain, as per the ranger class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 9, 15.
  - Mechanics summary: At 3rd level, a wilderness warden selects a favored terrain, as per the ranger class feature. Every 6 levels after 3rd, she selects an additional favored terrain; each time she does so, the bonuses she gains in her previous favored terrain or terrains increase by 2.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored terrain hook.

### Alters: the paladin’s spells

- **Archetype feature:** Spells
- **Description:** For each level of spell she can cast, a wilderness warden can prepare and cast one spell per day from the druid spell list rather than the paladin spell list.
- **Mechanics:**
  - Mechanics summary: For each level of spell she can cast, a wilderness warden can prepare and cast one spell per day from the druid spell list rather than the paladin spell list.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: aura of resolve

- **Archetype feature:** Aura of Purity (Su)
- **Description:** At 8th level, a wilderness warden gains immunity to poison.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a wilderness warden gains immunity to poison. Each ally within 10 feet gains a +2 bonus on saving throws against disease and poison.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: aura of justice

- **Archetype feature:** Natural Shield (Su)
- **Description:** At 11th level, a wilderness warden can expend two daily uses of her natural defense ability to grant the benefits of that ability to all nonevil allies within 10 feet for 1 minute.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a wilderness warden can expend two daily uses of her natural defense ability to grant the benefits of that ability to all nonevil allies within 10 feet for 1 minute.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 3rd, 9th, 15th-level Mercy

## Parsed source feature headings

- Class Skills
- Natural Defense (Su)
- Smite Evil (Su)
- Aura of Comfort (Ex)
- Favored Terrain (Ex)
- Spells
- Aura of Purity (Su)
- Natural Shield (Su)

