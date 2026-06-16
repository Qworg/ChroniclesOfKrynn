# Berserker - Raging Cannibal

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Raging Cannibal
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Raging%20Cannibal
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Animal Fury; Consume Vigor (Ex); Intimidating Gouge (Ex); Feed from Fury (Ex); Razor-Toothed Fury (Ex); Rage Powers
- **Replaced / altered class features:** 2nd-level Rage Power; Uncanny Dodge; Trap Sense; Improved Uncanny Dodge; Damage Reduction

## Replacement details

### Alters: the barbarian’s 2nd-level rage power

- **Archetype feature:** Animal Fury
- **Description:** At 2nd level, a raging cannibal must select animal fury as her first rage power.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a raging cannibal must select animal fury as her first rage power.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: uncanny dodge

- **Archetype feature:** Consume Vigor (Ex)
- **Description:** At 2nd level, when a raging cannibal reduces a creature of the same creature type as herself to 0 or fewer hit points with her bite attack during combat while raging, she can consume a chunk of its body to gain a portion of its power.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, when a raging cannibal reduces a creature of the same creature type as herself to 0 or fewer hit points with her bite attack during combat while raging, she can consume a chunk of its body to gain a portion of its power. If the creature’s CR equals or exceeds her barbarian level, the raging cannibal gains 1 additional round of rage. She can never consume the same creature’s vigor more than once. At 5th level and every 3 levels thereafter, the raging cannibal gains 1 additional round of rage each time she uses this ability.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: trap sense

- **Archetype feature:** Intimidating Gouge (Ex)
- **Description:** At 3rd level, when a raging cannibal confirms a critical hit against a creature of the same creature type as herself with her bite attack while raging, she gains a bonus on Intimidate checks equal to half her barbarian level for the duration of the rage.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when a raging cannibal confirms a critical hit against a creature of the same creature type as herself with her bite attack while raging, she gains a bonus on Intimidate checks equal to half her barbarian level for the duration of the rage.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Feed from Fury (Ex)
- **Description:** At 5th level, a raging cannibal is empowered by eating her enemies during combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a raging cannibal is empowered by eating her enemies during combat. When a raging cannibal confirms a critical hit against a creature of the same creature type as herself with her bite attack while raging, she gains a number of temporary hit points equal to her barbarian level. These temporary hit points stack with other temporary hit points gained from this ability but not with those from other sources. These temporary hit points fade after a period of time equal to 10 minutes per barbarian level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: damage reduction

- **Archetype feature:** Razor-Toothed Fury (Ex)
- **Description:** At 6th level, a raging cannibal’s bite becomes even more fearsome.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 10.
  - Mechanics summary: At 6th level, a raging cannibal’s bite becomes even more fearsome. When using her bite attack, the raging cannibal can take a –1 penalty on her attack roll to add 2 points of bleed damage to the damage dealt. At 10th level and every 4 levels thereafter, the attack penalty increases by 1 and the bleed damage increases by 2 points.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

## Parsed source feature headings

- Animal Fury
- Consume Vigor (Ex)
- Intimidating Gouge (Ex)
- Feed from Fury (Ex)
- Razor-Toothed Fury (Ex)
- Rage Powers

