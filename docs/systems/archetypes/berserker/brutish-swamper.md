# Berserker - Brutish Swamper

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Brutish Swamper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Brutish%20Swamper
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Swamp Skills; Marsh March (Ex); Home (Ex); Stubborn (Ex); Wrastlin’ (Ex); Rage Powers
- **Replaced / altered class features:** Skills; Fast Movement; Uncanny Dodge; Improved Uncanny Dodge; Trap Sense; 6th-level Rage Power

## Replacement details

### Alters: the barbarian’s skills

- **Archetype feature:** Swamp Skills
- **Description:** A brutish swamper adds Knowledge (geography) and Knowledge (local) to her list of class skills.
- **Mechanics:**
  - Mechanics summary: A brutish swamper adds Knowledge (geography) and Knowledge (local) to her list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: fast movement

- **Archetype feature:** Marsh March (Ex)
- **Description:** A brutish swamper can move through the underbrush and muddy terrain of bogs and swamps at her normal speed without taking damage or suffering other impairments.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A brutish swamper can move through the underbrush and muddy terrain of bogs and swamps at her normal speed without taking damage or suffering other impairments. Briars, mud, thorns, and overgrown areas that have been magically manipulated to impede motion, however, still affect her.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Home (Ex)
- **Description:** At 2nd level, a brutish swamper gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in swamps.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5, 20.
  - Mechanics summary: At 2nd level, a brutish swamper gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in swamps. This bonus increases by +1 at 5th level and again every 3 levels after 5th (up to a maximum bonus of +8 at 20th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trap sense

- **Archetype feature:** Stubborn (Ex)
- **Description:** At 3rd level, a brutish swamper resists any attempts to change her attitude or compel her to action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a brutish swamper resists any attempts to change her attitude or compel her to action. Diplomacy and Intimidate checks against her take a –2 penalty, and no result can shift her attitude more than one step in a 24-hour period. These penalties increase by 2 for every 3 levels the brutish swamper has beyond 3rd.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: the rage power normally gained at 6th level

- **Archetype feature:** Wrastlin’ (Ex)
- **Description:** At 6th level, while raging, a brutish swamper gains a +2 bonus to her CMD against grapple combat maneuvers and a +2 bonus on damage rolls made as part of successful grapple combat maneuver checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, while raging, a brutish swamper gains a +2 bonus to her CMD against grapple combat maneuvers and a +2 bonus on damage rolls made as part of successful grapple combat maneuver checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 6th-level Rage Power

## Parsed source feature headings

- Swamp Skills
- Marsh March (Ex)
- Home (Ex)
- Stubborn (Ex)
- Wrastlin’ (Ex)
- Rage Powers

