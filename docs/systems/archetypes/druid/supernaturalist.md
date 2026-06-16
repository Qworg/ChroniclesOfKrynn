# Druid - Supernaturalist

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Supernaturalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Supernaturalist
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Eldritch Botanist (Ex); Paranormal Scholar (Ex); Animal Spirit (Su)
- **Replaced / altered class features:** wild shape

## Replacement details

### Alters: the druid’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A supernaturalist is not proficient with any type of armor.
- **Mechanics:**
  - Mechanics summary: A supernaturalist is not proficient with any type of armor.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A supernaturalist is not proficient with any type of armor.
- **Mechanics:**
  - Mechanics summary: A supernaturalist is not proficient with any type of armor.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: nature sense, trackless step, and resist nature’s lure

- **Archetype feature:** Paranormal Scholar (Ex)
- **Description:** A supernaturalist gains Psychic Sensitivity OA as a bonus feat and adds Diplomacy, Knowledge (arcana), and Sense Motive as class skills.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: A supernaturalist gains Psychic Sensitivity OA as a bonus feat and adds Diplomacy, Knowledge (arcana), and Sense Motive as class skills. At 3rd level and every 3 levels thereafter, she can select a spell from the psychic class’s spell list ( Occult Adventures 69) and add it to her druid spell list, and is able to prepare and cast it as a druid spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.
  - Needs implementation review: occult/psychic casting, occult subsystem.

### Replaces: wild shape

- **Archetype feature:** Animal Spirit (Su)
- **Description:** At 4th level, a supernaturalist can perform a seance to call an animal spirit of any animal with which she is familiar to serve as her companion and guide.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a supernaturalist can perform a seance to call an animal spirit of any animal with which she is familiar to serve as her companion and guide. The supernaturalist gains spirit, spirit bonus, spirit surge, and taboo abilities as a medium ( Occult Adventures 30) 3 levels lower than her druid level. The supernaturalist’s allies cannot participate in this seance. Spirit Bonus : Your spirit bonus applies on attack and damage rolls with natural weapons and on skill checks relating to animals and plants. Seance Boon : Your natural armor bonus to AC increases by 1. Influence Penalty : You become wild and savage, taking a penalty equal to your spirit bonus on caster level checks, Charisma- and Intelligencebased ability checks, and skill checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, saving throw hook, spellcasting/spell-list hook, wild shape hook, ki/monk hook, AC/natural armor bonus.
  - Needs implementation review: occult subsystem.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Eldritch Botanist (Ex)
- Paranormal Scholar (Ex)
- Animal Spirit (Su)

