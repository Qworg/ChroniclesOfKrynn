# Alchemist - Horticulturist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Horticulturist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Horticulturist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Seed Extract; Herbal Bombs (Su); Plant Voice (Ex, Su); Plant Familiar (Ex); Fury of Nature (Sp)
- **Replaced / altered class features:** Mutagen; 2nd and 4th-level Discoveries; Bomb; Poison Resistance; Poison Use; Poison Immunity; Persistent Mutagen

## Implementation details

### Replaces: the mutagen class feature and the discovery normally gained at 2nd level

- **Archetype feature:** Seed Extract
- **Description:** At 1st level, a horticulturist adds summon nature’s ally I–VI as 1st- through 6th-level extracts, respectively, to his class extract list.
- **Detailed mechanics:**
  - **Level hooks:** 1, 6, 2.
  - **Rules text to implement:** At 1st level, a horticulturist adds summon nature’s ally I–VI as 1st- through 6th-level extracts, respectively, to his class extract list. For example, he automatically adds summon nature’s ally I to his formula book at 1st level and adds the next higher-level spell to his formula book each time he gains the ability to use extracts of that level. The horticulturist uses these special extracts to plant a seed that grows into a creature, bypassing the restriction for single target or personal effects. Using these extracts takes 1 round (as the spell’s normal casting time), and the creature summoned must be placed in a space adjacent to the horticulturist. The horticulturist can use these extracts to summon only animals and plants on the appropriate summon nature’s ally list. Creatures the horticulturist summons with these extracts become creatures with the plant type (gaining low-light vision and immunity to mind-affecting, paralysis, poison, polymorph, sleep, and stunning effects) rather than their normal type, but their attack bonuses, Hit Dice, saving throws, and skills don’t change. A horticulturist can’t choose mutagen discoveries.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: the bomb class feature

- **Archetype feature:** Herbal Bombs (Su)
- **Description:** A horticulturist’s bombs lack the power of a traditional alchemist’s but can be fine-tuned in ways normal alchemist explosives cannot.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A horticulturist’s bombs lack the power of a traditional alchemist’s but can be fine-tuned in ways normal alchemist explosives cannot. The horticulturist’s bombs deal 1d4 points of damage (instead of 1d6), plus 1d4 points of damage for every 2 alchemist levels beyond 1st. When the horticulturist creates a bomb, he can formulate it to affect plants and other creatures normally, affect only plant creatures, or affect only creatures not of the plant type.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: poison resistance, poison use, and poison immunity

- **Archetype feature:** Plant Voice (Ex, Su)
- **Description:** At 2nd level, a horticulturist gains further knowledge about plants, and he eventually learns to speak with them.
- **Detailed mechanics:**
  - **Level hooks:** 2, 10.
  - **Rules text to implement:** At 2nd level, a horticulturist gains further knowledge about plants, and he eventually learns to speak with them. He gains a +2 bonus on Knowledge (nature) and Survival checks, and at 10th level, he can speak to plants as a constant speak with plants spell (this ability is supernatural).
- **Implementation flags:**
  - poison subsystem.

### Replaces: the discovery gained at 4th level

- **Archetype feature:** Plant Familiar (Ex)
- **Description:** At 4th level, a horticulturist creates a Diminutive or Tiny alchemical plant creature that vaguely resembles a kind of animal suitable for a familiar (such as a cat) and acts as his familiar, granting the horticulturist a skill bonus, the Alertness feat, and so on.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a horticulturist creates a Diminutive or Tiny alchemical plant creature that vaguely resembles a kind of animal suitable for a familiar (such as a cat) and acts as his familiar, granting the horticulturist a skill bonus, the Alertness feat, and so on. The plant familiar has all the abilities of the animal it resembles (for example, a bat-like plant familiar can fly) but is treated as a creature of the plant type and has familiar abilities based on the horticulturist’s alchemist level (though some familiar abilities may be useless to the horticulturist). An alchemist’s extracts and mutagens are considered spells for the purposes of familiar abilities like share spells or deliver touch spells. If a plant familiar is lost or dies, it can be replaced 1 week later through a specialized procedure that costs 200 gp per alchemist level the horticulturist has. The ritual takes 8 hours to complete.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

### Replaces: persistent mutagen

- **Archetype feature:** Fury of Nature (Sp)
- **Description:** At 14th level, a horticulturist’s connection with nature allows him to bring down nature’s fury on his opponents.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a horticulturist’s connection with nature allows him to bring down nature’s fury on his opponents. He can cast one of the following spells, chosen at the time of casting, once per day as a spell-like ability: call lightning storm, eagle aerie, or liveoak.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Seed Extract
- Herbal Bombs (Su)
- Plant Voice (Ex, Su)
- Plant Familiar (Ex)
- Fury of Nature (Sp)
