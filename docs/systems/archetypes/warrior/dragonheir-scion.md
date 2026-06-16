# Warrior - Dragonheir Scion

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Dragonheir Scion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Dragonheir%20Scion
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Draconic Bloodline (Su); Chromatic Dragon Type; Energy Type; Metallic Dragon Type; Eldritch Strikes (Su); Fearful Might (Ex); Draconic Defense (Su); Draconic Strike (Su); Draconic Presense (Su); Wings (Su); Might of Wyrms (Su)
- **Replaced / altered class features:** the bonus feat gained at 1st level; bravery; armor training 1, 2, and 3; the bonus feat gained at 3rd level; the bonus feat gained at 5th level; armor training 4 and armor mastery; weapon mastery

## Replacement details

### Alters: the fighter’s class skills

- **Archetype feature:** Class Skills
- **Description:** The dragonheir scion adds Knowledge (arcana) and Use Magic Device to her list of class skills, instead of Handle Animal or Ride.
- **Mechanics:**
  - Mechanics summary: The dragonheir scion adds Knowledge (arcana) and Use Magic Device to her list of class skills, instead of Handle Animal or Ride.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Eldritch Strikes (Su)
- **Description:** At 1st level, a dragonheir scion gains Arcane Strike as a bonus feat.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a dragonheir scion gains Arcane Strike as a bonus feat. She does not need to meet its prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: bravery

- **Archetype feature:** Fearful Might (Ex)
- **Description:** At 1st level, a dragonheir scion gains a +1 bonus on Intimidate checks to demoralize a foe.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 6, 18.
  - Mechanics summary: At 1st level, a dragonheir scion gains a +1 bonus on Intimidate checks to demoralize a foe. This bonus increases to +2 at 6th level and by an additional 1 every 4 fighter levels thereafter to a maximum of +5 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 1, 2
- **Archetype feature:** Draconic Defense (Su)
- **Description:** At 3rd level, a dragonheir scion gains a +1 natural armor bonus and energy resistance 5 against her energy type.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 7, 13.
  - Mechanics summary: At 3rd level, a dragonheir scion gains a +1 natural armor bonus and energy resistance 5 against her energy type. At 7th level, this increases to a +2 natural armor bonus and energy resistance 10; at 13th level, it increases to a +3 natural armor bonus and energy resistance 20.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, AC/natural armor bonus.

### Replaces: 3

- **Archetype feature:** Draconic Defense (Su)
- **Description:** At 3rd level, a dragonheir scion gains a +1 natural armor bonus and energy resistance 5 against her energy type.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 7, 13.
  - Mechanics summary: At 3rd level, a dragonheir scion gains a +1 natural armor bonus and energy resistance 5 against her energy type. At 7th level, this increases to a +2 natural armor bonus and energy resistance 10; at 13th level, it increases to a +3 natural armor bonus and energy resistance 20.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, AC/natural armor bonus.

### Replaces: the bonus feat gained at 3rd level

- **Archetype feature:** Draconic Strike (Su)
- **Description:** At 3rd level, whenever the dragonheir scion damages a target with an attack augmented by Arcane Strike, the attack deals an additional 1d4 points of damage of the dragonheir scion’s energy type.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, whenever the dragonheir scion damages a target with an attack augmented by Arcane Strike, the attack deals an additional 1d4 points of damage of the dragonheir scion’s energy type.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 5th level

- **Archetype feature:** Draconic Presense (Su)
- **Description:** At 5th level, the dragonheir scion receives Dazzling Display as a bonus feat.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, the dragonheir scion receives Dazzling Display as a bonus feat. She does not need a weapon in hand to use this ability, and can use it as a standard action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: armor training 4

- **Archetype feature:** Wings (Su)
- **Description:** At 15th level, a dragonheir scion can grow leathery dragon wings from her back as a standard action, granting her a fly speed of 60 feet with average maneuverability.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a dragonheir scion can grow leathery dragon wings from her back as a standard action, granting her a fly speed of 60 feet with average maneuverability. She can dismiss the wings as a free action.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: armor mastery

- **Archetype feature:** Wings (Su)
- **Description:** At 15th level, a dragonheir scion can grow leathery dragon wings from her back as a standard action, granting her a fly speed of 60 feet with average maneuverability.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a dragonheir scion can grow leathery dragon wings from her back as a standard action, granting her a fly speed of 60 feet with average maneuverability. She can dismiss the wings as a free action.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: weapon mastery

- **Archetype feature:** Might of Wyrms (Su)
- **Description:** At 20th level, a dragonheir scion’s draconic heritage becomes manifest.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a dragonheir scion’s draconic heritage becomes manifest. She gains immunity to paralysis, sleep, and damage of her energy type, as well as blindsense with a range of 60 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Class Skills
- Draconic Bloodline (Su)
- Chromatic Dragon Type
- Energy Type
- Metallic Dragon Type
- Energy Type
- Eldritch Strikes (Su)
- Fearful Might (Ex)
- Draconic Defense (Su)
- Draconic Strike (Su)
- Draconic Presense (Su)
- Wings (Su)
- Might of Wyrms (Su)

