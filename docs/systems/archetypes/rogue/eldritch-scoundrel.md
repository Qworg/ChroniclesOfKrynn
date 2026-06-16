# Rogue - Eldritch Scoundrel

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Eldritch Scoundrel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Eldritch%20Scoundrel
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Armor Proficiencies; Class Skills; Spells; Alarm Sense (Su); Sneak Attack (Ex); Rogue Talents; Uncanny Training
- **Replaced / altered class features:** trap sense

## Replacement details

### Alters: the rogue’s armor proficiencies

- **Archetype feature:** Armor Proficiencies
- **Description:** An eldritch scoundrel is not proficient with any armor or shields.
- **Mechanics:**
  - Mechanics summary: An eldritch scoundrel is not proficient with any armor or shields. Armor sometimes interferes with an eldritch scoundrel’s gestures, which can cause her spells with somatic components to fail ( Pathfinder RPG Core Rulebook 83).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: the rogue’s skills

- **Archetype feature:** Class Skills
- **Description:** An eldritch scoundrel gains 4 skill ranks (plus a number of ranks equal to her Intelligence modifier) at each level instead of a normal 8.
- **Mechanics:**
  - Mechanics summary: An eldritch scoundrel gains 4 skill ranks (plus a number of ranks equal to her Intelligence modifier) at each level instead of a normal 8. She gains Knowledge (arcana) and Spellcraft as class skills, but not Diplomacy and Disguise.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Alarm Sense (Su)
- **Description:** At 3rd level, an eldritch scoundrel gains an intuitive sense that warns her when she is near a magic trap.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an eldritch scoundrel gains an intuitive sense that warns her when she is near a magic trap. This functions as the trap spotter rogue talent, but applies only if the eldritch scoundrel comes within 10 feet of a magic trap.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the rogue’s normal sneak attack progression

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** The eldritch scoundrel doesn’t acquire the sneak attack class feature until 3rd level, when she gains a +1d6 sneak attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 7.
  - Mechanics summary: The eldritch scoundrel doesn’t acquire the sneak attack class feature until 3rd level, when she gains a +1d6 sneak attack. This increases by 1d6 at 7th level, and again at every 4 rogue levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sneak attack hook.

### Alters: the normal rogue talent progression

- **Archetype feature:** Rogue Talents
- **Description:** At 4th level and every 4 levels thereafter, the eldritch scoundrel gains a rogue or ninja talent for which she meets the prerequisites (treating her rogue level as her ninja level).
- **Mechanics:**
  - Level hooks: 4, 1, 12.
  - Mechanics summary: At 4th level and every 4 levels thereafter, the eldritch scoundrel gains a rogue or ninja talent for which she meets the prerequisites (treating her rogue level as her ninja level). If a talent requires her to expend points from her ki pool, she can instead expend a spell slot with a spell level equal to the number of ki points she would normally expend. If a talent functions only if she has ki in her ki pool, it functions as long as she still has a spell of 1st level or higher prepared. At 12th level, she can select an advanced talent in place of a rogue talent.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Alters: advanced talent

- **Archetype feature:** Rogue Talents
- **Description:** At 4th level and every 4 levels thereafter, the eldritch scoundrel gains a rogue or ninja talent for which she meets the prerequisites (treating her rogue level as her ninja level).
- **Mechanics:**
  - Level hooks: 4, 1, 12.
  - Mechanics summary: At 4th level and every 4 levels thereafter, the eldritch scoundrel gains a rogue or ninja talent for which she meets the prerequisites (treating her rogue level as her ninja level). If a talent requires her to expend points from her ki pool, she can instead expend a spell slot with a spell level equal to the number of ki points she would normally expend. If a talent functions only if she has ki in her ki pool, it functions as long as she still has a spell of 1st level or higher prepared. At 12th level, she can select an advanced talent in place of a rogue talent.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Alters: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Uncanny Training
- **Description:** An eldritch scoundrel does not gain uncanny dodge or improved uncanny dodge.
- **Mechanics:**
  - Level hooks: 4, 12.
  - Mechanics summary: An eldritch scoundrel does not gain uncanny dodge or improved uncanny dodge. Beginning at 4th level, she can take uncanny dodge instead of a rogue talent. Beginning at 12th level, the eldritch scoundrel can choose to take improved uncanny dodge in place of an advanced talent.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Armor Proficiencies
- Class Skills
- Spells
- Alarm Sense (Su)
- Sneak Attack (Ex)
- Rogue Talents
- Uncanny Training

