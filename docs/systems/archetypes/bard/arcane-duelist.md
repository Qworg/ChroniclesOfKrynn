# Bard - Arcane Duelist

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Arcane Duelist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Arcane%20Duelist
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcane Strike; Bardic Performance; Bonus Feats; Arcane Bond (Ex); Arcane Armor (Ex)
- **Replaced / altered class features:** bardic knowledge; mass suggestion; versatile performance and well-versed; lore master; jack of all trades

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Arcane Strike
- **Description:** Arcane duelists gain Arcane Strike as a bonus feat at 1st level.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: Arcane duelists gain Arcane Strike as a bonus feat at 1st level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** An arcane duelist gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 18.
  - Mechanics summary: An arcane duelist gains the following types of bardic performance. Rallying Cry (Su) : At 1st level, an arcane duelist can use performance to rally dispirited allies. Each round he makes an Intimidate check. Any ally (including the bard) within 30 feet may use this check in place of his own saving throw against fear and despair effects. Those already under a fear or despair effect can attempt a new save each round using the bard’s Intimidate check. Rallying cry does not work on effects that don’t allow saves.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, bardic performance hook, ki/monk hook.

### Replaces: versatile performance and well-versed

- **Archetype feature:** Bonus Feats
- **Description:** An arcane duelist weaves might and magic in his combat style, gaining the following bonus feats at 2nd level and every four levels thereafter: 2nd level— Combat Casting , 6th level— Disruptive , 10th level— Spellbreaker , 14th level— Penetrating Strike , 18th level— Greater Penetrating Strike .
- **Mechanics:**
  - Level hooks: 2, 6, 10, 14, 18.
  - Mechanics summary: An arcane duelist weaves might and magic in his combat style, gaining the following bonus feats at 2nd level and every four levels thereafter: 2nd level— Combat Casting , 6th level— Disruptive , 10th level— Spellbreaker , 14th level— Penetrating Strike , 18th level— Greater Penetrating Strike .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: lore master

- **Archetype feature:** Arcane Bond (Ex)
- **Description:** At 5th level, an arcane duelist gains the arcane bond ability as a wizard , using a weapon as his bonded item, allowing him to cast any one addition spell that he knows once per day.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an arcane duelist gains the arcane bond ability as a wizard , using a weapon as his bonded item, allowing him to cast any one addition spell that he knows once per day. He may not choose a familiar or other type of bonded item. He may use the hand holding his bonded weapon for somatic components.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: jack of all trades

- **Archetype feature:** Arcane Armor (Ex)
- **Description:** At 10th level, an arcane duelist gains Medium Armor Proficiency and can cast bard spells in medium armor with no chance of arcane spell failure.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 16.
  - Mechanics summary: At 10th level, an arcane duelist gains Medium Armor Proficiency and can cast bard spells in medium armor with no chance of arcane spell failure. At 16th level, he gains Heavy Armor Proficiency and can cast bard spells in heavy armor with no arcane spell failure.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Arcane Strike
- Bardic Performance
- Bonus Feats
- Arcane Bond (Ex)
- Arcane Armor (Ex)

