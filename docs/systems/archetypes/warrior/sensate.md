# Warrior - Sensate

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Sensate
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Sensate
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skills; Weapon and Armor Proficiency; Guarded Senses (Su); Uncanny Dodge (Su); Centered Senses (Su); Improved Uncanny Dodge (Su); Evasion (Su); Steady (Su); Perfect Senses (Su); Precision (Su)
- **Replaced / altered class features:** bravery; armor training 1; weapon training 1, 2, 3, and 4; armor training 2; armor training 3; armor training 4; armor mastery; weapon mastery

## Replacement details

### Replaces: the fighter’s class skills

- **Archetype feature:** Skills
- **Description:** The sensate’s class skills are Acrobatics (Dex), Climb (Str), Craft (Int), Perception (Wis), Profession (Wis), Ride (Dex), Sense Motive (Wis), Survival (Wis), and Swim (Str).
- **Mechanics:**
  - Mechanics summary: The sensate’s class skills are Acrobatics (Dex), Climb (Str), Craft (Int), Perception (Wis), Profession (Wis), Ride (Dex), Sense Motive (Wis), Survival (Wis), and Swim (Str).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the fighter’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Sensates are proficient with all simple and martial weapons, light armor, medium armor, and shields (except tower shields).
- **Mechanics:**
  - Mechanics summary: Sensates are proficient with all simple and martial weapons, light armor, medium armor, and shields (except tower shields).
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Replaces: armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Sensates are proficient with all simple and martial weapons, light armor, medium armor, and shields (except tower shields).
- **Mechanics:**
  - Mechanics summary: Sensates are proficient with all simple and martial weapons, light armor, medium armor, and shields (except tower shields).
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Replaces: bravery

- **Archetype feature:** Guarded Senses (Su)
- **Description:** At 2nd level, a sensate gains a +1 bonus on saves against sonic effects, figments, glamers, patterns, gaze attacks, and scent-based attacks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sensate gains a +1 bonus on saves against sonic effects, figments, glamers, patterns, gaze attacks, and scent-based attacks. This bonus increases by 1 for every 4 levels the sensate possesses beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: armor training 1

- **Archetype feature:** Uncanny Dodge (Su)
- **Description:** At 3rd level, a sensate gains uncanny dodge as the barbarian ability of the same name, except supernatural in nature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a sensate gains uncanny dodge as the barbarian ability of the same name, except supernatural in nature.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon training 1, 2, 3
- **Archetype feature:** Centered Senses (Su)
- **Description:** At 5th level, a sensate can center his senses as a move action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 9.
  - Mechanics summary: At 5th level, a sensate can center his senses as a move action. While centered, a sensate gains a +1 insight bonus on attack rolls, weapon damage rolls, and Will saves. This bonus increases by 1 at 9th level and every 4 levels thereafter. A sensate loses his centered state if he gains the confused, dazed, fascinated, staggered, or stunned condition; falls unconscious; or fails a Will save.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: 4

- **Archetype feature:** Centered Senses (Su)
- **Description:** At 5th level, a sensate can center his senses as a move action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 9.
  - Mechanics summary: At 5th level, a sensate can center his senses as a move action. While centered, a sensate gains a +1 insight bonus on attack rolls, weapon damage rolls, and Will saves. This bonus increases by 1 at 9th level and every 4 levels thereafter. A sensate loses his centered state if he gains the confused, dazed, fascinated, staggered, or stunned condition; falls unconscious; or fails a Will save.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: armor training 2

- **Archetype feature:** Improved Uncanny Dodge (Su)
- **Description:** At 7th level, a sensate gains improved uncanny dodge as the barbarian ability of the same name, except supernatural in nature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a sensate gains improved uncanny dodge as the barbarian ability of the same name, except supernatural in nature.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor training 3

- **Archetype feature:** Evasion (Su)
- **Description:** At 11th level, a sensate gains evasion while using centered senses.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a sensate gains evasion while using centered senses. This functions as the rogue ability of the same name, except that it is supernatural in nature and works regardless of the sensate’s armor and encumbrance.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor training 4

- **Archetype feature:** Steady (Su)
- **Description:** At 15th level, a sensate can center himself as a swift action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a sensate can center himself as a swift action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor mastery

- **Archetype feature:** Perfect Senses (Su)
- **Description:** At 19th level, a sensate’s senses reach perfection, and he can easily notice illusions and unseen foes by combining his senses.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a sensate’s senses reach perfection, and he can easily notice illusions and unseen foes by combining his senses. While centered, he gains the effects of true seeing as well as blindsense 60 feet. An unseen creature that makes no sound and leaves no scent (such as a creature under the effects of invisibility , silence , and negate aroma ) can still avoid both the true seeing and the blindsense.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon mastery

- **Archetype feature:** Precision (Su)
- **Description:** At 20th level, a sensate rolls twice to confirm critical hits while centered, taking the more favorable result.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a sensate rolls twice to confirm critical hits while centered, taking the more favorable result. Opponents must roll twice to confirm critical hits against him, taking the less favorable result. The latter ability does not function when the sensate is denied his Dexterity bonus.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Skills
- Weapon and Armor Proficiency
- Guarded Senses (Su)
- Uncanny Dodge (Su)
- Centered Senses (Su)
- Improved Uncanny Dodge (Su)
- Evasion (Su)
- Steady (Su)
- Perfect Senses (Su)
- Precision (Su)

