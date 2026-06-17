# Berserker - Pack Hunter

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Pack Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Pack%20Hunter
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonus Feats; In and Out (Ex); Sympathetic Rage (Ex); Rage Powers
- **Replaced / altered class features:** Rage Powers; Trap Sense; 6th-level Rage Power

## Implementation details

### Alters: rage power

- **Archetype feature:** Bonus Feats
- **Description:** Whenever a pack hunter would gain a new rage power, she can instead select a teamwork feat.
- **Detailed mechanics:**
  - **Rules text to implement:** Whenever a pack hunter would gain a new rage power, she can instead select a teamwork feat. She must still meet the prerequisites for the teamwork feat.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** In and Out (Ex)
- **Description:** At 3rd level, a pack hunter gains a +1 dodge bonus to AC against attacks of opportunity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, a pack hunter gains a +1 dodge bonus to AC against attacks of opportunity. This bonus increases by 1 for every 3 barbarian levels after 3rd (to a maximum bonus of +6 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rage power normally gained at 6th level

- **Archetype feature:** Sympathetic Rage (Ex)
- **Description:** At 6th level, if an ally within 30 feet is bloodraging or raging, a pack hunter counts as raging even if knocked unconscious.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, if an ally within 30 feet is bloodraging or raging, a pack hunter counts as raging even if knocked unconscious. She has to have been raging when incapacitated to maintain her rage, and she ceases raging normally if she depletes her maximum number of rounds of rage in a day.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the pack hunter archetype: contagious rage, increased damage reduction, no escape, pack rage, quick reflexes, and unexpected strike.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the pack hunter archetype: contagious rage, increased damage reduction, no escape, pack rage, quick reflexes, and unexpected strike.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bonus Feats
- In and Out (Ex)
- Sympathetic Rage (Ex)
- Rage Powers
