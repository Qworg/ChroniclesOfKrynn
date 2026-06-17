# Bard - Celebrity

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Celebrity
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Celebrity
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Famous; Bardic Performance
- **Replaced / altered class features:** inspire courage; lore master

## Implementation details

### Replaces: inspire courage

- **Archetype feature:** Famous
- **Description:** At 1st level, a celebrity bard may choose a region where he is famous, and within that region, the locals are more likely to react favorably toward the bard.
- **Detailed mechanics:**
  - **Level hooks:** 1, 5, 9, 13, 17.
  - **Rules text to implement:** At 1st level, a celebrity bard may choose a region where he is famous, and within that region, the locals are more likely to react favorably toward the bard. The bard gains a bonus on Diplomacy and Intimidate checks in that area and to influence people from that area. At 1st level, this region is a settlement or settlements with a total population of 1,000 or fewer people, and the modifier on Diplomacy and Intimidate checks is +1. As the celebrity grows more famous, additional areas learn of him (typically places where he has lived or traveled, or settlements adjacent to those where he is known) and his bonuses apply to even more people. At 5th level, the region is a settlement or settlements with a total population of 5,000 or fewer people, and the modifier on Diplomacy and Intimidate checks is +2. At 9th level, the region is a settlement or settlements with a total population of up to 25,000 people, and the modifier on Diplomacy and Intimidate checks is +3. At 13th level, the region is a settlement or settlements with a total population of up to 100,000 people, and the modifier to Diplomacy and Intimidate is +4. At 17th level and above, the bard’s renown has spread far, and most civilized folk know of him (GM’s discretion); the bard’s modifier on Diplomacy and Intimidate checks is +5.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: lore master

- **Archetype feature:** Bardic Performance
- **Description:** A celebrity gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 8.
  - **Rules text to implement:** A celebrity gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the celebrity is skilled at drawing an audience to his performances. If he is in a settlement or populated area, he can shout, sing, or otherwise make himself noticed in order to attract an audience to his impromptu stage. The size of the crowd depends on the local population, but typically is a number of people equal to 1/2 the bard’s class level × the result of the bard’s Perform check. The crowd gathers over the next 1d10 rounds. If the bard fails to engage the crowd (such as by performing, kissing babies, trying to use fascinate, and so on), it disperses over the next 1d10 rounds. Shining Star (Su) : At 8th level, the celebrity has learned how to focus attention on himself so thoroughly that even the presence of danger does not distract his adoring crowd. When using fascinate, a target making a save to break the effect because of a potential threat takes a –4 penalty on that save, and even obvious threats require a save rather than automatically breaking the effect. Creatures affected by the bard’s fascinate ability ignore the shaken condition. The ability replaces dirge of doom.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Famous
- Bardic Performance
