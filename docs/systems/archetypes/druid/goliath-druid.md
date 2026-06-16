# Druid - Goliath Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Goliath Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Goliath%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Bonus Languages; Primal Size; Primal Bond (Ex); Primal Empathy (Ex); Face Nature’s Might (Ex); Wild Shape (Su); Primal Summons
- **Replaced / altered class features:** nature sense; resist nature’s lure; venom immunity and a thousand faces

## Replacement details

### Replaces: nature sense

- **Archetype feature:** Primal Size
- **Description:** A goliath druid adds enlarge person to her list of class spells.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: A goliath druid adds enlarge person to her list of class spells. She can cast this spell only on herself. She can also channel stored spell energy to cast this spell without preparing it—she can lose a prepared spell of 1st level or higher to cast enlarge person .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: nature bond

- **Archetype feature:** Primal Bond (Ex)
- **Description:** When a goliath druid forms a nature bond, if she selects a cleric domain, she must selected from the Animal, Destruction, or Strength domains, or the Ferocity, Growth, or Rage subdomains APG.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: When a goliath druid forms a nature bond, if she selects a cleric domain, she must selected from the Animal, Destruction, or Strength domains, or the Ferocity, Growth, or Rage subdomains APG . If the goliath druid selects an animal companion, she must select a dinosaur or megafauna. If she has a dinosaur or megafauna animal companion, she can target it with enlarge person even though the companion isn’t of the humanoid type.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook, rage/rage-power hook, animal companion hook.

### Alters: wild empathy

- **Archetype feature:** Primal Empathy (Ex)
- **Description:** A goliath druid’s wild empathy functions only with creatures that are Large or larger.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A goliath druid’s wild empathy functions only with creatures that are Large or larger.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Face Nature’s Might (Ex)
- **Description:** At 4th level, a goliath druid gains a +4 bonus on saving throws against the spell-like and supernatural abilities of giants.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a goliath druid gains a +4 bonus on saving throws against the spell-like and supernatural abilities of giants.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** Druids’ ability to wild shape into a creature of the animal type allows a goliath druid to assume only the form of a dinosaur or megafauna.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 12, 14.
  - Mechanics summary: Druids’ ability to wild shape into a creature of the animal type allows a goliath druid to assume only the form of a dinosaur or megafauna. She doesn’t gain the ability to become an elemental or plant. At 6th level, the goliath druid can use wild shape to become a Large humanoid of the giant subtype. This functions as the alter self spell, except the goliath druid gains a +4 size bonus to Strength, a –2 penalty to Dexterity, and a +1 natural armor bonus. If the Large humanoid form she takes has rock throwing, she gains rock throwing (range 40 feet, 1d8 damage). If the form has the aquatic subtype, she gains the aquatic and amphibious subtypes.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, wild shape hook, ki/monk hook, AC/natural armor bonus.

### Replaces: venom immunity

- **Archetype feature:** Primal Summons
- **Description:** A goliath druid adds the following creatures to the list of creatures she can normally summon using summon nature’s ally spells.
- **Mechanics:**
  - Mechanics summary: A goliath druid adds the following creatures to the list of creatures she can normally summon using summon nature’s ally spells. Summon Nature’s Ally I : Compsognathus B2 .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: a thousand faces

- **Archetype feature:** Primal Summons
- **Description:** A goliath druid adds the following creatures to the list of creatures she can normally summon using summon nature’s ally spells.
- **Mechanics:**
  - Mechanics summary: A goliath druid adds the following creatures to the list of creatures she can normally summon using summon nature’s ally spells. Summon Nature’s Ally I : Compsognathus B2 .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Class Skills
- Bonus Languages
- Primal Size
- Primal Bond (Ex)
- Primal Empathy (Ex)
- Face Nature’s Might (Ex)
- Wild Shape (Su)
- Primal Summons

