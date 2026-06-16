# Rogue - Guild Agent

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Guild Agent
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Guild%20Agent
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Honor Among Thieves (Ex); Guild Connections (Ex); Pull Rank (Ex); Criminal Mastermind (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** evasion and uncanny dodge; improved evasion; master strike

## Replacement details

### Replaces: evasion and uncanny dodge

- **Archetype feature:** Guild Connections (Ex)
- **Description:** At 2nd level, a guild agent gains the black market connections UC rogue talent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4.
  - Mechanics summary: At 2nd level, a guild agent gains the black market connections UC rogue talent. Furthermore, he can ask his guild for tips about the local scene, granting him a bonus equal to half his rogue level on Knowledge (local) checks and Diplomacy checks to gather information, as long as the information in question pertains to the guild agent’s base of operations. At 4th level, the guild agent also gains the gossip collector vigilante social talent and his base of operations counts as his area of renown for the purpose of determining the effects of gossip collector.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: vigilante identity/social-talent mechanics.

### Replaces: improved evasion

- **Archetype feature:** Pull Rank (Ex)
- **Description:** At 8th level, a guild agent has attained sufficient rank to call in lesser guild members to assist him with a job.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a guild agent has attained sufficient rank to call in lesser guild members to assist him with a job. He can call lesser members of a number and level equal to the number of followers he would have if he had the Leadership feat (including the +2 bonus for his guildhouse), to a maximum of a number of lesser members equal to his rogue level. If the guild agent possesses the Leadership feat, he gains twice as many followers as normal. If he spends a favor, he can combine this with the command team organizational influence benefit to gain even more lesser members for a particularly difficult job. Each time the guild agent uses the lesser members recklessly and gets them killed, he loses at least 1 influence with his guild.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: master strike

- **Archetype feature:** Criminal Mastermind (Ex)
- **Description:** At 20th level, except in an unusually powerful guild, a guild agent has become the true power behind the guild.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, except in an unusually powerful guild, a guild agent has become the true power behind the guild. The guild agent has built up a nearly worldwide reputation under a particular criminal epithet (such as “The Silver Shadow”), known by criminals and law enforcement officers everywhere. He has only one identity, and only other criminals and members of the underworld treat their attitudes toward the guild agent as one step closer to helpful at all times (rather than while only in his social identity), while the bonus on Intimidate checks applies against everyone at all times (rather than while only in his vigilante identity).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: reputation subsystem, vigilante identity/social-talent mechanics.

## Parsed source feature headings

- Honor Among Thieves (Ex)
- Guild Connections (Ex)
- Pull Rank (Ex)
- Criminal Mastermind (Ex)
- Rogue Talents
- Advanced Talents

