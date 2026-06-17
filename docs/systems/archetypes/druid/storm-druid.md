# Druid - Storm Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Storm Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Storm%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Spontaneous Domain Casting; Nature Bond (Ex); Windwalker (Ex); Stormvoice (Ex); Eyes of the Storm (Ex); Windlord; Storm Lord (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Implementation details

### Replaces: spontaneous casting

- **Archetype feature:** Spontaneous Domain Casting
- **Description:** A storm druid can channel stored spell energy into domain spells that she has not prepared ahead of time.
- **Detailed mechanics:**
  - **Rules text to implement:** A storm druid can channel stored spell energy into domain spells that she has not prepared ahead of time. She can “lose” a prepared spell in order to cast any domain spell of the same level or lower.
- **Implementation flags:**
  - domain system.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond (Ex)
- **Description:** A storm druid may not choose an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A storm druid may not choose an animal companion. A storm druid must choose the Air or Weather domain, or the Cloud, Storm, or Wind subdomain.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Windwalker (Ex)
- **Description:** At 2nd level, the penalties from natural or magical wind effects are treated as one step less severe for a storm druid.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the penalties from natural or magical wind effects are treated as one step less severe for a storm druid.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Stormvoice (Ex)
- **Description:** At 3rd level, a storm druid’s voice can magically carry over howling winds and peals of thunder.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a storm druid’s voice can magically carry over howling winds and peals of thunder. Whenever a Perception check is needed to hear the druid’s voice, the DC is reduced by an amount equal to the druid’s level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Eyes of the Storm (Ex)
- **Description:** At 4th level, a storm druid can see through 10 feet of magical fog, mist, gas, wind, rain, or similar inclement weather conditions, ignoring any concealment it might grant.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a storm druid can see through 10 feet of magical fog, mist, gas, wind, rain, or similar inclement weather conditions, ignoring any concealment it might grant. This distance increases by 5 feet for every 4 levels beyond 4th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: venom immunity

- **Archetype feature:** Windlord
- **Description:** At 9th level, a storm druid can select another domain or subdomain from those available to her through her nature bond.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a storm druid can select another domain or subdomain from those available to her through her nature bond.
- **Implementation flags:**
  - domain system.

### Replaces: a thousand faces

- **Archetype feature:** Storm Lord (Ex)
- **Description:** At 13th level, a storm druid is unaffected by natural and magical wind effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a storm druid is unaffected by natural and magical wind effects. She also becomes immune to deafness and gains +2 bonus on saving throws against sonic effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Spontaneous Domain Casting
- Nature Bond (Ex)
- Windwalker (Ex)
- Stormvoice (Ex)
- Eyes of the Storm (Ex)
- Windlord
- Storm Lord (Ex)
