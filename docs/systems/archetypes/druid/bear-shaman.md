# Druid - Bear Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Bear Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Bear%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** a thousand faces; wild shape; venom immunity

## Replacement details

### Replaces: a thousand faces

- **Archetype feature:** Totemic Summons (Su)
- **Description:** At 5th level, a bear shaman may cast summon nature’s ally as a standard action when summoning bears, and summoned bears gain temporary hit points equal to her druid level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a bear shaman may cast summon nature’s ally as a standard action when summoning bears, and summoned bears gain temporary hit points equal to her druid level. She can apply the young template to any bear to reduce the level of the summoning spell required by one. She can also increase the level of summoning required by one in order to apply either the advanced or the giant template, or increase it by two to apply both the advanced and giant templates.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a bear shaman’s wild shape ability functions at her druid level – 2.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a bear shaman’s wild shape ability functions at her druid level – 2. If she takes on the form of a bear, she instead uses her druid level + 2.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, a bear shaman gains one of the following bonus feats: Diehard, Endurance, Great Fortitude, Improved Great Fortitude, Toughness.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level and every 4 levels thereafter, a bear shaman gains one of the following bonus feats: Diehard, Endurance, Great Fortitude, Improved Great Fortitude, Toughness. She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.
  - Needs implementation review: shaman spirit/hex mechanics.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Bonus Feat

