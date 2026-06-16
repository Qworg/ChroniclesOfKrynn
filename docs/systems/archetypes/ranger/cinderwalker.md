# Ranger - Cinderwalker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Cinderwalker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Cinderwalker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Born to the Fire (Ex); Inured (Ex); Cinderwalk (Ex)
- **Replaced / altered class features:** the cinderwalker’s first favored terrain and wild empathy; hunter’s bond; woodland stride

## Replacement details

### Replaces: the cinderwalker’s first favored terrain and wild empathy

- **Archetype feature:** Born to the Fire (Ex)
- **Description:** At 3rd level, a cinderwalker gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in volcanic or geothermally active areas.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a cinderwalker gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks when in volcanic or geothermally active areas. Such areas include calderas, hot springs, lava plains, and volcanically formed hills or mountains. In addition, the cinderwalker adds this bonus on any ability checks, saving throws, or skill checks to avoid geothermal or volcanic hazards. The cinderwalker can choose to improve this bonus in place of improving a favored terrain bonus. A cinderwalker traveling through volcanic or geothermally active areas leaves no trail and cannot be tracked (though he can leave a trail if he chooses).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, favored terrain hook, ki/monk hook.

### Replaces: hunter’s bond

- **Archetype feature:** Inured (Ex)
- **Description:** At 4th level, a cinderwalker gains the benefits of endure elements against hot environments.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8, 12, 16, 20.
  - Mechanics summary: At 4th level, a cinderwalker gains the benefits of endure elements against hot environments. At 8th level, the cinderwalker gains fire resistance 10, which improves to fire resistance 20 at 12th level, fire resistance 30 at 16th level, and immunity to fire at 20th level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: woodland stride

- **Archetype feature:** Cinderwalk (Ex)
- **Description:** At 7th level, a cinderwalker can move through any sort of solid volcanic terrain (such as ash, cooled lava, or volcanic rock) at his normal speed and without taking damage or suffering any other impairment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a cinderwalker can move through any sort of solid volcanic terrain (such as ash, cooled lava, or volcanic rock) at his normal speed and without taking damage or suffering any other impairment. The cinderwalker ignores fire damage from being near heat sources and touching heated surfaces (but not from immersion).
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Born to the Fire (Ex)
- Inured (Ex)
- Cinderwalk (Ex)

