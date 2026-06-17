# Rogue - Guild Agent

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Guild Agent
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Guild%20Agent
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Honor Among Thieves (Ex); Guild Connections (Ex); Pull Rank (Ex); Criminal Mastermind (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** evasion and uncanny dodge; improved evasion; master strike

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Honor Among Thieves (Ex)
- **Description:** A guild agent must remain a member in good standing of a thieves’ guild (he starts at rank 1 with her guild when using the organizational influence system).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A guild agent must remain a member in good standing of a thieves’ guild (he starts at rank 1 with her guild when using the organizational influence system). If the guild agent leaves his guild, he loses all of the abilities granted by this archetype and does not gain their replacements. If he joins a new guild, the guild agent regains his abilities, though depending on how he joins the guild, he may regain his abilities all at once or gradually over time. Even if the guild in question operates in multiple locations, the guild agent chooses a settlement as a base of operations for his own activities.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: evasion and uncanny dodge

- **Archetype feature:** Guild Connections (Ex)
- **Description:** At 2nd level, a guild agent gains the black market connections UC rogue talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 4.
  - **Rules text to implement:** At 2nd level, a guild agent gains the black market connections UC rogue talent. Furthermore, he can ask his guild for tips about the local scene, granting him a bonus equal to half his rogue level on Knowledge (local) checks and Diplomacy checks to gather information, as long as the information in question pertains to the guild agent’s base of operations. At 4th level, the guild agent also gains the gossip collector vigilante social talent and his base of operations counts as his area of renown for the purpose of determining the effects of gossip collector.
- **Implementation flags:**
  - vigilante identity subsystem.

### Replaces: improved evasion

- **Archetype feature:** Pull Rank (Ex)
- **Description:** At 8th level, a guild agent has attained sufficient rank to call in lesser guild members to assist him with a job.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a guild agent has attained sufficient rank to call in lesser guild members to assist him with a job. He can call lesser members of a number and level equal to the number of followers he would have if he had the Leadership feat (including the +2 bonus for his guildhouse), to a maximum of a number of lesser members equal to his rogue level. If the guild agent possesses the Leadership feat, he gains twice as many followers as normal. If he spends a favor, he can combine this with the command team organizational influence benefit to gain even more lesser members for a particularly difficult job. Each time the guild agent uses the lesser members recklessly and gets them killed, he loses at least 1 influence with his guild.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: master strike

- **Archetype feature:** Criminal Mastermind (Ex)
- **Description:** At 20th level, except in an unusually powerful guild, a guild agent has become the true power behind the guild.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, except in an unusually powerful guild, a guild agent has become the true power behind the guild. The guild agent has built up a nearly worldwide reputation under a particular criminal epithet (such as “The Silver Shadow”), known by criminals and law enforcement officers everywhere. This works like the renown vigilante social talent except as follows. It applies in all towns and cities on the same continent as the guild agent’s base of operations, without requiring him to select a particular settlement. He has only one identity, and only other criminals and members of the underworld treat their attitudes toward the guild agent as one step closer to helpful at all times (rather than while only in his social identity), while the bonus on Intimidate checks applies against everyone at all times (rather than while only in his vigilante identity).
- **Implementation flags:**
  - vigilante identity subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the guild agent archetype: assault leader APG and getaway artist UC (as well as certainty for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the guild agent archetype: assault leader APG and getaway artist UC (as well as certainty for an unchained rogue).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the guild agent archetype: getaway master UC, hunter’s surprise APG, opportunist, rumormonger UC, and skill mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the guild agent archetype: getaway master UC, hunter’s surprise APG, opportunist, rumormonger UC, and skill mastery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Honor Among Thieves (Ex)
- Guild Connections (Ex)
- Pull Rank (Ex)
- Criminal Mastermind (Ex)
- Rogue Talents
- Advanced Talents
