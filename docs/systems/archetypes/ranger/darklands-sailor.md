# Ranger - Darklands Sailor

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Darklands Sailor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Darklands%20Sailor
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skilled Pilot (Ex); Keen Ear (Ex); Quick Swim (Ex); Subsonic Warning (Ex); Hidden Depths (Ex)
- **Replaced / altered class features:** track; woodland stride; swift tracker; camouflage and hide in plain sight

## Replacement details

### Replaces: track

- **Archetype feature:** Skilled Pilot (Ex)
- **Description:** A Darklands sailor adds half his level (minimum 1) to Profession (sailor) and Survival checks to navigate or avoid natural hazards in subterranean waterways.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A Darklands sailor adds half his level (minimum 1) to Profession (sailor) and Survival checks to navigate or avoid natural hazards in subterranean waterways.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: favored terrain

- **Archetype feature:** Keen Ear (Ex)
- **Description:** At 3rd level, a Darklands sailor learns how to use sound to compensate for poor visibility when facing threats above and below the water.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8, 13, 18.
  - Mechanics summary: At 3rd level, a Darklands sailor learns how to use sound to compensate for poor visibility when facing threats above and below the water. He gains the uncanny dodge rogue ability when underground and either swimming or aboard a boat. At 8th level, he gains improved uncanny dodge under these conditions, treating his Darklands sailor level as his effective rogue level for the purpose of denying an enemy’s sneak attacks. At 13th level, he gains blind sense with a range of 30 feet against creatures touching water. At 18th level, his blind sense range increases to 60 feet or equal to the range of his darkvision, whichever is greater.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook, sneak attack hook.

### Replaces: woodland stride

- **Archetype feature:** Quick Swim (Ex)
- **Description:** At 7th level, a Darklands sailor can swim at his full speed as a move action without penalty.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a Darklands sailor can swim at his full speed as a move action without penalty.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: swift tracker

- **Archetype feature:** Subsonic Warning (Ex)
- **Description:** At 8th level as a swift action, a Darklands sailor can provide the benefits of his keen ear ability to the subjects of his hunter’s bond.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level as a swift action, a Darklands sailor can provide the benefits of his keen ear ability to the subjects of his hunter’s bond. This effect lasts for a number of rounds per day equal to the Darklands sailor’s Wisdom modifier. These rounds need not be consecutive. A deafened creature can’t benefit from a Darklands sailor’s subsonic warning.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: camouflage and hide in plain sight

- **Archetype feature:** Hidden Depths (Ex)
- **Description:** At 12th level, a Darklands sailor can use the Stealth skill to hide while underground or underwater, even if he doesn’t have cover or concealment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12, 17.
  - Mechanics summary: At 12th level, a Darklands sailor can use the Stealth skill to hide while underground or underwater, even if he doesn’t have cover or concealment. At 17th level, he can use the Stealth skill even while being observed when underground or underwater.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Skilled Pilot (Ex)
- Keen Ear (Ex)
- Quick Swim (Ex)
- Subsonic Warning (Ex)
- Hidden Depths (Ex)

