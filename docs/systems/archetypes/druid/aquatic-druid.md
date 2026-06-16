# Druid - Aquatic Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Aquatic Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Aquatic%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Wild Empathy (Ex); Aquatic Adaptation (Ex); Natural Swimmer (Ex); Resist Ocean’s Fury (Ex); Wild Shape (Su); Seaborn (Ex); Deep Diver (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Aquatic Adaptation (Ex)
- **Description:** At 2nd level, an aquatic druid gains an insight bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Survival, and Swim checks equal to 1/2 her druid level in aquatic terrain, and she cannot be tracked such environments.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an aquatic druid gains an insight bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Survival, and Swim checks equal to 1/2 her druid level in aquatic terrain, and she cannot be tracked such environments.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Natural Swimmer (Ex)
- **Description:** At 3rd level, an aquatic druid gains a swim speed equal to half her land speed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an aquatic druid gains a swim speed equal to half her land speed.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Ocean’s Fury (Ex)
- **Description:** At 4th level, an aquatic druid gains a +4 bonus on saving throws against spells of the water type or the exceptional or supernatural abilities of creatures with the aquatic or water subtype.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an aquatic druid gains a +4 bonus on saving throws against spells of the water type or the exceptional or supernatural abilities of creatures with the aquatic or water subtype.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: venom immunity

- **Archetype feature:** Seaborn (Ex)
- **Description:** At 9th level, an aquatic druid gains the aquatic subtype, the amphibious trait, and a swim speed equal to her land speed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, an aquatic druid gains the aquatic subtype, the amphibious trait, and a swim speed equal to her land speed. She also can endure cold climate effects as if using endure elements .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: a thousand faces

- **Archetype feature:** Deep Diver (Ex)
- **Description:** At 13th level, an aquatic druid gains DR/slashing or piercing equal to 1/2 her level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, an aquatic druid gains DR/slashing or piercing equal to 1/2 her level. This damage reduction also applies against spells and spell-like abilities that inflict damage by grappling or crushing (e.g., black tentacles , crushing hand ). She never takes pressure damage from deep water.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Wild Empathy (Ex)
- Aquatic Adaptation (Ex)
- Natural Swimmer (Ex)
- Resist Ocean’s Fury (Ex)
- Wild Shape (Su)
- Seaborn (Ex)
- Deep Diver (Ex)

