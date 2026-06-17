# Bard - Mute Musician

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Mute Musician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Mute%20Musician
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mute (Ex); Eschew Materials (Ex); Bardic Performance; Insights from Beyond (Ex); Dulled Horror (Ex); Eldritch Caesura (Su); Ex-Mute Musicians
- **Replaced / altered class features:** bardic knowledge; inspire heroics

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Mute (Ex)
- **Description:** A mute musician has a disability or injury (possibly self-inflicted or even psychological) that prevents her from speaking or vocalizing.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A mute musician has a disability or injury (possibly self-inflicted or even psychological) that prevents her from speaking or vocalizing. Language-dependent effects (including Perform [oratory]) require the bard to be able to use telepathy, nonverbal languages, or writing to communicate. She cannot use Perform (sing) or speak languages, though she can still create audible bardic performances by means of a musical instrument. A mute musician can provide verbal and somatic components for spells she casts via any musical instrument in which she has ranks in the appropriate Perform skill.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: bardic knowledge

- **Archetype feature:** Eschew Materials (Ex)
- **Description:** A mute musician gains Eschew Materials as a bonus feat at 1st level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** A mute musician gains Eschew Materials as a bonus feat at 1st level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: inspire heroics

- **Archetype feature:** Bardic Performance
- **Description:** A mute musician gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 7, 11, 15, 19, 14, 18.
  - **Rules text to implement:** A mute musician gains the following bardic performances. Symphony of Silence (Su) : At 3rd level, the mute musician’s music muffles all other sounds within a 30-foot radius. All creatures in the area of effect gain a +2 bonus on all saving throws made against sonic attacks or language-dependent effects. This bonus increases to +3 at 7th level, +4 at 11th level, +5 at 15th level, and +6 at 19th level. Symphony of silence relies on audible components. This bardic performance replaces inspire competence. Maddening Harmonics (Su) : At 14th level, the mute musician can create a performance so baffling and discordant that it usurps all thought within a 30-foot radius with chaos and entropy. The mute musician can select which creatures in this area are affected by the maddening harmonics and which are not. All targeted creatures within this area must succeed at a Will saving throw (DC = 10 + 1/2 the bard’s level + the bard’s Charisma modifier) or be confused for as long as they can hear the performance. If the creature succeeds at its saving throw, it is immune to this ability for 24 hours. This performance relies on audible components. This bardic performance replaces frightening tune. Ceaseless Performance (Su) : At 15th level, the mute musician can continue taking the free action to maintain a bardic performance even while confused, cowering in fear, dazed, nauseated, panicked, paralyzed, petrified, silenced, staggered, stunned, or unconscious. Even if the mute musician is killed, she can continue to take the free action to maintain her performance as long as she has rounds remaining. Only the utter destruction of the mute musician’s body (such as via destruction or disintegrate, or by reducing the bard to a negative hit point total equal to 10 × her Constitution score) causes the performance to end. Song of the Conjunction (Su) : At 18th level, the mute musician can harmonize with the alien chorus beyond the music of the spheres, creating a portentous cosmic alignment. This effect duplicates a gate used to travel, save that the destination point must be on the same plane as the bard, but it is not otherwise limited by distance. This bardic performance replaces mass suggestion.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Insights from Beyond (Ex)
- **Description:** At 2nd level, a mute musician adds two abjuration, conjuration (calling), conjuration (summoning), or conjuration (teleportation) spells from the sorcerer/wizard spell list to her list of bard spells known.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, a mute musician adds two abjuration, conjuration (calling), conjuration (summoning), or conjuration (teleportation) spells from the sorcerer/wizard spell list to her list of bard spells known. At 6th level and every 4 bard levels thereafter, she can choose two more spells to add to her spells known. This class feature replaces versatile performance.
- **Implementation flags:**
  - teleport/positioning subsystem.
  - summoning subsystem.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Dulled Horror (Ex)
- **Description:** At 2nd level, a mute musician gains a +4 bonus on saves against confusion, fear, insanity effects, and the supernatural abilities of aberrations.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a mute musician gains a +4 bonus on saves against confusion, fear, insanity effects, and the supernatural abilities of aberrations. This class feature replaces well-versed.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Eldritch Caesura (Su)
- **Description:** At 10th level, a mute musician can insert unsettling silences into her otherworldly music by spending an additional 1 round of bardic performance per round.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, a mute musician can insert unsettling silences into her otherworldly music by spending an additional 1 round of bardic performance per round. This supernatural technique impossibly blurs the line between music and light, transmitting audible performances and sonic bard spells through most barriers save lead. This allows the music and sonic spells to affect creatures across planar boundaries (including on the Ethereal or Shadow Planes), vacuums, and areas of magical silence. This class feature replaces jack-of-all-trades.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ex-Mute Musicians
- **Description:** A mute musician who regains the ability to speak or chooses to speak aloud loses all abilities granted by this archetype.
- **Detailed mechanics:**
  - **Rules text to implement:** A mute musician who regains the ability to speak or chooses to speak aloud loses all abilities granted by this archetype. She can regain the archetype’s abilities by spending 24 hours without speaking.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Mute (Ex)
- Eschew Materials (Ex)
- Bardic Performance
- Insights from Beyond (Ex)
- Dulled Horror (Ex)
- Eldritch Caesura (Su)
- Ex-Mute Musicians
