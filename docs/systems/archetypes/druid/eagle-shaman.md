# Druid - Eagle Shaman

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Eagle Shaman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Eagle%20Shaman
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature Bond; Wild Empathy (Ex); Totem Transformation (Su); Totemic Summons (Su); Wild Shape (Su); Bonus Feat
- **Replaced / altered class features:** wild shape; venom immunity

## Replacement details

### Replaces: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, an eagle shaman’s wild shape ability functions at her druid level – 2.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, an eagle shaman’s wild shape ability functions at her druid level – 2. If she takes on the form of an eagle or roc, she instead uses her druid level + 2.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Replaces: venom immunity

- **Archetype feature:** Bonus Feat
- **Description:** At 9th level and every 4 levels thereafter, an eagle shaman gains one of the following bonus feats: Flyby Attack, Improved Lightning Reflexes, Lightning Reflexes, Skill Focus (Perception), or Wind Stance.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level and every 4 levels thereafter, an eagle shaman gains one of the following bonus feats: Flyby Attack, Improved Lightning Reflexes, Lightning Reflexes, Skill Focus (Perception), or Wind Stance. She must meet the prerequisites for these bonus feats.
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

