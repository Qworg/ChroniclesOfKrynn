# Druid - Dragon Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Dragon Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Dragon%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Dragon Bite (Su); Bonus Feat
- **Replaced / altered class features:** a thousand faces; wild shape; the additional use of wild shape at 8th level; venom immunity

## Replacement details

### Replaces: a thousand faces

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a dragon shaman may cast summon nature’s ally as a standard action when summoning lizards, and summoned lizards gain temporary hit points equal to her druid level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a dragon shaman may cast summon nature’s ally as a standard action when summoning lizards, and summoned lizards gain temporary hit points equal to her druid level. She can apply the young template to any lizard to reduce the level of the summoning spell required by one. She can also increase the level of summoning required by one in order to apply either the advanced or the giant template, or increase it by two to apply both the advanced and giant templates.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a dragon shaman’s wild shape ability functions at her druid level – 4.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a dragon shaman’s wild shape ability functions at her druid level – 4. If she takes on the form of a lizard, she instead uses her unmodified druid level.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: the additional use of wild shape at 8th level

- **Archetype feature:** Dragon Bite (Su)
- **Description:** At 8th level, a dragon shaman’s bite attack (whether using totem transformation or wild shape to take the form of a lizard) deals +1d6 points of energy damage (acid, cold, electricity, or fire).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a dragon shaman’s bite attack (whether using totem transformation or wild shape to take the form of a lizard) deals +1d6 points of energy damage (acid, cold, electricity, or fire). She chooses what kind of energy damage that she deals each time she bites.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook, ki/monk hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a dragon shaman gains one of the following bonus feats: Combat Casting, Dazzling Display, Magical Aptitude, Skill Focus (Knowledge [arcana]), and Spell Penetration.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level and every 4 levels thereafter, a dragon shaman gains one of the following bonus feats: Combat Casting, Dazzling Display, Magical Aptitude, Skill Focus (Knowledge [arcana]), and Spell Penetration. She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.
  - Needs implementation review: shaman spirit/hex mechanics.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Dragon Bite (Su)
- Bonus Feat

