# Warrior - Airborne Ambusher

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Airborne Ambusher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Airborne%20Ambusher
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Combat Flyer (Ex); Aerobatics (Ex); Flying Dodger (Ex); Plummeting Charge (Ex)
- **Replaced / altered class features:** weapon training 2

## Replacement details

### Replaces: bravery

- **Archetype feature:** Combat Flyer (Ex)
- **Description:** At 2nd level, an airborne ambusher may use his fighter bonus feats to select Flyby Attack and Hover.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an airborne ambusher may use his fighter bonus feats to select Flyby Attack and Hover.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Aerobatics (Ex)
- **Description:** At 5th level, an airborne ambusher may make a Fly check instead of an Acrobatics check to move through a threatened area or an enemy’s space.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an airborne ambusher may make a Fly check instead of an Acrobatics check to move through a threatened area or an enemy’s space.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon training 2

- **Archetype feature:** Flying Dodger (Ex)
- **Description:** At 9th level, when an airborne ambusher flies at least half its fly speed on its turn, it gains a +1 dodge bonus to AC for 1 round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9, 11, 17.
  - Mechanics summary: At 9th level, when an airborne ambusher flies at least half its fly speed on its turn, it gains a +1 dodge bonus to AC for 1 round. This bonus increases to +2 at 11th level and +4 at 17th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 3

- **Archetype feature:** Plummeting Charge (Ex)
- **Description:** At 13th level, if an airborne ambusher flies at least half its fly speed as part of a charge, it gains a +2 racial bonus on the attack roll (in addition to the normal charge bonus) and a +4 bonus on its critical confirmation roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 17.
  - Mechanics summary: At 13th level, if an airborne ambusher flies at least half its fly speed as part of a charge, it gains a +2 racial bonus on the attack roll (in addition to the normal charge bonus) and a +4 bonus on its critical confirmation roll. These bonuses improve to +4 and +6 at 17th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Plummeting Charge (Ex)
- **Description:** At 13th level, if an airborne ambusher flies at least half its fly speed as part of a charge, it gains a +2 racial bonus on the attack roll (in addition to the normal charge bonus) and a +4 bonus on its critical confirmation roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 17.
  - Mechanics summary: At 13th level, if an airborne ambusher flies at least half its fly speed as part of a charge, it gains a +2 racial bonus on the attack roll (in addition to the normal charge bonus) and a +4 bonus on its critical confirmation roll. These bonuses improve to +4 and +6 at 17th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Combat Flyer (Ex)
- Aerobatics (Ex)
- Flying Dodger (Ex)
- Plummeting Charge (Ex)

