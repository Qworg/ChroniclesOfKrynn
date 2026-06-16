# Druid - Feral Child

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Feral Child
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Feral%20Child
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Illiteracy; Improved Unarmed Strike; Beast Family (Ex); Nature Bond (Ex); Favored Terrain (Ex); Native Cunning (Ex); Native Fortitude (Ex); Native Call (Su)
- **Replaced / altered class features:** trackless step and a thousand faces; wild shape; resist nature’s lure; venom immunity and timeless body

## Replacement details

### Replaces: trackless step

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a feral child gains the favored terrain ability as a ranger of her class level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a feral child gains the favored terrain ability as a ranger of her class level. A feral child may not choose urban as a favored terrain.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: a thousand faces

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a feral child gains the favored terrain ability as a ranger of her class level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a feral child gains the favored terrain ability as a ranger of her class level. A feral child may not choose urban as a favored terrain.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: wild shape

- **Archetype feature:** Native Cunning (Ex)
- **Description:** At 3rd level, a feral child gains trap sense as a barbarian of equal level, and in her favored terrain, she immediately receives a Perception check to notice traps within 10 feet, as the trap spotter rogue talent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a feral child gains trap sense as a barbarian of equal level, and in her favored terrain, she immediately receives a Perception check to notice traps within 10 feet, as the trap spotter rogue talent. In addition, at 3rd level and every three levels thereafter, she may choose one combat maneuver, and gains a bonus equal to her trap sense bonus to her CMD against that maneuver.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook, wild shape hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Native Fortitude (Ex)
- **Description:** At 4th level, a feral child gains a +1 bonus on saving throws against disease, exhaustion, fatigue, fear, and poison.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a feral child gains a +1 bonus on saving throws against disease, exhaustion, fatigue, fear, and poison. When she is in her favored terrain, she instead applies her favored terrain bonus on such saving throws. She also recovers from ability damage, exhaustion, and fatigue at twice the normal rate.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook.

### Replaces: venom immunity and timeless body

- **Archetype feature:** Native Call (Su)
- **Description:** At 9th level, when in her favored terrain, for any summon nature’s ally spells a feral child uses to summon animals that are native to that terrain, she treats the duration of the spell as if she were 2 levels higher.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9, 17.
  - Mechanics summary: At 9th level, when in her favored terrain, for any summon nature’s ally spells a feral child uses to summon animals that are native to that terrain, she treats the duration of the spell as if she were 2 levels higher. At 17th level, when the feral child uses summon nature’s ally spells to summon such animals, those animals gain a +2 bonus to both their Strength and Constitution ability scores. This stacks with the effects of the Augmented Summoning feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, favored terrain hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Illiteracy
- Improved Unarmed Strike
- Beast Family (Ex)
- Nature Bond (Ex)
- Favored Terrain (Ex)
- Native Cunning (Ex)
- Native Fortitude (Ex)
- Native Call (Su)

