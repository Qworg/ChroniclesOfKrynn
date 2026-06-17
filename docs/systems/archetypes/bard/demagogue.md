# Bard - Demagogue

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Demagogue
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Demagogue
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Famous; Bardic Performance
- **Replaced / altered class features:** inspire courage +1; lore master; suggestion; mass suggestion

## Implementation details

### Replaces: inspire courage +1

- **Archetype feature:** Famous
- **Description:** At 1st level, a demagogue is famous in a particular region.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a demagogue is famous in a particular region. This works like the famous ability of the celebrity bard archetype, except the demagogue’s skill bonuses apply to Bluff and Intimidate instead of Diplomacy and Intimidate.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: lore master

- **Archetype feature:** Bardic Performance
- **Description:** A demagogue gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 6, 18.
  - **Rules text to implement:** A demagogue gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the demagogue gains the ability to quickly gather a crowd. This is identical to the gather crowd ability of the celebrity bard archetype. Incite Violence (Ex) : At 6th level, the demagogue can use his performance to fan the fury of a crowd of people he has fascinated. Using this ability does not disrupt the fascinate effect, but does require a standard action to activate (in addition to the free action to continue the fascinate effect). The bard selects a number of targets equal to his level, who must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) or be affected by rage for a number of rounds equal to the bard’s level. The bard indicates who is the intended target of violence (either after using this ability or as part of the performance leading to it) and the enraged members of the crowd immediately attack the target if possible. The target does not need to be present (“kill the king” is a suitable choice) and can be an object instead of a person (“destroy the prison!” is likewise appropriate). Other members of the crowd may follow suit, though they do not gain the benefits of rage. This is a sound-based effect and is affected by countersong. If two or more bards are attempting to direct the crowd against different targets, they must make opposed Charisma checks, with the crowd following the directions of the winner. Righteous Cause (Ex) : At 18th level, the demagogue can lift a crowd’s emotions and turn them toward a common purpose. First, he must fascinate the crowd, and then use incite violence without designating a target, at which point he can use righteous cause. Instead of driving the crowd with anger, he fills them with purpose. Fascinated creatures must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) to resist. Those who fail are affected by mass suggestion of a plausible idea that lingers with them for one day. Typical uses of this ability are to spark rebellion, overthrow a king, build a beneficial structure such as an orphanage, or donate money to a cause.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - ki subsystem.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A demagogue gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 6, 18.
  - **Rules text to implement:** A demagogue gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the demagogue gains the ability to quickly gather a crowd. This is identical to the gather crowd ability of the celebrity bard archetype. Incite Violence (Ex) : At 6th level, the demagogue can use his performance to fan the fury of a crowd of people he has fascinated. Using this ability does not disrupt the fascinate effect, but does require a standard action to activate (in addition to the free action to continue the fascinate effect). The bard selects a number of targets equal to his level, who must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) or be affected by rage for a number of rounds equal to the bard’s level. The bard indicates who is the intended target of violence (either after using this ability or as part of the performance leading to it) and the enraged members of the crowd immediately attack the target if possible. The target does not need to be present (“kill the king” is a suitable choice) and can be an object instead of a person (“destroy the prison!” is likewise appropriate). Other members of the crowd may follow suit, though they do not gain the benefits of rage. This is a sound-based effect and is affected by countersong. If two or more bards are attempting to direct the crowd against different targets, they must make opposed Charisma checks, with the crowd following the directions of the winner. Righteous Cause (Ex) : At 18th level, the demagogue can lift a crowd’s emotions and turn them toward a common purpose. First, he must fascinate the crowd, and then use incite violence without designating a target, at which point he can use righteous cause. Instead of driving the crowd with anger, he fills them with purpose. Fascinated creatures must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) to resist. Those who fail are affected by mass suggestion of a plausible idea that lingers with them for one day. Typical uses of this ability are to spark rebellion, overthrow a king, build a beneficial structure such as an orphanage, or donate money to a cause.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - ki subsystem.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A demagogue gains the following type of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 6, 18.
  - **Rules text to implement:** A demagogue gains the following type of bardic performance. Gather Crowd (Ex) : At 5th level, the demagogue gains the ability to quickly gather a crowd. This is identical to the gather crowd ability of the celebrity bard archetype. Incite Violence (Ex) : At 6th level, the demagogue can use his performance to fan the fury of a crowd of people he has fascinated. Using this ability does not disrupt the fascinate effect, but does require a standard action to activate (in addition to the free action to continue the fascinate effect). The bard selects a number of targets equal to his level, who must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) or be affected by rage for a number of rounds equal to the bard’s level. The bard indicates who is the intended target of violence (either after using this ability or as part of the performance leading to it) and the enraged members of the crowd immediately attack the target if possible. The target does not need to be present (“kill the king” is a suitable choice) and can be an object instead of a person (“destroy the prison!” is likewise appropriate). Other members of the crowd may follow suit, though they do not gain the benefits of rage. This is a sound-based effect and is affected by countersong. If two or more bards are attempting to direct the crowd against different targets, they must make opposed Charisma checks, with the crowd following the directions of the winner. Righteous Cause (Ex) : At 18th level, the demagogue can lift a crowd’s emotions and turn them toward a common purpose. First, he must fascinate the crowd, and then use incite violence without designating a target, at which point he can use righteous cause. Instead of driving the crowd with anger, he fills them with purpose. Fascinated creatures must make Will saves (DC 10 + 1/2 the bard’s level + the bard’s Charisma modifier) to resist. Those who fail are affected by mass suggestion of a plausible idea that lingers with them for one day. Typical uses of this ability are to spark rebellion, overthrow a king, build a beneficial structure such as an orphanage, or donate money to a cause.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - ki subsystem.

## Parsed source feature headings

- Famous
- Bardic Performance
