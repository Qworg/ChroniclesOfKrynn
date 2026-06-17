# Alchemist - Beastmorph

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Beastmorph
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Beastmorph
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Beastform Mutagen; Improved Beastform Mutagen; Greater Beastform Mutagen; Grand Beastform Mutagen; Discoveries
- **Replaced / altered class features:** swift alchemy; swift poisoning; poison resistance +2, +4, and +6, as well as poison immunity; persistent mutagen

## Implementation details

### Replaces: swift alchemy

- **Archetype feature:** Beastform Mutagen
- **Description:** At 3rd level, a beastmorph's mutagen causes him to take on animalistic features—whether those of an animal, a magical beast, an animal-like humanoid (such as a lizardfolk), or a monstrous humanoid.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a beastmorph's mutagen causes him to take on animalistic features—whether those of an animal, a magical beast, an animal-like humanoid (such as a lizardfolk), or a monstrous humanoid. For example, when the beastmorph uses his mutagen, he may gain a furry muzzle and pointed ears like a werewolf, scaly skin like a lizardfolk or sahuagin, or compound eyes and mandibles like a giant insect. The beastmorph also gains his choice of one of the abilities listed in the alter self spell, which persists as long as the mutagen. He may select a different ability each time he creates a mutagen.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: swift poisoning

- **Archetype feature:** Improved Beastform Mutagen
- **Description:** At 6th level, a beastmorph’s mutagen grants him additional abilities and options.
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a beastmorph’s mutagen grants him additional abilities and options. The alchemist gains his choice of two of the abilities listed in the beast shape I spell, which persist as long as the mutagen. He may select two different abilities each time he creates a mutagen.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison resistance +2, +4, and +6, as well as poison immunity

- **Archetype feature:** Greater Beastform Mutagen
- **Description:** At 10th level, a beastmorph’s mutagen grants him three of the abilities listed in the beast shape II spell, which persist as long as the mutagen.
- **Detailed mechanics:**
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, a beastmorph’s mutagen grants him three of the abilities listed in the beast shape II spell, which persist as long as the mutagen. He may select three different abilities each time he creates a mutagen.
- **Implementation flags:**
  - poison subsystem.

### Replaces: persistent mutagen

- **Archetype feature:** Grand Beastform Mutagen
- **Description:** At 14th level, a beastmorph’s mutagen grants him four of the abilities listed in the beast shape III spell, which persist as long as the mutagen.
- **Detailed mechanics:**
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a beastmorph’s mutagen grants him four of the abilities listed in the beast shape III spell, which persist as long as the mutagen. He may select four different abilities each time he creates a mutagen.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the beastmorph archetype: feral mutagen, grand mutagen, greater mutagen, infuse mutagen, mummification, spontaneous healing, tentacle, and wings.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the beastmorph archetype: feral mutagen, grand mutagen, greater mutagen, infuse mutagen, mummification, spontaneous healing, tentacle, and wings.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Beastform Mutagen
- Improved Beastform Mutagen
- Greater Beastform Mutagen
- Grand Beastform Mutagen
- Discoveries
