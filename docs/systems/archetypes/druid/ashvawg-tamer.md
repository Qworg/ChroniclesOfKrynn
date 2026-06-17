# Druid - Ashvawg Tamer

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Ashvawg Tamer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Ashvawg%20Tamer
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Bestial Bond (Sp); Variant Companion (Ex); 1st Level or Higher; 4th Level or Higher (Level –3); 10th Level or Higher (Level –9); 13th Level or Higher (Level –12); Undying Bond (Sp); Exotic Companion (Ex); 7th Level or Higher (Level –6); Resist Nature's Lure; Wild Shape (Su); Venom Immunity (Ex)
- **Replaced / altered class features:** Resist Nature's Lure, one less Wild Shape/day, Venom Immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** Eliminate Diplomacy and Heal from the druid’s class skill list.
- **Detailed mechanics:**
  - **Rules text to implement:** Eliminate Diplomacy and Heal from the druid’s class skill list. Add Intimidate and Knowledge (arcana).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bestial Bond (Sp)
- **Description:** At 4th level, the druid can call out to savage powers of the wilds, entreating them to aid her and her companion.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, the druid can call out to savage powers of the wilds, entreating them to aid her and her companion. Doing so allows her to cast cure serious wounds, neutralize poison, or remove disease on her animal companion as a spell-like ability by channeling the power of nature. The druid does not need to have these spells prepared as they come directly from the goddess. Using this ability, however, causes the druid to take 1d4 points of Wisdom damage. Any effect that prevents this Wisdom damage from occurring also prevents the use of this ability.
- **Implementation flags:**
  - animal companion progression.
  - poison subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Variant Companion (Ex)
- **Description:** At 4th level the druid adds additional non-animals to her alternate list of animal companions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level the druid adds additional non-animals to her alternate list of animal companions. If she chooses one of these creatures as an animal companion, she may use her wild empathy ability to influence the creature (even though it is not an animal and its intelligence may be above 2), though she takes a –4 penalty on this check. If the druid and the companion share a common language these checks are not needed. If the companion’s intelligence is 3 or higher, the number of “tricks” the druid can teach it refers to the number of commands the creature understands regardless of language.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 1st Level or Higher
- **Description:** darkmantle, krenshar, shocker lizard
- **Detailed mechanics:**
  - **Rules text to implement:** darkmantle, krenshar, shocker lizard
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 4th Level or Higher (Level –3)
- **Description:** hippogriff
- **Detailed mechanics:**
  - **Rules text to implement:** hippogriff
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 10th Level or Higher (Level –9)
- **Description:** girallon, griffon, owlbear, sea cat
- **Detailed mechanics:**
  - **Rules text to implement:** girallon, griffon, owlbear, sea cat
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 13th Level or Higher (Level –12)
- **Description:** bulette, chimera
- **Detailed mechanics:**
  - **Rules text to implement:** bulette, chimera
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Undying Bond (Sp)
- **Description:** At 6th level the druid can use her bestial bond ability to cast resurrection on her animal companion.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level the druid can use her bestial bond ability to cast resurrection on her animal companion.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Exotic Companion (Ex)
- **Description:** At 9th level the druid adds additional non-animals to her alternate list of animal companions, all of them with higher intelligence and strange shapes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level the druid adds additional non-animals to her alternate list of animal companions, all of them with higher intelligence and strange shapes. It otherwise functions as the variant companion ability.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 7th Level or Higher (Level –6)
- **Description:** worg
- **Detailed mechanics:**
  - **Rules text to implement:** worg
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 10th Level or Higher (Level –9)
- **Description:** ettercap, manticore, minotaur, winter wolf
- **Detailed mechanics:**
  - **Rules text to implement:** ettercap, manticore, minotaur, winter wolf
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 13th Level or Higher (Level –12)
- **Description:** behir, dragonne, hieracosphinx
- **Detailed mechanics:**
  - **Rules text to implement:** behir, dragonne, hieracosphinx
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Resist Nature's Lure
- **Description:** The druid does not gain this ability.
- **Detailed mechanics:**
  - **Rules text to implement:** The druid does not gain this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** The druid does not gain her second daily use of her wild shape ability at level 6.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The druid does not gain her second daily use of her wild shape ability at level 6. Hereafter she has one fewer daily use of the ability than a standard druid of her level.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Venom Immunity (Ex)
- **Description:** The druid does not gain this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The druid does not gain this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Bestial Bond (Sp)
- Variant Companion (Ex)
- 1st Level or Higher
- 4th Level or Higher (Level –3)
- 10th Level or Higher (Level –9)
- 13th Level or Higher (Level –12)
- Undying Bond (Sp)
- Exotic Companion (Ex)
- 7th Level or Higher (Level –6)
- 10th Level or Higher (Level –9)
- 13th Level or Higher (Level –12)
- Resist Nature's Lure
- Wild Shape (Su)
- Venom Immunity (Ex)
