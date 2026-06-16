# Ranger - Nirmathi Irregular

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Nirmathi Irregular
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Nirmathi%20Irregular
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Focused Enemy (Ex); Forest Ghost (Ex); Focused Terrain; Spells
- **Replaced / altered class features:** wild empathy

## Replacement details

### Replaces: the normal ranger armor and weapon proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A Nirmathi irregular is proficient with all simple and martial weapons and with light armor.
- **Mechanics:**
  - Mechanics summary: A Nirmathi irregular is proficient with all simple and martial weapons and with light armor.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: wild empathy

- **Archetype feature:** Forest Ghost (Ex)
- **Description:** At 1st level, a Nirmathi irregular adds a bonus equal to 1/2 his level on all Perception and Survival skill checks he makes while located in forest terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a Nirmathi irregular adds a bonus equal to 1/2 his level on all Perception and Survival skill checks he makes while located in forest terrain.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Focused Enemy (Ex)
- Forest Ghost (Ex)
- Focused Terrain
- Spells

