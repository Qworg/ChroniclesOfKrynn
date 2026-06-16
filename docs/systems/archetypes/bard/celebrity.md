# Bard - Celebrity

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Celebrity
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Celebrity
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Famous; Bardic Performance
- **Replaced / altered class features:** inspire courage; lore master

## Replacement details

### Replaces: inspire courage

- **Archetype feature:** Famous
- **Description:** At 1st level, a celebrity bard may choose a region where he is famous, and within that region, the locals are more likely to react favorably toward the bard.
- **Mechanics:**
  - Level hooks: 1, 5, 9, 13, 17.
  - Mechanics summary: At 1st level, a celebrity bard may choose a region where he is famous, and within that region, the locals are more likely to react favorably toward the bard. The bard gains a bonus on Diplomacy and Intimidate checks in that area and to influence people from that area. At 1st level, this region is a settlement or settlements with a total population of 1,000 or fewer people, and the modifier on Diplomacy and Intimidate checks is +1. As the celebrity grows more famous, additional areas learn of him (typically places where he has lived or traveled, or settlements adjacent to those where he is known) and his bonuses apply to even more people. At 5th level, the region is a settlement or settlements with a total population of 5,000 or fewer people, and the modifier on Diplomacy and Intimidate checks is +2. At 9th level, the region is a settlement or settlements with a total population of up to 25,000 people, and the modifier on Diplomacy and Intimidate checks is +3.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: lore master

- **Archetype feature:** Bardic Performance
- **Description:** A celebrity gains the following type of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 8.
  - Mechanics summary: A celebrity gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the celebrity is skilled at drawing an audience to his performances. If he is in a settlement or populated area, he can shout, sing, or otherwise make himself noticed in order to attract an audience to his impromptu stage. The size of the crowd depends on the local population, but typically is a number of people equal to 1/2 the bard’s class level × the result of the bard’s Perform check. The crowd gathers over the next 1d10 rounds. If the bard fails to engage the crowd (such as by performing, kissing babies, trying to use fascinate, and so on), it disperses over the next 1d10 rounds.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, saving throw hook, bardic performance hook, ki/monk hook.

## Parsed source feature headings

- Famous
- Bardic Performance

