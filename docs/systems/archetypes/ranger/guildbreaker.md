# Ranger - Guildbreaker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Guildbreaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Guildbreaker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Favored Organization (Ex); Read the City (Ex); Deep Cover (Ex, Su); Crowd Stride (Ex)
- **Replaced / altered class features:** wild empathy; hunter’s bond; woodland stride

## Replacement details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills
- **Description:** A guildbreaker adds Bluff, Disguise, and Knowledge (local) to his list of class skills, instead of Handle Animal, Heal, and Knowledge (geography).
- **Mechanics:**
  - Mechanics summary: A guildbreaker adds Bluff, Disguise, and Knowledge (local) to his list of class skills, instead of Handle Animal, Heal, and Knowledge (geography).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: favored enemy

- **Archetype feature:** Favored Organization (Ex)
- **Description:** When a guildbreaker selects a favored enemy, he can opt to select a specific organization, such as a particular thieves’ guild, in lieu of a specific creature type.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: When a guildbreaker selects a favored enemy, he can opt to select a specific organization, such as a particular thieves’ guild, in lieu of a specific creature type. The guildbreaker must select this option for his first favored enemy, but he can choose either option for his later favored enemies. The guildbreaker’s bonuses from favored enemy apply against official members of this organization regardless of their creature type, but not against the organization’s allies, paid mercenaries, or forced labor.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: wild empathy

- **Archetype feature:** Read the City (Ex)
- **Description:** A guildbreaker spends most of his time in cities and large population centers.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A guildbreaker spends most of his time in cities and large population centers. As a result, he gains an innate sense of comings and goings in the hustle around him. When in an urban environment, a guildbreaker can use the Survival skill to gather information, but only about the movements of creatures and what sort of people (races, social classes, predominant professions, and the like) occupy the community. Unlike with the normal way to gather information, the guildbreaker studies the signs of the city instead of asking around, so it doesn’t spread word about the nature of his questions to others.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: hunter’s bond

- **Archetype feature:** Deep Cover (Ex, Su)
- **Description:** Guildbreakers may work to dismantle their enemies’ power structures from within, and they know how to gather resources and the necessary trappings in order to masquerade as a member of those organizations.
- **Mechanics:**
  - Level hooks: 4.
  - Mechanics summary: Guildbreakers may work to dismantle their enemies’ power structures from within, and they know how to gather resources and the necessary trappings in order to masquerade as a member of those organizations. At 4th level, a guildbreaker adds a circumstance bonus equal to twice his favored organization bonus to all Bluff and Disguise checks to appear to be a member of the organization (this does not apply on Disguise checks to change his appearance and replace a specific member, but rather to checks related to appear to be a general member of the organization). The bonus on Bluff checks from deep cover stacks with the guildbreaker’s overall bonus from favored organization if the person he is attempting to deceive is also a member of that organization. A guildbreaker posing as a member of one of his favored enemy organizations automatically defeats truth-telling magic (as if under the effects of glibness ), but only for the purpose of claiming to be a member of the organization. Truth-telling magic can still expose him with a more indirect question, such as a member of a non-religious evil organization asking the guildbreaker for the identity of his patron deity.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored enemy hook, ki/monk hook.

### Replaces: woodland stride

- **Archetype feature:** Crowd Stride (Ex)
- **Description:** At 7th level, a guildbreaker can slip through crowded streets with ease.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a guildbreaker can slip through crowded streets with ease. His movement speed is not reduced when moving through a crowd.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Class Skills
- Favored Organization (Ex)
- Read the City (Ex)
- Deep Cover (Ex, Su)
- Crowd Stride (Ex)

