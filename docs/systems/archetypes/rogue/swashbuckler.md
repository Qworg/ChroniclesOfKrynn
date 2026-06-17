# Rogue - Swashbuckler

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Swashbuckler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Swashbuckler
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Martial Training (Ex); Daring (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Martial Training (Ex)
- **Description:** At 1st level, the swashbuckler may select one martial weapon to add to her list of weapon proficiencies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the swashbuckler may select one martial weapon to add to her list of weapon proficiencies. In addition, she may take the combat trick rogue talent up to two times.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Daring (Ex)
- **Description:** At 3rd level, a swashbuckler gains a +1 morale bonus on Acrobatics checks and saving throws against fear.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a swashbuckler gains a +1 morale bonus on Acrobatics checks and saving throws against fear. This bonus increases by +1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the swashbuckler archetype: offensive defense, positioning attack, powerful sneak, and weapon training*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the swashbuckler archetype: offensive defense, positioning attack, powerful sneak, and weapon training*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the swashbuckler archetype: crippling strike*, entanglement of blades, and redirect attack.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the swashbuckler archetype: crippling strike*, entanglement of blades, and redirect attack.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Martial Training (Ex)
- Daring (Ex)
- Rogue Talents
- Advanced Talents
