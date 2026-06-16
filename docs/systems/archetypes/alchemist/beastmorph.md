# Alchemist - Beastmorph

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Beastmorph
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Beastmorph
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Beastform Mutagen; Improved Beastform Mutagen; Greater Beastform Mutagen; Grand Beastform Mutagen; Discoveries
- **Replaced / altered class features:** swift alchemy; swift poisoning; poison resistance +2, +4, and +6, as well as poison immunity; persistent mutagen

## Replacement details

### Replaces: swift alchemy

- **Archetype feature:** Beastform Mutagen
- **Description:** At 3rd level, a beastmorph's mutagen causes him to take on animalistic features—whether those of an animal, a magical beast, an animal-like humanoid (such as a lizardfolk), or a monstrous humanoid.
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a beastmorph's mutagen causes him to take on animalistic features—whether those of an animal, a magical beast, an animal-like humanoid (such as a lizardfolk), or a monstrous humanoid. For example, when the beastmorph uses his mutagen, he may gain a furry muzzle and pointed ears like a werewolf, scaly skin like a lizardfolk or sahuagin, or compound eyes and mandibles like a giant insect. The beastmorph also gains his choice of one of the abilities listed in the alter self spell, which persists as long as the mutagen. He may select a different ability each time he creates a mutagen.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, mutagen hook, ki/monk hook.

### Replaces: swift poisoning

- **Archetype feature:** Improved Beastform Mutagen
- **Description:** At 6th level, a beastmorph’s mutagen grants him additional abilities and options.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a beastmorph’s mutagen grants him additional abilities and options. The alchemist gains his choice of two of the abilities listed in the beast shape I spell, which persist as long as the mutagen. He may select two different abilities each time he creates a mutagen.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, mutagen hook.

### Replaces: poison resistance +2, +4, and +6, as well as poison immunity

- **Archetype feature:** Greater Beastform Mutagen
- **Description:** At 10th level, a beastmorph’s mutagen grants him three of the abilities listed in the beast shape II spell, which persist as long as the mutagen.
- **Mechanics:**
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a beastmorph’s mutagen grants him three of the abilities listed in the beast shape II spell, which persist as long as the mutagen. He may select three different abilities each time he creates a mutagen.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, mutagen hook.

### Replaces: persistent mutagen

- **Archetype feature:** Grand Beastform Mutagen
- **Description:** At 14th level, a beastmorph’s mutagen grants him four of the abilities listed in the beast shape III spell, which persist as long as the mutagen.
- **Mechanics:**
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a beastmorph’s mutagen grants him four of the abilities listed in the beast shape III spell, which persist as long as the mutagen. He may select four different abilities each time he creates a mutagen.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, mutagen hook.

## Parsed source feature headings

- Beastform Mutagen
- Improved Beastform Mutagen
- Greater Beastform Mutagen
- Grand Beastform Mutagen
- Discoveries

