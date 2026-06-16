# Druid - Nature Priest

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Nature Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Nature%20Priest
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Faithful; Class Skills; Weapon Proficiencies; Studious Piety (Ex); Chosen Druid (Ex); Shepherd of the Faithful (Su); Divine Servants (Su)
- **Replaced / altered class features:** nature sense; resist nature’s lure; the venom immunity ability

## Replacement details

### Alters: the druid’s class skills

- **Archetype feature:** Class Skills
- **Description:** A nature priest adds Knowledge (religion) to her list of class skills instead of Knowledge (geography).
- **Mechanics:**
  - Mechanics summary: A nature priest adds Knowledge (religion) to her list of class skills instead of Knowledge (geography).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: the druid’s weapon proficiencies

- **Archetype feature:** Weapon Proficiencies
- **Description:** A nature priest is proficient with her deity’s favored weapon in addition to a druid’s typical weapon proficiencies.
- **Mechanics:**
  - Mechanics summary: A nature priest is proficient with her deity’s favored weapon in addition to a druid’s typical weapon proficiencies.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: nature sense

- **Archetype feature:** Studious Piety (Ex)
- **Description:** A nature priest gains a +1 bonus on Knowledge (religion) checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A nature priest gains a +1 bonus on Knowledge (religion) checks. This bonus increases to +2 when attempting checks that involve knowledge of her deity or her faith.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Alters: nature bond

- **Archetype feature:** Chosen Druid (Ex)
- **Description:** If a nature priest chooses a domain for her nature bond, she must choose one of her deity’s domains (or subdomains) in place of those typically available to a druid.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: If a nature priest chooses a domain for her nature bond, she must choose one of her deity’s domains (or subdomains) in place of those typically available to a druid.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Shepherd of the Faithful (Su)
- **Description:** At 4th level, a nature priest and all allies within 60 feet that can see or hear her gain a +2 insight bonus on skill checks to notice or avoid natural hazards, difficult terrain, and rough winds or water, as well as on saving throws against natural hazards.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a nature priest and all allies within 60 feet that can see or hear her gain a +2 insight bonus on skill checks to notice or avoid natural hazards, difficult terrain, and rough winds or water, as well as on saving throws against natural hazards. This ability offers no protection against the abilities of creatures or the effects of spells or items.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: the venom immunity ability

- **Archetype feature:** Divine Servants (Su)
- **Description:** At 9th level, a nature priest adds the spells lesser planar ally, planar ally, and greater planar ally to her druid spell list at their cleric spell levels.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a nature priest adds the spells lesser planar ally, planar ally, and greater planar ally to her druid spell list at their cleric spell levels. When she casts these spells, the planar allies summoned require half the payment described in those spells.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Faithful
- Class Skills
- Weapon Proficiencies
- Studious Piety (Ex)
- Chosen Druid (Ex)
- Shepherd of the Faithful (Su)
- Divine Servants (Su)

