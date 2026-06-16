# Berserker - Sea Reaver

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Sea Reaver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Sea%20Reaver
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Marine Terror (Ex); Eyes of the Storm (Ex); Savage Sailor (Ex); Sure-Footed (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Marine Terror (Ex)
- **Description:** A sea reaver can hold her breath for a number of rounds equal to four times her Constitution score.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sea reaver can hold her breath for a number of rounds equal to four times her Constitution score. In addition, a sea reaver can move normally though squares of standing water or bog that is 1 foot deep. It does not cost her extra movement to traverse these terrains. Lastly, a sea reaver ignores the normal cover bonus to AC when attacking creatures that are partially immersed in water.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: uncanny dodge

- **Archetype feature:** Eyes of the Storm (Ex)
- **Description:** At 2nd level, a sea reaver ignores any concealment provided by fog, rain, sleet, mist, wind, or other weather effects that is less than total concealment, and any penalties weather applies on Perception checks are halved.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a sea reaver ignores any concealment provided by fog, rain, sleet, mist, wind, or other weather effects that is less than total concealment, and any penalties weather applies on Perception checks are halved.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Savage Sailor (Ex)
- **Description:** At 3rd level, a sea reaver gains a +1 bonus on Acrobatics, Climb, Profession (sailor), Survival, and Swim checks made in aquatic terrain, including aboard a ship or along shorelines.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a sea reaver gains a +1 bonus on Acrobatics, Climb, Profession (sailor), Survival, and Swim checks made in aquatic terrain, including aboard a ship or along shorelines. These bonuses improve by +1 every three levels after 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Sure-Footed (Ex)
- **Description:** At 5th level, a sea reaver takes no penalties when moving across slick surfaces, whether natural or magical (e.g., grease , ice storm , and sleet storm ).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a sea reaver takes no penalties when moving across slick surfaces, whether natural or magical (e.g., grease , ice storm , and sleet storm ). She is not at risk of falling, is not denied her Dexterity bonus when moving across such areas, and does not treat them as difficult terrain.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Marine Terror (Ex)
- Eyes of the Storm (Ex)
- Savage Sailor (Ex)
- Sure-Footed (Ex)
- Rage Powers

