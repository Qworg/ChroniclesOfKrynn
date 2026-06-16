# Berserker - Wildborn

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Wildborn
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Wildborn
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiencies; Illiteracy; Live Off the Land (Ex); Bonus Feats; Inexhaustible (Ex); Rage Powers
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Trap Sense; Rage Powers; Damage Reduction

## Replacement details

### Alters: the barbarian’s normal weapon

- **Archetype feature:** Weapon and Armor Proficiencies
- **Description:** A wildborn is proficient with leather and hide armors (but not shields) and all simple weapons that can be crafted from bone, stone, or wood.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: A wildborn is proficient with leather and hide armors (but not shields) and all simple weapons that can be crafted from bone, stone, or wood. In addition, a wildborn gains Improved Unarmed Strike and Catch Off-Guard as bonus feats at 1st level. If she uses any other kind of weapon or armor, she loses her abilities from this archetype (except illiteracy) for the next 24 hours.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Alters: armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiencies
- **Description:** A wildborn is proficient with leather and hide armors (but not shields) and all simple weapons that can be crafted from bone, stone, or wood.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: A wildborn is proficient with leather and hide armors (but not shields) and all simple weapons that can be crafted from bone, stone, or wood. In addition, a wildborn gains Improved Unarmed Strike and Catch Off-Guard as bonus feats at 1st level. If she uses any other kind of weapon or armor, she loses her abilities from this archetype (except illiteracy) for the next 24 hours.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Live Off the Land (Ex)
- **Description:** At 3rd level, a wildborn can survive capably in the wilderness without any sort of manufactured equipment or gear.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, a wildborn can survive capably in the wilderness without any sort of manufactured equipment or gear. She adds half her barbarian level as a bonus on Survival checks to hunt or gather food and gains a +1 bonus on Fortitude saves to resist the effects of extreme temperatures or other environmental effects; the Fortitude save bonus increases by 1 at 6th level and every 3 levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Alters: rage powers

- **Archetype feature:** Bonus Feats
- **Description:** At 4th level, 10th level and 16th level, a wildborn can choose a bonus feat from the following rather than select a rage power: Alertness , Animal Affinity , Athletic , Great Fortitude , Improvised Weapon Mastery , Iron Will , Lightning Reflexes , Self-Sufficient , Stealthy , or Throw Anything .
- **Mechanics:**
  - Level hooks: 4, 10, 16.
  - Mechanics summary: At 4th level, 10th level and 16th level, a wildborn can choose a bonus feat from the following rather than select a rage power: Alertness , Animal Affinity , Athletic , Great Fortitude , Improvised Weapon Mastery , Iron Will , Lightning Reflexes , Self-Sufficient , Stealthy , or Throw Anything .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

### Alters: damage reduction

- **Archetype feature:** Inexhaustible (Ex)
- **Description:** Wildborn live ruggedly and sleep lightly.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: Wildborn live ruggedly and sleep lightly. At 7th level, a wildborn recovers nonlethal damage for each minute of rest as if an hour had passed. She applies twice her damage reduction gained from barbarian levels against nonlethal damage.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Weapon and Armor Proficiencies
- Illiteracy
- Live Off the Land (Ex)
- Bonus Feats
- Inexhaustible (Ex)
- Rage Powers

