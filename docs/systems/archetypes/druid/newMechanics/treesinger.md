# Druid - Treesinger

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Treesinger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Treesinger
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Plant Bond (Ex); Green Empathy (Ex); Wild Shape (Su); Starting Statistics; Size; Speed; AC; Attack; Ability Scores; Special Qualities; 4th-Level Advancement; Special Attacks
- **Replaced / altered class features:** the wild empathy class feature

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Plant Bond (Ex)
- **Description:** At 1st level, a treesinger forms a mystic bond with plant life.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a treesinger forms a mystic bond with plant life. This bond can take one of two forms. The first grants the treesinger one of the following domains: Plant ( Core Rulebook ); Growth ; Jungle, Swamp. When determining the powers and bonus spells granted by this domain, the treesinger’s effective cleric level is equal to her druid level. A treesinger who selects this option also receives additional domain spell slots, just like a cleric. She must prepare the spell from her domain in this slot, and this spell cannot be used to cast a spell spontaneously. The second option is to form a close bond with a plant companion. A treesinger may begin play with any of the plants listed in Plant Companions. This plant is a loyal companion that accompanies the treesinger on her adventures. Except for the companion being a creature of the plant type, drawn from the list of plant companions, this ability otherwise works like the standard druid’s animal companion ability. Plant bond replaces the druid’s nature bond ability.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: the wild empathy class feature

- **Archetype feature:** Green Empathy (Ex)
- **Description:** At 1st level, a treesinger can improve the attitude of a plant creature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a treesinger can improve the attitude of a plant creature. This ability functions just like a Diplomacy check made to improve the attitude of a person. The treesinger rolls 1d20 and adds her druid level and her Charisma modifier to determine the wild empathy check result. The typical wild plant creature has a starting attitude of indifferent. To use green empathy, the treesinger and the plant creature must be within 30 feet of one another under normal conditions. Generally, influencing a plant creature in this way takes 1 minute but, as with influencing people, it might take more or less time. A treesinger can also use this ability to influence an animal, but she takes a –4 penalty on the check.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 4th level, a treesinger gains the ability to wild shape.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 8, 10, 12, 7.
  - **Rules text to implement:** At 4th level, a treesinger gains the ability to wild shape. This ability functions at her actual druid level. A treesinger cannot use wild shape to adopt an animal or elemental form. Instead, when she gains this ability at 4th level, she can assume the form of a Small or Medium plant. This functions as plant shape I, except the treesinger does not yet gain access to the constrict or poison abilities of the plant form assumed. At 8th level, the treesinger’s wild shape gains the full range of abilities available from plant shape I. At 10th level, a treesinger can assume the form of a Large or Tiny plant. Her wild shape ability now functions like plant shape II. At 12th level, a treesinger can assume the form of a Huge plant. Her wild shape ability now functions like plant shape III. This ability replaces, and otherwise functions like, the normal druid wild shape ability. Plant Companions Each plant companion has different starting sizes, speed, attacks, ability scores, and special qualities. All plant attacks are made using the creature’s full base attack bonus unless otherwise noted. Plant attacks add the plant’s Strength modifier on the damage roll, unless it has only one attack, in which case it adds 1-1/2 times its Strength modifier. Some plant companions have special abilities, such as scent. Plant companions cannot gain armor or weapon proficiency feats, even as they advance in hit dice, and cannot use manufactured weapons at all unless their description says otherwise. As you gain levels, your plant companion grows in power as well. It gains the same bonuses that are gained by animal companions. Each plant companion gains an additional bonus, usually at 4th or 7th level, as listed with each plant choice. Instead of taking the listed benefit at 4th level, you can instead choose to increase the companion’s Strength and Constitution by 2. Carnivorous Flower
- **Implementation flags:**
  - animal companion progression.
  - wild shape subsystem.
  - ki subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Starting Statistics
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Small;
- **Detailed mechanics:**
  - **Rules text to implement:** Small;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 30 ft., climb 10 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 30 ft., climb 10 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +2 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +2 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** bite (1d6);
- **Detailed mechanics:**
  - **Rules text to implement:** bite (1d6);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 10, Dex 17, Con 15, Int 2, Wis 12, Cha 10;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 10, Dex 17, Con 15, Int 2, Wis 12, Cha 10;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Qualities
- **Description:** low-light vision, scent.
- **Detailed mechanics:**
  - **Rules text to implement:** low-light vision, scent.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 4th-Level Advancement
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Medium;
- **Detailed mechanics:**
  - **Rules text to implement:** Medium;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** bite (2d6);
- **Detailed mechanics:**
  - **Rules text to implement:** bite (2d6);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str +4, Dex –2, Con +2;
- **Detailed mechanics:**
  - **Rules text to implement:** Str +4, Dex –2, Con +2;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Attacks
- **Description:** rage (1/day, as the barbarian class feature for 6 rounds).
- **Detailed mechanics:**
  - **Rules text to implement:** rage (1/day, as the barbarian class feature for 6 rounds). Crawling Vine
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Starting Statistics
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Medium;
- **Detailed mechanics:**
  - **Rules text to implement:** Medium;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 20 ft., climb 20 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 20 ft., climb 20 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +2 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +2 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** slam (1d4);
- **Detailed mechanics:**
  - **Rules text to implement:** slam (1d4);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 13, Dex 17, Con 13, Int 1, Wis 12, Cha 2;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 13, Dex 17, Con 13, Int 1, Wis 12, Cha 2;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Attacks
- **Description:** grab;
- **Detailed mechanics:**
  - **Rules text to implement:** grab;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Qualities
- **Description:** low-light vision, scent.
- **Detailed mechanics:**
  - **Rules text to implement:** low-light vision, scent.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 4th-Level Advancement
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Large;
- **Detailed mechanics:**
  - **Rules text to implement:** Large;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +1 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +1 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** slam (1d6);
- **Detailed mechanics:**
  - **Rules text to implement:** slam (1d6);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str +8, Dex –2, Con +4;
- **Detailed mechanics:**
  - **Rules text to implement:** Str +8, Dex –2, Con +4;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Attacks
- **Description:** constrict 1d6.
- **Detailed mechanics:**
  - **Rules text to implement:** constrict 1d6. Puffball (Floating Fungus)
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Starting Statistics
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Small;
- **Detailed mechanics:**
  - **Rules text to implement:** Small;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 20 ft., fly 60 ft.
- **Detailed mechanics:**
  - **Rules text to implement:** 20 ft., fly 60 ft. (average);
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +1 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +1 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** thorn (1d4 plus poison);
- **Detailed mechanics:**
  - **Rules text to implement:** thorn (1d4 plus poison);
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 10, Dex 15, Con 12, Int 2, Wis 14, Cha 6;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 10, Dex 15, Con 12, Int 2, Wis 14, Cha 6;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Attacks
- **Description:** poison ( Frequency 1 round [6], Effect 1 Con damage, Cure 1 save, Con-based DC);
- **Detailed mechanics:**
  - **Rules text to implement:** poison ( Frequency 1 round [6], Effect 1 Con damage, Cure 1 save, Con-based DC);
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Qualities
- **Description:** low-light vision.
- **Detailed mechanics:**
  - **Rules text to implement:** low-light vision.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 4th-Level Advancement
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str +2, Con +2.
- **Detailed mechanics:**
  - **Rules text to implement:** Str +2, Con +2. Sapling Treant
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Starting Statistics
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Medium;
- **Detailed mechanics:**
  - **Rules text to implement:** Medium;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 30 ft., climb 30 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 30 ft., climb 30 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +1 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +1 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** 2 slams (1d6);
- **Detailed mechanics:**
  - **Rules text to implement:** 2 slams (1d6);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 15, Dex 10, Con 12, Int 2, Wis 12, Cha 7;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 15, Dex 10, Con 12, Int 2, Wis 12, Cha 7;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Qualities
- **Description:** double damage against objects, low-light vision.
- **Detailed mechanics:**
  - **Rules text to implement:** double damage against objects, low-light vision.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 4th-Level Advancement
- **Description:** :
- **Detailed mechanics:**
  - **Rules text to implement:** :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Large;
- **Detailed mechanics:**
  - **Rules text to implement:** Large;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +2 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +2 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** 2 slams (1d8);
- **Detailed mechanics:**
  - **Rules text to implement:** 2 slams (1d8);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str +8, Dex –2, Con +4.
- **Detailed mechanics:**
  - **Rules text to implement:** Str +8, Dex –2, Con +4.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Plant Bond (Ex)
- Green Empathy (Ex)
- Wild Shape (Su)
- Starting Statistics
- Size
- Speed
- AC
- Attack
- Ability Scores
- Special Qualities
- 4th-Level Advancement
- Size
- Attack
- Ability Scores
- Special Attacks
- Starting Statistics
- Size
- Speed
- AC
- Attack
- Ability Scores
- Special Attacks
- Special Qualities
- 4th-Level Advancement
- Size
- AC
- Attack
- Ability Scores
- Special Attacks
- Starting Statistics
- Size
- Speed
- AC
- Attack
- Ability Scores
- Special Attacks
- Special Qualities
- 4th-Level Advancement
- Ability Scores
- Starting Statistics
- Size
- Speed
- AC
- Attack
- Ability Scores
- Special Qualities
- 4th-Level Advancement
- Size
- AC
- Attack
- Ability Scores
