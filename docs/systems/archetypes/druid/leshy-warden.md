# Druid - Leshy Warden

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Leshy Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Leshy%20Warden
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Leshy Familiar (Ex); Green Empathy (Ex); Leshy Summoner (Ex); Leshy Tender (Ex); Wild Shape (Su); Plant Whisperer (Su)
- **Replaced / altered class features:** Nature Bond; Wild Empathy; Spontaneous Casting; Resist Nature’s Lure; Wild Shape; A Thousand Faces

## Implementation details

### Replaces: nature bond

- **Archetype feature:** Leshy Familiar (Ex)
- **Description:** A leshy warden forms an intimate bond with a nature spirit, incarnating the spirit as a leaf leshy ( Bestiary 3 179).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A leshy warden forms an intimate bond with a nature spirit, incarnating the spirit as a leaf leshy ( Bestiary 3 179). She gains a leaf leshy as a familiar and treats her druid level as her effective wizard level for the purpose of this ability. If the leshy dies, the leshy warden can incarnate the same spirit again by paying the normal cost to replace a familiar. So long as the leshy lives, the leshy warden gains access to the Plant domain as if through a druid’s nature bond class feature, but she can’t choose the Decay subdomain.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: wild empathy

- **Archetype feature:** Green Empathy (Ex)
- **Description:** A leshy warden can improve the attitude of a plant creature as if using wild empathy.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A leshy warden can improve the attitude of a plant creature as if using wild empathy. The typical wild plant creature has a starting attitude of indifferent. If the plant creature is mindless, the leshy warden imparts a modicum of intellect to the plant so that it can be interacted with as if it were an animal. A leshy warden can also use this ability to influence an animal, but she takes a –4 penalty on the check to do so.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: spontaneous casting

- **Archetype feature:** Leshy Summoner (Ex)
- **Description:** A leshy warden is an expert at summoning and growing leshys.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A leshy warden is an expert at summoning and growing leshys. She counts as a plant creature for the purpose of growing leshys. She adds leaf leshys, gourd leshys, fungus leshys, seaweed leshys, and lotus leshys to her list of creatures she can summon with summon nature’s ally I, II, III, IV, and V, respectively.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Leshy Tender (Ex)
- **Description:** At 4th level, a leshy warden can either grant her leaf leshy a +2 increase to Strength and Dexterity or transform it into a gourd leshy.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8, 12.
  - **Rules text to implement:** At 4th level, a leshy warden can either grant her leaf leshy a +2 increase to Strength and Dexterity or transform it into a gourd leshy. At 8th level, the leshy warden can either grant her current leshy a +2 increase to Strength and Dexterity or transform it into a fungus leshy. At 12th level, she can either grant her current leshy a final +2 increase to Strength and Dexterity or transform it into a seaweed leshy. If the leshy is transformed, it gains the normal ability scores of its new form; ability score increases granted by this ability don’t carry over to its new form.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** A leshy warden gains this ability at 6th level, except her effective druid level for the ability is equal to her druid level – 2 for the purpose of determining the number of times per day she can use it.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 8, 10.
  - **Rules text to implement:** A leshy warden gains this ability at 6th level, except her effective druid level for the ability is equal to her druid level – 2 for the purpose of determining the number of times per day she can use it. At 6th level, the leshy warden can assume the form of only Small or Medium plant creatures, as per plant shape I. At 8th level, she can take the form of a Large plant creature, as per plant shape II. At 10th level, she can take the form of a Huge plant creature, as per plant shape III.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: a thousand faces

- **Archetype feature:** Plant Whisperer (Su)
- **Description:** At 13th level, a leshy warden’s connection to the spirits of nature becomes strong enough that she can always hear them whispering.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a leshy warden’s connection to the spirits of nature becomes strong enough that she can always hear them whispering. She is treated as if constantly under the effects of speak with plants. Once per day, she can spend 10 minutes in communion with the spirits to learn the answers to her questions, as commune with nature.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Leshy Familiar (Ex)
- Green Empathy (Ex)
- Leshy Summoner (Ex)
- Leshy Tender (Ex)
- Wild Shape (Su)
- Plant Whisperer (Su)
