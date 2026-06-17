# Summoner - Blood God Disciple

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Blood God Disciple
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Blood%20God%20Disciple
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Blood Feast (Su); Bloody Gift (Su); Avatar Gambit (Ex); Rage Power (Ex)
- **Replaced / altered class features:** the summon monster I , III , V , VII , and IX spell-like abilities; the summon monster II spell-like ability

## Implementation details

### Replaces: the summon monster I, III, V, VII, and IX spell-like abilities

- **Archetype feature:** Blood Feast (Su)
- **Description:** At 1st level, a blood god disciple can feed a recently fallen foe to his eidolon, allowing the outsider to channel some of its power into the summoner.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 5, 9, 13, 17.
  - **Rules text to implement:** At 1st level, a blood god disciple can feed a recently fallen foe to his eidolon, allowing the outsider to channel some of its power into the summoner. The eidolon must spend a standard action to eat some of the opponent, which must be a living, corporeal creature killed or knocked unconscious by the eidolon or summoner in the past minute. This eating deals damage to the target as if the eidolon had attacked it with one natural attack (typically a bite). The fallen creature must have at least half as many Hit Dice as the summoner. Once the feeding is complete, the summoner may manifest one 1-point evolution. This lasts for 1 minute. The evolution’s effects use the summoner’s Hit Dice and ability scores rather than the eidolon’s. The blood god disciple can use this ability a number of times per day equal to 3 + his Charisma modifier. He may only apply one use of this ability at a time (using it a second time replaces any evolution manifested with this ability), and can only manifest evolutions his eidolon has. At 5th level, when the blood god disciple uses blood feast, he may manifest one 2-point evolution instead of a 1-point evolution. At 9th level, he may manifest up to two evolutions worth a total of 3 evolution points or fewer. At 13th level, he may manifest up to two evolutions worth a total of 4 evolution points or fewer. At 17th level, he may manifest up to three evolutions worth a total of 5 evolution points or fewer.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.
  - spell-like ability support.

### Replaces: the summon monster II spell-like ability

- **Archetype feature:** Bloody Gift (Su)
- **Description:** At 3rd level, when a blood god disciple uses blood feast to manifest an evolution, he may touch one ally and grant it that evolution as well.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 19.
  - **Rules text to implement:** At 3rd level, when a blood god disciple uses blood feast to manifest an evolution, he may touch one ally and grant it that evolution as well. Each affected ally counts as one use per day of the blood feast ability. At 7th, 11th, 15th, and 19th level, the blood god disciple can affect an additional creature with this ability (each one counting as a use per day of blood feast). If the blood god disciple can manifest multiple evolutions per use of blood feast, his selected allies manifest these multiple evolutions as well.
- **Implementation flags:**
  - summoning subsystem.
  - spell-like ability support.

### Replaces: the summon monster IV spell-like ability

- **Archetype feature:** Avatar Gambit (Ex)
- **Description:** At 7th level, when a blood god disciple dismisses his eidolon, he rages like a barbarian for a number of rounds equal to half his summoner level (he may end this rage early just like a barbarian, but if he does so, any remaining rounds of rage from this ability are lost).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, when a blood god disciple dismisses his eidolon, he rages like a barbarian for a number of rounds equal to half his summoner level (he may end this rage early just like a barbarian, but if he does so, any remaining rounds of rage from this ability are lost).
- **Implementation flags:**
  - rage/rage power subsystem.
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - spell-like ability support.

### Replaces: the summon monster VI and VIII spell-like abilities

- **Archetype feature:** Rage Power (Ex)
- **Description:** At 11th level and 15th level, a blood god disciple selects a barbarian rage power, which he may use when raging (whether from the avatar gambit ability or actual barbarian rage).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11, 15.
  - **Rules text to implement:** At 11th level and 15th level, a blood god disciple selects a barbarian rage power, which he may use when raging (whether from the avatar gambit ability or actual barbarian rage).
- **Implementation flags:**
  - rage/rage power subsystem.
  - summoning subsystem.
  - spell-like ability support.

## Parsed source feature headings

- Blood Feast (Su)
- Bloody Gift (Su)
- Avatar Gambit (Ex)
- Rage Power (Ex)
