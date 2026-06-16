# Ranger - Blightwarden

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Blightwarden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Blightwarden
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hunt the Blighted (Ex); Emulate Taint (Ex, Su, or Sp); Blightwalker (Ex); Resist Corruption (Ex)
- **Replaced / altered class features:** Favored Enemy; Wild Empathy; 1st Favored Terrain; Endurance;

## Replacement details

### Alters: favored enemy

- **Archetype feature:** Hunt the Blighted (Ex)
- **Description:** A blightwarden’s first favored enemy is always a special type of creature: blighted.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A blightwarden’s first favored enemy is always a special type of creature: blighted. His bonuses from his first favored enemy apply to creatures with one or more of the following templates: blighted fey, fungal creature, fungoid, Mana Wastes mutant, mutant, mutant goblin, and plagued beast. Additionally, the bonuses apply against creatures with the blight subtype. Each time the blightwarden gains a new favored enemy, his additional +2 bonus always applies to this first favored enemy.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: wild empathy

- **Archetype feature:** Emulate Taint (Ex, Su, or Sp)
- **Description:** Once per day as a standard action, a blightwarden can examine visible evidence of a creature that has been affected by a natural or supernatural blight.
- **Mechanics:**
  - Mechanics summary: Once per day as a standard action, a blightwarden can examine visible evidence of a creature that has been affected by a natural or supernatural blight. This might include visible tracks left by a creature with the fungal creature template, or a dead creature with the blighted fey template, or any similar evidence left by any creature as described in the hunt the blighted fey ability. When the blightwarden does this, for the next 24 hours, he can use any one extraordinary, supernatural, or spell-like ability granted by the template (or the blight subtype) for a number of minutes equal to his ranger level. This duration need not be used all at once, but they must be spent in 1-minute increments. Saving throw DCs for this ability are calculated as if the blightwarden had the relevant template (for example, the DC of an ability from the blighted fey template would be equal to 10 + half the blightwarden’s Hit Dice + his Constitution modifier). He cannot use abilities that would create a permanent effect beyond this ability’s duration, and can never use more than one ability from a template or subtype in this way during a single 24-hour period.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook, cleric domain hook.

### Alters: favored terrain and replaces the blightwarden’s first favored terrain

- **Archetype feature:** Blightwalker (Ex)
- **Description:** At 3rd level, a blightwarden gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in areas afflicted by a natural or supernatural blight.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a blightwarden gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in areas afflicted by a natural or supernatural blight. Blighted areas include cursed lands ( Pathfinder RPG Horror Adventures 143), domains of evil ( Horror Adventures 159), regions negatively affected by a spell or ability that affects at least a 300-square-foot area, or regions where a specific affliction is prevalent. In addition, the blightwarden adds this bonus to ability checks, saving throws, and skill checks to avoid natural and supernatural hazards in blighted areas. He can choose to improve this bonus in place of improving a favored terrain bonus. A blightwarden traveling through blighted areas leaves no trail and cannot be tracked (though he can leave a trail if he chooses).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook, favored terrain hook, ki/monk hook.

### Replaces: endurance

- **Archetype feature:** Resist Corruption (Ex)
- **Description:** At 3rd level, a blightwarden gains a +2 bonus on saving throws against curses, diseases, mind-affecting effects, poisons, and transmutation effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a blightwarden gains a +2 bonus on saving throws against curses, diseases, mind-affecting effects, poisons, and transmutation effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 1st Favored Terrain

## Parsed source feature headings

- Hunt the Blighted (Ex)
- Emulate Taint (Ex, Su, or Sp)
- Blightwalker (Ex)
- Resist Corruption (Ex)

