# Warrior - Relic Master

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Relic Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Relic%20Master
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Improved Item Mastery (Su); Relic Channeler (Su); Improvised Item Mastery (Su)
- **Replaced / altered class features:** armor training; weapon training; armor mastery

## Replacement details

### Alters: the fighter’s class skills

- **Archetype feature:** Class Skills
- **Description:** The relic master receives Knowledge (arcana) and Use Magic Device as class skills, but doesn’t receive Handle Animal or Ride as class skills.
- **Mechanics:**
  - Mechanics summary: The relic master receives Knowledge (arcana) and Use Magic Device as class skills, but doesn’t receive Handle Animal or Ride as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: armor training

- **Archetype feature:** Improved Item Mastery (Su)
- **Description:** At 3rd level, once per day, a relic master can use a item mastery feat she knows with a magic item that doesn’t have an appropriate spell in its construction requirements.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, once per day, a relic master can use a item mastery feat she knows with a magic item that doesn’t have an appropriate spell in its construction requirements. The magic item must meet all other requirements of the item mastery feat. Alternatively, if she is using a magic item with an appropriate spell in its construction requirements, she can use an item mastery feat without it counting against the feat’s total uses per day. She can use this ability one additional time per day at 7th, 11th, and 15th levels.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Replaces: weapon training

- **Archetype feature:** Relic Channeler (Su)
- **Description:** At 5th level, a relic master can increase the potency of a magic item she wields by investing it with a bit of her vitality as a swift action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a relic master can increase the potency of a magic item she wields by investing it with a bit of her vitality as a swift action. If the item is armor, a shield, or a weapon, its enhancement bonus increases by 1 to a maximum of +5. If the magic item creates a spell or has a save DC, its effective caster level increases by 1. A relic master can use this ability for a number of minutes per day equal to 1 + her Constitution modifier (minimum 1 minute). This duration doesn’t need to be consecutive, but it must be used in 1-minute increments.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.

### Replaces: armor mastery

- **Archetype feature:** Improvised Item Mastery (Su)
- **Description:** At 19th level as a full-round action, the relic master can select one item mastery feat whose prerequisites she meets but that she doesn’t already have.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level as a full-round action, the relic master can select one item mastery feat whose prerequisites she meets but that she doesn’t already have. She gains access to this feat, though she can’t use it as a prerequisite for other feats or options. If she selects a different item mastery feat, she loses access to her previous use of improvised item mastery and any magic effect created with it ends immediately. Any daily uses of a selected improvised item mastery feat count against all improvised mastery feats selected in the same day.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Class Skills
- Improved Item Mastery (Su)
- Relic Channeler (Su)
- Improvised Item Mastery (Su)

