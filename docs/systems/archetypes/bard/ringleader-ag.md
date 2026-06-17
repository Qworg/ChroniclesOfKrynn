# Bard - Ringleader (AG)

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Ringleader (AG)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Ringleader%20%28AG%29
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Cunning Plan (Su); Never Lose Face (Ex); Sinister Mien (Ex); Countless Contingencies (Su)
- **Replaced / altered class features:** well-versed; versatile performance; suggestion, mass suggestion, and soothing performance

## Implementation details

### Alters: bardic performance

- **Archetype feature:** Cunning Plan (Su)
- **Description:** By spending 1 minute laying out a plan, a ringleader can impart inspiring instructions to a number of allies equal to her bard level + her Charisma bonus.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7, 13.
  - **Rules text to implement:** By spending 1 minute laying out a plan, a ringleader can impart inspiring instructions to a number of allies equal to her bard level + her Charisma bonus. Upon concluding the plan, the ringleader chooses one of her bardic performances and expends a number of rounds of bardic performance equal to up to double her bard level. Thereafter, as a move action, the ringleader or any of the instructed allies can trigger the implanted instructions, causing that creature to immediately gain the benefits of the ringleader’s implanted bardic performance (each creature can trigger the instructions for itself separately). This effect lasts for a number of rounds equal to the rounds of bardic performance the ringleader expended while creating the plan, though the effect also ends if the ringleader dismisses it as a free action or activates a different plan or bardic performance. For the purpose of this ability, the ringleader attempts any skill checks associated with the bardic performance once a creature triggers the plan. A ringleader’s cunning plans all expire each time she regains her daily spell slots or after 24 hours (whichever comes first). At 7th level, the ringleader (but not an ally) can trigger a cunning plan as a swift action instead of as a move action. At 13th level, the ringleader can trigger a cunning plan as an immediate action. A ringleader is less capable of improvising, and when she uses bardic performance without creating a cunning plan, she must expend 1 additional round of bardic performance to begin the performance.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: well-versed

- **Archetype feature:** Never Lose Face (Ex)
- **Description:** A ringleader is never outdone by her minions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A ringleader is never outdone by her minions. At 2nd level, she gains a +2 bonus on saving throws against effects that also target one or more of her allies.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: versatile performance

- **Archetype feature:** Sinister Mien (Ex)
- **Description:** At 2nd level, a ringleader can use her Intimidate bonus in place of her Perform bonus when using her bardic performance class ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 10, 14, 18.
  - **Rules text to implement:** At 2nd level, a ringleader can use her Intimidate bonus in place of her Perform bonus when using her bardic performance class ability. When the ringleader uses Intimidate to improve a creature’s attitude, the creature’s attitude remains friendly for 10 additional minutes per point by which the ringleader exceeded the check’s DC. At 6th level, the ringleader gains Dazzling Display as a bonus feat and does not need a weapon in her hand to use the feat. At 10th level, the ringleader can activate Dazzling Display as a standard action. At 14th level, she can affect all enemies within 60 feet with Dazzling Display. At 18th level, the range increases to 120 feet.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Replaces: suggestion, mass suggestion, and soothing performance

- **Archetype feature:** Countless Contingencies (Su)
- **Description:** At 6th level, whenever a ringleader creates a plan using her cunning plan ability, she can choose two different bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 12, 18.
  - **Rules text to implement:** At 6th level, whenever a ringleader creates a plan using her cunning plan ability, she can choose two different bardic performances. When she triggers the plan, she chooses which of the two performances takes effect. At 12th level, a ringleader can spend a standard action and 2 rounds of bardic performance to extend the duration of a triggered plan by 1d4 rounds. At 18th level, the ringleader can choose three different bardic performances when using her cunning plan ability.
- **Implementation flags:**
  - bardic performance subsystem.

## Parsed source feature headings

- Cunning Plan (Su)
- Never Lose Face (Ex)
- Sinister Mien (Ex)
- Countless Contingencies (Su)
