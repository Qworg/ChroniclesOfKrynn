# Druid - Blight Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Blight Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Blight%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature Bond (Ex); Vermin Empathy (Su); Miasma (Ex); Blightblooded (Ex); Plaguebearer (Su)
- **Replaced / altered class features:** wild empathy; trackless step and resist nature’s lure; venom immunity; a thousand faces

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nature Bond (Ex)
- **Description:** A blight druid may not bond with an animal companion, but may either call a familiar as a wizard of her druid level or select from the Darkness, Death, and Destruction domains in addition to those normally available.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A blight druid may not bond with an animal companion, but may either call a familiar as a wizard of her druid level or select from the Darkness, Death, and Destruction domains in addition to those normally available.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: wild empathy

- **Archetype feature:** Vermin Empathy (Su)
- **Description:** A blight druid can improve the attitude of vermin as a normal druid can with animals.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A blight druid can improve the attitude of vermin as a normal druid can with animals. Vermin have a starting attitude of unfriendly. The blight druid can also improve the attitude of animals and mindless undead creatures that were formerly animals, but she takes a –4 penalty on the check unless the animal or undead has a disease special attack.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step and resist nature’s lure

- **Archetype feature:** Miasma (Ex)
- **Description:** Starting at 5th level, if a blight druid is adjacent to a creature at the beginning of its turn, the creature must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or become sickened for 1 round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** Starting at 5th level, if a blight druid is adjacent to a creature at the beginning of its turn, the creature must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or become sickened for 1 round. A creature of the animal, fey, or plant type that fails its save is nauseated for 1 round and sickened for 1 minute thereafter. If the creature makes its save, it is immune to this effect for 24 hours, as are creatures immune to disease.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: venom immunity

- **Archetype feature:** Blightblooded (Ex)
- **Description:** At 9th level, a blight druid gains immunity to all diseases, including natural and supernatural diseases.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a blight druid gains immunity to all diseases, including natural and supernatural diseases. She also becomes immune to effects that would cause her to become sickened or nauseated.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Plaguebearer (Su)
- **Description:** Starting at 13th level, any creature that strikes a blight druid with a touch attack, unarmed strike, or natural weapon must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or contract a disease, as the contagion spell.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** Starting at 13th level, any creature that strikes a blight druid with a touch attack, unarmed strike, or natural weapon must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or contract a disease, as the contagion spell. If the creature makes its save, it is immune to this effect for 24 hours.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Nature Bond (Ex)
- Vermin Empathy (Su)
- Miasma (Ex)
- Blightblooded (Ex)
- Plaguebearer (Su)
