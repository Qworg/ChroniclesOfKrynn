# Berserker - Savage Technologist

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Savage Technologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Savage%20Technologist
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class skills; Weapon and Armor Proficiency; Rage (Ex); Sword and Gun (Ex); Primal Magnetism (Ex); Crack Shot (Ex)
- **Replaced / altered class features:** Uncanny Dodge; Improved Uncanny Dodge

## Replacement details

### Alters: rage

- **Archetype feature:** Rage (Ex)
- **Description:** A savage technologist can enter rage as a barbarian, except she gains a morale bonus to Strength and Dexterity instead of Strength and Constitution, and she does not take a penalty to Armor Class.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A savage technologist can enter rage as a barbarian, except she gains a morale bonus to Strength and Dexterity instead of Strength and Constitution, and she does not take a penalty to Armor Class. She retains the bonus on Will saving throws.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, rage/rage-power hook.

### Replaces: Uncanny Dodge

- **Archetype feature:** Sword and Gun (Ex)
- **Description:** At 2nd level, when a raging savage technologist wields a one-handed firearm in one hand and a light or one-handed melee weapon in the other, she can make ranged attacks with the firearm without provoking attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, when a raging savage technologist wields a one-handed firearm in one hand and a light or one-handed melee weapon in the other, she can make ranged attacks with the firearm without provoking attacks of opportunity. She also gains the benefits of the Two-Weapon Fighting feat, but only if all attacks are made with those weapons.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: Improved Uncanny Dodge

- **Archetype feature:** Crack Shot (Ex)
- **Description:** At 5th level, a savage technologist adds her Dexterity modifier to her damage rolls when making ranged attacks with a firearm while raging.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a savage technologist adds her Dexterity modifier to her damage rolls when making ranged attacks with a firearm while raging.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.
  - Needs implementation review: firearms / gunslinger rules.

## Parsed source feature headings

- Class skills
- Weapon and Armor Proficiency
- Rage (Ex)
- Sword and Gun (Ex)
- Primal Magnetism (Ex)
- Crack Shot (Ex)

