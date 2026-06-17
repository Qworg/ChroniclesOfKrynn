# Druid - Desert Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Desert Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Desert%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Desert Native (Ex); Sandwalker (Ex); Desert Endurance (Ex); Wild Shape (Su); Shaded Vision (Ex); Dunemeld (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Implementation details

### Replaces: woodland stride

- **Archetype feature:** Desert Native (Ex)
- **Description:** At 2nd level, a desert druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in desert terrain, and she cannot be tracked in such environments.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a desert druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks equal to 1/2 her druid level in desert terrain, and she cannot be tracked in such environments.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Sandwalker (Ex)
- **Description:** At 3rd level, a desert druid suffers no penalty to speed or on Acrobatics or Stealth checks when moving through sandy or desert terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a desert druid suffers no penalty to speed or on Acrobatics or Stealth checks when moving through sandy or desert terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Desert Endurance (Ex)
- **Description:** At 4th level, a desert druid ignores the effects of a hot climate as if using endure elements.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a desert druid ignores the effects of a hot climate as if using endure elements. She also has a reduced need to eat and drink, as if wearing a ring of sustenance (though normal sleep is still required).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** A desert druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 10, 12, 14.
  - **Rules text to implement:** A desert druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2. A desert druid cannot use wild shape to adopt a plant form. At 10th level she can assume the form of a Small or Medium vermin, at 12th level a Tiny or Large vermin, and at 14th level a Diminutive or Huge vermin. This effect functions as beast shape IV (treating the vermin as an animal to determine its ability and natural armor modifiers).
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity

- **Archetype feature:** Shaded Vision (Ex)
- **Description:** At 9th level, a desert druid becomes immune to blinding and dazzling effects and gains a +2 bonus on saving throws against gaze attacks and illusions of the figment and pattern subschools.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a desert druid becomes immune to blinding and dazzling effects and gains a +2 bonus on saving throws against gaze attacks and illusions of the figment and pattern subschools.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Dunemeld (Ex)
- **Description:** At 13th level, a desert druid can assume the form of a swirling mass of sand at will.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a desert druid can assume the form of a swirling mass of sand at will. This is equivalent to gaseous form, but the druid gains a land and burrow speed of 10 feet rather than a fly speed. While in this form, the druid gains a circumstance bonus on Stealth checks made in desert terrain equal to her druid level.
- **Implementation flags:**
  - flight/movement mode support.

## Parsed source feature headings

- Desert Native (Ex)
- Sandwalker (Ex)
- Desert Endurance (Ex)
- Wild Shape (Su)
- Shaded Vision (Ex)
- Dunemeld (Ex)
