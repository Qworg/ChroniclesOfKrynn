# Ranger - Witchguard

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Witchguard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Witchguard
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Defend Charge (Ex); Bodyguard (Ex); Patron (Su); Sworn Defender (Ex)
- **Replaced / altered class features:** hunter’s bond; endurance; woodland stride

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A witchguard adds Knowledge (nobility) and Sense Motive to his list of class skills, and removes Handle Animal and Knowledge (dungeoneering) from his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A witchguard adds Knowledge (nobility) and Sense Motive to his list of class skills, and removes Handle Animal and Knowledge (dungeoneering) from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: hunter’s bond

- **Archetype feature:** Defend Charge (Ex)
- **Description:** At 4th level, a witchguard forms a bond with a spellcaster he has sworn to defend.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 5.
  - **Rules text to implement:** At 4th level, a witchguard forms a bond with a spellcaster he has sworn to defend. Once per day, this bond allows the witchguard to spend a move action to grant an adjacent spellcaster a +2 dodge bonus to AC and a +2 circumstance bonus on concentration checks. At 5th level and every 5 levels thereafter, these bonuses increase by 2. The bonuses last for a number of rounds equal to the witchguard’s Wisdom modifier (minimum 1). At 4th level and every 3 levels thereafter, the witchguard can use this ability one additional time per day.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: endurance

- **Archetype feature:** Bodyguard (Ex)
- **Description:** At 3rd level, a witchguard gains Bodyguard APG as a bonus feat, even if he doesn’t meet the prerequisite.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a witchguard gains Bodyguard APG as a bonus feat, even if he doesn’t meet the prerequisite.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Patron (Su)
- **Description:** A witchguard learns something of arcane magic from the witches he defends.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** A witchguard learns something of arcane magic from the witches he defends. At 4th level, when a witchguard gains the ability to cast spells, he must also select a patron, as the witch class feature ( Pathfinder RPG Advanced Player’s Guide 70). This patron is usually the same as the patron of the witch he is sworn to protect, but the witchguard may choose any patron. The witchguard adds the first four spells from his patron’s spell list to his ranger spell list. The witchguard cannot cast patron spells of a level he is unable to cast.
- **Implementation flags:**
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Sworn Defender (Ex)
- **Description:** At 7th level, a witchguard gains In Harm’s Way APG as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a witchguard gains In Harm’s Way APG as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Defend Charge (Ex)
- Bodyguard (Ex)
- Patron (Su)
- Sworn Defender (Ex)
