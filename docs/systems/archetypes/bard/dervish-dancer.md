# Bard - Dervish Dancer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dervish Dancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dervish%20Dancer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Battle Dance; Fleet (Su); Versatile Dance (Ex); Dance of Fury (Su); Battle Fury (Su)
- **Replaced / altered class features:** their proficiency with the rapier and whip; suggestion and mass suggestion; dirge of doom; frightening performance; bardic knowledge and lore master; versatile performance; soothing performance

## Replacement details

### Replaces: their proficiency with the rapier and whip

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Dervish dancers gain weapon proficiency with the scimitar and kukri.
- **Mechanics:**
  - Mechanics summary: Dervish dancers gain weapon proficiency with the scimitar and kukri.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Battle Dance
- **Description:** A dervish dancer is trained in the use of the Perform skill, especially dance, to create magical effects on himself.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10, 6, 9, 18, 8, 14.
  - Mechanics summary: A dervish dancer is trained in the use of the Perform skill, especially dance, to create magical effects on himself. This works like bardic performance, except the dervish dancer only affects himself, and does not need to be able to see or hear his own performance. Battle dancing is treated as bardic performance for the purposes of feats, abilities, effects, and the like that affect bardic performance, except that battle dancing does not benefit from the Lingering Performance feat or any other ability that allows a bardic performance to grant bonuses after it has ended. Like bardic performance, it cannot be maintained at the same time as other performance abilities. Starting a battle dance is a move action, but it can be maintained each round as a free action. Changing a battle dance from one effect to another requires the dervish dancer to stop the previous performance and start the new one as a move action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: dirge of doom

- **Archetype feature:** Battle Dance
- **Description:** A dervish dancer is trained in the use of the Perform skill, especially dance, to create magical effects on himself.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10, 6, 9, 18, 8, 14.
  - Mechanics summary: A dervish dancer is trained in the use of the Perform skill, especially dance, to create magical effects on himself. This works like bardic performance, except the dervish dancer only affects himself, and does not need to be able to see or hear his own performance. Battle dancing is treated as bardic performance for the purposes of feats, abilities, effects, and the like that affect bardic performance, except that battle dancing does not benefit from the Lingering Performance feat or any other ability that allows a bardic performance to grant bonuses after it has ended. Like bardic performance, it cannot be maintained at the same time as other performance abilities. Starting a battle dance is a move action, but it can be maintained each round as a free action. Changing a battle dance from one effect to another requires the dervish dancer to stop the previous performance and start the new one as a move action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: frightening performance

- **Archetype feature:** Battle Dance
- **Description:** A dervish dancer is trained in the use of the Perform skill, especially dance, to create magical effects on himself.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10, 6, 9, 18, 8, 14.
  - Mechanics summary: A dervish dancer is trained in the use of the Perform skill, especially dance, to create magical effects on himself. This works like bardic performance, except the dervish dancer only affects himself, and does not need to be able to see or hear his own performance. Battle dancing is treated as bardic performance for the purposes of feats, abilities, effects, and the like that affect bardic performance, except that battle dancing does not benefit from the Lingering Performance feat or any other ability that allows a bardic performance to grant bonuses after it has ended. Like bardic performance, it cannot be maintained at the same time as other performance abilities. Starting a battle dance is a move action, but it can be maintained each round as a free action. Changing a battle dance from one effect to another requires the dervish dancer to stop the previous performance and start the new one as a move action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: bardic knowledge and lore master

- **Archetype feature:** Fleet (Su)
- **Description:** While performing a battle dance, a dervish dancer gains a +10 enhancement bonus to his land speed.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 19.
  - Mechanics summary: While performing a battle dance, a dervish dancer gains a +10 enhancement bonus to his land speed. This bonus increases by 5 feet for every four bard levels gained after 1st level, to a maximum of +30 feet at 19th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: versatile performance

- **Archetype feature:** Versatile Dance (Ex)
- **Description:** At 2nd level, a dervish dancer gains a bonus equal to half his level on Perform (dance) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a dervish dancer gains a bonus equal to half his level on Perform (dance) checks. He can use his bonus for his Perform (dance) skill in place of his bonus for Acrobatics.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: soothing performance

- **Archetype feature:** Dance of Fury (Su)
- **Description:** At 12th level, a dervish dancer can attack more than once as he moves while performing a battle dance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a dervish dancer can attack more than once as he moves while performing a battle dance. He can combine a full-attack action with a single move, taking the attacks at any point during his movement, but must move at least 5 feet between each attack. This movement provokes attacks of opportunity as normal.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Battle Dance
- Fleet (Su)
- Versatile Dance (Ex)
- Dance of Fury (Su)
- Battle Fury (Su)

