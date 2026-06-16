# Paladin - Pearl Seeker

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Pearl Seeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Pearl%20Seeker
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Armor Proficiency and Class Skills; Seek Impressions (Ex, Sp); Aquatic Domain (Su); Vision Magic; Divine Hippocampus; Size; Speed; AC; Attack; Ability Scores; Special Qualities
- **Replaced / altered class features:** detect evil; aura of courage and aura of resolve

## Replacement details

### Alters: the paladin’s armor proficiency and class skills

- **Archetype feature:** Armor Proficiency and Class Skills
- **Description:** A pearl seeker is proficient with light and medium armor but not with shields, and gains Swim as a class skill.
- **Mechanics:**
  - Mechanics summary: A pearl seeker is proficient with light and medium armor but not with shields, and gains Swim as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: detect evil

- **Archetype feature:** Seek Impressions (Ex, Sp)
- **Description:** Pearl seekers gain their power from a rare resonant sensitivity to the visiongranting entity.
- **Mechanics:**
  - Mechanics summary: Pearl seekers gain their power from a rare resonant sensitivity to the visiongranting entity. A pearl seeker gains Psychic Sensitivity OA as a bonus feat and can use detect psychic significance OA at will as a spell-like ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: aura of courage

- **Archetype feature:** Aquatic Domain (Su)
- **Description:** At 3rd level, a pearl seeker gains the 1st-level domain power of the Aquatic terrain domain (see page 33 of Ultimate Magic ), using her paladin level as her effective druid level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 1, 8, 6.
  - Mechanics summary: At 3rd level, a pearl seeker gains the 1st-level domain power of the Aquatic terrain domain (see page 33 of Ultimate Magic ), using her paladin level as her effective druid level. At 8th level, she gains the 6th-level domain power of the Aquatic terrain domain.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook, rage/rage-power hook.

### Replaces: aura of resolve

- **Archetype feature:** Aquatic Domain (Su)
- **Description:** At 3rd level, a pearl seeker gains the 1st-level domain power of the Aquatic terrain domain (see page 33 of Ultimate Magic ), using her paladin level as her effective druid level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 1, 8, 6.
  - Mechanics summary: At 3rd level, a pearl seeker gains the 1st-level domain power of the Aquatic terrain domain (see page 33 of Ultimate Magic ), using her paladin level as her effective druid level. At 8th level, she gains the 6th-level domain power of the Aquatic terrain domain.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook, rage/rage-power hook.

### Alters: the paladin’s spells

- **Archetype feature:** Vision Magic
- **Description:** A pearl seeker casts divine spells spontaneously, using the spells known and spells per day from the bloodrager ACG progression table.
- **Mechanics:**
  - Level hooks: 7, 1, 10, 2, 13, 3, 16, 4.
  - Mechanics summary: A pearl seeker casts divine spells spontaneously, using the spells known and spells per day from the bloodrager ACG progression table. At 7th level, she gains slipstream APG as a bonus 1st-level spell known; at 10th level, she gains ride the waves UM as a bonus 2nd-level spell known; at 13th level, she gains fluid form APG as a bonus 3rd-level spell known; and at 16th level, she gains seamantle APG as a bonus 4th-level spell known. She also adds hydraulic push APG and hydraulic torrent APG (as a 1st and 3rd level spells, respectively) to her paladin spell list (but must learn these spells as normal).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, rage/rage-power hook.

### Alters: divine bond and replaces channel positive energy

- **Archetype feature:** Special Qualities
- **Description:** darkvision 60 ft., low-light vision, scent, water dependency.
- **Mechanics:**
  - Mechanics summary: darkvision 60 ft., low-light vision, scent, water dependency.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

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

