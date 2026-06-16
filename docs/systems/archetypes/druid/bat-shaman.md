# Druid - Bat Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Bat Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Bat%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** woodland stride; wild shape; venom immunity

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a bat shaman may adopt an aspect of the bat while retaining her normal form.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, a bat shaman may adopt an aspect of the bat while retaining her normal form. This ability functions as the ape shaman ability, but the druid may select from the following sets of bonuses and abilities: movement (fly speed 30 ft. [average]; the druid must be at least 5th level to select this bonus), natural weapons (bite [1d4 for a Medium shaman]), or senses (blindsense 20 ft.). While using totem transformation, the bat shaman may speak normally and can cast speak with animals (bats only) at will.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a bat shaman’s wild shape ability functions at her druid level –2.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a bat shaman’s wild shape ability functions at her druid level –2. If she takes on the form of a bat, she instead uses her druid level + 2.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every four levels thereafter, a bat shaman gains one of the following bonus feats: Acrobatic, Agile Maneuvers, Improved Initiative, Lightning Reflexes, or Skill Focus (Perception).
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level and every four levels thereafter, a bat shaman gains one of the following bonus feats: Acrobatic, Agile Maneuvers, Improved Initiative, Lightning Reflexes, or Skill Focus (Perception). She must meet the prerequisites for these bonus feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: shaman spirit/hex mechanics.

## Parsed source feature headings

- Nature Bond
- Wild Empathy (Ex)
- Totem Transformation (Su)
- Totemic Summons (Su)
- Wild Shape (Su)
- Bonus Feat

