# Warrior - Seasoned Commander

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Seasoned Commander
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Seasoned%20Commander
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Strategic Training (Ex); Tactician (Ex); Inspiring Speech (Ex); Inspire Greatness (Ex); Greater Tactician (Ex); Inspire Heroics (Ex); Master Tactician (Ex)
- **Replaced / altered class features:** armor training 1; weapon training 1 and 3; weapon training 2; armor training 3; armor training 4; weapon training 4

## Implementation details

### Alters: the fighter’s skill ranks per level and class skills, and replaces the bonus fighter combat feat gained at 1st level and proficiency with heavy armor and tower shields

- **Archetype feature:** Strategic Training (Ex)
- **Description:** A seasoned commander gains 4 skill ranks + a number of skill ranks equal to his Intelligence modifier at each level instead of the normal 2 skill ranks + Intelligence modifier at each level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** A seasoned commander gains 4 skill ranks + a number of skill ranks equal to his Intelligence modifier at each level instead of the normal 2 skill ranks + Intelligence modifier at each level. A seasoned commander adds Diplomacy, Knowledge (geography), Knowledge (nobility), Linguistics, and Sense Motive to his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: armor training 1

- **Archetype feature:** Tactician (Ex)
- **Description:** At 3rd level, a seasoned commander gains the cavalier’s tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a seasoned commander gains the cavalier’s tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 1 and 3

- **Archetype feature:** Inspiring Speech (Ex)
- **Description:** At 5th level, a seasoned commander can give an inspiring speech as a standard action once per day.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 7, 13.
  - **Rules text to implement:** At 5th level, a seasoned commander can give an inspiring speech as a standard action once per day. If he does, all allies who can hear his speech gain the benefits of inspire courage, granting bonuses 1 lower than those granted by a bard of the seasoned commander’s fighter level, lasting 1 round per fighter level + his Charisma modifier (abilities that affect a bardic performance, such as Lingering Performance, have no effect on this ability). At 7th level, he can perform the speech as a move action, and at 13th level, he can perform the speech as a swift action.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.

### Replaces: weapon training 2

- **Archetype feature:** Inspire Greatness (Ex)
- **Description:** At 9th level, a seasoned commander gains an additional daily use of his inspiring speech ability, and he can also choose to use his inspiring speech to grant the effects of inspire greatness to one ally (instead of inspire courage).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 19.
  - **Rules text to implement:** At 9th level, a seasoned commander gains an additional daily use of his inspiring speech ability, and he can also choose to use his inspiring speech to grant the effects of inspire greatness to one ally (instead of inspire courage). For every 2 levels a seasoned commander attains beyond 9th, he can target one additional ally while using this ability (up to a maximum of six at 19th level). This ability functions in all other respects like the seasoned commander’s inspire courage ability. Whichever inspiring speech he chooses to use, if the seasoned commander uses an inspiring speech before the duration of his previous inspiring speech ends, the new inspiring speech replaces the old speech.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: armor training 3

- **Archetype feature:** Greater Tactician (Ex)
- **Description:** At 11th level, the seasoned commander gains the cavalier’s greater tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, the seasoned commander gains the cavalier’s greater tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 4

- **Archetype feature:** Inspire Heroics (Ex)
- **Description:** At 15th level, a seasoned commander gains an additional daily use of his inspiring speech, and he can also choose to use his inspiring speech to grant the effects of inspire heroics to one ally (instead of inspire courage or inspire greatness).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a seasoned commander gains an additional daily use of his inspiring speech, and he can also choose to use his inspiring speech to grant the effects of inspire heroics to one ally (instead of inspire courage or inspire greatness). For every 2 levels a seasoned commander attains beyond 15th, he can target one additional ally while using this ability. This ability functions in all other respects like the seasoned commander’s inspire courage ability.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: weapon training 4

- **Archetype feature:** Master Tactician (Ex)
- **Description:** At 17th level, the seasoned commander gains the cavalier’s master tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, the seasoned commander gains the cavalier’s master tactician class feature, treating his fighter level as his cavalier level for the purposes of this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Strategic Training (Ex)
- Tactician (Ex)
- Inspiring Speech (Ex)
- Inspire Greatness (Ex)
- Greater Tactician (Ex)
- Inspire Heroics (Ex)
- Master Tactician (Ex)
