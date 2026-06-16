# Berserker - True Primitive

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** True Primitive
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20True%20Primitive
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Illiteracy; Favored Terrain (Ex); Trophy Fetish (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; trap sense

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** A true primitive has a favored terrain representing her native homeland.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: A true primitive has a favored terrain representing her native homeland. This ability functions as the ranger class feature, and the true primitive’s bonuses in that terrain improve by +2 at 5th level and every five levels thereafter. However, she does not gain any additional favored terrains.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored terrain hook.

### Replaces: trap sense

- **Archetype feature:** Trophy Fetish (Ex)
- **Description:** A true primitive collects teeth, bones, hair, and other trophies from vanquished enemies, representing their power and strength.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: A true primitive collects teeth, bones, hair, and other trophies from vanquished enemies, representing their power and strength. At 3rd level, a true primitive can attach a trophy fetish to one of the traditional true primitive weapons listed above. When wielding that weapon, the true primitive gains a +1 morale bonus on damage rolls. Furthermore, if that weapon has the fragile property, once per day, the true primitive can ignore the effects of a single natural 1 roll. A trophy fetish can also be attached to a suit of hide or bone armor, granting the true primitive a +1 morale bonus on saving throws. Furthermore, if that armor has the fragile property, once per day, the true primitive can chose not to have the armor break on the confirmation of a critical hit made against her.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Illiteracy
- Favored Terrain (Ex)
- Trophy Fetish (Ex)
- Rage Powers

