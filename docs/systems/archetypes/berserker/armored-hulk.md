# Berserker - Armored Hulk

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Armored Hulk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Armored%20Hulk
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Indomitable Stance (Ex); Armored Swiftness (Ex); Resilience of Steel (Ex); Improved Armored Swiftness (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Indomitable Stance (Ex)
- **Description:** An armored hulk gains a +1 bonus on combat maneuver checks and to CMD for overrun combat maneuvers, and on Reflex saves against trample attacks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An armored hulk gains a +1 bonus on combat maneuver checks and to CMD for overrun combat maneuvers, and on Reflex saves against trample attacks. She also gains a +1 bonus to her AC against charge attacks and on attack and damage rolls against charging creatures.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: uncanny dodge

- **Archetype feature:** Armored Swiftness (Ex)
- **Description:** At 2nd level, an armored hulk moves faster in medium and heavy armor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an armored hulk moves faster in medium and heavy armor. When wearing medium or heavy armor, an armored hulk can move 5 feet faster than normal, to a maximum of her speed.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Resilience of Steel (Ex)
- **Description:** At 3rd level, an armored hulk is able to use her armor to help avoid deadly hits.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, an armored hulk is able to use her armor to help avoid deadly hits. While wearing heavy armor, she gains a +1 bonus to AC that applies only on critical hit confirmation rolls. This bonus increases by +1 every 3 levels beyond 3rd (maximum +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Improved Armored Swiftness (Ex)
- **Description:** At 5th level, an armored hulk’s land speed is faster than the norm for her race by +10 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, an armored hulk’s land speed is faster than the norm for her race by +10 feet. This benefit applies when she is wearing any armor, including heavy armor, but not while carrying a heavy load. Apply this bonus before modifying the armored hulk’s speed because of any load carried or armor worn. This bonus stacks with any other bonuses to the barbarian’s land speed.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Indomitable Stance (Ex)
- Armored Swiftness (Ex)
- Resilience of Steel (Ex)
- Improved Armored Swiftness (Ex)
- Rage Powers

