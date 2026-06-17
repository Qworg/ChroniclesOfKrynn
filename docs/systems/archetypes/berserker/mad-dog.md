# Berserker - Mad Dog

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Mad Dog
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Mad%20Dog
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** War Beast (Ex); Pack Tactics (Ex); Rage (Ex); Ferocious Fetch (Ex); Damage Reduction (Ex); Throat Cutter (Ex); Rage Powers
- **Replaced / altered class features:** the rage powers gained at 2nd, 6th, 10th, 14th, and 18th level; uncanny dodge; improved uncanny dodge; indomitable will

## Implementation details

### Replaces: the rage powers gained at 2nd, 6th, 10th, 14th, and 18th level

- **Archetype feature:** War Beast (Ex)
- **Description:** At 1st level, a mad dog gains the service of an animal companion, using the barbarian’s level as her effective druid level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 18.
  - **Rules text to implement:** At 1st level, a mad dog gains the service of an animal companion, using the barbarian’s level as her effective druid level.
- **Implementation flags:**
  - animal companion progression.
  - rage/rage power subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Pack Tactics (Ex)
- **Description:** At 2nd level, a mad dog and her war beast gain a +4 bonus on attack rolls while flanking the same opponent (instead of the normal +2 bonus).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a mad dog and her war beast gain a +4 bonus on attack rolls while flanking the same opponent (instead of the normal +2 bonus).
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage (Ex)
- **Description:** A mad dog gains this ability at 4th level, except that her effective barbarian level for the ability is equal to her barbarian level – 3.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** A mad dog gains this ability at 4th level, except that her effective barbarian level for the ability is equal to her barbarian level – 3.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: improved uncanny dodge

- **Archetype feature:** Ferocious Fetch (Ex)
- **Description:** At 5th level, a mad dog’s war beast gains Improved Drag as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a mad dog’s war beast gains Improved Drag as a bonus feat. As a swift action, a mad dog can command her war beast to move toward an opponent within 30 feet and attempt a drag combat maneuver to pull the target back toward the mad dog. The war beast can move before and after performing the maneuver, but this movement counts toward the war beast’s total movement during its turn.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Damage Reduction (Ex)
- **Description:** At 10th level, a mad dog gains damage reduction.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10, 13, 19.
  - **Rules text to implement:** At 10th level, a mad dog gains damage reduction. At 13th level and every 3 barbarian levels thereafter, this damage reduction rises by 1, to a maximum of DR 4/— at 19th level. A mad dog’s war beast gains the same damage reduction as the mad dog.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: indomitable will

- **Archetype feature:** Throat Cutter (Ex)
- **Description:** At 14th level, whenever her war beast succeeds at a bull rush, drag, grapple, overrun, or trip combat maneuver against an opponent threatened by the mad dog, a mad dog can take an attack of opportunity against that opponent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, whenever her war beast succeeds at a bull rush, drag, grapple, overrun, or trip combat maneuver against an opponent threatened by the mad dog, a mad dog can take an attack of opportunity against that opponent.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the mad dog archetype: animal fury, beast totem, bestial leaper, primal scent, raging leaper, reckless abandon, scent, sprint, swift foot, and terrifying howl.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** The following rage powers complement the mad dog archetype: animal fury, beast totem, bestial leaper, primal scent, raging leaper, reckless abandon, scent, sprint, swift foot, and terrifying howl. The following new rage powers also complement this archetype: Ferocious Beast (Ex) : While the barbarian is raging, her animal companion also gains the benefits of rage (including greater rage, mighty rage, and tireless rage), though the barbarian must spend 1 additional round of rage per round if her companion begins or ends its turn adjacent to her, and 2 additional rounds of rage per round if not. Ferocious Beast, Greater (Ex) : While the barbarian is raging, her animal companion shares the benefits of the barbarian’s rage powers that are constant in effect. It gains no benefit from rage powers that require actions to activate, even if they are free actions. A barbarian must have the ferocious beast rage power and be at least 8th level to select this rage power.
- **Implementation flags:**
  - animal companion progression.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- War Beast (Ex)
- Pack Tactics (Ex)
- Rage (Ex)
- Ferocious Fetch (Ex)
- Damage Reduction (Ex)
- Throat Cutter (Ex)
- Rage Powers
