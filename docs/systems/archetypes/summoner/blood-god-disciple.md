# Summoner - Blood God Disciple

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Blood God Disciple
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Blood%20God%20Disciple
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Blood Feast (Su); Bloody Gift (Su); Avatar Gambit (Ex); Rage Power (Ex)
- **Replaced / altered class features:** the summon monster I , III , V , VII , and IX spell-like abilities; the summon monster II spell-like ability

## Replacement details

### Replaces: the summon monster I , III , V , VII , and IX spell-like abilities

- **Archetype feature:** Blood Feast (Su)
- **Description:** At 1st level, a blood god disciple can feed a recently fallen foe to his eidolon, allowing the outsider to channel some of its power into the summoner.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 5, 9, 13, 17.
  - Mechanics summary: At 1st level, a blood god disciple can feed a recently fallen foe to his eidolon, allowing the outsider to channel some of its power into the summoner. The eidolon must spend a standard action to eat some of the opponent, which must be a living, corporeal creature killed or knocked unconscious by the eidolon or summoner in the past minute. This eating deals damage to the target as if the eidolon had attacked it with one natural attack (typically a bite). The fallen creature must have at least half as many Hit Dice as the summoner. Once the feeding is complete, the summoner may manifest one 1-point evolution. This lasts for 1 minute.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook, ki/monk hook, natural attack system.

### Replaces: the summon monster II spell-like ability

- **Archetype feature:** Bloody Gift (Su)
- **Description:** At 3rd level, when a blood god disciple uses blood feast to manifest an evolution, he may touch one ally and grant it that evolution as well.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, when a blood god disciple uses blood feast to manifest an evolution, he may touch one ally and grant it that evolution as well. Each affected ally counts as one use per day of the blood feast ability. At 7th, 11th, 15th, and 19th level, the blood god disciple can affect an additional creature with this ability (each one counting as a use per day of blood feast). If the blood god disciple can manifest multiple evolutions per use of blood feast, his selected allies manifest these multiple evolutions as well.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, eidolon evolution hook.

### Replaces: the summon monster IV spell-like ability

- **Archetype feature:** Avatar Gambit (Ex)
- **Description:** At 7th level, when a blood god disciple dismisses his eidolon, he rages like a barbarian for a number of rounds equal to half his summoner level (he may end this rage early just like a barbarian, but if he does so, any remaining rounds of rage from this ability are lost).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, when a blood god disciple dismisses his eidolon, he rages like a barbarian for a number of rounds equal to half his summoner level (he may end this rage early just like a barbarian, but if he does so, any remaining rounds of rage from this ability are lost).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, rage/rage-power hook, summoner eidolon hook.

### Replaces: the summon monster VI and VIII spell-like abilities

- **Archetype feature:** Rage Power (Ex)
- **Description:** At 11th level and 15th level, a blood god disciple selects a barbarian rage power, which he may use when raging (whether from the avatar gambit ability or actual barbarian rage).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11, 15.
  - Mechanics summary: At 11th level and 15th level, a blood god disciple selects a barbarian rage power, which he may use when raging (whether from the avatar gambit ability or actual barbarian rage).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, rage/rage-power hook.

## Parsed source feature headings

- Blood Feast (Su)
- Bloody Gift (Su)
- Avatar Gambit (Ex)
- Rage Power (Ex)

