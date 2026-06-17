# Druid - Sunrider

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Sunrider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Sunrider
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Weapon and Armor Proficiencies; Nature Bond (Ex); Born to the Saddle (Ex); Mounted Advantage (Su); Desert Born (Ex); Concerted Effort (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; wild shape

## Implementation details

### Alters: the druid’s class skills

- **Archetype feature:** Class Skills
- **Description:** A sunrider gains Knowledge (local) as a class skill, but does not gain Profession as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A sunrider gains Knowledge (local) as a class skill, but does not gain Profession as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: the druid’s weapon and armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiencies
- **Description:** A sunrider gains proficiency with the shortbow, but not with the scythe, sickle, or quarterstaff.
- **Detailed mechanics:**
  - **Rules text to implement:** A sunrider gains proficiency with the shortbow, but not with the scythe, sickle, or quarterstaff.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: nature bond

- **Archetype feature:** Nature Bond (Ex)
- **Description:** A sunrider must use this ability to bond with a horse or a pony as an animal companion; she cannot choose a different animal or choose a domain instead of an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sunrider must use this ability to bond with a horse or a pony as an animal companion; she cannot choose a different animal or choose a domain instead of an animal companion.
- **Implementation flags:**
  - animal companion progression.
  - domain system.

### Replaces: woodland stride

- **Archetype feature:** Born to the Saddle (Ex)
- **Description:** At 2nd level, while wearing light or no armor, a sunrider does not need to attempt Ride checks for any task listed in the Ride skill with a DC of 15 or lower.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, while wearing light or no armor, a sunrider does not need to attempt Ride checks for any task listed in the Ride skill with a DC of 15 or lower. She does not take an armor check penalty on Ride checks while riding her mount.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trackless step

- **Archetype feature:** Mounted Advantage (Su)
- **Description:** At 3rd level, any allied mount within 30 feet of a sunrider can ignore the effects of rocky or sandy difficult terrain.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, any allied mount within 30 feet of a sunrider can ignore the effects of rocky or sandy difficult terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Desert Born (Ex)
- **Description:** A sunrider is at home in the desert.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** A sunrider is at home in the desert. At 4th level, she gains a +2 bonus on initiative checks and on Knowledge (geography), Perception, Stealth, and Survival checks while she is in desert terrain. Mounted allies traveling with her likewise gain a +1 bonus on initiative checks and Perception and Survival checks while in desert terrain, as long as they are within 30 feet of the sunrider.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: wild shape

- **Archetype feature:** Concerted Effort (Ex)
- **Description:** At 4th level, a sunrider can extend the bond she shares with her horse to other nearby mounted companions, forming them into a fighting force that seems to share a single mind.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6, 8, 10, 12, 14, 16, 18, 20.
  - **Rules text to implement:** At 4th level, a sunrider can extend the bond she shares with her horse to other nearby mounted companions, forming them into a fighting force that seems to share a single mind. Allied mounts within 60 feet of the sunrider gain evasion as per the animal companion special ability. At 6th level, the range expands to 90 feet and allied mounts gain a +10-foot enhancement bonus to their speed. At 8th level, the range expands to 120 feet and allied mounts gain devotion as per the animal companion special ability. At 10th level, allied mounts gain multiattack as per the animal companion special ability. At 12th level, allied mounts gain a +2 bonus on saving throws. At 14th level, allied mounts gain a +20-foot enhancement bonus to their speed. At 16th level, allied mounts gain improved evasion as per the animal companion special ability. At 18th level, allied mounts gain a +2 dodge bonus to their Armor Class and a +2 bonus on attack rolls. At 20th level, allied mounts gain DR 5/— and energy resistance 10 to acid, cold, electricity, fire, and sonic damage. These abilities function only while allied mounts are within range of the sunrider (her own mount always counts as an ally).
- **Implementation flags:**
  - animal companion progression.
  - wild shape subsystem.

## Parsed source feature headings

- Class Skills
- Weapon and Armor Proficiencies
- Nature Bond (Ex)
- Born to the Saddle (Ex)
- Mounted Advantage (Su)
- Desert Born (Ex)
- Concerted Effort (Ex)
