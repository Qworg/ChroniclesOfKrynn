# Ranger - Wild Stalker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wild Stalker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wild%20Stalker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Strong Senses (Ex); Uncanny Dodge (Ex); Rage of the Wild (Ex); Rage Powers; Wild Talents (Ex)
- **Replaced / altered class features:** the ranger’s first favored enemy ability; the ranger’s 2nd-level combat style feat; hunter’s bond; the ranger’s second, third, fourth, and fifth favored enemy abilities; the ranger’s 6th-, 10th-, 14th-, and 18th-level combat style feat abilities

## Implementation details

### Replaces: the ranger’s first favored enemy ability

- **Archetype feature:** Strong Senses (Ex)
- **Description:** At 1st level, a wild stalker’s life among the wild has sharpened his senses.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 20.
  - **Rules text to implement:** At 1st level, a wild stalker’s life among the wild has sharpened his senses. He gains low-light vision and a +1 bonus on Perception checks. If he already has low-light vision, he gains a +2 bonus on Perception checks instead. This bonus increases by +1 for every four levels after 1st (to a maximum of +6 at 20th level, or +7 if the character did not gain low-light vision from this ability).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the ranger’s 2nd-level combat style feat

- **Archetype feature:** Uncanny Dodge (Ex)
- **Description:** At 2nd level, a wild stalker gains uncanny dodge as the barbarian’s class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a wild stalker gains uncanny dodge as the barbarian’s class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: hunter’s bond

- **Archetype feature:** Rage of the Wild (Ex)
- **Description:** At 4th level, a wild stalker gains the rage ability as the barbarian class feature, but its barbarian level is considered to be his ranger level –3.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a wild stalker gains the rage ability as the barbarian class feature, but its barbarian level is considered to be his ranger level –3.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: the ranger’s second, third, fourth, and fifth favored enemy abilities

- **Archetype feature:** Rage Powers
- **Description:** At 5th level, a wild stalker ranger gains a single rage power, as the barbarian class feature.
- **Detailed mechanics:**
  - **Level hooks:** 5, 20.
  - **Rules text to implement:** At 5th level, a wild stalker ranger gains a single rage power, as the barbarian class feature. He gains another rage power each five levels after 5th (to a maximum of four rage powers at 20th level).
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: the ranger’s 6th-, 10th-, 14th-, and 18th-level combat style feat abilities

- **Archetype feature:** Wild Talents (Ex)
- **Description:** At 6th level, a wild stalker can either take a rage power, or gains a +2 insight bonus into any one of the following skills: Acrobatics, Climb, Perception, Stealth, Survival, or Swim.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6, 20, 18.
  - **Rules text to implement:** At 6th level, a wild stalker can either take a rage power, or gains a +2 insight bonus into any one of the following skills: Acrobatics, Climb, Perception, Stealth, Survival, or Swim. The wild stalker can gain one of these two benefits again every five levels after 6th (to a maximum of 4 times at 20th level).
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Strong Senses (Ex)
- Uncanny Dodge (Ex)
- Rage of the Wild (Ex)
- Rage Powers
- Wild Talents (Ex)
