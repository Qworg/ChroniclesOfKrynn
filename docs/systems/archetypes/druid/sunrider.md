# Druid - Sunrider

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Sunrider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Sunrider
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Weapon and Armor Proficiencies; Nature Bond (Ex); Born to the Saddle (Ex); Mounted Advantage (Su); Desert Born (Ex); Concerted Effort (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; wild shape

## Replacement details

### Alters: the druid’s class skills

- **Archetype feature:** Class Skills
- **Description:** A sunrider gains Knowledge (local) as a class skill, but does not gain Profession as a class skill.
- **Mechanics:**
  - Mechanics summary: A sunrider gains Knowledge (local) as a class skill, but does not gain Profession as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: the druid’s weapon

- **Archetype feature:** Weapon and Armor Proficiencies
- **Description:** A sunrider gains proficiency with the shortbow, but not with the scythe, sickle, or quarterstaff.
- **Mechanics:**
  - Mechanics summary: A sunrider gains proficiency with the shortbow, but not with the scythe, sickle, or quarterstaff.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiencies
- **Description:** A sunrider gains proficiency with the shortbow, but not with the scythe, sickle, or quarterstaff.
- **Mechanics:**
  - Mechanics summary: A sunrider gains proficiency with the shortbow, but not with the scythe, sickle, or quarterstaff.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: nature bond

- **Archetype feature:** Nature Bond (Ex)
- **Description:** A sunrider must use this ability to bond with a horse or a pony as an animal companion; she cannot choose a different animal or choose a domain instead of an animal companion.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sunrider must use this ability to bond with a horse or a pony as an animal companion; she cannot choose a different animal or choose a domain instead of an animal companion.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook, animal companion hook.

### Replaces: woodland stride

- **Archetype feature:** Born to the Saddle (Ex)
- **Description:** At 2nd level, while wearing light or no armor, a sunrider does not need to attempt Ride checks for any task listed in the Ride skill with a DC of 15 or lower.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, while wearing light or no armor, a sunrider does not need to attempt Ride checks for any task listed in the Ride skill with a DC of 15 or lower. She does not take an armor check penalty on Ride checks while riding her mount.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, save DC calculation, ki/monk hook.

### Replaces: trackless step

- **Archetype feature:** Mounted Advantage (Su)
- **Description:** At 3rd level, any allied mount within 30 feet of a sunrider can ignore the effects of rocky or sandy difficult terrain.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, any allied mount within 30 feet of a sunrider can ignore the effects of rocky or sandy difficult terrain.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Desert Born (Ex)
- **Description:** A sunrider is at home in the desert.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: A sunrider is at home in the desert. At 4th level, she gains a +2 bonus on initiative checks and on Knowledge (geography), Perception, Stealth, and Survival checks while she is in desert terrain. Mounted allies traveling with her likewise gain a +1 bonus on initiative checks and Perception and Survival checks while in desert terrain, as long as they are within 30 feet of the sunrider.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: wild shape

- **Archetype feature:** Concerted Effort (Ex)
- **Description:** At 4th level, a sunrider can extend the bond she shares with her horse to other nearby mounted companions, forming them into a fighting force that seems to share a single mind.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 6, 8, 10, 12, 14, 16, 18, 20.
  - Mechanics summary: At 4th level, a sunrider can extend the bond she shares with her horse to other nearby mounted companions, forming them into a fighting force that seems to share a single mind. Allied mounts within 60 feet of the sunrider gain evasion as per the animal companion special ability. At 6th level, the range expands to 90 feet and allied mounts gain a +10-foot enhancement bonus to their speed. At 8th level, the range expands to 120 feet and allied mounts gain devotion as per the animal companion special ability. At 10th level, allied mounts gain multiattack as per the animal companion special ability. At 12th level, allied mounts gain a +2 bonus on saving throws.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, animal companion hook, wild shape hook.

## Parsed source feature headings

- Class Skills
- Weapon and Armor Proficiencies
- Nature Bond (Ex)
- Born to the Saddle (Ex)
- Mounted Advantage (Su)
- Desert Born (Ex)
- Concerted Effort (Ex)

