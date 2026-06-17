# Warrior - Eldritch Guardian

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Eldritch Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Eldritch%20Guardian
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Familiar (Ex); Share Training (Ex); Steel Will (Ex)
- **Replaced / altered class features:** the bonus feat gained at 1st level; the bonus feat gained at 2nd level; bravery

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The eldritch guardian adds Perception, Spellcraft, and Use Magic Device to his list of class skills, but does not gain Intimidate, Ride, or Swim as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** The eldritch guardian adds Perception, Spellcraft, and Use Magic Device to his list of class skills, but does not gain Intimidate, Ride, or Swim as class skills.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Familiar (Ex)
- **Description:** At 1st level, an eldritch guardian gains a familiar, treating his fighter level as his effective wizard level for the purpose of this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an eldritch guardian gains a familiar, treating his fighter level as his effective wizard level for the purpose of this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feat gained at 2nd level

- **Archetype feature:** Share Training (Ex)
- **Description:** At 2nd level, when the familiar can see and hear its master, it can use any combat feat possessed by the eldritch guardian.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, when the familiar can see and hear its master, it can use any combat feat possessed by the eldritch guardian. The familiar doesn’t have to meet the feat’s prerequisites, but at the GM’s discretion may be precluded from using certain combat feats due to its physical form. For example, an eldritch guardian’s pig familiar with access to Exotic Weapon Proficiency (spiked chain) would not gain the ability to use spiked chains, since it doesn’t have any limbs capable of properly handling them.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Steel Will (Ex)
- **Description:** At 2nd level, the eldritch guardian gains a +1 bonus on Will saves against fear and mind-affecting effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the eldritch guardian gains a +1 bonus on Will saves against fear and mind-affecting effects. This bonus increases by 1 for every 4 levels beyond 2nd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Familiar (Ex)
- Share Training (Ex)
- Steel Will (Ex)
