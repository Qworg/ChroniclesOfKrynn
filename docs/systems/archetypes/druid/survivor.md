# Druid - Survivor

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Survivor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Survivor
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Weapon Proficiencies; Diminished Spellcasting; Nature Bond (Ex); Element of Surprise (Ex); Trap; Launch Trap
- **Replaced / altered class features:** resist nature’s lure; wild shape; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A survivor adds Stealth to her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A survivor adds Stealth to her list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Proficiencies
- **Description:** In addition to the normal druid weapon proficiencies, a survivor is proficient with the shortbow and longbow.
- **Detailed mechanics:**
  - **Rules text to implement:** In addition to the normal druid weapon proficiencies, a survivor is proficient with the shortbow and longbow.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Spellcasting
- **Description:** A survivor’s number of spells per day for each spell level is one less than normal (for example, a 4th-level survivor can cast three cantrips, two 2nd-level spells, and one 1st-level spell per day).
- **Detailed mechanics:**
  - **Level hooks:** 4, 2, 1.
  - **Rules text to implement:** A survivor’s number of spells per day for each spell level is one less than normal (for example, a 4th-level survivor can cast three cantrips, two 2nd-level spells, and one 1st-level spell per day). If this reduces the number of spells for a level to 0, she gains only the bonus spells for that level she would be entitled to based on her Wisdom score.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond (Ex)
- **Description:** At 1st level, a survivor must select an animal companion as her nature bond.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a survivor must select an animal companion as her nature bond.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Replaces: resist nature’s lure

- **Archetype feature:** Element of Surprise (Ex)
- **Description:** At 4th level, if a survivor makes a successful attack during a surprise round against a target that is unaware of her, her victim takes a penalty on its initiative check during the following round equal to half the damage dealt by the survivor’s attack (minimum 0, maximum equal to the survivor’s class level).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, if a survivor makes a successful attack during a surprise round against a target that is unaware of her, her victim takes a penalty on its initiative check during the following round equal to half the damage dealt by the survivor’s attack (minimum 0, maximum equal to the survivor’s class level). This cannot reduce an initiative result below 1.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: wild shape

- **Archetype feature:** Trap
- **Description:** At 4th level, a survivor learns how to create a snare trap ( Pathfinder RPG Ultimate Magic 65) and one other ranger trap of her choice (see page 25 or Ultimate Magic 64).
- **Detailed mechanics:**
  - **Level hooks:** 4, 6.
  - **Rules text to implement:** At 4th level, a survivor learns how to create a snare trap ( Pathfinder RPG Ultimate Magic 65) and one other ranger trap of her choice (see page 25 or Ultimate Magic 64). At 6th level and every 2 levels thereafter, she learns another trap. The survivor can use these traps a total number of times per day equal to 1/2 her druid level + her Wisdom modifier. Once a trap is learned, it can’t be unlearned and replaced with a different type of trap. The survivor cannot select an individual trap more than once.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: venom immunity

- **Archetype feature:** Launch Trap
- **Description:** At 9th level, a survivor can affix a magical ranger trap to an arrow or thrown weapon, allowing her to set the trap remotely or use it as a direct attack.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a survivor can affix a magical ranger trap to an arrow or thrown weapon, allowing her to set the trap remotely or use it as a direct attack. Attaching the trap to the projectile is part of the full-round action of creating a new trap. The trapped projectile is fired or thrown in the normal manner. If the projectile is fired at a square, the trap is treated as if the survivor had set the trap in that square, except the DC is 5 lower than normal. If the projectile is fired at a creature, the target takes damage from the ranged weapon and is treated as if it had triggered the trap (saving throw applies, if any). The attack has a maximum range of 60 feet, and range increments apply to the attack roll. The duration of the trapped projectile starts from when it is created, not from when it is used.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Weapon Proficiencies
- Diminished Spellcasting
- Nature Bond (Ex)
- Element of Surprise (Ex)
- Trap
- Launch Trap
