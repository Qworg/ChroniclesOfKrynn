# Druid - Goliath Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Goliath Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Goliath%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Bonus Languages; Primal Size; Primal Bond (Ex); Primal Empathy (Ex); Face Nature’s Might (Ex); Wild Shape (Su); Primal Summons
- **Replaced / altered class features:** nature sense; resist nature’s lure; venom immunity and a thousand faces

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A goliath druid gains Bluff, Diplomacy, and Knowledge (local) as class skills, but does not gain Craft, Profession, and Ride as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A goliath druid gains Bluff, Diplomacy, and Knowledge (local) as class skills, but does not gain Craft, Profession, and Ride as class skills.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Languages
- **Description:** A goliath druid with an Intelligence bonus can select Giant as a bonus language.
- **Detailed mechanics:**
  - **Rules text to implement:** A goliath druid with an Intelligence bonus can select Giant as a bonus language.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: nature sense

- **Archetype feature:** Primal Size
- **Description:** A goliath druid adds enlarge person to her list of class spells.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** A goliath druid adds enlarge person to her list of class spells. She can cast this spell only on herself. She can also channel stored spell energy to cast this spell without preparing it—she can lose a prepared spell of 1st level or higher to cast enlarge person.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: nature bond

- **Archetype feature:** Primal Bond (Ex)
- **Description:** When a goliath druid forms a nature bond, if she selects a cleric domain, she must selected from the Animal, Destruction, or Strength domains, or the Ferocity, Growth, or Rage subdomains APG.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** When a goliath druid forms a nature bond, if she selects a cleric domain, she must selected from the Animal, Destruction, or Strength domains, or the Ferocity, Growth, or Rage subdomains APG. If the goliath druid selects an animal companion, she must select a dinosaur or megafauna. If she has a dinosaur or megafauna animal companion, she can target it with enlarge person even though the companion isn’t of the humanoid type.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - rage/rage power subsystem.

### Alters: wild empathy

- **Archetype feature:** Primal Empathy (Ex)
- **Description:** A goliath druid’s wild empathy functions only with creatures that are Large or larger.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A goliath druid’s wild empathy functions only with creatures that are Large or larger.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Face Nature’s Might (Ex)
- **Description:** At 4th level, a goliath druid gains a +4 bonus on saving throws against the spell-like and supernatural abilities of giants.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a goliath druid gains a +4 bonus on saving throws against the spell-like and supernatural abilities of giants.
- **Implementation flags:**
  - spell-like ability support.

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** Druids’ ability to wild shape into a creature of the animal type allows a goliath druid to assume only the form of a dinosaur or megafauna.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 12, 14.
  - **Rules text to implement:** Druids’ ability to wild shape into a creature of the animal type allows a goliath druid to assume only the form of a dinosaur or megafauna. She doesn’t gain the ability to become an elemental or plant. At 6th level, the goliath druid can use wild shape to become a Large humanoid of the giant subtype. This functions as the alter self spell, except the goliath druid gains a +4 size bonus to Strength, a –2 penalty to Dexterity, and a +1 natural armor bonus. If the Large humanoid form she takes has rock throwing, she gains rock throwing (range 40 feet, 1d8 damage). If the form has the aquatic subtype, she gains the aquatic and amphibious subtypes. At 12th level, when taking the form of a giant, the goliath druid’s wild shape functions as giant form I. At 14th level, the goliath druid can also use wild shape to change into a Huge giant. When taking the form of a giant, the goliath druid’s wild shape functions as giant form II.
- **Implementation flags:**
  - wild shape subsystem.
  - ki subsystem.

### Replaces: venom immunity and a thousand faces

- **Archetype feature:** Primal Summons
- **Description:** A goliath druid adds the following creatures to the list of creatures she can normally summon using summon nature’s ally spells.
- **Detailed mechanics:**
  - **Rules text to implement:** A goliath druid adds the following creatures to the list of creatures she can normally summon using summon nature’s ally spells. Summon Nature’s Ally I : Compsognathus B2. Summon Nature’s Ally II : Dimorphodon B4. Summon Nature’s Ally III : Velociraptor B4. Summon Nature’s Ally IV : Ogre, parasaurolophus B2. Summon Nature’s Ally V : Glyptodon B2, iguanodon B3. Summon Nature’s Ally VI : Baluchitherium B3, megalania B3. Summon Nature’s Ally VII : Cliff giant B4. Summon Nature’s Ally VIII : Spinosaurus B3. Summon Nature’s Ally IX : Diplodocus B4.
- **Implementation flags:**
  - summoning subsystem.

## Parsed source feature headings

- Class Skills
- Bonus Languages
- Primal Size
- Primal Bond (Ex)
- Primal Empathy (Ex)
- Face Nature’s Might (Ex)
- Wild Shape (Su)
- Primal Summons
