# Druid - Feral Child

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Feral Child
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Feral%20Child
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Illiteracy; Improved Unarmed Strike; Beast Family (Ex); Nature Bond (Ex); Favored Terrain (Ex); Native Cunning (Ex); Native Fortitude (Ex); Native Call (Su)
- **Replaced / altered class features:** trackless step and a thousand faces; wild shape; resist nature’s lure; venom immunity and timeless body

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A feral child loses proficiency with the scimitar, scythe, and sickle and with shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A feral child loses proficiency with the scimitar, scythe, and sickle and with shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A feral child adds Acrobatics to her list of class skills and removes Fly and Profession from her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A feral child adds Acrobatics to her list of class skills and removes Fly and Profession from her list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Illiteracy
- **Description:** At 1st level, a feral child is unable to read and write, though she may learn by taking 1 rank of Linguistics.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a feral child is unable to read and write, though she may learn by taking 1 rank of Linguistics. She does not gain Druidic as a free language and cannot select Sylvan as a bonus language.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Improved Unarmed Strike
- **Description:** At 1st level, a feral child gains Improved Unarmed Strike as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a feral child gains Improved Unarmed Strike as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Beast Family (Ex)
- **Description:** At 1st level, a feral child may choose one specific type of animal as the type that raised her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a feral child may choose one specific type of animal as the type that raised her. She gains a +2 circumstance bonus on Handle Animal and wild empathy checks with animals of that type, and she can communicate with them as if using a continual speak with animals spell-like ability, but this ability is nonmagical.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond (Ex)
- **Description:** At 1st level, a feral child must select an animal companion as her nature bond.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a feral child must select an animal companion as her nature bond.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Replaces: trackless step and a thousand faces

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a feral child gains the favored terrain ability as a ranger of her class level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a feral child gains the favored terrain ability as a ranger of her class level. A feral child may not choose urban as a favored terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: wild shape

- **Archetype feature:** Native Cunning (Ex)
- **Description:** At 3rd level, a feral child gains trap sense as a barbarian of equal level, and in her favored terrain, she immediately receives a Perception check to notice traps within 10 feet, as the trap spotter rogue talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a feral child gains trap sense as a barbarian of equal level, and in her favored terrain, she immediately receives a Perception check to notice traps within 10 feet, as the trap spotter rogue talent. In addition, at 3rd level and every three levels thereafter, she may choose one combat maneuver, and gains a bonus equal to her trap sense bonus to her CMD against that maneuver.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Native Fortitude (Ex)
- **Description:** At 4th level, a feral child gains a +1 bonus on saving throws against disease, exhaustion, fatigue, fear, and poison.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a feral child gains a +1 bonus on saving throws against disease, exhaustion, fatigue, fear, and poison. When she is in her favored terrain, she instead applies her favored terrain bonus on such saving throws. She also recovers from ability damage, exhaustion, and fatigue at twice the normal rate.
- **Implementation flags:**
  - poison subsystem.

### Replaces: venom immunity and timeless body

- **Archetype feature:** Native Call (Su)
- **Description:** At 9th level, when in her favored terrain, for any summon nature’s ally spells a feral child uses to summon animals that are native to that terrain, she treats the duration of the spell as if she were 2 levels higher.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9, 17.
  - **Rules text to implement:** At 9th level, when in her favored terrain, for any summon nature’s ally spells a feral child uses to summon animals that are native to that terrain, she treats the duration of the spell as if she were 2 levels higher. At 17th level, when the feral child uses summon nature’s ally spells to summon such animals, those animals gain a +2 bonus to both their Strength and Constitution ability scores. This stacks with the effects of the Augmented Summoning feat.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Illiteracy
- Improved Unarmed Strike
- Beast Family (Ex)
- Nature Bond (Ex)
- Favored Terrain (Ex)
- Native Cunning (Ex)
- Native Fortitude (Ex)
- Native Call (Su)
