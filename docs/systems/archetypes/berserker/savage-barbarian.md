# Berserker - Savage Barbarian

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Savage Barbarian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Savage%20Barbarian
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Naked Courage (Ex); Natural Toughness (Ex); Rage Powers
- **Replaced / altered class features:** trap sense; damage reduction

## Implementation details

### Replaces: trap sense

- **Archetype feature:** Naked Courage (Ex)
- **Description:** At 3rd level, the savage barbarian gains a +1 dodge bonus to AC and a +1 morale bonus on saving throws against fear when wearing no armor (shields are allowed).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the savage barbarian gains a +1 dodge bonus to AC and a +1 morale bonus on saving throws against fear when wearing no armor (shields are allowed). This bonus increases by +1 for every six levels after 3rd.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: damage reduction

- **Archetype feature:** Natural Toughness (Ex)
- **Description:** At 7th level, the savage barbarian gains a +1 natural armor bonus to AC when wearing no armor (shields are allowed).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, the savage barbarian gains a +1 natural armor bonus to AC when wearing no armor (shields are allowed). This bonus increases by +1 for every three levels beyond 7th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the savage barbarian archetype: flesh wound, guarded stance, increased damage reduction, intimidating glare, rolling dodge, superstition, and terrifying howl.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the savage barbarian archetype: flesh wound, guarded stance, increased damage reduction, intimidating glare, rolling dodge, superstition, and terrifying howl.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Naked Courage (Ex)
- Natural Toughness (Ex)
- Rage Powers
