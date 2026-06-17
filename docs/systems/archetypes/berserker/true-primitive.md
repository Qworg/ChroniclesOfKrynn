# Berserker - True Primitive

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** True Primitive
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20True%20Primitive
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Illiteracy; Favored Terrain (Ex); Trophy Fetish (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; trap sense

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A true primitive is proficient with hide armor and armors made from bone.
- **Detailed mechanics:**
  - **Rules text to implement:** A true primitive is proficient with hide armor and armors made from bone. A true primitive is also proficient with bone shields and the following weapons: battleaxe, blowgun, club, greatclub, handaxe, longspear, shortspear, sling, and spear.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Illiteracy
- **Description:** A true primitive cannot read or write, and her superstition about such things leads her to refuse to ever learn to read or write, even if she multiclasses into other classes.
- **Detailed mechanics:**
  - **Rules text to implement:** A true primitive cannot read or write, and her superstition about such things leads her to refuse to ever learn to read or write, even if she multiclasses into other classes.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: fast movement

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** A true primitive has a favored terrain representing her native homeland.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** A true primitive has a favored terrain representing her native homeland. This ability functions as the ranger class feature, and the true primitive’s bonuses in that terrain improve by +2 at 5th level and every five levels thereafter. However, she does not gain any additional favored terrains.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Trophy Fetish (Ex)
- **Description:** A true primitive collects teeth, bones, hair, and other trophies from vanquished enemies, representing their power and strength.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** A true primitive collects teeth, bones, hair, and other trophies from vanquished enemies, representing their power and strength. At 3rd level, a true primitive can attach a trophy fetish to one of the traditional true primitive weapons listed above. When wielding that weapon, the true primitive gains a +1 morale bonus on damage rolls. Furthermore, if that weapon has the fragile property, once per day, the true primitive can ignore the effects of a single natural 1 roll. A trophy fetish can also be attached to a suit of hide or bone armor, granting the true primitive a +1 morale bonus on saving throws. Furthermore, if that armor has the fragile property, once per day, the true primitive can chose not to have the armor break on the confirmation of a critical hit made against her. Every five levels beyond 3rd, a true primitive can use an additional trophy fetish. Multiple trophy fetishes can be attached to the same armor or weapon; their effects stack. A trophy fetish can be sundered (hardness 5, 1 hit point) but is not damaged by area attacks or attacks that do not specifically target it. It has no effect if attached to other types of weapons or armor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the true primitive archetype: animal fury, eater of magic, ghost rager, low-light vision, night vision, primal scent, scent, spell sunder, sunder enchantment, superstition, and witch hunter.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the true primitive archetype: animal fury, eater of magic, ghost rager, low-light vision, night vision, primal scent, scent, spell sunder, sunder enchantment, superstition, and witch hunter.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Illiteracy
- Favored Terrain (Ex)
- Trophy Fetish (Ex)
- Rage Powers
