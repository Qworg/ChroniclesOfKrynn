# Paladin - Sword of Valor

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Sword of Valor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Sword%20of%20Valor
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Iomedae Worshiper; First Into Battle (Su); Prayer of the Fourth Act (Su); Worthy Enemy (Su)
- **Replaced / altered class features:** divine grace; aura of justice

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Iomedae Worshiper
- **Description:** A sword of valor must have Iomedae as a patron deity.
- **Detailed mechanics:**
  - **Rules text to implement:** A sword of valor must have Iomedae as a patron deity.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: divine grace

- **Archetype feature:** First Into Battle (Su)
- **Description:** At 2nd level, a sword of valor can spend 1 use of smite evil or lay on hands to act in the surprise round, even if she is surprised.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a sword of valor can spend 1 use of smite evil or lay on hands to act in the surprise round, even if she is surprised. When the paladin makes an Initiative check, she gains a bonus to the check equal to her Charisma bonus.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the paladin’s mercy gained at 6th level

- **Archetype feature:** Prayer of the Fourth Act (Su)
- **Description:** At 6th level, by spending 1 minute leading a prayer to Iomedae, the sword of valor can spend one use of channel energy to give living creatures in the channel burst temporary hit points equal to the amount that ability normally heals.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, by spending 1 minute leading a prayer to Iomedae, the sword of valor can spend one use of channel energy to give living creatures in the channel burst temporary hit points equal to the amount that ability normally heals. These temporary hit points last for no more than 1 hour.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Worthy Enemy (Su)
- **Description:** At 11th level, when a sword of valor critically hits an enemy with a smite, the target must make a Will saving throw (DC = 10 + 1/2 the paladin’s level + the paladin’s Charisma bonus) or be compelled to surrender to the paladin, as if affected by a suggestion spell (CL = the paladin’s level) to lay down arms and give up the fight.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when a sword of valor critically hits an enemy with a smite, the target must make a Will saving throw (DC = 10 + 1/2 the paladin’s level + the paladin’s Charisma bonus) or be compelled to surrender to the paladin, as if affected by a suggestion spell (CL = the paladin’s level) to lay down arms and give up the fight. An enemy that succumbs to this ability remains docile until it is injured by the paladin or one of his obvious allies, at which point the compulsion to surrender immediately ends and the enemy is free to make his own choices again. If the enemy makes the save, it is not subject to this ability for 24 hours. Worthy enemy is a mind-affecting effect.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Iomedae Worshiper
- First Into Battle (Su)
- Prayer of the Fourth Act (Su)
- Worthy Enemy (Su)
