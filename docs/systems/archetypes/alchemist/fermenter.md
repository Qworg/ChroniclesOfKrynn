# Alchemist - Fermenter

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Fermenter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Fermenter
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Substance Tolerance (Ex); Volatile Bombs (Ex); Batch Brew (Ex)
- **Replaced / altered class features:** Poison Resistance; 10th-level Discovery; Poison Use; Swift Poisoning

## Implementation details

### Replaces: poison resistance and the discovery gained at 10th level

- **Archetype feature:** Substance Tolerance (Ex)
- **Description:** At 2nd level, whenever a fermenter consumes a drug, she gains a +2 bonus on her saving throw to resist becoming addicted.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 8, 10.
  - **Rules text to implement:** At 2nd level, whenever a fermenter consumes a drug, she gains a +2 bonus on her saving throw to resist becoming addicted. Whenever she consumes a tincture, she gains its usual benefits, but all penalties imposed are reduced by 1. (If the tincture’s penalties instead impose a condition or another penalty that is not numerical, such as the penalties imposed by starlight juice, this ability has no effect at 2nd level.) Additionally, the fermenter can consume a number of alcoholic beverages equal to one plus three times her Constitution modifier before becoming sickened for 1 hour per drink above this maximum. ( Normal rules for drunkenness can be found here ) The bonus on saving throws to resist addiction increases to +3 at 8th level and to +4 at 10th level. At 10th level, the fermenter suffers no penalties at all from drinking tinctures, including conditions and other nonnumerical penalties ( starlight juice would not make her dazzled, for example). Additionally, at 10th level she can consume a number of alcoholic beverages equal to one plus four times her Constitution modifier before becoming sickened.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - poison subsystem.

### Replaces: poison use

- **Archetype feature:** Volatile Bombs (Ex)
- **Description:** At 2nd level, a fermenter under the influence can make her bombs more potent, but they also become unstable and more difficult to aim.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 7, 19.
  - **Rules text to implement:** At 2nd level, a fermenter under the influence can make her bombs more potent, but they also become unstable and more difficult to aim. As long as the fermenter is under the effects of a drug or tincture, or has imbibed an alcoholic drink in the past 10 minutes, her bombs deal 1 additional point of damage per damage die. While this ability is in effect, she also takes a –2 penalty on attack rolls made with her bombs. At 7th level and every 6 levels thereafter, this penalty increases by 1 (to a maximum penalty of –5 at 19th level).
- **Implementation flags:**
  - poison subsystem.

### Replaces: swift poisoning

- **Archetype feature:** Batch Brew (Ex)
- **Description:** At 6th level, a fermenter learns how to brew tinctures in larger batches.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a fermenter learns how to brew tinctures in larger batches. Whenever she creates a tincture using Craft (alchemy), she can simultaneously create a number of additional tinctures equal to her Intelligence modifier. She expends resources for each tincture separately, but she attempts a single Craft check and applies the result to each tincture being brewed.
- **Implementation flags:**
  - poison subsystem.
  - crafting subsystem.

## Parsed source feature headings

- Substance Tolerance (Ex)
- Volatile Bombs (Ex)
- Batch Brew (Ex)
