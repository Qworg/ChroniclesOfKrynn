# Berserker - Pack Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Pack Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Pack%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonus Feat; Raging Tactician
- **Replaced / altered class features:** the rage powers gained at 2nd, 6th, 10th, 14th, and 18th level; the damage reduction class feature

## Replacement details

### Replaces: the rage powers gained at 2nd, 6th, 10th, 14th
- **Archetype feature:** Bonus Feat
- **Description:** At 2nd level and every 4 levels thereafter, the pack rager can take a bonus teamwork feat.
- **Mechanics:**
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level and every 4 levels thereafter, the pack rager can take a bonus teamwork feat . This teamwork feat must also be a combat feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: 18th level

- **Archetype feature:** Bonus Feat
- **Description:** At 2nd level and every 4 levels thereafter, the pack rager can take a bonus teamwork feat.
- **Mechanics:**
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level and every 4 levels thereafter, the pack rager can take a bonus teamwork feat . This teamwork feat must also be a combat feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: the damage reduction class feature

- **Archetype feature:** Raging Tactician
- **Description:** At 7th level, while a pack rager is raging, she grants a single teamwork feat she knows to all allies within 30 feet who can see and hear her.
- **Mechanics:**
  - Level hooks: 7, 13, 16, 19.
  - Mechanics summary: At 7th level, while a pack rager is raging, she grants a single teamwork feat she knows to all allies within 30 feet who can see and hear her. She chooses the feat at the start of the rage, and cannot change it during the rage. An ally who moves more than 30 feet away from the raging pack rager loses access to the feat, but regains it again each time he moves back within 30 feet of the raging pack rager. Allies do not need to meet the prerequisites of these teamwork feats. At 13th level, the pack rager chooses two teamwork feats when she enters a rage, and grants her allies the use of both of those feats when they are within 30 feet of her. At 16th level, the pack rager grants these teamwork feats as long as her allies are within 60 feet of her.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook.

## Parsed source feature headings

- Bonus Feat
- Raging Tactician

