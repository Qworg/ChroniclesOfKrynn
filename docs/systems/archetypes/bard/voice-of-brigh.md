# Bard - Voice of Brigh

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Voice of Brigh
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Voice%20of%20Brigh
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Brigh’s Knowledge (Ex); Bardic Performance
- **Replaced / altered class features:** Fascinate; Dirge of Doom; Soothing Performance; Frightening Tune

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Brigh’s Knowledge (Ex)
- **Description:** A bard adds half his class level (minimum 1) as a bonus on Knowledge (arcana), Knowledge (dungeoneering), Knowledge (engineering), and Knowledge (religion) checks and can attempt these skill checks untrained.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A bard adds half his class level (minimum 1) as a bonus on Knowledge (arcana), Knowledge (dungeoneering), Knowledge (engineering), and Knowledge (religion) checks and can attempt these skill checks untrained. In addition, a Voice of Brigh can affect constructs with his bardic performance, even if they would normally be immune to or unaffected by his performance.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: fascinate

- **Archetype feature:** Bardic Performance
- **Description:** A Voice of Brigh gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 12, 14.
  - **Rules text to implement:** A Voice of Brigh gains the following bardic performances. Brigh’s Soothing (Su) : A Voice of Brigh can use Brigh’s calming voice to pacify constructs. This functions as the fascinate bardic performance, except it can target only constructs. Brigh’s Anger (Su) : At 8th level, a Voice of Brigh can use Brigh’s enraged voice to instill constructs with a sense of dread. This functions as the dirge of doom bardic performance, except it can target only constructs. Brigh’s Spark (Su) : At 12th level, a Voice of Brigh can use Brigh’s animating spark to reanimate a destroyed construct. The Voice of Brigh selects a destroyed construct within 60 feet and expends 1 round of bardic performance to reanimate the chosen construct. The construct reanimates with a number of hit points equal to the Voice of Brigh’s level, but it is staggered. The affected construct follows the Voice of Brigh’s orders while reanimated. Each round, the bard can expend another round of bardic performance to keep that construct reanimated for another round. The construct regains a number of hit points equal to the Voice of Brigh’s level for every round it remains reanimated. If the construct recovers all of its hit points in this way, it becomes fully reanimated and no longer requires bardic performance to remain animated. A construct fully reanimated in this way follows the orders of the Voice of Brigh that reanimated it, as if the Voice of Brigh were its original creator, for 24 hours. Afterwards, the construct reverts to its original programming. The construct is completely destroyed if the Voice of Brigh ends this performance before the construct regains its full hit points, is interrupted, or is reduced to 0 hit points. A completely destroyed construct cannot be repowered or reanimated, even by another Voice of Brigh. The Voice of Brigh can reanimate multiple constructs with this ability (either at the same time or over successive rounds) but must expend 1 round of bardic performance per reanimated construct per round to maintain the effect. Brigh’s Wrath (Su) : At 14th level, a Voice of Brigh can use Brigh’s furious voice to instill in constructs a fear of destruction. This functions as the frightening tune bardic performance, except it can target only constructs.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.

### Replaces: dirge of doom

- **Archetype feature:** Bardic Performance
- **Description:** A Voice of Brigh gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 12, 14.
  - **Rules text to implement:** A Voice of Brigh gains the following bardic performances. Brigh’s Soothing (Su) : A Voice of Brigh can use Brigh’s calming voice to pacify constructs. This functions as the fascinate bardic performance, except it can target only constructs. Brigh’s Anger (Su) : At 8th level, a Voice of Brigh can use Brigh’s enraged voice to instill constructs with a sense of dread. This functions as the dirge of doom bardic performance, except it can target only constructs. Brigh’s Spark (Su) : At 12th level, a Voice of Brigh can use Brigh’s animating spark to reanimate a destroyed construct. The Voice of Brigh selects a destroyed construct within 60 feet and expends 1 round of bardic performance to reanimate the chosen construct. The construct reanimates with a number of hit points equal to the Voice of Brigh’s level, but it is staggered. The affected construct follows the Voice of Brigh’s orders while reanimated. Each round, the bard can expend another round of bardic performance to keep that construct reanimated for another round. The construct regains a number of hit points equal to the Voice of Brigh’s level for every round it remains reanimated. If the construct recovers all of its hit points in this way, it becomes fully reanimated and no longer requires bardic performance to remain animated. A construct fully reanimated in this way follows the orders of the Voice of Brigh that reanimated it, as if the Voice of Brigh were its original creator, for 24 hours. Afterwards, the construct reverts to its original programming. The construct is completely destroyed if the Voice of Brigh ends this performance before the construct regains its full hit points, is interrupted, or is reduced to 0 hit points. A completely destroyed construct cannot be repowered or reanimated, even by another Voice of Brigh. The Voice of Brigh can reanimate multiple constructs with this ability (either at the same time or over successive rounds) but must expend 1 round of bardic performance per reanimated construct per round to maintain the effect. Brigh’s Wrath (Su) : At 14th level, a Voice of Brigh can use Brigh’s furious voice to instill in constructs a fear of destruction. This functions as the frightening tune bardic performance, except it can target only constructs.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.

### Replaces: soothing performance

- **Archetype feature:** Bardic Performance
- **Description:** A Voice of Brigh gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 12, 14.
  - **Rules text to implement:** A Voice of Brigh gains the following bardic performances. Brigh’s Soothing (Su) : A Voice of Brigh can use Brigh’s calming voice to pacify constructs. This functions as the fascinate bardic performance, except it can target only constructs. Brigh’s Anger (Su) : At 8th level, a Voice of Brigh can use Brigh’s enraged voice to instill constructs with a sense of dread. This functions as the dirge of doom bardic performance, except it can target only constructs. Brigh’s Spark (Su) : At 12th level, a Voice of Brigh can use Brigh’s animating spark to reanimate a destroyed construct. The Voice of Brigh selects a destroyed construct within 60 feet and expends 1 round of bardic performance to reanimate the chosen construct. The construct reanimates with a number of hit points equal to the Voice of Brigh’s level, but it is staggered. The affected construct follows the Voice of Brigh’s orders while reanimated. Each round, the bard can expend another round of bardic performance to keep that construct reanimated for another round. The construct regains a number of hit points equal to the Voice of Brigh’s level for every round it remains reanimated. If the construct recovers all of its hit points in this way, it becomes fully reanimated and no longer requires bardic performance to remain animated. A construct fully reanimated in this way follows the orders of the Voice of Brigh that reanimated it, as if the Voice of Brigh were its original creator, for 24 hours. Afterwards, the construct reverts to its original programming. The construct is completely destroyed if the Voice of Brigh ends this performance before the construct regains its full hit points, is interrupted, or is reduced to 0 hit points. A completely destroyed construct cannot be repowered or reanimated, even by another Voice of Brigh. The Voice of Brigh can reanimate multiple constructs with this ability (either at the same time or over successive rounds) but must expend 1 round of bardic performance per reanimated construct per round to maintain the effect. Brigh’s Wrath (Su) : At 14th level, a Voice of Brigh can use Brigh’s furious voice to instill in constructs a fear of destruction. This functions as the frightening tune bardic performance, except it can target only constructs.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.

### Replaces: frightening tune

- **Archetype feature:** Bardic Performance
- **Description:** A Voice of Brigh gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 12, 14.
  - **Rules text to implement:** A Voice of Brigh gains the following bardic performances. Brigh’s Soothing (Su) : A Voice of Brigh can use Brigh’s calming voice to pacify constructs. This functions as the fascinate bardic performance, except it can target only constructs. Brigh’s Anger (Su) : At 8th level, a Voice of Brigh can use Brigh’s enraged voice to instill constructs with a sense of dread. This functions as the dirge of doom bardic performance, except it can target only constructs. Brigh’s Spark (Su) : At 12th level, a Voice of Brigh can use Brigh’s animating spark to reanimate a destroyed construct. The Voice of Brigh selects a destroyed construct within 60 feet and expends 1 round of bardic performance to reanimate the chosen construct. The construct reanimates with a number of hit points equal to the Voice of Brigh’s level, but it is staggered. The affected construct follows the Voice of Brigh’s orders while reanimated. Each round, the bard can expend another round of bardic performance to keep that construct reanimated for another round. The construct regains a number of hit points equal to the Voice of Brigh’s level for every round it remains reanimated. If the construct recovers all of its hit points in this way, it becomes fully reanimated and no longer requires bardic performance to remain animated. A construct fully reanimated in this way follows the orders of the Voice of Brigh that reanimated it, as if the Voice of Brigh were its original creator, for 24 hours. Afterwards, the construct reverts to its original programming. The construct is completely destroyed if the Voice of Brigh ends this performance before the construct regains its full hit points, is interrupted, or is reduced to 0 hit points. A completely destroyed construct cannot be repowered or reanimated, even by another Voice of Brigh. The Voice of Brigh can reanimate multiple constructs with this ability (either at the same time or over successive rounds) but must expend 1 round of bardic performance per reanimated construct per round to maintain the effect. Brigh’s Wrath (Su) : At 14th level, a Voice of Brigh can use Brigh’s furious voice to instill in constructs a fear of destruction. This functions as the frightening tune bardic performance, except it can target only constructs.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.

## Parsed source feature headings

- Brigh’s Knowledge (Ex)
- Bardic Performance
