# Rogue - Eldritch Scoundrel

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Eldritch Scoundrel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Eldritch%20Scoundrel
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Armor Proficiencies; Class Skills; Spells; Alarm Sense (Su); Sneak Attack (Ex); Rogue Talents; Uncanny Training
- **Replaced / altered class features:** trap sense

## Implementation details

### Alters: the rogue’s armor proficiencies

- **Archetype feature:** Armor Proficiencies
- **Description:** An eldritch scoundrel is not proficient with any armor or shields.
- **Detailed mechanics:**
  - **Rules text to implement:** An eldritch scoundrel is not proficient with any armor or shields. Armor sometimes interferes with an eldritch scoundrel’s gestures, which can cause her spells with somatic components to fail ( Pathfinder RPG Core Rulebook 83).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the rogue’s skills

- **Archetype feature:** Class Skills
- **Description:** An eldritch scoundrel gains 4 skill ranks (plus a number of ranks equal to her Intelligence modifier) at each level instead of a normal 8.
- **Detailed mechanics:**
  - **Rules text to implement:** An eldritch scoundrel gains 4 skill ranks (plus a number of ranks equal to her Intelligence modifier) at each level instead of a normal 8. She gains Knowledge (arcana) and Spellcraft as class skills, but not Diplomacy and Disguise.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spells
- **Description:** An eldritch scoundrel casts arcane spells drawn from the wizard spell list.
- **Detailed mechanics:**
  - **Rules text to implement:** An eldritch scoundrel casts arcane spells drawn from the wizard spell list. An eldritch scoundrel must choose and prepare her spells ahead of time. She learns, prepares, and casts spells exactly as a wizard does, including adding new spells to her spellbook and gaining two additional spells known (of any level she can cast) each time she gains a rogue level with this archetype. An eldritch scoundrel can cast only a certain number of spells of each spell level per day. Her base daily spell allotment is the same as the magus class ( Pathfinder RPG Ultimate Magic 10).
- **Implementation flags:**
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Alarm Sense (Su)
- **Description:** At 3rd level, an eldritch scoundrel gains an intuitive sense that warns her when she is near a magic trap.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an eldritch scoundrel gains an intuitive sense that warns her when she is near a magic trap. This functions as the trap spotter rogue talent, but applies only if the eldritch scoundrel comes within 10 feet of a magic trap.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the rogue’s normal sneak attack progression

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** The eldritch scoundrel doesn’t acquire the sneak attack class feature until 3rd level, when she gains a +1d6 sneak attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 7.
  - **Rules text to implement:** The eldritch scoundrel doesn’t acquire the sneak attack class feature until 3rd level, when she gains a +1d6 sneak attack. This increases by 1d6 at 7th level, and again at every 4 rogue levels thereafter.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the normal rogue talent progression and advanced talent

- **Archetype feature:** Rogue Talents
- **Description:** At 4th level and every 4 levels thereafter, the eldritch scoundrel gains a rogue or ninja talent for which she meets the prerequisites (treating her rogue level as her ninja level).
- **Detailed mechanics:**
  - **Level hooks:** 4, 1, 12.
  - **Rules text to implement:** At 4th level and every 4 levels thereafter, the eldritch scoundrel gains a rogue or ninja talent for which she meets the prerequisites (treating her rogue level as her ninja level). If a talent requires her to expend points from her ki pool, she can instead expend a spell slot with a spell level equal to the number of ki points she would normally expend. If a talent functions only if she has ki in her ki pool, it functions as long as she still has a spell of 1st level or higher prepared. At 12th level, she can select an advanced talent in place of a rogue talent.
- **Implementation flags:**
  - ki subsystem.

### Alters: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Uncanny Training
- **Description:** An eldritch scoundrel does not gain uncanny dodge or improved uncanny dodge.
- **Detailed mechanics:**
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** An eldritch scoundrel does not gain uncanny dodge or improved uncanny dodge. Beginning at 4th level, she can take uncanny dodge instead of a rogue talent. Beginning at 12th level, the eldritch scoundrel can choose to take improved uncanny dodge in place of an advanced talent.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Armor Proficiencies
- Class Skills
- Spells
- Alarm Sense (Su)
- Sneak Attack (Ex)
- Rogue Talents
- Uncanny Training
