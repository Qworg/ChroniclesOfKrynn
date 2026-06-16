# Druid - Boar Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Boar Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Boar%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** woodland stride; wild shape; venom immunity

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Totem Transformation (Su)
- **Description:** At 2nd level, a boar shaman may adopt an aspect of the boar while retaining her normal form.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a boar shaman may adopt an aspect of the boar while retaining her normal form. This ability functions as the ape shaman ability, but the druid may select from the following sets of bonuses and abilities: movement (+10 enhancement bonus to land speed), senses (low-light vision, scent), natural weapons (gore [1d8 for a Medium druid], +2 on combat maneuver checks to overrun), or toughness (+2 natural armor bonus to AC, Endurance feat). While using totem transformation, the boar shaman may speak normally and can cast speak with animals (boars and related animals only) at will.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, AC/natural armor bonus.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, a boar shaman’s wild shape ability functions at her druid level –2.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a boar shaman’s wild shape ability functions at her druid level –2. If she takes on the form of a boar, she instead uses her druid level +2.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every four levels thereafter, a boar shaman gains one of the following bonus feats: Bleeding Critical, Blind-Fight, Diehard, or Improved Overrun.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level and every four levels thereafter, a boar shaman gains one of the following bonus feats: Bleeding Critical, Blind-Fight, Diehard, or Improved Overrun. She must meet the prerequisites for these bonus feats.
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

