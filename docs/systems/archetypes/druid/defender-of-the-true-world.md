# Druid - Defender of the True World

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Defender of the True World
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Defender%20of%20the%20True%20World
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Bonus Languages; Enemy of the First World; Fey Empathy (Ex); Fey Stalker (Ex); Feybane (Ex); Beguiling Immunity (Ex); First World Deceiver (Su)
- **Replaced / altered class features:** trackless step Feybane (Ex) : At 4th level, a defender of the true world doesn’t gain a bonus on saving throws against spells and effects that utilize or target plants; venom immunity; a thousand faces

## Implementation details

### Alters: the druid’s class skills

- **Archetype feature:** Class Skills
- **Description:** A defender of the true world gains Diplomacy as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A defender of the true world gains Diplomacy as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Languages
- **Description:** A defender of the true world can select Aklo, Sylvan, or Undercommon as bonus languages, in addition to the normal list of bonus languages available.
- **Detailed mechanics:**
  - **Rules text to implement:** A defender of the true world can select Aklo, Sylvan, or Undercommon as bonus languages, in addition to the normal list of bonus languages available.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: spontaneous casting

- **Archetype feature:** Enemy of the First World
- **Description:** A defender of the true world cannot use summon nature’s ally to summon fey creatures.
- **Detailed mechanics:**
  - **Rules text to implement:** A defender of the true world cannot use summon nature’s ally to summon fey creatures.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: wild empathy

- **Archetype feature:** Fey Empathy (Ex)
- **Description:** A defender of the true world gains a +2 competence bonus on Bluff, Diplomacy, and Intimidate checks when interacting with fey creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** A defender of the true world gains a +2 competence bonus on Bluff, Diplomacy, and Intimidate checks when interacting with fey creatures. This bonus increases by 1 for every 4 druid levels she has (maximum +7 at 20th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Fey Stalker (Ex)
- **Description:** At 3rd level, the defender of the true world’s animal companion and any creatures she summons with summon nature’s ally gain a +1 morale bonus on attack and damage rolls against fey creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8, 13, 18.
  - **Rules text to implement:** At 3rd level, the defender of the true world’s animal companion and any creatures she summons with summon nature’s ally gain a +1 morale bonus on attack and damage rolls against fey creatures. This bonus increases to +2 at 8th level, +3 at 13th level, and +4 at 18th level. This ability replaces trackless step
- **Implementation flags:**
  - animal companion progression.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Alters: resist nature’s lure

- **Archetype feature:** Feybane (Ex)
- **Description:** At 4th level, a defender of the true world doesn’t gain a bonus on saving throws against spells and effects that utilize or target plants.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a defender of the true world doesn’t gain a bonus on saving throws against spells and effects that utilize or target plants. She instead treats her natural attacks as cold iron for the purpose of overcoming damage reduction, and she gains a +2 bonus on caster level checks to overcome the spell resistance of fey creatures.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: venom immunity

- **Archetype feature:** Beguiling Immunity (Ex)
- **Description:** At 9th level, a defender of the true world becomes immune to the mind-affecting effects of fey.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a defender of the true world becomes immune to the mind-affecting effects of fey.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** First World Deceiver (Su)
- **Description:** At 13th level, a defender of the true world gains the ability to change her appearance as per alter self, except she can take the form of a humanoid or fey creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a defender of the true world gains the ability to change her appearance as per alter self, except she can take the form of a humanoid or fey creature. Her base land speed from this ability cannot exceed 60 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Bonus Languages
- Enemy of the First World
- Fey Empathy (Ex)
- Fey Stalker (Ex)
- Feybane (Ex)
- Beguiling Immunity (Ex)
- First World Deceiver (Su)
