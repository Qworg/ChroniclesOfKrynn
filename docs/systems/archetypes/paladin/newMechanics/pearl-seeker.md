# Paladin - Pearl Seeker

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Pearl Seeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Pearl%20Seeker
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Armor Proficiency and Class Skills; Seek Impressions (Ex, Sp); Aquatic Domain (Su); Vision Magic; Divine Hippocampus; Size; Speed; AC; Attack; Ability Scores; Special Qualities
- **Replaced / altered class features:** detect evil; aura of courage and aura of resolve

## Implementation details

### Alters: the paladin’s armor proficiency and class skills

- **Archetype feature:** Armor Proficiency and Class Skills
- **Description:** A pearl seeker is proficient with light and medium armor but not with shields, and gains Swim as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A pearl seeker is proficient with light and medium armor but not with shields, and gains Swim as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: detect evil

- **Archetype feature:** Seek Impressions (Ex, Sp)
- **Description:** Pearl seekers gain their power from a rare resonant sensitivity to the visiongranting entity.
- **Detailed mechanics:**
  - **Rules text to implement:** Pearl seekers gain their power from a rare resonant sensitivity to the visiongranting entity. A pearl seeker gains Psychic Sensitivity OA as a bonus feat and can use detect psychic significance OA at will as a spell-like ability.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Replaces: aura of courage and aura of resolve

- **Archetype feature:** Aquatic Domain (Su)
- **Description:** At 3rd level, a pearl seeker gains the 1st-level domain power of the Aquatic terrain domain (see page 33 of Ultimate Magic ), using her paladin level as her effective druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 1, 8, 6.
  - **Rules text to implement:** At 3rd level, a pearl seeker gains the 1st-level domain power of the Aquatic terrain domain (see page 33 of Ultimate Magic ), using her paladin level as her effective druid level. At 8th level, she gains the 6th-level domain power of the Aquatic terrain domain.
- **Implementation flags:**
  - domain system.
  - rage/rage power subsystem.

### Alters: the paladin’s spells

- **Archetype feature:** Vision Magic
- **Description:** A pearl seeker casts divine spells spontaneously, using the spells known and spells per day from the bloodrager ACG progression table.
- **Detailed mechanics:**
  - **Level hooks:** 7, 1, 10, 2, 13, 3, 16, 4.
  - **Rules text to implement:** A pearl seeker casts divine spells spontaneously, using the spells known and spells per day from the bloodrager ACG progression table. At 7th level, she gains slipstream APG as a bonus 1st-level spell known; at 10th level, she gains ride the waves UM as a bonus 2nd-level spell known; at 13th level, she gains fluid form APG as a bonus 3rd-level spell known; and at 16th level, she gains seamantle APG as a bonus 4th-level spell known. She also adds hydraulic push APG and hydraulic torrent APG (as a 1st and 3rd level spells, respectively) to her paladin spell list (but must learn these spells as normal).
- **Implementation flags:**
  - rage/rage power subsystem.
  - archetype spell-list override.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Hippocampus
- **Description:** At 5th level, a pearl seeker must choose a mount as her divine bond, gaining a hippocampus mount with the following companion statistics.
- **Detailed mechanics:**
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a pearl seeker must choose a mount as her divine bond, gaining a hippocampus mount with the following companion statistics.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Large;
- **Detailed mechanics:**
  - **Rules text to implement:** Large;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 5 ft., swim 80 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 5 ft., swim 80 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +4 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +4 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** bite (1d6), tail slap (1d4; secondary attack);
- **Detailed mechanics:**
  - **Rules text to implement:** bite (1d6), tail slap (1d4; secondary attack);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 18, Dex 13, Con 15, Int 2, Wis 12, Cha 11;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 18, Dex 13, Con 15, Int 2, Wis 12, Cha 11;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: divine bond and replaces channel positive energy

- **Archetype feature:** Special Qualities
- **Description:** darkvision 60 ft., low-light vision, scent, water dependency.
- **Detailed mechanics:**
  - **Rules text to implement:** darkvision 60 ft., low-light vision, scent, water dependency.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Armor Proficiency and Class Skills
- Seek Impressions (Ex, Sp)
- Aquatic Domain (Su)
- Vision Magic
- Divine Hippocampus
- Size
- Speed
- AC
- Attack
- Ability Scores
- Special Qualities
