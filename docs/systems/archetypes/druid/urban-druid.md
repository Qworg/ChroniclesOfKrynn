# Druid - Urban Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Urban Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Urban%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Spontaneous Casting; Nature Bond (Ex); Lorekeeper (Ex); Resist Temptation (Ex); A Thousand Faces (Su); Wild Shape (Su); Mental Strength (Ex)
- **Replaced / altered class features:** the ability to spontaneously cast summon nature’s ally spells; a druid’s woodland stride and trackless step abilities; venom immunity

## Implementation details

### Replaces: the ability to spontaneously cast summon nature’s ally spells

- **Archetype feature:** Spontaneous Casting
- **Description:** An urban druid can channel stored spell energy into domain spells that she has not prepared ahead of time.
- **Detailed mechanics:**
  - **Rules text to implement:** An urban druid can channel stored spell energy into domain spells that she has not prepared ahead of time. She can “lose” a prepared spell in order to cast any domain spell of the same level or lower.
- **Implementation flags:**
  - domain system.
  - summoning subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond (Ex)
- **Description:** An urban druid may not select an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An urban druid may not select an animal companion. Instead, she must choose from the following domains, rather than those usually available to druids: Charm, Community, Knowledge, Nobility, Protection, Repose, Rune, or Weather.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: a druid’s woodland stride and trackless step abilities

- **Archetype feature:** Lorekeeper (Ex)
- **Description:** At 2nd level, an urban druid adds Diplomacy, Knowledge (history), Knowledge (local), and Knowledge (nobility) skills to her list of class skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an urban druid adds Diplomacy, Knowledge (history), Knowledge (local), and Knowledge (nobility) skills to her list of class skills. She also receives a +2 bonus on these skill checks.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the resist nature’s lure ability

- **Archetype feature:** Resist Temptation (Ex)
- **Description:** At 4th level, an urban druid gains a +2 bonus on saves vs.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an urban druid gains a +2 bonus on saves vs. divinations and enchantments.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** A Thousand Faces (Su)
- **Description:** An urban druid gains this ability at 6th level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** An urban druid gains this ability at 6th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** An urban druid gains this ability at 8th level, except that her effective druid level for the ability is equal to her druid level – 4.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** An urban druid gains this ability at 8th level, except that her effective druid level for the ability is equal to her druid level – 4.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity

- **Archetype feature:** Mental Strength (Ex)
- **Description:** At 9th level, an urban druid gains immunity to charm and compulsion effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, an urban druid gains immunity to charm and compulsion effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Spontaneous Casting
- Nature Bond (Ex)
- Lorekeeper (Ex)
- Resist Temptation (Ex)
- A Thousand Faces (Su)
- Wild Shape (Su)
- Mental Strength (Ex)
