# Berserker - Raging Cannibal

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Raging Cannibal
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Raging%20Cannibal
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Animal Fury; Consume Vigor (Ex); Intimidating Gouge (Ex); Feed from Fury (Ex); Razor-Toothed Fury (Ex); Rage Powers
- **Replaced / altered class features:** 2nd-level Rage Power; Uncanny Dodge; Trap Sense; Improved Uncanny Dodge; Damage Reduction

## Implementation details

### Alters: the barbarian’s 2nd-level rage power

- **Archetype feature:** Animal Fury
- **Description:** At 2nd level, a raging cannibal must select animal fury as her first rage power.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a raging cannibal must select animal fury as her first rage power.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Consume Vigor (Ex)
- **Description:** At 2nd level, when a raging cannibal reduces a creature of the same creature type as herself to 0 or fewer hit points with her bite attack during combat while raging, she can consume a chunk of its body to gain a portion of its power.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 5.
  - **Rules text to implement:** At 2nd level, when a raging cannibal reduces a creature of the same creature type as herself to 0 or fewer hit points with her bite attack during combat while raging, she can consume a chunk of its body to gain a portion of its power. If the creature’s CR equals or exceeds her barbarian level, the raging cannibal gains 1 additional round of rage. She can never consume the same creature’s vigor more than once. At 5th level and every 3 levels thereafter, the raging cannibal gains 1 additional round of rage each time she uses this ability.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: trap sense

- **Archetype feature:** Intimidating Gouge (Ex)
- **Description:** At 3rd level, when a raging cannibal confirms a critical hit against a creature of the same creature type as herself with her bite attack while raging, she gains a bonus on Intimidate checks equal to half her barbarian level for the duration of the rage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a raging cannibal confirms a critical hit against a creature of the same creature type as herself with her bite attack while raging, she gains a bonus on Intimidate checks equal to half her barbarian level for the duration of the rage.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Feed from Fury (Ex)
- **Description:** At 5th level, a raging cannibal is empowered by eating her enemies during combat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a raging cannibal is empowered by eating her enemies during combat. When a raging cannibal confirms a critical hit against a creature of the same creature type as herself with her bite attack while raging, she gains a number of temporary hit points equal to her barbarian level. These temporary hit points stack with other temporary hit points gained from this ability but not with those from other sources. These temporary hit points fade after a period of time equal to 10 minutes per barbarian level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: damage reduction

- **Archetype feature:** Razor-Toothed Fury (Ex)
- **Description:** At 6th level, a raging cannibal’s bite becomes even more fearsome.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6, 10.
  - **Rules text to implement:** At 6th level, a raging cannibal’s bite becomes even more fearsome. When using her bite attack, the raging cannibal can take a –1 penalty on her attack roll to add 2 points of bleed damage to the damage dealt. At 10th level and every 4 levels thereafter, the attack penalty increases by 1 and the bleed damage increases by 2 points.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the raging cannibal archetype: internal fortitude, intimidating glare, primal scent, scent, and terrifying howl.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the raging cannibal archetype: internal fortitude, intimidating glare, primal scent, scent, and terrifying howl.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Animal Fury
- Consume Vigor (Ex)
- Intimidating Gouge (Ex)
- Feed from Fury (Ex)
- Razor-Toothed Fury (Ex)
- Rage Powers
