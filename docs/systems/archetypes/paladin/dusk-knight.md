# Paladin - Dusk Knight

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Dusk Knight
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Dusk%20Knight
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skills; Shadow Smite (Su); Illuminating Zeal (Su); Shadow’s Embrace (Su); Cloak of Shadow (Su); Clouding Smite (Su)
- **Replaced / altered class features:** channel positive energy; divine bond; aura of resolve; aura of justice

## Implementation details

### Alters: the paladin’s class skills

- **Archetype feature:** Skills
- **Description:** A dusk knight adds Stealth to her list of class skills, instead of Sense Motive.
- **Detailed mechanics:**
  - **Rules text to implement:** A dusk knight adds Stealth to her list of class skills, instead of Sense Motive.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: smite evil

- **Archetype feature:** Shadow Smite (Su)
- **Description:** A dusk knight gains concealment for 1 round per paladin level against the target of her smite evil ability in addition to its other effects.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A dusk knight gains concealment for 1 round per paladin level against the target of her smite evil ability in addition to its other effects. The dusk knight doesn’t deal additional damage with her smite evil ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: channel positive energy

- **Archetype feature:** Illuminating Zeal (Su)
- **Description:** At 4th level, a dusk knight gains the ability to grant darkvision to her allies.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a dusk knight gains the ability to grant darkvision to her allies. As a standard action, the dusk knight grants one target touched darkvision with a range of 60 feet for 1 hour. If the target already has darkvision, the range increases by 60 feet instead. If the dusk knight targets herself, using this ability is a swift action. Using this ability consumes two uses of her lay on hands ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: divine bond

- **Archetype feature:** Shadow’s Embrace (Su)
- **Description:** At 5th level, a dusk knight learns to fight effectively in areas of darkness.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 10, 15.
  - **Rules text to implement:** At 5th level, a dusk knight learns to fight effectively in areas of darkness. She gains Blind- Fight as a bonus feat and darkvision with a range of 60 feet. If she already has darkvision, the range increases by 30 feet instead. At 10th level, a dusk knight gains Improved Blind- Fight as a bonus feat. At 15th level, a dusk knight gains the see in darkness ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of resolve

- **Archetype feature:** Cloak of Shadow (Su)
- **Description:** At 8th level, a dusk knight becomes adept at moving through darkness.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a dusk knight becomes adept at moving through darkness. She ignores her armor penalty when attempting Stealth checks and gains a bonus on Stealth checks equal to half her paladin level while in areas of dim light or darkness.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Clouding Smite (Su)
- **Description:** At 11th level, a dusk knight’s smite impairs her foe’s abilities in the dark.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a dusk knight’s smite impairs her foe’s abilities in the dark. When a dusk knight successfully smites a foe, she reduces the target’s darkvision by 60 feet for the duration of the smite. If the target has the see in darkness ability, it must succeed at a Fortitude save or lose this ability for the duration of the smite. The save DC is equal to 10 + 1/2 the dusk knight’s paladin level + her Charisma modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Skills
- Shadow Smite (Su)
- Illuminating Zeal (Su)
- Shadow’s Embrace (Su)
- Cloak of Shadow (Su)
- Clouding Smite (Su)
